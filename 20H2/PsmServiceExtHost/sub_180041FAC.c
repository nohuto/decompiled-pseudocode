/*
 * XREFs of sub_180041FAC @ 0x180041FAC
 * Callers:
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 * Callees:
 *     sub_180035EEC @ 0x180035EEC (sub_180035EEC.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     sub_180041E9C @ 0x180041E9C (sub_180041E9C.c)
 *     sub_180041F58 @ 0x180041F58 (sub_180041F58.c)
 *     sub_1800422A4 @ 0x1800422A4 (sub_1800422A4.c)
 *     sub_180042590 @ 0x180042590 (sub_180042590.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041FAC(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = sub_180046098(0x510uLL);
  if ( v2 )
    v2 = sub_180035EEC(v2);
  v3 = a1 + 4;
  sub_180042590(a1 + 4, v2);
  if ( !a1[4] )
    return 2147942414LL;
  result = sub_180041E34(&v6);
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    v5 = v6;
    *(_DWORD *)(*v3 + 1280LL) = 2;
    *(_DWORD *)(*v3 + 16LL) = 1;
    *(_QWORD *)(*v3 + 24LL) = a1;
    sub_180041E9C(a1, v5);
    if ( a1[3] )
      sub_180041F58(a1 + 3, 0LL);
    result = sub_1800422A4(a1);
    if ( (int)result >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, 27LL, 0xFFFFFFFFLL);
      return 0LL;
    }
  }
  return result;
}
