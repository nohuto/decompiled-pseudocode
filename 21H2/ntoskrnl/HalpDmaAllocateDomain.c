/*
 * XREFs of HalpDmaAllocateDomain @ 0x1403CD570
 * Callers:
 *     HalJoinDmaDomain @ 0x1403CD4E0 (HalJoinDmaDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaReferenceDomainObject @ 0x1403B2A28 (HalpDmaReferenceDomainObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140514F70 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x140515200 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 */

__int64 __fastcall HalpDmaAllocateDomain(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 ReservedRegionsForTranslateDomain; // r12
  int v4; // r15d
  void *v5; // rax
  __int64 v6; // rsi
  KIRQL v7; // al
  __int64 *v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int8 v10; // bp
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rdx
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 **v19; // r13
  __int64 *v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  unsigned __int8 v29; // cl
  __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  unsigned int v32; // [rsp+70h] [rbp+8h]
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 136);
  ReservedRegionsForTranslateDomain = 0LL;
  v33 = 0LL;
  v4 = *(_DWORD *)(a1 + 512);
  v34 = v1;
  v5 = (void *)HalpMmAllocCtxAlloc(a1, 120LL);
  v6 = (__int64)v5;
  if ( !v5 )
    return v6;
  memset(v5, 0, 0x78uLL);
  v7 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v8 = (__int64 *)qword_140C4BD48;
  v9 = v7;
  if ( *(__int64 **)qword_140C4BD48 != &HalpDmaDomainList )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = qword_140C4BD48;
  *(_QWORD *)v6 = &HalpDmaDomainList;
  *v8 = v6;
  qword_140C4BD48 = v6;
  KxReleaseSpinLock(&HalpDmaDomainListLock);
  v10 = 1;
  v11 = -1LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v13 = (v28 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v28;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  HalpDmaReferenceDomainObject(v6);
  v12 = (unsigned __int8)HalpIommuDomainMaxInputBitWidth;
  *(_BYTE *)(v6 + 32) = *(_BYTE *)(a1 + 437);
  v35 = (-(__int64)(*(_BYTE *)(a1 + 145) != 0) & 0xFFFF0000LL) + 0x10000;
  if ( v4 == 2 )
  {
    v15 = v12;
    goto LABEL_10;
  }
  v13 = !_BitScanReverse64((unsigned __int64 *)&v14, HalpMaximumPhysicalMemoryAddress);
  if ( !v13 )
  {
    if ( (unsigned __int8)v14 < 0x1Eu )
    {
      v15 = 32;
      goto LABEL_9;
    }
    if ( (unsigned __int8)v14 < 0x3Fu )
    {
      v15 = v14 + 2;
      goto LABEL_9;
    }
  }
  v15 = 64;
LABEL_9:
  if ( v4 )
  {
    v29 = v15;
    if ( v15 > (unsigned __int8)v12 )
      v29 = v12;
    v15 = v29;
  }
LABEL_10:
  if ( v15 < 0x40u )
    v11 = (1LL << v15) - 1;
  v16 = -1;
  if ( v11 > v34 )
    v11 = v34;
  v13 = !_BitScanReverse64((unsigned __int64 *)&v17, v11);
  if ( !v13 )
    v16 = v17;
  if ( !v4 )
  {
    v18 = 0LL;
    v19 = (__int64 **)(v6 + 40);
    v20 = 0LL;
    v21 = 1LL;
    v22 = 0LL;
    goto LABEL_18;
  }
  v33 = 0LL;
  v32 = (unsigned int)(v4 - 1) > 2 ? 3 : 0;
  if ( v4 != 1 )
  {
    LODWORD(v33) = 1;
    HIDWORD(v33) = v16 + 1;
    if ( v4 == 3 )
    {
      ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForTranslateDomain(
                                            *(_QWORD *)(a1 + 528),
                                            v6 + 33,
                                            v12);
      if ( HalpDmaEnableNestedTranslation )
        goto LABEL_43;
    }
    else if ( v4 == 2 )
    {
      ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForHybridPassthroughDomain(
                                            *(_QWORD *)(a1 + 520),
                                            (unsigned int)v16 + 1,
                                            v12);
    }
  }
  v10 = 0;
LABEL_43:
  v30 = 0LL;
  v19 = (__int64 **)(v6 + 40);
  if ( v4 == 2 )
    v30 = 0x4000000000000000LL;
  v31 = ((unsigned __int64)v10 << 61) | v30 | 0x8000000000000000uLL;
  if ( (int)((__int64 (__fastcall *)(_QWORD, unsigned __int64, __int64 *, __int64, __int64))qword_140C4BD70)(
              v32,
              v31,
              &v33,
              ReservedRegionsForTranslateDomain,
              v6 + 40) >= 0 )
    goto LABEL_19;
  if ( v10 )
  {
    v21 = v32;
    v20 = &v33;
    v18 = ReservedRegionsForTranslateDomain;
    v22 = v31 & 0xDFFFFFFFFFFFFFFFuLL;
LABEL_18:
    if ( (int)((__int64 (__fastcall *)(__int64, unsigned __int64, __int64 *, __int64, __int64 **))qword_140C4BD70)(
                v21,
                v22,
                v20,
                v18,
                v19) >= 0 )
    {
LABEL_19:
      **v19 = v6;
      *(_QWORD *)(v6 + 80) = 0LL;
      *(_QWORD *)(v6 + 24) = v35;
      *(_DWORD *)(v6 + 48) = v4;
      *(_QWORD *)(v6 + 16) = v11;
      *(_QWORD *)(v6 + 64) = 0LL;
      *(_QWORD *)(v6 + 72) = 0LL;
      *(_QWORD *)(v6 + 104) = 0LL;
      *(_QWORD *)(v6 + 96) = v6 + 88;
      *(_QWORD *)(v6 + 88) = v6 + 88;
      goto LABEL_20;
    }
  }
  HalpDmaDereferenceDomainObject(v6);
  v6 = 0LL;
LABEL_20:
  if ( ReservedRegionsForTranslateDomain )
    HalpMmAllocCtxFree(v23, ReservedRegionsForTranslateDomain);
  return v6;
}
