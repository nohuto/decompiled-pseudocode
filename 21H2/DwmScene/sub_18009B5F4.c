/*
 * XREFs of sub_18009B5F4 @ 0x18009B5F4
 * Callers:
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18009B5F4(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned int v4; // eax
  _QWORD v5[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v6[4]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( a2 >= (*(_QWORD *)(a1 + 112) - v2) / 88 )
  {
    sub_18000FE28(v6);
    v4 = (unsigned int)sub_18000FE28(v5);
    sub_1800D1210((unsigned int)pExceptionObject, v4, 134, (unsigned int)v6, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return *(_BYTE *)(88 * a2 + v2 + 16);
}
