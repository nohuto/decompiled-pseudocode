/*
 * XREFs of sub_1801188B4 @ 0x1801188B4
 * Callers:
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_18011FE80 @ 0x18011FE80 (sub_18011FE80.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1801188B4(_OWORD *a1)
{
  HANDLE ProcessHeap; // rax
  char *result; // rax
  __int128 v4; // xmm0

  ProcessHeap = GetProcessHeap();
  result = (char *)HeapAlloc(ProcessHeap, 0, 0xC0uLL);
  *(_QWORD *)result = off_180155C68;
  *(_OWORD *)(result + 8) = *a1;
  *(_OWORD *)(result + 24) = a1[1];
  *(_OWORD *)(result + 40) = a1[2];
  *(_OWORD *)(result + 56) = a1[3];
  *(_OWORD *)(result + 72) = a1[4];
  *(_OWORD *)(result + 88) = a1[5];
  *(_OWORD *)(result + 104) = a1[6];
  v4 = a1[7];
  a1 += 8;
  *(_OWORD *)(result + 120) = v4;
  *(_OWORD *)(result + 136) = *a1;
  *(_OWORD *)(result + 152) = a1[1];
  *(_OWORD *)(result + 168) = a1[2];
  *((_QWORD *)result + 23) = *((_QWORD *)a1 + 6);
  return result;
}
