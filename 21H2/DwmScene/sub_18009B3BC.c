/*
 * XREFs of sub_18009B3BC @ 0x18009B3BC
 * Callers:
 *     sub_18009B3A0 @ 0x18009B3A0 (sub_18009B3A0.c)
 *     sub_18009C100 @ 0x18009C100 (sub_18009C100.c)
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 *     sub_18009D6D0 @ 0x18009D6D0 (sub_18009D6D0.c)
 *     sub_180110B10 @ 0x180110B10 (sub_180110B10.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009B3BC(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v7; // eax
  _QWORD v8[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v9[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 104);
  if ( a3 >= (*(_QWORD *)(a1 + 112) - v3) / 88 )
  {
    sub_18000FE28(v9);
    v7 = (unsigned int)sub_18000FE28(v8);
    sub_1800D1210((unsigned int)pExceptionObject, v7, 690, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v4 = 88 * a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(_QWORD *)(88 * a3 + v3 + 8);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  *a2 = *(_QWORD *)(v4 + v3);
  a2[1] = *(_QWORD *)(v4 + v3 + 8);
  return a2;
}
