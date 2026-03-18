/*
 * XREFs of sub_1C00413CC @ 0x1C00413CC
 * Callers:
 *     sub_1C0041990 @ 0x1C0041990 (sub_1C0041990.c)
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C00413CC(__int64 a1)
{
  _DWORD *v2; // rbx
  int v3; // eax
  unsigned int v4; // r10d

  v2 = sub_1C000F050(a1);
  *((_QWORD *)v2 + 315) = v2 + 628;
  *((_QWORD *)v2 + 314) = v2 + 628;
  KeInitializeEvent((PRKEVENT)(v2 + 622), NotificationEvent, 0);
  *((_BYTE *)v2 + 2480) = 1;
  v3 = sub_1C0001AE8(a1, a1, 1329874536);
  if ( (v3 & 0xC0000000) == 0xC0000000 )
    *((_BYTE *)v2 + 2480) = 0;
  sub_1C000FD80(a1, 8, 1919315023, 0LL, v3);
  return v4;
}
