/*
 * XREFs of sub_1C001507C @ 0x1C001507C
 * Callers:
 *     sub_1C0001D70 @ 0x1C0001D70 (sub_1C0001D70.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C0016F40 @ 0x1C0016F40 (sub_1C0016F40.c)
 *     sub_1C0018BE0 @ 0x1C0018BE0 (sub_1C0018BE0.c)
 *     sub_1C0057714 @ 0x1C0057714 (sub_1C0057714.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C003C894 @ 0x1C003C894 (sub_1C003C894.c)
 */

char __fastcall sub_1C001507C(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  char v5; // si
  _DWORD *v6; // rdi
  PIRP v7; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d

  v4 = a3;
  v5 = 0;
  v6 = sub_1C0011220(a2);
  v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 570), 0LL);
  if ( v7 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      sub_1C000F050(a1);
      sub_1C003C894(DeviceObject->DeviceExtension, v9, v10, v11);
    }
    sub_1C000FD80(a1, 16, 2004304720, v4, (__int64)v7);
    if ( (int)v4 >= 0 && (sub_1C000F050(a1)[640] & 0x4000000) != 0 )
      PoSetSystemWake(v7);
    sub_1C0013F80((__int64)v6, 0LL, &stru_1C0061EE8, v4);
    v7->IoStatus.Status = v4;
    IofCompleteRequest(v7, 0);
    sub_1C0014E84(*((_QWORD *)v6 + 105), (ULONG_PTR)v7);
    v5 = 1;
  }
  v6[355] &= ~0x2000u;
  return v5;
}
