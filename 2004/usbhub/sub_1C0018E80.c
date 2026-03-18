/*
 * XREFs of sub_1C0018E80 @ 0x1C0018E80
 * Callers:
 *     sub_1C0018D98 @ 0x1C0018D98 (sub_1C0018D98.c)
 *     sub_1C0058574 @ 0x1C0058574 (sub_1C0058574.c)
 *     sub_1C00586E8 @ 0x1C00586E8 (sub_1C00586E8.c)
 *     sub_1C00587E4 @ 0x1C00587E4 (sub_1C00587E4.c)
 *     sub_1C005890C @ 0x1C005890C (sub_1C005890C.c)
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 *     sub_1C0058BE0 @ 0x1C0058BE0 (sub_1C0058BE0.c)
 *     sub_1C0059038 @ 0x1C0059038 (sub_1C0059038.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

void __fastcall sub_1C0018E80(__int64 a1, __int64 a2, int a3, int a4, KIRQL NewIrql)
{
  KSPIN_LOCK *v7; // rax
  __int64 v8; // rcx

  v7 = (KSPIN_LOCK *)sub_1C0011220(a2);
  v8 = 4 * (*((unsigned int *)v7 + 447) + 56LL);
  LODWORD(v7[v8]) = a3;
  *((_DWORD *)v7 + 384) = a4;
  LODWORD(v7[v8 + 1]) = a4;
  *((_DWORD *)v7 + 447) = ((unsigned __int8)*((_DWORD *)v7 + 447) + 1) & 7;
  KeReleaseSpinLock(v7 + 256, NewIrql);
}
