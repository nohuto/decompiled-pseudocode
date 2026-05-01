/*
 * XREFs of sub_180034538 @ 0x180034538
 * Callers:
 *     sub_180033D80 @ 0x180033D80 (sub_180033D80.c)
 *     sub_1800348FC @ 0x1800348FC (sub_1800348FC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_180034538(__int64 a1, signed __int32 a2, signed __int32 a3)
{
  char v3; // bl
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  signed __int32 v7; // ecx
  signed __int32 v8; // eax
  signed __int32 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v3 = 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), a2, 0) )
  {
    v5 = (_QWORD *)(a1 + 40);
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    GetRestrictedErrorInfo(v5);
    v7 = *(_DWORD *)(a1 + 48);
    v10 = -2;
    _InterlockedCompareExchange(&v10, v7, -2);
    if ( !v10 )
    {
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 3, 0);
      return v8 == v10;
    }
  }
  return v3;
}
