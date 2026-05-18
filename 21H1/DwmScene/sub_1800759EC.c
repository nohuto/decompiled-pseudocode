/*
 * XREFs of sub_1800759EC @ 0x1800759EC
 * Callers:
 *     sub_1800670F0 @ 0x1800670F0 (sub_1800670F0.c)
 *     sub_1800731C0 @ 0x1800731C0 (sub_1800731C0.c)
 *     sub_180078918 @ 0x180078918 (sub_180078918.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800D1310 @ 0x1800D1310 (sub_1800D1310.c)
 *     sub_1800EB364 @ 0x1800EB364 (sub_1800EB364.c)
 *     sub_1800FC140 @ 0x1800FC140 (sub_1800FC140.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __noreturn sub_1800759EC()
{
  unsigned int v0; // eax
  _QWORD v1[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v2[4]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+70h] [rbp-48h] BYREF

  sub_18000FD48(v2);
  v0 = (unsigned int)sub_18000FD48(v1);
  sub_1800CB940((unsigned int)pExceptionObject, v0, 336, (unsigned int)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
