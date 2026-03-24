/*
 * XREFs of IoVolumeDeviceToGuid @ 0x1407221C0
 * Callers:
 *     FsRtlVolumeDeviceToCorrelationId @ 0x1406B1EA0 (FsRtlVolumeDeviceToCorrelationId.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140721F94 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextStart @ 0x1407D0184 (CmpVolumeContextStart.c)
 * Callees:
 *     RtlGUIDFromString @ 0x140644870 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x140722250 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
