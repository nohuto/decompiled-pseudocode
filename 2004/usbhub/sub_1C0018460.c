/*
 * XREFs of sub_1C0018460 @ 0x1C0018460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00183BC @ 0x1C00183BC (sub_1C00183BC.c)
 *     sub_1C0018570 @ 0x1C0018570 (sub_1C0018570.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0018460(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // rax

  v6 = 10;
  v7 = sub_1C0011220(a3);
  if ( (v7[706] & 0x80u) != 0 )
    v6 = *(unsigned __int8 *)(*((_QWORD *)v7 + 357) + 4LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 37, (__int64)&unk_1C0062100, *(_WORD *)(a2 + 4));
  sub_1C000FD80(a1, 1024, 1884443469, a2, 0LL);
  sub_1C000FD80(a1, 8, 2002872692, v6, 0LL);
  sub_1C0018570(v6);
  sub_1C00015A0(a1, a2);
  sub_1C00183BC(a1, a3);
  return 0LL;
}
