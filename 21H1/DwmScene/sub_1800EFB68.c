/*
 * XREFs of sub_1800EFB68 @ 0x1800EFB68
 * Callers:
 *     sub_18008D578 @ 0x18008D578 (sub_18008D578.c)
 *     sub_1800D6CAC @ 0x1800D6CAC (sub_1800D6CAC.c)
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

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800EFB68(__int64 a1, _QWORD *a2, unsigned __int16 a3)
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

  if ( !sub_1800ED414(*(_QWORD *)(a1 + 16), a3) )
  {
    v12 = sub_180012AA4(a1 + 16);
    v13 = sub_180012AA4(v12 + 1152);
    v14 = sub_1800A06CC(v13, v20, a3);
    v15 = sub_180043BDC((__int64)v21, (__int64)"Property does not exist: ", (__int64)v14);
    v16 = sub_18000FD48(v17);
    sub_180027FF4(v22, v16, 669, v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v22;
  }
  v6 = sub_1800ED348(*(_QWORD *)(a1 + 16), a3);
  if ( *(_DWORD *)(v6 + 36) != 8 )
  {
    sub_18000FD48(v19);
    v11 = sub_18000FD48(v18);
    sub_180027FF4(pExceptionObject, v11, 673, (__int64)v19, 0);
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
