/*
 * XREFs of sub_1C0058F24 @ 0x1C0058F24
 * Callers:
 *     sub_1C0058574 @ 0x1C0058574 (sub_1C0058574.c)
 *     sub_1C00586E8 @ 0x1C00586E8 (sub_1C00586E8.c)
 *     sub_1C00587E4 @ 0x1C00587E4 (sub_1C00587E4.c)
 *     sub_1C005890C @ 0x1C005890C (sub_1C005890C.c)
 *     sub_1C0058BE0 @ 0x1C0058BE0 (sub_1C0058BE0.c)
 *     sub_1C0059038 @ 0x1C0059038 (sub_1C0059038.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0013058 @ 0x1C0013058 (sub_1C0013058.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0059528 @ 0x1C0059528 (sub_1C0059528.c)
 */

__int64 __fastcall sub_1C0058F24(__int64 a1, ULONG_PTR a2, IRP *a3, int a4)
{
  __int64 v8; // r9
  int v9; // r10d
  _DWORD *v10; // rbp
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-48h]

  sub_1C000FD80(a1, 0x10000, 1936933744, a4, (__int64)a3);
  if ( a3 )
  {
    v10 = sub_1C0011220(a2);
    sub_1C0013058(a1, a2, (__int64)a3);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C0059528(
        DeviceObject->DeviceExtension,
        *((unsigned __int16 *)v10 + 714),
        v11,
        v12,
        v14,
        *((_WORD *)v10 + 714),
        a2,
        (char)a3,
        a4);
    sub_1C0013F80((__int64)v10, (__int64)a3, &stru_1C0062998, a4);
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
  }
  else
  {
    sub_1C000FD80(a1, v9, 1936933680, v8, 0LL);
  }
  return (unsigned int)a4;
}
