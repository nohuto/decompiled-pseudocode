/*
 * XREFs of sub_1800F2C38 @ 0x1800F2C38
 * Callers:
 *     sub_180092324 @ 0x180092324 (sub_180092324.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002C814 @ 0x18002C814 (sub_18002C814.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F2C38(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // r8
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v8[4]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v9[40]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-48h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
  if ( (_WORD)v2 == 0xFFFF )
  {
    v4 = sub_18002C814(v8, a2);
    v5 = sub_1800494AC(
           (__int64)v9,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the specified ID ",
           (__int64)v4);
    v6 = sub_18000FE28(v7);
    sub_18002D8C4(pExceptionObject, v6, 278, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 56) + 56 * v2;
}
