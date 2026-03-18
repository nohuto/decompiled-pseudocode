/*
 * XREFs of sub_1C000B290 @ 0x1C000B290
 * Callers:
 *     sub_1C000A350 @ 0x1C000A350 (sub_1C000A350.c)
 * Callees:
 *     sub_1C0001B60 @ 0x1C0001B60 (sub_1C0001B60.c)
 *     sub_1C0001D30 @ 0x1C0001D30 (sub_1C0001D30.c)
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 */

__int64 __fastcall sub_1C000B290(__int64 a1, _DWORD *a2)
{
  void *v4; // rdi
  NTSTATUS v5; // eax
  unsigned int v6; // esi
  void *FileHandle[2]; // [rsp+88h] [rbp-1A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-190h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-160h] BYREF
  __m128 EaBuffer; // [rsp+E0h] [rbp-148h] BYREF
  void *v12; // [rsp+F0h] [rbp-138h]

  sub_1C0003440(&EaBuffer, 0, 0x118uLL);
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle[0] = 0LL;
  v4 = (void *)sub_1C0001D30(a1);
  FileHandle[1] = v4;
  if ( !v4 )
    return 3221225865LL;
  EaBuffer.m128_i16[3] = 271;
  v12 = v4;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  if ( ExGetPreviousMode() )
    ObjectAttributes.Attributes = 0;
  else
    ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L".0";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = IoCreateFileEx(
         FileHandle,
         0x120089u,
         &ObjectAttributes,
         &IoStatusBlock,
         0LL,
         0,
         0,
         0,
         0,
         &EaBuffer,
         0x118u,
         CreateFileTypeNone,
         0LL,
         0,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x11u, (__int64)&unk_1C00053E8, v5);
  }
  else
  {
    *a2 = FileHandle[0];
  }
  sub_1C0001B60((volatile signed __int64 *)v4);
  return v6;
}
