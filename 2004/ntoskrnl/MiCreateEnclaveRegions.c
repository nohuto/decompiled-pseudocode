/*
 * XREFs of MiCreateEnclaveRegions @ 0x140A53250
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x140249BF0 (RtlAvlInsertNodeEx.c)
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiInitializeMdlPfn @ 0x140313B6C (MiInitializeMdlPfn.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A8FBEC (MiInitializeEnclaveMetadataPage.c)
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
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v24; // eax
  bool v25; // zf
  __int64 *v26; // [rsp+60h] [rbp+8h]

  qword_140C4ECB0 = (__int64)&qword_140C4ECA8;
  qword_140C4ECA8 = (__int64)&qword_140C4ECA8;
  v2 = 0LL;
  qword_140C4ECB8 = 0LL;
  ExInitializePushLock(&stru_140C4ECC0);
  v3 = (__int64 *)(a1 + 32);
  v4 = MiSwizzleInvalidPte(128LL);
  v26 = v3;
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
    v12 = (_QWORD *)qword_140C4EC80;
    if ( !qword_140C4EC80 )
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
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4EC80, (unsigned __int64)v12, v11, v2);
LABEL_16:
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v8, 0, 0);
    v17 = 48 * v7 - 0x58000000000LL;
    if ( v8 )
    {
      do
      {
        v18 = MiLockPageInline(v17, v14, v15, SchedulerAssist);
        v20 = *(_QWORD *)(v17 + 40);
        v21 = v18;
        *(_QWORD *)(v17 + 24) &= 0x8000000000000000uLL;
        *(_WORD *)(v17 + 32) = 0;
        *(_QWORD *)(v17 + 16) = v4;
        *(_QWORD *)(v17 + 40) = v20 & 0x8FFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
        if ( *((_DWORD *)i + 4) == 33 )
          MiInsertPageInFreeOrZeroedList(v7, 256);
        else
          MiInitializeMdlPfn(v17, 0LL, v19);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v14 = -1LL << ((unsigned __int8)v21 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = ~(unsigned __int16)v14;
              v25 = (v24 & SchedulerAssist[5]) == 0;
              v15 = (unsigned int)v24 & SchedulerAssist[5];
              SchedulerAssist[5] = v15;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v21);
        v17 += 48LL;
        ++v7;
        --v8;
      }
      while ( v8 );
      v3 = v26;
    }
    qword_140C4EDB8 -= i[4];
  }
  return !qword_140C4EC80 || (unsigned int)MiInitializeEnclaveMetadataPage();
}
