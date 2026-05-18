/*
 * XREFs of sub_1800ED434 @ 0x1800ED434
 * Callers:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800ED434(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 *v3; // rax
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 > 0x10 || (v2 = 65809, !_bittest(&v2, a2)) )
  {
    if ( *(_DWORD *)(a1 + 1168) )
    {
      sub_18000FD48(v5);
      v3 = sub_18000FD48(v4);
      sub_180027FF4(pExceptionObject, v3, 230, (__int64)v5, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  *(_DWORD *)(a1 + 1172) = a2 >> 2;
}
