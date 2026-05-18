/*
 * XREFs of sub_1800AADA8 @ 0x1800AADA8
 * Callers:
 *     sub_1800AACF0 @ 0x1800AACF0 (sub_1800AACF0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AADA8(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 == -1 )
  {
    sub_18000FE28(v8);
    v6 = sub_18000FE28(v7);
    sub_18002D8C4(pExceptionObject, v6, 705, (__int64)v8, 0);
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
