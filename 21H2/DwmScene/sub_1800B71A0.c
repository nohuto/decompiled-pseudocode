/*
 * XREFs of sub_1800B71A0 @ 0x1800B71A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __noreturn sub_1800B71A0()
{
  unsigned int v0; // eax
  _QWORD v1[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v2[4]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+70h] [rbp-48h] BYREF

  sub_18000FE28(v2);
  v0 = (unsigned int)sub_18000FE28(v1);
  sub_1800D1210((unsigned int)pExceptionObject, v0, 187, (unsigned int)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
