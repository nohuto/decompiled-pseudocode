/*
 * XREFs of sub_1800EFCBC @ 0x1800EFCBC
 * Callers:
 *     sub_1800EE4A8 @ 0x1800EE4A8 (sub_1800EE4A8.c)
 *     sub_1800EE4F0 @ 0x1800EE4F0 (sub_1800EE4F0.c)
 *     sub_1800EE560 @ 0x1800EE560 (sub_1800EE560.c)
 *     sub_1800EE5A8 @ 0x1800EE5A8 (sub_1800EE5A8.c)
 *     sub_1800EE614 @ 0x1800EE614 (sub_1800EE614.c)
 *     sub_1800EFE74 @ 0x1800EFE74 (sub_1800EFE74.c)
 *     sub_1800EFF94 @ 0x1800EFF94 (sub_1800EFF94.c)
 *     sub_1800F006C @ 0x1800F006C (sub_1800F006C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180012AA4 @ 0x180012AA4 (sub_180012AA4.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     sub_1800A06CC @ 0x1800A06CC (sub_1800A06CC.c)
 *     sub_1800ED348 @ 0x1800ED348 (sub_1800ED348.c)
 *     sub_1800ED414 @ 0x1800ED414 (sub_1800ED414.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800EFCBC(__int64 a1, unsigned __int16 a2, int a3)
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

  if ( !sub_1800ED414(*(_QWORD *)(a1 + 16), a2) )
  {
    v9 = sub_180012AA4(a1 + 16);
    v10 = sub_180012AA4(v9 + 1152);
    v11 = sub_1800A06CC(v10, v16, a2);
    v12 = sub_180043BDC((__int64)v18, (__int64)"Property not found in block: ", (__int64)v11);
    v13 = sub_18000FD48(v15);
    sub_180027FF4(pExceptionObject, v13, 481, v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = (_DWORD *)sub_1800ED348(*(_QWORD *)(a1 + 16), a2);
  if ( v6[9] != a3 )
  {
    sub_18000FD48(v16);
    v14 = sub_18000FD48(v15);
    sub_180027FF4(pExceptionObject, v14, 485, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v6[12] == 2 )
  {
    sub_18000FD48(v15);
    v8 = sub_18000FD48(v16);
    sub_180027FF4(pExceptionObject, v8, 494, (__int64)v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 32) + 4LL * (unsigned int)v6[10];
}
