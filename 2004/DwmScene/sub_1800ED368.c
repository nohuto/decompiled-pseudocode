/*
 * XREFs of sub_1800ED368 @ 0x1800ED368
 * Callers:
 *     sub_18008CA54 @ 0x18008CA54 (sub_18008CA54.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180026F44 @ 0x180026F44 (sub_180026F44.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800ED368(__int64 a1, unsigned __int16 a2)
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
    v4 = sub_180026F44(v8, a2);
    v5 = sub_180043BDC(
           (__int64)v9,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the specified ID ",
           (__int64)v4);
    v6 = sub_18000FD48(v7);
    sub_180027FF4(pExceptionObject, v6, 278, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 56) + 56 * v2;
}
