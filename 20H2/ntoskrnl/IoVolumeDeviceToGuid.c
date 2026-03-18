/*
 * XREFs of IoVolumeDeviceToGuid @ 0x1405DD520
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x1405DD2FC (CmpVolumeManagerGetContextForFile.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x1406D4360 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeContextStart @ 0x1407CBEC4 (CmpVolumeContextStart.c)
 * Callees:
 *     IoVolumeDeviceToGuidPath @ 0x1405DD5B0 (IoVolumeDeviceToGuidPath.c)
 *     RtlGUIDFromString @ 0x1406409E0 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
