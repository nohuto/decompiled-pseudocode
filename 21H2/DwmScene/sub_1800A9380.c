/*
 * XREFs of sub_1800A9380 @ 0x1800A9380
 * Callers:
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800EE170 @ 0x1800EE170 (sub_1800EE170.c)
 *     sub_1800EFDE0 @ 0x1800EFDE0 (sub_1800EFDE0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800A36E8 @ 0x1800A36E8 (sub_1800A36E8.c)
 *     sub_1800A3CA0 @ 0x1800A3CA0 (sub_1800A3CA0.c)
 *     sub_1800A5084 @ 0x1800A5084 (sub_1800A5084.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800A78C8 @ 0x1800A78C8 (sub_1800A78C8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A9380(__int64 a1, size_t *a2)
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
    sub_18000FE28(v12);
    v8 = sub_18000FE28(v11);
    sub_18002D8C4(pExceptionObject, v8, 305, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = sub_1800A5084(*(_QWORD *)(a1 + 440), a2);
  sub_1800A36E8((__int64 *)(a1 + 48), (__int64)v11, 0, (const void **)a2, v9);
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
  sub_1800A78C8(v10, (_QWORD *)(a1 + 48), v9, v6);
  *(_QWORD *)(a1 + 64) = sub_1800A5D20(*(_QWORD *)(a1 + 440), v10);
  sub_1800A3CA0((__int64 *)(a1 + 80), (__int64)v11, a2);
  *(_DWORD *)(v11[0] + 64LL) = v4;
  return v4;
}
