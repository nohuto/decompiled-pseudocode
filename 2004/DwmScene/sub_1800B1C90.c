/*
 * XREFs of sub_1800B1C90 @ 0x1800B1C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1801152FC @ 0x1801152FC (sub_1801152FC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_1800B1C90()
{
  _QWORD v0[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+40h] [rbp-48h] BYREF

  sub_18000FD48(v0);
  sub_1801152FC(pExceptionObject, v0, 0LL);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
