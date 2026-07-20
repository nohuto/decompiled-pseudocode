/*
 * XREFs of SmpQueryVolumeFreeSpace @ 0x14001341C
 * Callers:
 *     SmpGetDumpDestination @ 0x140012D08 (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQueryVolumeFreeSpace(__m128i *a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax
  int v4; // r8d
  __int16 *v5; // rcx
  __int16 v6; // ax
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  void *FileHandle; // [rsp+30h] [rbp-29h] BYREF
  __m128i v10; // [rsp+38h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  _BYTE FsInformation[8]; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+90h] [rbp+37h]
  unsigned int v15; // [rsp+98h] [rbp+3Fh]
  unsigned int v16; // [rsp+9Ch] [rbp+43h]

  v3 = _mm_cvtsi128_si32(*a1);
  v10 = *a1;
  v4 = v3;
  v5 = (__int16 *)_mm_srli_si128(v10, 8).m128i_u64[0];
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = *v5++;
      if ( v6 == 58 && *v5 == 92 )
        break;
      v4 -= 2;
      if ( !v4 )
        goto LABEL_7;
    }
    LOWORD(v5) = (_WORD)v5 + 2;
  }
LABEL_7:
  ObjectAttributes.RootDirectory = 0LL;
  v10.m128i_i16[0] = (_WORD)v5 - v10.m128i_i16[4];
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  if ( result >= 0 )
  {
    v8 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    NtClose(FileHandle);
    if ( v8 >= 0 )
    {
      result = 0;
      *a2 = v14 * v15 * (unsigned __int64)v16;
    }
    else
    {
      return v8;
    }
  }
  return result;
}
