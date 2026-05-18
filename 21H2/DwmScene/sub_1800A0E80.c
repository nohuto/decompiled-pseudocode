/*
 * XREFs of sub_1800A0E80 @ 0x1800A0E80
 * Callers:
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800A0C34 @ 0x1800A0C34 (sub_1800A0C34.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A0E80(__int64 a1, __int64 a2)
{
  unsigned int v5; // eax
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( !sub_1800A0C34(*(_QWORD *)(a1 + 112), *(_QWORD *)(*(_QWORD *)a2 + 96LL)) )
  {
    sub_18000FE28(v7);
    v5 = (unsigned int)sub_18000FE28(v6);
    sub_1800D1210((unsigned int)pExceptionObject, v5, 147, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return sub_1800A0F1C(a1, a2);
}
