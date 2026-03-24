/*
 * XREFs of KiActivateWaiterKQueue @ 0x14029F630
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029F4FC (KiActivateWaiterQueueWithNoLocks.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 */

char __fastcall KiActivateWaiterKQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax

  LODWORD(v4) = *(_DWORD *)(a1 + 40);
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 44) )
  {
    v6 = a1 + 24;
    v7 = *(_QWORD **)(a1 + 24);
    if ( v7 != (_QWORD *)(a1 + 24) )
    {
      v4 = (_QWORD *)(a1 + 8);
      if ( (_QWORD *)*v4 != v4 )
      {
        v8 = *v7;
        v9 = (_QWORD *)v7[1];
        if ( *(_QWORD **)(*v7 + 8LL) == v7 && (_QWORD *)*v9 == v7 )
        {
          *v9 = v8;
          *(_QWORD *)(v8 + 8) = v9;
          *v7 = 0LL;
          LOBYTE(v4) = KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), a1, (__int64)v7, a4);
          if ( (_BYTE)v4 )
          {
            --*(_DWORD *)(a1 + 4);
            goto LABEL_3;
          }
          v4 = *(_QWORD **)v6;
          if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
          {
            *v7 = v4;
            v7[1] = v6;
            v4[1] = v7;
            *(_QWORD *)v6 = v7;
            goto LABEL_3;
          }
        }
        __fastfail(3u);
      }
    }
  }
LABEL_3:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (char)v4;
}
