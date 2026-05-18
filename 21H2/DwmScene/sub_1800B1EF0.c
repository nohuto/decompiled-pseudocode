/*
 * XREFs of sub_1800B1EF0 @ 0x1800B1EF0
 * Callers:
 *     sub_1800C6C30 @ 0x1800C6C30 (sub_1800C6C30.c)
 *     sub_1800FED34 @ 0x1800FED34 (sub_1800FED34.c)
 *     sub_1800FF63C @ 0x1800FF63C (sub_1800FF63C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800B1EF0(__int64 a1, int a2, char a3)
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
    sub_18000FE28(v8);
    v6 = sub_18000FE28(v7);
    sub_18002D8C4(pExceptionObject, v6, 1208, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(v3 + 48LL * a2) = a3;
  return result;
}
