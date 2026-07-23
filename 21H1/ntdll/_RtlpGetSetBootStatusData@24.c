/*
 * XREFs of _RtlpGetSetBootStatusData@24 @ 0x4B350EC6
 * Callers:
 *     _RtlGetSetBootStatusData@24 @ 0x4B350A70 (_RtlGetSetBootStatusData@24.c)
 * Callees:
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     _RtlBootStatusItemInfo@12 @ 0x4B3507A8 (_RtlBootStatusItemInfo@12.c)
 *     _RtlpRecordBootStatusData@16 @ 0x4B350F8B (_RtlpRecordBootStatusData@16.c)
 */

NTSTATUS __fastcall RtlpGetSetBootStatusData(
        HANDLE FileHandle,
        char a2,
        unsigned int a3,
        PVOID a4,
        ULONG a5,
        unsigned int *a6)
{
  NTSTATUS result; // eax
  ULONG v9; // edi
  NTSTATUS v10; // esi
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-18h] BYREF
  LARGE_INTEGER ByteOffset; // [esp+14h] [ebp-10h] BYREF
  unsigned int Buffer; // [esp+1Ch] [ebp-8h] BYREF
  ULONG Length; // [esp+20h] [ebp-4h] BYREF

  ByteOffset.QuadPart = 0LL;
  result = NtReadFile(FileHandle, 0, 0, 0, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0);
  if ( result >= 0 )
  {
    result = RtlBootStatusItemInfo(a3, &ByteOffset, &Length);
    if ( result >= 0 )
    {
      v9 = Length;
      ByteOffset.HighPart = 0;
      if ( ByteOffset.LowPart + (unsigned __int64)Length <= Buffer )
      {
        if ( a5 >= Length )
        {
          if ( a2 )
          {
            v10 = NtReadFile(FileHandle, 0, 0, 0, &IoStatusBlock, a4, Length, &ByteOffset, 0);
          }
          else
          {
            v10 = NtWriteFile(FileHandle, 0, 0, 0, &IoStatusBlock, a4, Length, &ByteOffset, 0);
            RtlpRecordBootStatusData(ByteOffset.LowPart, v9);
          }
          if ( v10 >= 0 )
          {
            if ( a6 )
              *a6 = IoStatusBlock.Information;
          }
          return v10;
        }
        else
        {
          return -1073741789;
        }
      }
      else
      {
        return -1073741735;
      }
    }
  }
  return result;
}
