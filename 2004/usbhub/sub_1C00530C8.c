/*
 * XREFs of sub_1C00530C8 @ 0x1C00530C8
 * Callers:
 *     sub_1C002C0A0 @ 0x1C002C0A0 (sub_1C002C0A0.c)
 *     sub_1C0037720 @ 0x1C0037720 (sub_1C0037720.c)
 *     sub_1C0038340 @ 0x1C0038340 (sub_1C0038340.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C0055158 @ 0x1C0055158 (sub_1C0055158.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

char __fastcall sub_1C00530C8(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  PDEVICE_OBJECT v6; // rcx
  unsigned __int16 v7; // r9
  __int64 v9; // rcx

  if ( *(_BYTE *)a2 < 0x12u )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return 0;
    v6 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      return 0;
    v7 = 14;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(a2 + 1) != 1 )
  {
    if ( a4 )
      *a4 = -1072693246;
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return 0;
    v6 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      return 0;
    v7 = 15;
LABEL_13:
    sub_1C002E0B4((__int64)v6->DeviceExtension, 0, 1u, v7, (__int64)&unk_1C00651E0);
    return 0;
  }
  if ( *(_BYTE *)(a2 + 4) == 17 && !*(_BYTE *)(a2 + 5) && !*(_BYTE *)(a2 + 6) )
  {
    v9 = *(unsigned __int16 *)(a2 + 2);
    if ( (unsigned __int16)(v9 - 513) > 0xFEu )
    {
      sub_1C000FD80(a1, 256, 1447314481, v9, 0LL);
      return 0;
    }
    if ( a5 )
      *a5 = 1;
  }
  return 1;
}
