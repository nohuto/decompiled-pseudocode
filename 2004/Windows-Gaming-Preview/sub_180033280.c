/*
 * XREFs of sub_180033280 @ 0x180033280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033280(volatile signed __int32 *a1)
{
  signed __int32 v2; // ecx
  signed __int32 v3; // eax
  int v4; // ebx
  signed __int32 v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_DWORD *)a1 + 12);
  v6[0] = -2;
  _InterlockedCompareExchange(v6, v2, -2);
  if ( v6[0] == -1 && (v3 = _InterlockedCompareExchange(a1 + 12, 0, -1), v3 == v6[0]) )
  {
    v4 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0 )
      InitOnceExecuteOnce(&stru_18005AD68, (PINIT_ONCE_FN)sub_1800230C0, 0LL, 0LL);
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
