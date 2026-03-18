/*
 * XREFs of sub_1C002CE78 @ 0x1C002CE78
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 *     sub_1C002D328 @ 0x1C002D328 (sub_1C002D328.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DE04 @ 0x1C002DE04 (sub_1C002DE04.c)
 *     sub_1C002DEC0 @ 0x1C002DEC0 (sub_1C002DEC0.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0037BB4 @ 0x1C0037BB4 (sub_1C0037BB4.c)
 */

__int64 __fastcall sub_1C002CE78(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rbp
  unsigned int v8; // ebx

  v4 = sub_1C000F050(a1);
  v5 = 1;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 30, (__int64)&unk_1C0062088);
  v6 = sub_1C0037BB4(a1, a2);
  if ( !v6 )
    return 3221225473LL;
  if ( (v4[640] & 0x80u) != 0 )
    v5 = *((unsigned __int8 *)sub_1C000F050(a1) + 2938);
  v8 = sub_1C002DEC0(a1, v6, v5);
  sub_1C000FD80(a1, 8, 1768838228, (int)v8, v5);
  sub_1C002DE04(a1, v6, a2, 1212445810LL);
  return v8;
}
