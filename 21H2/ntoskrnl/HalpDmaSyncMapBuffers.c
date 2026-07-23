/*
 * XREFs of HalpDmaSyncMapBuffers @ 0x1404C8434
 * Callers:
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404B782C (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B797C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404B7D0C (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404B7E30 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404CDA6C (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404CDB88 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404CDCEC (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404CDE44 (HalpDmaMapScatterTransferV2.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C67E8 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C80CC (HalpDmaReleaseBufferMappings.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C87AC (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x1404C8CFC (HalpFlushMapBuffers.c)
 */

void __fastcall HalpDmaSyncMapBuffers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  unsigned __int8 CurrentIrql; // bl
  char *v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // r12
  unsigned int v16; // edx
  _QWORD *i; // rcx
  _DWORD *SchedulerAssist; // r9
  char *v19; // rdi
  __int64 v20; // rcx
  int v21; // r15d
  unsigned int v22; // esi
  _QWORD *v23; // r12
  unsigned int v24; // r15d
  const void *v25; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  int v31; // [rsp+48h] [rbp-70h]
  int v32; // [rsp+50h] [rbp-68h]
  _OWORD v33[3]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v34; // [rsp+88h] [rbp-30h]
  char v35; // [rsp+C8h] [rbp+10h]

  memset(v33, 0, sizeof(v33));
  v34 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v13 = *(char **)(a2 + 24);
  else
    v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( v13 )
  {
    v35 = 0;
    v14 = a3 & 0xFFF;
    v15 = (v14 + (unsigned __int64)a5 + 4095) >> 12;
    v31 = v15;
    if ( CurrentIrql <= 2u )
    {
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v14 = (unsigned int)CurrentIrql + 1;
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        v35 = 1;
      }
      HalpDmaAcquireBufferMappings(v14, a4, v15, (__int64)v33);
    }
    else
    {
      v16 = 0;
      for ( i = a4; v16 < (unsigned int)v15; ++v16 )
      {
        if ( (i[6] & 0xFFFFFFFFFFFFF000uLL) == 0 )
          KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
        i = (_QWORD *)i[1];
      }
    }
    v19 = &v13[a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32)];
    v32 = (int)v19;
    v20 = (unsigned __int16)v19 & 0xFFF;
    v21 = (int)v19;
    if ( !*(_BYTE *)(a1 + 437) && !a6 )
    {
      HalpFlushMapBuffers(a1, (_DWORD)v19, (_DWORD)a4, a5, 0, a8);
      v20 = (unsigned __int16)v19 & 0xFFF;
    }
    if ( a5 )
    {
      v22 = a5;
      v23 = a4;
      do
      {
        v24 = v22;
        if ( v22 >= 4096 - (int)v20 )
          v24 = 4096 - v20;
        v25 = (const void *)((v23[6] & 0xFFFFFFFFFFFFF000uLL) + (unsigned int)v20);
        if ( !a7 )
        {
          if ( a6 )
            ((void (__fastcall *)(const void *, char *, _QWORD))HalpMoveMemory)(v25, v19, v24);
          else
            memmove(v19, v25, v24);
        }
        v23 = (_QWORD *)v23[1];
        v20 = 0LL;
        v19 += v24;
        v22 -= v24;
      }
      while ( v22 );
      LODWORD(v15) = v31;
      v21 = v32;
    }
    if ( !*(_BYTE *)(a1 + 437) && a6 )
      HalpFlushMapBuffers(a1, v21, (_DWORD)a4, a5, a6, a8);
    if ( CurrentIrql <= 2u )
      HalpDmaReleaseBufferMappings(v20, (__int64)a4, v15, (__int64)v33);
    if ( v35 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v28 = CurrentPrcb->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v30 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    HalpDmaSyncMapBuffersWithEmergencyResources(a1, a2, a3, (_DWORD)a4, a5, a6, a7, a8);
  }
}
