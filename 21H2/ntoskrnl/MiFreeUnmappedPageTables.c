/*
 * XREFs of MiFreeUnmappedPageTables @ 0x140237E28
 * Callers:
 *     MiDeleteSystemPageTableTail @ 0x140237C80 (MiDeleteSystemPageTableTail.c)
 * Callees:
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUnmappedPageTables(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // r14
  unsigned __int64 v7; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = 0LL;
  v5 = a1;
  if ( a1 )
  {
    do
    {
      v6 = (__int64 *)*v5;
      v7 = (unsigned __int8)MiLockPageInline(v5);
      *((_BYTE *)v5 + 34) = *((_BYTE *)v5 + 34) & 0xF8 | 6;
      if ( (unsigned int)MiDecrementShareCount(v5) == 3 )
        ++a2[1];
      _InterlockedAnd64(v5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v10 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      ++v3;
      v5 = v6;
    }
    while ( v6 );
  }
  a2[3] += v3;
  *a2 += v3;
  return result;
}
