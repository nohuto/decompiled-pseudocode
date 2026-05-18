/*
 * XREFs of sub_1800F1F98 @ 0x1800F1F98
 * Callers:
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_180094AE8 @ 0x180094AE8 (sub_180094AE8.c)
 *     sub_1800952D0 @ 0x1800952D0 (sub_1800952D0.c)
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F1F98(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v10[5]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD pExceptionObject[11]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000FE28(v10);
    v8 = sub_18000FE28(v9);
    sub_18002D8C4(pExceptionObject, v8, 572, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v7 = a3;
    do
    {
      sub_1800F2044(a1, a2, a4);
      a2 += 64LL;
      --v7;
    }
    while ( v7 );
  }
}
