/*
 * XREFs of sub_180120C10 @ 0x180120C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn sub_180120C10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // rdi
  _QWORD pExceptionObject[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v6[5]; // [rsp+38h] [rbp-40h] BYREF

  v6[4] = a3;
  v3 = 0LL;
  v4 = operator new(0x40uLL);
  pExceptionObject[1] = v4;
  if ( v4 )
  {
    sub_18000FE28(v6);
    v3 = sub_18011ABCC((__int64)v4, v6, 0);
  }
  pExceptionObject[0] = v3;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
