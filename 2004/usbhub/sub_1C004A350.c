/*
 * XREFs of sub_1C004A350 @ 0x1C004A350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

void sub_1C004A350()
{
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0063950);
  if ( byte_1C006B768 )
  {
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    byte_1C006B768 = 0;
  }
}
