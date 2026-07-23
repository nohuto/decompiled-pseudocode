/*
 * XREFs of KiActivateWaiterKQueue @ 0x14021CB90
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x14021CA5C (KiActivateWaiterQueueWithNoLocks.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 */

__int64 __fastcall KiActivateWaiterKQueue(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 **v6; // rax

  result = *(unsigned int *)(a1 + 40);
  if ( (unsigned int)result < *(_DWORD *)(a1 + 44) )
  {
    v3 = (__int64 *)(a1 + 24);
    v4 = *(__int64 **)(a1 + 24);
    if ( v4 != (__int64 *)(a1 + 24) )
    {
      result = a1 + 8;
      if ( *(_QWORD *)result != result )
      {
        v5 = *v4;
        v6 = (__int64 **)v4[1];
        if ( *(__int64 **)(*v4 + 8) == v4 && *v6 == v4 )
        {
          *v6 = (__int64 *)v5;
          *(_QWORD *)(v5 + 8) = v6;
          *v4 = 0LL;
          result = KiWakeQueueWaiter(KeGetCurrentPrcb(), a1, v4);
          if ( (_BYTE)result )
          {
            --*(_DWORD *)(a1 + 4);
            goto LABEL_3;
          }
          result = *v3;
          if ( *(__int64 **)(*v3 + 8) == v3 )
          {
            *v4 = result;
            v4[1] = (__int64)v3;
            *(_QWORD *)(result + 8) = v4;
            *v3 = (__int64)v4;
            goto LABEL_3;
          }
        }
        __fastfail(3u);
      }
    }
  }
LABEL_3:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
