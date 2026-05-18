/*
 * XREFs of sub_1800F28E4 @ 0x1800F28E4
 * Callers:
 *     sub_1800F50A8 @ 0x1800F50A8 (sub_1800F50A8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F28E4(__int64 a1)
{
  __int64 *v1; // rax
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_18000FE28(v3);
    v1 = sub_18000FE28(v2);
    sub_18002D8C4(pExceptionObject, v1, 549, (__int64)v3, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1168) = 0;
}
