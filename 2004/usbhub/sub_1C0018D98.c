/*
 * XREFs of sub_1C0018D98 @ 0x1C0018D98
 * Callers:
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C0018BE0 @ 0x1C0018BE0 (sub_1C0018BE0.c)
 *     sub_1C0057714 @ 0x1C0057714 (sub_1C0057714.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0018E80 @ 0x1C0018E80 (sub_1C0018E80.c)
 *     sub_1C0018EF0 @ 0x1C0018EF0 (sub_1C0018EF0.c)
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 */

void __fastcall sub_1C0018D98(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rsi
  struct _KEVENT *v7; // r14
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // r9d
  PIRP v11; // rsi
  KIRQL NewIrql; // [rsp+20h] [rbp-28h]
  KIRQL v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = a3;
  v13 = 0;
  v6 = sub_1C0011220(a2);
  v7 = (struct _KEVENT *)(v6 + 514);
  KeWaitForSingleObject(v6 + 514, Executive, 0, 0, 0LL);
  v10 = sub_1C0018EF0(v8, a2, &v13);
  NewIrql = v13;
  if ( v10 == 2 )
  {
    v6[360] = v4;
    v10 = 3;
  }
  sub_1C0018E80(v9, a2, 9, v10, NewIrql);
  v11 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 366), 0LL);
  KeSetEvent(v7, 0, 0);
  sub_1C000FD80(a1, 16, 1668303172, v4, (__int64)v11);
  if ( v11 )
    sub_1C0058A58(a1, a2, v11, 5LL, v4);
}
