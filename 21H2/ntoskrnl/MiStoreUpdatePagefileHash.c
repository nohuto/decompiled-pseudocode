/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x14025C420
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edx
  _QWORD *v5; // r13
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // r10
  unsigned int v11; // esi
  __int64 v12; // r14
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int PagingFileOffset; // eax
  __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  __int64 v24; // [rsp+30h] [rbp-58h]
  unsigned int v25; // [rsp+90h] [rbp+8h]
  unsigned __int8 v26; // [rsp+98h] [rbp+10h]

  v4 = 0;
  v5 = (_QWORD *)(a3 + 48);
  v6 = 0;
  v25 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = a3;
  v11 = 16;
  if ( a4 )
  {
    do
    {
      if ( *v5 == qword_140C4EDA8 )
      {
        v13 = 16;
        v18 = v7;
      }
      else
      {
        v12 = 48LL * *v5 - 0x58000000000LL;
        v24 = v12;
        v26 = MiLockPageInline(v12);
        v13 = (unsigned __int8)HIBYTE(*(_WORD *)(v12 + 16)) >> 4;
        PagingFileOffset = MiGetPagingFileOffset(v12 + 16, v14, v15);
        v17 = v12;
        v18 = PagingFileOffset;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v26 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (v26 + 1));
            v23 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          v17 = v24;
        }
        __writecr8(v26);
        v4 = v25;
        v10 = a3;
        if ( !v8 )
          v8 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v17 + 40) >> 39) & 0x3FFLL));
      }
      if ( v11 == v13 && v18 == v7 )
      {
        ++v6;
      }
      else
      {
        if ( v11 != 16 )
          MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 6944), v10, v9 - v6, v4, v6);
        v4 = v18;
        v11 = v13;
        v25 = v18;
        v7 = v18;
        v6 = 1;
      }
      v10 = a3;
      ++v9;
      ++v5;
      ++v7;
    }
    while ( v9 < a4 );
    if ( v11 != 16 )
      MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 6944), a3, v9 - v6, v4, v6);
  }
}
