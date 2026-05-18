/*
 * XREFs of sub_18011B3C0 @ 0x18011B3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1801152FC @ 0x1801152FC (sub_1801152FC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall __noreturn sub_18011B3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  void *v5; // rdi
  _QWORD pExceptionObject[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v7[6]; // [rsp+38h] [rbp-40h] BYREF

  v7[4] = a3;
  v7[5] = a4;
  v4 = 0LL;
  v5 = operator new(0x40uLL);
  pExceptionObject[1] = v5;
  if ( v5 )
  {
    sub_18000FD48(v7);
    v4 = sub_1801152FC((__int64)v5, v7, 0);
  }
  pExceptionObject[0] = v4;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
