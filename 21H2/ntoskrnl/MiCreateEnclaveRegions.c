/*
 * XREFs of MiCreateEnclaveRegions @ 0x140A55ED8
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiInitializeMdlPfn @ 0x140294B14 (MiInitializeMdlPfn.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A93754 (MiInitializeEnclaveMetadataPage.c)
 */

_BOOL8 __fastcall MiCreateEnclaveRegions(__int64 a1)
{
  _QWORD *v2; // rbp
  __int64 *v3; // r13
  __int64 v4; // rbx
  __int64 *i; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  _QWORD *Pool; // rax
  bool v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rsi
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  unsigned __int64 v20; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v23; // eax
  bool v24; // zf
  __int64 *v25; // [rsp+60h] [rbp+8h]

  qword_140C4EEF0 = (__int64)&qword_140C4EEE8;
  qword_140C4EEE8 = (__int64)&qword_140C4EEE8;
  v2 = 0LL;
  qword_140C4EEF8 = 0LL;
  ExInitializePushLock(&stru_140C4EF00);
  v3 = (__int64 *)(a1 + 32);
  v4 = MiSwizzleInvalidPte(128LL);
  v25 = v3;
  for ( i = (__int64 *)*v3; i != v3; i = (__int64 *)*i )
  {
    if ( ((*((_DWORD *)i + 4) - 33) & 0xFFFFFFFD) != 0 )
      continue;
    v7 = i[3];
    v8 = i[4];
    if ( v2 )
    {
      v9 = v2[4];
      if ( v7 == v9 + v2[3] )
      {
        v2[4] = v9 + v8;
        goto LABEL_16;
      }
    }
    Pool = MiAllocatePool(64, 0x28uLL, 0x52456D4Du);
    v2 = Pool;
    if ( !Pool )
      return 0LL;
    Pool[3] = v7;
    v11 = 0;
    Pool[4] = v8;
    v12 = (_QWORD *)qword_140C4EEC0;
    if ( !qword_140C4EEC0 )
      goto LABEL_15;
    while ( v7 < v12[3] )
    {
      v13 = (_QWORD *)*v12;
      if ( !*v12 )
        goto LABEL_15;
LABEL_20:
      v12 = v13;
    }
    v13 = (_QWORD *)v12[1];
    if ( v13 )
      goto LABEL_20;
    v11 = 1;
LABEL_15:
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4EEC0, (unsigned __int64)v12, v11, v2);
LABEL_16:
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v8, 0, 0);
    v17 = 48 * v7 - 0x58000000000LL;
    if ( v8 )
    {
      do
      {
        v18 = MiLockPageInline(v17, v14, v15, SchedulerAssist);
        v19 = *(_QWORD *)(v17 + 40);
        v20 = v18;
        *(_QWORD *)(v17 + 24) &= 0x8000000000000000uLL;
        *(_WORD *)(v17 + 32) = 0;
        *(_QWORD *)(v17 + 16) = v4;
        *(_QWORD *)(v17 + 40) = v19 & 0x8FFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
        if ( *((_DWORD *)i + 4) == 33 )
          MiInsertPageInFreeOrZeroedList(v7, 256);
        else
          MiInitializeMdlPfn(v17, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v14 = -1LL << ((unsigned __int8)v20 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v23 = ~(unsigned __int16)v14;
              v24 = (v23 & SchedulerAssist[5]) == 0;
              v15 = (unsigned int)v23 & SchedulerAssist[5];
              SchedulerAssist[5] = v15;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v20);
        v17 += 48LL;
        ++v7;
        --v8;
      }
      while ( v8 );
      v3 = v25;
    }
    qword_140C4EFF8 -= i[4];
  }
  return !qword_140C4EEC0 || (unsigned int)MiInitializeEnclaveMetadataPage();
}
