/*
 * XREFs of sub_1C0051F34 @ 0x1C0051F34
 * Callers:
 *     sub_1C0038340 @ 0x1C0038340 (sub_1C0038340.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0051DDC @ 0x1C0051DDC (sub_1C0051DDC.c)
 *     sub_1C0052440 @ 0x1C0052440 (sub_1C0052440.c)
 */

char *__fastcall sub_1C0051F34(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  int v5; // ebx
  char *result; // rax
  int v7; // r8d
  __int64 v8; // [rsp+90h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = sub_1C0011220(a2);
  if ( ((*((_WORD *)v4 + 701) - 256) & 0xFFEF) == 0 )
    v4[358] &= ~0x200u;
  sub_1C0052440(v4 + 350, &v8, 0LL);
  v5 = v8;
  result = aDqC;
  if ( (v8 & 1) != 0 )
  {
    sub_1C004A608(a1, *((_WORD *)v4 + 714), 0x78u, (char *)v4 + 1400, 0x12u, 0, 1, aDqC, 2571, 0);
    v7 = 1;
  }
  else
  {
    if ( (v8 & 2) == 0 )
      goto LABEL_8;
    sub_1C004A608(a1, *((_WORD *)v4 + 714), 0x78u, (char *)v4 + 1400, 0x12u, 0, 2, aDqC, 2578, 0);
    v7 = 2;
  }
  sub_1C0051DDC(a1, a2, v7);
  result = aDqC;
LABEL_8:
  if ( (v5 & 0x40) != 0 )
    v4[358] |= 0x800u;
  if ( (v5 & 4) != 0 )
  {
    sub_1C004A608(a1, *((_WORD *)v4 + 714), 0x78u, (char *)v4 + 1400, 0x12u, 0, 3, aDqC, 2596, 0);
    result = (char *)sub_1C0051DDC(a1, a2, 3);
  }
  if ( (v5 & 8) != 0 )
  {
    sub_1C004A608(a1, *((_WORD *)v4 + 714), 0x78u, (char *)v4 + 1400, 0x12u, 0, 10, aDqC, 2607, 0);
    result = (char *)sub_1C0051DDC(a1, a2, 10);
  }
  if ( (v5 & 0x10) != 0 )
  {
    sub_1C004A608(a1, *((_WORD *)v4 + 714), 0x78u, (char *)v4 + 1400, 0x12u, 0, 5, aDqC, 2618, 0);
    result = (char *)sub_1C0051DDC(a1, a2, 5);
  }
  if ( (v5 & 0x20) != 0 )
  {
    sub_1C004A608(a1, *((_WORD *)v4 + 714), 0x78u, (char *)v4 + 1400, 0x12u, 0, 7, aDqC, 2629, 0);
    result = (char *)sub_1C0051DDC(a1, a2, 7);
  }
  if ( (*(_QWORD *)&v5 & 0x200000LL) != 0 )
  {
    sub_1C004A608(a1, *((_WORD *)v4 + 714), 0x78u, (char *)v4 + 1400, 0x12u, 0, 11, aDqC, 2639, 0);
    result = (char *)sub_1C0051DDC(a1, a2, 11);
  }
  if ( (v5 & 0x8000000) != 0 )
  {
    sub_1C004A608(a1, *((_WORD *)v4 + 714), 0x78u, (char *)v4 + 1400, 0x12u, 0, 12, aDqC, 2649, 0);
    return (char *)sub_1C0051DDC(a1, a2, 12);
  }
  return result;
}
