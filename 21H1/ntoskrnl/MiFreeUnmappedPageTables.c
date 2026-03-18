/*
 * XREFs of MiFreeUnmappedPageTables @ 0x1403079C8
 * Callers:
 *     MiDeleteSystemPageTableTail @ 0x140307820 (MiDeleteSystemPageTableTail.c)
 * Callees:
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUnmappedPageTables(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // r14
  unsigned __int64 v8; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v5 = (_QWORD *)a2;
  v6 = a1;
  if ( a1 )
  {
    do
    {
      v7 = (__int64 *)*v6;
      v8 = (unsigned __int8)MiLockPageInline(v6, a2, a3);
      *((_BYTE *)v6 + 34) = *((_BYTE *)v6 + 34) & 0xF8 | 6;
      if ( (unsigned int)MiDecrementShareCount(v6) == 3 )
        ++v5[1];
      _InterlockedAnd64(v6 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v8 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)a2;
            v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)result & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v11 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      ++v4;
      v6 = v7;
    }
    while ( v7 );
  }
  v5[3] += v4;
  *v5 += v4;
  return result;
}
