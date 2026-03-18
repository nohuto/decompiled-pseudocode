/*
 * XREFs of CiNdisOpenDevice @ 0x1C000BC00
 * Callers:
 *     CsInitialize @ 0x1C000D150 (CsInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0004604 (WPP_SF_d.c)
 */

NTSTATUS CiNdisOpenDevice()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CiNdisDevceName;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&CiNdisDeviceHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  v1 = result;
  if ( result < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_2e7d29089cc4338084159b62f80c9285_Traceguids,
        result);
    return v1;
  }
  return result;
}
