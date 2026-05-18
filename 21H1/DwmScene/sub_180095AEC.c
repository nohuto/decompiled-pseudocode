/*
 * XREFs of sub_180095AEC @ 0x180095AEC
 * Callers:
 *     sub_180095AD0 @ 0x180095AD0 (sub_180095AD0.c)
 *     sub_180096830 @ 0x180096830 (sub_180096830.c)
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_180097E00 @ 0x180097E00 (sub_180097E00.c)
 *     sub_18010B240 @ 0x18010B240 (sub_18010B240.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180095AEC(__int64 a1, _QWORD *a2, unsigned __int64 a3)
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
    sub_18000FD48(v9);
    v7 = (unsigned int)sub_18000FD48(v8);
    sub_1800CB940((unsigned int)pExceptionObject, v7, 690, (unsigned int)v9, 0);
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
