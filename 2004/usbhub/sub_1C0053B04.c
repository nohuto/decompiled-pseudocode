/*
 * XREFs of sub_1C0053B04 @ 0x1C0053B04
 * Callers:
 *     sub_1C00378B0 @ 0x1C00378B0 (sub_1C00378B0.c)
 *     sub_1C0050D78 @ 0x1C0050D78 (sub_1C0050D78.c)
 *     sub_1C0051210 @ 0x1C0051210 (sub_1C0051210.c)
 *     sub_1C00513E0 @ 0x1C00513E0 (sub_1C00513E0.c)
 * Callees:
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

char __fastcall sub_1C0053B04(__int64 a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // r10d
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // r9
  int v7; // r10d

  v4 = *a2;
  if ( v4 > a3 )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return 0;
    v5 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      return 0;
    v6 = 10;
LABEL_19:
    sub_1C002E0B4((__int64)v5->DeviceExtension, 0, 1u, v6, (__int64)&unk_1C00651E0);
    return 0;
  }
  if ( (unsigned __int8)v4 <= 2u )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return 0;
    v5 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      return 0;
    v6 = 11;
    goto LABEL_19;
  }
  if ( a2[1] != 3 )
  {
    if ( a4 )
      *a4 = -1072693246;
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return 0;
    v5 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      return 0;
    v6 = 12;
    goto LABEL_19;
  }
  v7 = v4 & 1;
  if ( v7 )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xDu, (__int64)&unk_1C00651E0, v7);
    return 0;
  }
  return 1;
}
