/*
 * XREFs of sub_180120C90 @ 0x180120C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall __noreturn sub_180120C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
    sub_18000FE28(v7);
    v4 = sub_18011ABCC((__int64)v5, v7, 0);
  }
  pExceptionObject[0] = v4;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
