/*
 * XREFs of sub_180008408 @ 0x180008408
 * Callers:
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 * Callees:
 *     sub_1800075A8 @ 0x1800075A8 (sub_1800075A8.c)
 *     sub_1800084E8 @ 0x1800084E8 (sub_1800084E8.c)
 *     sub_180008518 @ 0x180008518 (sub_180008518.c)
 *     sub_1800085A0 @ 0x1800085A0 (sub_1800085A0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180008408(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  bool v8; // zf
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a1;
  v2 = *(_QWORD *)&qword_1800B41A8;
  v3 = a2;
  v4 = *(_QWORD *)&qword_1800B41A8 + 104LL;
  sub_180008518(*(_QWORD *)&qword_1800B41A8 + 104LL);
  if ( (*(_BYTE *)(v2 + 2712) & 1) != 0 )
  {
    v5 = -1073741585;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(v4 + 64) & 4) == 0 )
  {
    v5 = sub_1800075A8(1);
    if ( v5 < 0 )
      goto LABEL_10;
    *(_DWORD *)(v4 + 64) |= 4u;
  }
  RtlQueryUnbiasedInterruptTime(&v13);
  v6 = *(_QWORD *)(v4 + 48);
  v7 = v13 / 0x2710;
  if ( v6 <= v13 / 0x2710 + v3 )
    v6 = v13 / 0x2710 + v3;
  v8 = (*(_BYTE *)(v4 + 64) & 8) == 0;
  *(_QWORD *)(v4 + 48) = v6;
  if ( v8 )
    sub_1800085A0(v7, v4);
  v5 = 0;
LABEL_10:
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
  {
    v14 = *(_QWORD *)(v4 + 48);
    LODWORD(v13) = v5;
    sub_180063424(v9, (unsigned int)&unk_18009E757, v10, v11, (__int64)&v13, (__int64)&v14);
  }
  sub_1800084E8(v4);
  return (unsigned int)v5;
}
