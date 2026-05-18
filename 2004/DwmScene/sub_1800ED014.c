/*
 * XREFs of sub_1800ED014 @ 0x1800ED014
 * Callers:
 *     sub_1800EF7D8 @ 0x1800EF7D8 (sub_1800EF7D8.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800ED014(__int64 a1)
{
  __int64 *v1; // rax
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_18000FD48(v3);
    v1 = sub_18000FD48(v2);
    sub_180027FF4(pExceptionObject, v1, 549, (__int64)v3, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1168) = 0;
}
