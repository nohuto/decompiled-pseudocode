/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x140239338
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 *v6; // r13
  int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // esi
  __int64 v13; // r14
  int v14; // r12d
  unsigned int PagingFileOffset; // eax
  __int64 v16; // rcx
  unsigned int v17; // r14d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // [rsp+30h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+8h]
  unsigned __int8 v26; // [rsp+98h] [rbp+10h]

  result = (__int64)&retaddr;
  v5 = 0;
  v6 = (__int64 *)(a3 + 48);
  v7 = 0;
  v25 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = a3;
  v12 = 16;
  if ( a4 )
  {
    do
    {
      result = *v6;
      if ( *v6 == qword_140C4EBE8 )
      {
        v14 = 16;
        v17 = v8;
      }
      else
      {
        v13 = 48 * result - 0x58000000000LL;
        v23 = v13;
        v26 = MiLockPageInline(v13);
        v14 = (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 16)) >> 4;
        PagingFileOffset = MiGetPagingFileOffset();
        v16 = v13;
        v17 = PagingFileOffset;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v26 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (v26 + 1));
            v22 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          v16 = v23;
        }
        result = v26;
        __writecr8(v26);
        v5 = v25;
        v11 = a3;
        if ( !v9 )
        {
          result = qword_140C4E4C8;
          v9 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v16 + 40) >> 39) & 0x3FFLL));
        }
      }
      if ( v12 == v14 && v17 == v8 )
      {
        ++v7;
      }
      else
      {
        if ( v12 != 16 )
          result = MiMapPageFileHash(*(_QWORD *)(v9 + 8LL * v12 + 6944), v11, v10 - v7, v5, v7);
        v5 = v17;
        v12 = v14;
        v25 = v17;
        v8 = v17;
        v7 = 1;
      }
      v11 = a3;
      ++v10;
      ++v6;
      ++v8;
    }
    while ( v10 < a4 );
    if ( v12 != 16 )
      return MiMapPageFileHash(*(_QWORD *)(v9 + 8LL * v12 + 6944), a3, v10 - v7, v5, v7);
  }
  return result;
}
