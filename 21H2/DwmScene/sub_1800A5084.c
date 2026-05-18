/*
 * XREFs of sub_1800A5084 @ 0x1800A5084
 * Callers:
 *     sub_1800A9380 @ 0x1800A9380 (sub_1800A9380.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800A3CA0 @ 0x1800A3CA0 (sub_1800A3CA0.c)
 *     sub_1800A5B70 @ 0x1800A5B70 (sub_1800A5B70.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A5084(__int64 a1, size_t *a2)
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
    sub_18002D8C4(pExceptionObject, v6, 419, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LODWORD(v4) = sub_1800A5B70(a1, a2);
  if ( (_DWORD)v4 == -1 )
  {
    v4 = *(int *)(a1 + 2080);
    if ( (int)v4 >= 64 )
    {
      sub_18000FE28(v9);
      v7 = sub_18000FE28(v10);
      sub_18002D8C4(pExceptionObject, v7, 433, (__int64)v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 2080) = v4 + 1;
    sub_1800A3CA0((__int64 *)(a1 + 16), (__int64)&v8, a2);
    *(_DWORD *)(v8 + 64) = v4;
    sub_180012F14((__int64 *)(a1 + 32 * (v4 + 1)), (__int64 *)a2);
  }
  return (unsigned int)v4;
}
