/*
 * XREFs of ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C00562BC
 * Callers:
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0055C4C (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall LoadFileContent(HANDLE FileHandle, __int64 a2, __int64 a3, void **a4, unsigned int *a5)
{
  NTSTATUS v7; // eax
  ULONG Length; // esi
  NTSTATUS Status; // ebx
  void *Buffer; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  ULONG v13[4]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v14; // [rsp+70h] [rbp-38h]

  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  IoStatusBlock = 0LL;
  v7 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, v13, 0x18u, FileStandardInformation);
  Length = v13[2];
  Status = v7;
  if ( v7 >= 0 )
  {
    if ( v13[3] || v13[2] - 64 > 0x3FFC0 )
      Status = -1073741672;
    if ( Status >= 0 )
    {
      Buffer = (void *)Win32AllocPool(v13[2], 1953198933LL);
      if ( !Buffer )
        Status = -1073741801;
      if ( Status >= 0 )
      {
        Status = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, (PLARGE_INTEGER)&gZero, 0LL);
        if ( Status >= 0 )
        {
          if ( IoStatusBlock.Status < 0 )
          {
            Status = IoStatusBlock.Status;
LABEL_11:
            if ( Status >= 0 )
            {
              *a4 = Buffer;
              *a5 = Length;
              return (unsigned int)Status;
            }
            goto LABEL_17;
          }
          if ( LODWORD(IoStatusBlock.Information) == Length )
            goto LABEL_11;
          Status = -1073741762;
        }
      }
LABEL_17:
      if ( Buffer )
        Win32FreePool(Buffer);
    }
  }
  return (unsigned int)Status;
}
