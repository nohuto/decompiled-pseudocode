/*
 * XREFs of ?HasSSD@ShellFeedsDeviceHelper@@YA_NXZ @ 0x18009B174
 * Callers:
 *     ?GetDeviceConfiguration@ShellFeedsDeviceHelper@@YA?BV?$tuple@W4DeviceType@ShellFeedsDeviceHelper@@_N_KK@std@@XZ @ 0x18009A994 (-GetDeviceConfiguration@ShellFeedsDeviceHelper@@YA-BV-$tuple@W4DeviceType@ShellFeedsDeviceHelper.c)
 *     ?GetDeviceType@ShellFeedsDeviceHelper@@YA?AW4DeviceType@1@XZ @ 0x18009AA3C (-GetDeviceType@ShellFeedsDeviceHelper@@YA-AW4DeviceType@1@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall ShellFeedsDeviceHelper::HasSSD(ShellFeedsDeviceHelper *this)
{
  int v1; // eax
  char v2; // cl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = RtlQueryResourcePolicy(2LL, 0LL, &v4, 4LL);
  v2 = 0;
  if ( v1 >= 0 )
    return v4 >= 20;
  return v2;
}
