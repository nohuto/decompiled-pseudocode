/*
 * XREFs of sub_180097E00 @ 0x180097E00
 * Callers:
 *     sub_1800971B0 @ 0x1800971B0 (sub_1800971B0.c)
 * Callees:
 *     sub_180067E60 @ 0x180067E60 (sub_180067E60.c)
 *     sub_180069518 @ 0x180069518 (sub_180069518.c)
 *     sub_180097EC0 @ 0x180097EC0 (sub_180097EC0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180097E00(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  unsigned int v7[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v8[72]; // [rsp+30h] [rbp-78h] BYREF
  char v9; // [rsp+78h] [rbp-30h] BYREF

  v7[0] = a2;
  sub_180069518((__int64 *)(a1 + 128), v7);
  sub_180097EC0(a1, v8);
  v4 = 0LL;
  v5 = v8;
  do
  {
    if ( *v5 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a2);
    ++v5;
    ++v4;
  }
  while ( v4 != (&v9 < v8 ? 0 : 9) );
  return sub_180067E60(a1, a2);
}
