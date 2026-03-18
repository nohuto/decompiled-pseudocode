/*
 * XREFs of sub_1C0052290 @ 0x1C0052290
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C0045710 @ 0x1C0045710 (sub_1C0045710.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0051E90 @ 0x1C0051E90 (sub_1C0051E90.c)
 *     sub_1C0052440 @ 0x1C0052440 (sub_1C0052440.c)
 */

void __fastcall sub_1C0052290(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rsi
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(a3) = *(_BYTE *)(a1 + 2560);
  v3 = (char *)(a1 + 2540);
  v5 = 0LL;
  LOBYTE(a3) = a3 & 1;
  sub_1C0052440(a1 + 2540, &v5, a3);
  if ( (v5 & 0x80u) != 0LL )
  {
    sub_1C004A608(*(_QWORD *)(a1 + 1200), 0, 0x85u, v3, 0x12u, 0, 6, aDqC, 2681, 0);
    sub_1C0051E90((_DWORD *)a1, 6);
  }
  if ( (v5 & 0x100) != 0 )
  {
    sub_1C004A608(*(_QWORD *)(a1 + 1200), 0, 0x85u, v3, 0x12u, 0, 8, aDqC, 2689, 0);
    sub_1C0051E90((_DWORD *)a1, 8);
  }
  if ( (v5 & 0x200) != 0 )
  {
    sub_1C004A608(*(_QWORD *)(a1 + 1200), 0, 0x85u, v3, 0x12u, 0, 9, aDqC, 2698, 0);
    sub_1C0051E90((_DWORD *)a1, 9);
  }
  if ( (v5 & 0x400000000LL) != 0 )
  {
    sub_1C004A608(*(_QWORD *)(a1 + 1200), 0, 0x85u, v3, 0x12u, 0, 13, aDqC, 2706, 0);
    sub_1C0051E90((_DWORD *)a1, 13);
  }
  sub_1C0045710((unsigned __int16 *)a1);
}
