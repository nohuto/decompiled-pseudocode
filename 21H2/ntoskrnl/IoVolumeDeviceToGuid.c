/*
 * XREFs of IoVolumeDeviceToGuid @ 0x14068B980
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14068B750 (CmpVolumeManagerGetContextForFile.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     CcGetDeviceGuid @ 0x1407460A4 (CcGetDeviceGuid.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x1407F9FB0 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeContextStart @ 0x140857634 (CmpVolumeContextStart.c)
 * Callees:
 *     IoVolumeDeviceToGuidPath @ 0x14068BA10 (IoVolumeDeviceToGuidPath.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
