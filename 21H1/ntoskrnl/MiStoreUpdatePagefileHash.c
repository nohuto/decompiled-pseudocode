/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x1403449A0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdx
  _QWORD *v5; // r13
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // r10
  unsigned int v11; // esi
  __int64 v12; // r14
  int v13; // r12d
  unsigned int PagingFileOffset; // eax
  __int64 v15; // rcx
  unsigned int v16; // r14d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+30h] [rbp-58h]
  unsigned int v23; // [rsp+90h] [rbp+8h]
  unsigned __int8 v24; // [rsp+98h] [rbp+10h]
  __int64 v25; // [rsp+A0h] [rbp+18h]

  v25 = a3;
  v4 = 0LL;
  v5 = (_QWORD *)(a3 + 48);
  v6 = 0;
  v23 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = a3;
  v11 = 16;
  if ( a4 )
  {
    do
    {
      if ( *v5 == qword_140C4ECA8 )
      {
        v13 = 16;
        v16 = v7;
      }
      else
      {
        v12 = 48LL * *v5 - 0x58000000000LL;
        v22 = v12;
        v24 = MiLockPageInline(v12, v4, a3);
        v13 = (unsigned __int8)HIBYTE(*(_WORD *)(v12 + 16)) >> 4;
        PagingFileOffset = MiGetPagingFileOffset(v12 + 16);
        v15 = v12;
        v16 = PagingFileOffset;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v24 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (v24 + 1));
            v21 = (v20 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v20 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          v15 = v22;
        }
        __writecr8(v24);
        v4 = v23;
        v10 = v25;
        if ( !v8 )
          v8 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
      }
      if ( v11 == v13 && v16 == v7 )
      {
        ++v6;
      }
      else
      {
        if ( v11 != 16 )
          MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 6944), v10, v9 - v6, v4, v6);
        v4 = v16;
        v11 = v13;
        v23 = v16;
        v7 = v16;
        v6 = 1;
      }
      v10 = v25;
      ++v9;
      ++v5;
      ++v7;
    }
    while ( v9 < a4 );
    if ( v11 != 16 )
      MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 6944), v25, v9 - v6, v4, v6);
  }
}
