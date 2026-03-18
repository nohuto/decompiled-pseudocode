/*
 * XREFs of sub_1C005A09C @ 0x1C005A09C
 * Callers:
 *     sub_1C002DCC0 @ 0x1C002DCC0 (sub_1C002DCC0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

int __fastcall sub_1C005A09C(__int64 a1)
{
  PVOID *v2; // rax
  PVOID *v3; // rbx

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x16u, (__int64)&unk_1C0062110);
  v2 = (PVOID *)sub_1C000F050(a1);
  v3 = v2;
  if ( *((_DWORD *)v2 + 1310) )
  {
    LODWORD(v2) = PoUnregisterPowerSettingCallback(v2[656]);
    if ( (int)v2 >= 0 )
      *((_DWORD *)v3 + 1310) = 0;
  }
  return (int)v2;
}
