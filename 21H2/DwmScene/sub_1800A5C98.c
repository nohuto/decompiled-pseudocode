/*
 * XREFs of sub_1800A5C98 @ 0x1800A5C98
 * Callers:
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_18010EB94 @ 0x18010EB94 (sub_18010EB94.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A5C98(__int64 a1, _DWORD **a2)
{
  __int64 v2; // rcx
  _DWORD *i; // r8
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+70h] [rbp-48h] BYREF

  v2 = 0LL;
  for ( i = *a2; i != a2[1]; ++i )
  {
    if ( *i == -1 )
    {
      sub_18000FE28(v7);
      v5 = sub_18000FE28(v6);
      sub_18002D8C4(pExceptionObject, v5, 675, (__int64)v7, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v2 |= 1LL << *i;
  }
  return v2;
}
