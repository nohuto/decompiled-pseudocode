/*
 * XREFs of sub_1800A3AB0 @ 0x1800A3AB0
 * Callers:
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800E88A0 @ 0x1800E88A0 (sub_1800E88A0.c)
 *     sub_1800EA510 @ 0x1800EA510 (sub_1800EA510.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18009DE18 @ 0x18009DE18 (sub_18009DE18.c)
 *     sub_18009E3D0 @ 0x18009E3D0 (sub_18009E3D0.c)
 *     sub_18009F7B4 @ 0x18009F7B4 (sub_18009F7B4.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A1FF8 @ 0x1800A1FF8 (sub_1800A1FF8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A3AB0(__int64 a1, size_t *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 *v8; // rax
  char v9; // [rsp+30h] [rbp-59h]
  __int64 v10[2]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v12[5]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+90h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_18000FD48(v12);
    v8 = sub_18000FD48(v11);
    sub_180027FF4(pExceptionObject, v8, 305, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = sub_18009F7B4(*(_QWORD *)(a1 + 440), a2);
  sub_18009DE18((__int64 *)(a1 + 48), (__int64)v11, 0, (const void **)a2, v9);
  v10[0] = 0LL;
  v10[1] = 0LL;
  v11[0] = v10;
  v11[1] = v10;
  v5 = operator new(0x40uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  v10[0] = (__int64)v5;
  sub_1800A1FF8(v10, (_QWORD *)(a1 + 48), v9, v6);
  *(_QWORD *)(a1 + 64) = sub_1800A0450(*(_QWORD *)(a1 + 440), v10);
  sub_18009E3D0((__int64 *)(a1 + 80), (__int64)v11, a2);
  *(_DWORD *)(v11[0] + 64LL) = v4;
  return v4;
}
