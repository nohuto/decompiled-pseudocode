/*
 * XREFs of sub_1800F5438 @ 0x1800F5438
 * Callers:
 *     sub_180092E48 @ 0x180092E48 (sub_180092E48.c)
 *     sub_1800DC57C @ 0x1800DC57C (sub_1800DC57C.c)
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

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800F5438(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  _QWORD v17[4]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v19[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v20[4]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v21[40]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v22[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD pExceptionObject[12]; // [rsp+120h] [rbp+20h] BYREF

  if ( !sub_1800F2CE4(*(_QWORD *)(a1 + 16), a3) )
  {
    v12 = sub_180012B84(a1 + 16);
    v13 = sub_180012B84(v12 + 1152);
    v14 = sub_1800A5F9C(v13, v20, a3);
    v15 = sub_1800494AC((__int64)v21, (__int64)"Property does not exist: ", (__int64)v14);
    v16 = sub_18000FE28(v17);
    sub_18002D8C4(v22, v16, 669, v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v22;
  }
  v6 = sub_1800F2C18(*(_QWORD *)(a1 + 16), a3);
  if ( *(_DWORD *)(v6 + 36) != 8 )
  {
    sub_18000FE28(v19);
    v11 = sub_18000FE28(v18);
    sub_18002D8C4(pExceptionObject, v11, 673, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = 5LL * *(unsigned int *)(v6 + 40);
  v8 = *(_QWORD *)(a1 + 56);
  *a2 = 0LL;
  a2[1] = 0LL;
  v9 = *(_QWORD *)(v8 + 8 * v7 + 8);
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *a2 = *(_QWORD *)(v8 + 8 * v7);
  a2[1] = *(_QWORD *)(v8 + 8 * v7 + 8);
  return a2;
}
