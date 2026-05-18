/*
 * XREFs of sub_180120B40 @ 0x180120B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn sub_180120B40()
{
  __int64 v0; // rbx
  void *v1; // rdi
  _QWORD pExceptionObject[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v3[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  try
  {
    v1 = operator new(0x40uLL);
    pExceptionObject[1] = v1;
    if ( v1 )
    {
      sub_18000FE28(v3);
      v0 = sub_18011ABCC((__int64)v1, v3, 0);
    }
    pExceptionObject[0] = v0;
    throw (Spectre::Utils::SpectreException **)pExceptionObject;
  }
  catch ( ... )
  {
    sub_18011BCAC(&qword_180214E70, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
    throw;
  }
}
