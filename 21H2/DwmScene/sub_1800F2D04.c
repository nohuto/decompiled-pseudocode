/*
 * XREFs of sub_1800F2D04 @ 0x1800F2D04
 * Callers:
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F2D04(__int64 a1, unsigned int a2)
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
      sub_18000FE28(v5);
      v3 = sub_18000FE28(v4);
      sub_18002D8C4(pExceptionObject, v3, 230, (__int64)v5, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  *(_DWORD *)(a1 + 1172) = a2 >> 2;
}
