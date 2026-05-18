/*
 * XREFs of sub_1800B7560 @ 0x1800B7560
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_1800B7560()
{
  _QWORD v0[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+40h] [rbp-48h] BYREF

  sub_18000FE28(v0);
  sub_18011ABCC(pExceptionObject, v0, 0LL);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
