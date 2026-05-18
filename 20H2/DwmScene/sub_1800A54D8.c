/*
 * XREFs of sub_1800A54D8 @ 0x1800A54D8
 * Callers:
 *     sub_1800A5420 @ 0x1800A5420 (sub_1800A5420.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A54D8(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 == -1 )
  {
    sub_18000FD48(v8);
    v6 = sub_18000FD48(v7);
    sub_180027FF4(pExceptionObject, v6, 705, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = (1LL << a2) & *(_QWORD *)(a1 + 64);
  result = *(_QWORD *)(a1 + 72);
  if ( a3 )
  {
    result |= v4;
    *(_QWORD *)(a1 + 72) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = result & ~v4;
  }
  return result;
}
