/*
 * XREFs of sub_18003B120 @ 0x18003B120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003B120(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rcx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 144);
  v7[0] = a2;
  v7[1] = a3;
  v7[3] = a5;
  v7[2] = a4;
  return (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v5 + 360LL))(v5, 1LL, v7);
}
