/*
 * XREFs of sub_1800F2990 @ 0x1800F2990
 * Callers:
 *     sub_1800F352C @ 0x1800F352C (sub_1800F352C.c)
 *     sub_1800F5710 @ 0x1800F5710 (sub_1800F5710.c)
 *     sub_1800F5778 @ 0x1800F5778 (sub_1800F5778.c)
 *     sub_1800F5830 @ 0x1800F5830 (sub_1800F5830.c)
 *     sub_1800F5898 @ 0x1800F5898 (sub_1800F5898.c)
 *     sub_1800F58CC @ 0x1800F58CC (sub_1800F58CC.c)
 *     sub_1800F5908 @ 0x1800F5908 (sub_1800F5908.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_1800F5E58 @ 0x1800F5E58 (sub_1800F5E58.c)
 *     sub_1800F5E8C @ 0x1800F5E8C (sub_1800F5E8C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800F295C @ 0x1800F295C (sub_1800F295C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F2990(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  const void **v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+38h] [rbp-B0h] BYREF
  const void *Src; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v9[40]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-48h] BYREF

  result = sub_1800F295C(a1, (__int64)a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_1800A1588(
           &Src,
           "ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_180031AE8((__int64)v9, v4, "\"");
    v6 = sub_18000FE28(v7);
    sub_18002D8C4(pExceptionObject, v6, 268, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
