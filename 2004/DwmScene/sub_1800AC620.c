/*
 * XREFs of sub_1800AC620 @ 0x1800AC620
 * Callers:
 *     sub_1800C1360 @ 0x1800C1360 (sub_1800C1360.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     sub_1800F9D6C @ 0x1800F9D6C (sub_1800F9D6C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800AC620(__int64 a1, int a2, char a3)
{
  __int64 v3; // r10
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 < 0
    || (v3 = *(_QWORD *)(a1 + 104),
        v4 = *(_QWORD *)(a1 + 112) - v3,
        result = (unsigned __int64)((unsigned __int128)(v4 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63,
        a2 >= (int)(v4 / 48)) )
  {
    sub_18000FD48(v8);
    v6 = sub_18000FD48(v7);
    sub_180027FF4(pExceptionObject, v6, 1208, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(v3 + 48LL * a2) = a3;
  return result;
}
