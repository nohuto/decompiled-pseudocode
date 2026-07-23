/*
 * XREFs of IoVolumeDeviceToGuid @ 0x1406F9AC0
 * Callers:
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140610EE0 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1406F9894 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextStart @ 0x1407D02F4 (CmpVolumeContextStart.c)
 * Callees:
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x1406F9B50 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoVolumeDeviceToGuid(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  result = IoVolumeDeviceToGuidPath(a1);
  if ( (int)result >= 0 )
  {
    GuidString.Length = -20;
    GuidString.MaximumLength = -20;
    GuidString.Buffer = (wchar_t *)20;
    v4 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(0LL, 0);
    return v4;
  }
  return result;
}
