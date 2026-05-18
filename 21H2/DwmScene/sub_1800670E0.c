/*
 * XREFs of sub_1800670E0 @ 0x1800670E0
 * Callers:
 *     sub_180071E30 @ 0x180071E30 (sub_180071E30.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008CA30 @ 0x18008CA30 (sub_18008CA30.c)
 *     sub_18008CAD4 @ 0x18008CAD4 (sub_18008CAD4.c)
 *     sub_18008CCEC @ 0x18008CCEC (sub_18008CCEC.c)
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     sub_18008CF70 @ 0x18008CF70 (sub_18008CF70.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_18008E204 @ 0x18008E204 (sub_18008E204.c)
 *     sub_1800BA3D0 @ 0x1800BA3D0 (sub_1800BA3D0.c)
 *     sub_1800BA714 @ 0x1800BA714 (sub_1800BA714.c)
 *     sub_1800BAA58 @ 0x1800BAA58 (sub_1800BAA58.c)
 *     sub_1800BAD9C @ 0x1800BAD9C (sub_1800BAD9C.c)
 *     sub_1800BB0E0 @ 0x1800BB0E0 (sub_1800BB0E0.c)
 *     sub_1800BB424 @ 0x1800BB424 (sub_1800BB424.c)
 *     sub_1800C24FC @ 0x1800C24FC (sub_1800C24FC.c)
 *     sub_1800DBE40 @ 0x1800DBE40 (sub_1800DBE40.c)
 *     sub_1800DDF78 @ 0x1800DDF78 (sub_1800DDF78.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180066C28 @ 0x180066C28 (sub_180066C28.c)
 *     sub_180067098 @ 0x180067098 (sub_180067098.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800670E0(__int64 a1)
{
  char result; // al
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+70h] [rbp-48h] BYREF

  result = sub_180067098(a1);
  if ( !result )
  {
    sub_18000FE28(v4);
    v2 = sub_18000FE28(v3);
    sub_180066C28(pExceptionObject, v2, 248, (__int64)v4, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  return result;
}
