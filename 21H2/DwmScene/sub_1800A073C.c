/*
 * XREFs of sub_1800A073C @ 0x1800A073C
 * Callers:
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 *     sub_180036E3C @ 0x180036E3C (sub_180036E3C.c)
 *     sub_1800692A8 @ 0x1800692A8 (sub_1800692A8.c)
 *     sub_1800A07D4 @ 0x1800A07D4 (sub_1800A07D4.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800A073C(__int64 a1, __int64 a2)
{
  int v2; // xmm0_4
  unsigned int v3; // eax
  _QWORD v4[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v5[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v7; // [rsp+B0h] [rbp-18h]

  v7 = a2;
  if ( *(float *)&a2 < 0.0 || (v2 = HIDWORD(v7), *((float *)&v7 + 1) < 0.0) )
  {
    sub_18000FE28(v5);
    v3 = (unsigned int)sub_18000FE28(v4);
    sub_1800D1210((unsigned int)pExceptionObject, v3, 1082, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 152) = a2;
  *(_DWORD *)(a1 + 156) = v2;
}
