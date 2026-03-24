/*
 * XREFs of FsRtlVolumeDeviceToCorrelationId @ 0x1406B1EA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406B2330 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuid @ 0x1407221C0 (IoVolumeDeviceToGuid.c)
 */

__int64 __fastcall FsRtlVolumeDeviceToCorrelationId(struct _DEVICE_OBJECT *a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  result = FsRtlIssueDeviceIoControl(a1, 0x4D0018u, 0, &v5, 0x10u, 0LL);
  if ( (int)result < 0 )
    return IoVolumeDeviceToGuid(a1, a2);
  *a2 = v5;
  return result;
}
