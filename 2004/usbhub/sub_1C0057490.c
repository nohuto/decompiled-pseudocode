/*
 * XREFs of sub_1C0057490 @ 0x1C0057490
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0053CC8 @ 0x1C0053CC8 (sub_1C0053CC8.c)
 *     sub_1C0053E00 @ 0x1C0053E00 (sub_1C0053E00.c)
 */

__int64 __fastcall sub_1C0057490(ULONG_PTR a1, IRP *a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  v4 = sub_1C0011220(a1);
  v5 = *((_QWORD *)v4 + 148);
  if ( !v5 )
    sub_1C002DC78(0LL, a1);
  sub_1C000FD80(v5, 256, 1399874671, (__int64)a2, 0LL);
  sub_1C0053CC8(a1, 103, 4);
  v6 = sub_1C0053E00(*((_QWORD *)v4 + 148), a1, &v8);
  sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1936745522, (__int64)a2, v6);
  sub_1C0018990(*((_QWORD *)v4 + 148), a1, 2017740854, 1);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
