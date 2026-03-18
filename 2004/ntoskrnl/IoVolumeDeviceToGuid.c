/*
 * XREFs of IoVolumeDeviceToGuid @ 0x14063A3D0
 * Callers:
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14063A1A4 (CmpVolumeManagerGetContextForFile.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140700C30 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeContextStart @ 0x1407BD634 (CmpVolumeContextStart.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x14063A460 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
