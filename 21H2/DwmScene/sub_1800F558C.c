/*
 * XREFs of sub_1800F558C @ 0x1800F558C
 * Callers:
 *     sub_1800F3D78 @ 0x1800F3D78 (sub_1800F3D78.c)
 *     sub_1800F3DC0 @ 0x1800F3DC0 (sub_1800F3DC0.c)
 *     sub_1800F3E30 @ 0x1800F3E30 (sub_1800F3E30.c)
 *     sub_1800F3E78 @ 0x1800F3E78 (sub_1800F3E78.c)
 *     sub_1800F3EE4 @ 0x1800F3EE4 (sub_1800F3EE4.c)
 *     sub_1800F5744 @ 0x1800F5744 (sub_1800F5744.c)
 *     sub_1800F5864 @ 0x1800F5864 (sub_1800F5864.c)
 *     sub_1800F593C @ 0x1800F593C (sub_1800F593C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180012B84 @ 0x180012B84 (sub_180012B84.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_1800A5F9C @ 0x1800A5F9C (sub_1800A5F9C.c)
 *     sub_1800F2C18 @ 0x1800F2C18 (sub_1800F2C18.c)
 *     sub_1800F2CE4 @ 0x1800F2CE4 (sub_1800F2CE4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800F558C(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *v6; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rax
  _QWORD v15[4]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v16[5]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v18[32]; // [rsp+C0h] [rbp+27h] BYREF

  if ( !sub_1800F2CE4(*(_QWORD *)(a1 + 16), a2) )
  {
    v9 = sub_180012B84(a1 + 16);
    v10 = sub_180012B84(v9 + 1152);
    v11 = sub_1800A5F9C(v10, v16, a2);
    v12 = sub_1800494AC((__int64)v18, (__int64)"Property not found in block: ", (__int64)v11);
    v13 = sub_18000FE28(v15);
    sub_18002D8C4(pExceptionObject, v13, 481, v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = (_DWORD *)sub_1800F2C18(*(_QWORD *)(a1 + 16), a2);
  if ( v6[9] != a3 )
  {
    sub_18000FE28(v16);
    v14 = sub_18000FE28(v15);
    sub_18002D8C4(pExceptionObject, v14, 485, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v6[12] == 2 )
  {
    sub_18000FE28(v15);
    v8 = sub_18000FE28(v16);
    sub_18002D8C4(pExceptionObject, v8, 494, (__int64)v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 32) + 4LL * (unsigned int)v6[10];
}
