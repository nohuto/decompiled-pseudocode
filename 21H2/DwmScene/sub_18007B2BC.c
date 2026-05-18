/*
 * XREFs of sub_18007B2BC @ 0x18007B2BC
 * Callers:
 *     sub_18006C9C0 @ 0x18006C9C0 (sub_18006C9C0.c)
 *     sub_180078A90 @ 0x180078A90 (sub_180078A90.c)
 *     sub_18007E1E8 @ 0x18007E1E8 (sub_18007E1E8.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_18008713C @ 0x18008713C (sub_18008713C.c)
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800D6BE0 @ 0x1800D6BE0 (sub_1800D6BE0.c)
 *     sub_1800F0C34 @ 0x1800F0C34 (sub_1800F0C34.c)
 *     sub_180101A10 @ 0x180101A10 (sub_180101A10.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __noreturn sub_18007B2BC()
{
  unsigned int v0; // eax
  _QWORD v1[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v2[4]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+70h] [rbp-48h] BYREF

  sub_18000FE28(v2);
  v0 = (unsigned int)sub_18000FE28(v1);
  sub_1800D1210((unsigned int)pExceptionObject, v0, 336, (unsigned int)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
