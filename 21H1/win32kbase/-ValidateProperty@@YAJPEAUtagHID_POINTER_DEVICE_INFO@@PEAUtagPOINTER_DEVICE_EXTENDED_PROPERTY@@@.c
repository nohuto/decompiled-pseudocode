/*
 * XREFs of ?ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@Z @ 0x1C0174034
 * Callers:
 *     RIMGetExtendedPointerDeviceProperty @ 0x1C0174058 (RIMGetExtendedPointerDeviceProperty.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1C0174204 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateProperty(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(int *)a2 >= 4 || *(_DWORD *)a2 <= 3u && *((_DWORD *)a1 + 6) != 7 )
    return 3221225485LL;
  return result;
}
