/*
 * XREFs of sub_1C000AD70 @ 0x1C000AD70
 * Callers:
 *     sub_1C000ACF0 @ 0x1C000ACF0 (sub_1C000ACF0.c)
 *     sub_1C000DB50 @ 0x1C000DB50 (sub_1C000DB50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C000AD70(wchar_t *Str1, _QWORD *a2)
{
  struct _DEVICE_OBJECT *Flink; // rbx

  Flink = (struct _DEVICE_OBJECT *)DeviceObject.DeviceLock.Header.WaitListHead.Flink;
  if ( DeviceObject.DeviceLock.Header.WaitListHead.Flink == &DeviceObject.DeviceLock.Header.WaitListHead )
    return 3221226752LL;
  while ( wcsicmp(Str1, (const wchar_t *)Flink->NextDevice) )
  {
    Flink = *(struct _DEVICE_OBJECT **)&Flink->Type;
    if ( Flink == (struct _DEVICE_OBJECT *)&DeviceObject.DeviceLock.Header.WaitListHead )
      return 3221226752LL;
  }
  *a2 = (char *)Flink - 8;
  return 0LL;
}
