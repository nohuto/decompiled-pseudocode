/*
 * XREFs of CsqCompleteCanceledIrp @ 0x1C001CD00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C003C9C8 @ 0x1C003C9C8 (sub_1C003C9C8.c)
 */

void __fastcall CsqCompleteCanceledIrp(char *Csq, PIRP Irp)
{
  char *v2; // rbx
  int v4; // r8d
  int v5; // r9d
  __int16 v6; // r10
  int v7; // [rsp+20h] [rbp-28h]

  v2 = Csq - 2280;
  sub_1C000FD80(*((_QWORD *)Csq - 137), 16, 2004304705, (__int64)Irp, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != v6 )
    sub_1C003C9C8(
      DeviceObject->DeviceExtension,
      *((unsigned __int16 *)v2 + 714),
      v4,
      v5,
      v7,
      *((_WORD *)v2 + 714),
      *((_QWORD *)v2 + 105),
      (char)Irp);
  sub_1C0013F80((__int64)v2, 0LL, &stru_1C0061EE8, -1073741536);
  Irp->IoStatus.Status = -1073741536;
  IofCompleteRequest(Irp, 0);
  sub_1C0014E84(*((_QWORD *)v2 + 105), (ULONG_PTR)Irp);
}
