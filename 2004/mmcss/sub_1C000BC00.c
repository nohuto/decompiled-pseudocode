/*
 * XREFs of sub_1C000BC00 @ 0x1C000BC00
 * Callers:
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 * Callees:
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 */

NTSTATUS sub_1C000BC00()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1C0005008;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&Handle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  v1 = result;
  if ( result < 0 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xCu, (__int64)&unk_1C0005438, result);
    return v1;
  }
  return result;
}
