/*
 * XREFs of sub_1C0058A58 @ 0x1C0058A58
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 *     sub_1C0018D98 @ 0x1C0018D98 (sub_1C0018D98.c)
 *     sub_1C0030F00 @ 0x1C0030F00 (sub_1C0030F00.c)
 *     sub_1C0058540 @ 0x1C0058540 (sub_1C0058540.c)
 *     sub_1C0059210 @ 0x1C0059210 (sub_1C0059210.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0018E80 @ 0x1C0018E80 (sub_1C0018E80.c)
 *     sub_1C0018EF0 @ 0x1C0018EF0 (sub_1C0018EF0.c)
 *     sub_1C0058574 @ 0x1C0058574 (sub_1C0058574.c)
 *     sub_1C00586E8 @ 0x1C00586E8 (sub_1C00586E8.c)
 *     sub_1C00587E4 @ 0x1C00587E4 (sub_1C00587E4.c)
 *     sub_1C005890C @ 0x1C005890C (sub_1C005890C.c)
 *     sub_1C0058BE0 @ 0x1C0058BE0 (sub_1C0058BE0.c)
 *     sub_1C0059038 @ 0x1C0059038 (sub_1C0059038.c)
 */

__int64 __fastcall sub_1C0058A58(ULONG_PTR a1, __int64 a2, IRP *a3, unsigned int a4, int a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r10d
  unsigned int v13; // ebx
  KIRQL NewIrql; // [rsp+68h] [rbp+20h] BYREF

  NewIrql = 0;
  sub_1C000FD80(a1, 0x10000, 1936934230, (int)a4, (__int64)a3);
  v9 = sub_1C0011220(a2);
  v11 = sub_1C0018EF0(v10, a2, &NewIrql);
  v9[360] = a5;
  sub_1C000FD80(a1, 0x10000, 1936934193, a2, v11);
  switch ( v12 )
  {
    case 0:
      return (unsigned int)sub_1C0058BE0(a1, a2, a3, a4, 0, NewIrql);
    case 1:
      return (unsigned int)sub_1C0059038(a1, a2, a3, a4, 1, NewIrql);
    case 2:
      return (unsigned int)sub_1C005890C(a1, a2, a3, a4, 2, NewIrql);
    case 3:
      return (unsigned int)sub_1C00586E8(a1, a2, (__int64)a3, a4, 3, NewIrql);
    case 4:
      return (unsigned int)sub_1C00587E4(a1, a2, (__int64)a3, a4, 4, NewIrql);
    case 5:
      return (unsigned int)sub_1C0058574(a1, a2, (__int64)a3, a4, 5, NewIrql);
  }
  v13 = -1073741823;
  sub_1C0018E80((unsigned int)(v12 - 4), a2, a4, v12, NewIrql);
  return v13;
}
