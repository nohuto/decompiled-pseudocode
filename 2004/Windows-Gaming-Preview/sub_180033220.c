/*
 * XREFs of sub_180033220 @ 0x180033220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033220(volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v2; // eax
  signed __int32 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 12);
  v4 = -2;
  _InterlockedCompareExchange(&v4, v1, -2);
  if ( !v4 )
  {
    v2 = _InterlockedCompareExchange(a1 + 12, 2, 0);
    if ( v2 == v4 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 152LL))(a1);
  }
  return 0LL;
}
