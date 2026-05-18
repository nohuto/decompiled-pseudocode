/*
 * XREFs of sub_1800A51A4 @ 0x1800A51A4
 * Callers:
 *     sub_1800F1B44 @ 0x1800F1B44 (sub_1800F1B44.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800A3D78 @ 0x1800A3D78 (sub_1800A3D78.c)
 *     sub_1800A5BA8 @ 0x1800A5BA8 (sub_1800A5BA8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A51A4(__int64 a1, size_t *a2)
{
  __int64 v4; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[10]; // [rsp+80h] [rbp+7h] BYREF

  if ( !a2[2] )
  {
    sub_18000FE28(v10);
    v6 = sub_18000FE28(v9);
    sub_18002D8C4(pExceptionObject, v6, 478, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOWORD(v4) = sub_1800A5BA8();
  if ( (_WORD)v4 == 511 )
  {
    v4 = *(int *)(a1 + 18488);
    if ( (int)v4 >= 512 )
    {
      sub_18000FE28(v9);
      v7 = sub_18000FE28(v10);
      sub_18002D8C4(pExceptionObject, v7, 492, (__int64)v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 18488) = v4 + 1;
    sub_1800A3D78((__int64 *)(a1 + 2088), (__int64)&v8, a2);
    *(_WORD *)(v8 + 64) = v4;
    sub_180012F14((__int64 *)(32 * v4 + a1 + 2104), (__int64 *)a2);
  }
  return (unsigned __int16)v4;
}
