/*
 * XREFs of IoVolumeDeviceToGuid @ 0x140687F50
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140687D20 (CmpVolumeManagerGetContextForFile.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x1406DDFA0 (FsRtlVolumeDeviceToCorrelationId.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     CmpVolumeContextStart @ 0x1407BA4C4 (CmpVolumeContextStart.c)
 * Callees:
 *     IoVolumeDeviceToGuidPath @ 0x140687FE0 (IoVolumeDeviceToGuidPath.c)
 *     RtlGUIDFromString @ 0x1406AA8D0 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
