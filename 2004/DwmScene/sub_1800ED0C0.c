/*
 * XREFs of sub_1800ED0C0 @ 0x1800ED0C0
 * Callers:
 *     sub_1800EDC5C @ 0x1800EDC5C (sub_1800EDC5C.c)
 *     sub_1800EFE40 @ 0x1800EFE40 (sub_1800EFE40.c)
 *     sub_1800EFEA8 @ 0x1800EFEA8 (sub_1800EFEA8.c)
 *     sub_1800EFF60 @ 0x1800EFF60 (sub_1800EFF60.c)
 *     sub_1800EFFC8 @ 0x1800EFFC8 (sub_1800EFFC8.c)
 *     sub_1800EFFFC @ 0x1800EFFFC (sub_1800EFFFC.c)
 *     sub_1800F0038 @ 0x1800F0038 (sub_1800F0038.c)
 *     sub_1800F00AC @ 0x1800F00AC (sub_1800F00AC.c)
 *     sub_1800F0588 @ 0x1800F0588 (sub_1800F0588.c)
 *     sub_1800F05BC @ 0x1800F05BC (sub_1800F05BC.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800ED0C0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  const void **v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+38h] [rbp-B0h] BYREF
  const void *Src; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v9[40]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-48h] BYREF

  result = sub_1800ED08C(a1, (__int64)a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_18009BCB8(
           &Src,
           "ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_18002C218((__int64)v9, v4, "\"");
    v6 = sub_18000FD48(v7);
    sub_180027FF4(pExceptionObject, v6, 268, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
