/*
 * XREFs of _PssNtFreeRemoteSnapshot@8 @ 0x4B386950
 * Callers:
 *     _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365 (_PsspDuplicateSnapshotRemoteToRemote@20.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall PssNtFreeRemoteSnapshot(HANDLE ProcessHandle, _DWORD *BaseAddress)
{
  NTSTATUS result; // eax
  SIZE_T v3; // [esp-8h] [ebp-3F8h]
  ULONG_PTR *v4; // [esp+0h] [ebp-3F0h]
  ULONG_PTR RegionSize; // [esp+10h] [ebp-3E0h] BYREF
  int Buffer; // [esp+18h] [ebp-3D8h] BYREF
  char v7; // [esp+1Ch] [ebp-3D4h]
  HANDLE v8; // [esp+308h] [ebp-E8h]
  HANDLE v9; // [esp+31Ch] [ebp-D4h]
  HANDLE v10; // [esp+32Ch] [ebp-C4h]
  HANDLE v11; // [esp+33Ch] [ebp-B4h]
  HANDLE v12; // [esp+350h] [ebp-A0h]
  HANDLE SourceHandle; // [esp+368h] [ebp-88h]

  HIDWORD(v3) = &RegionSize;
  LODWORD(v3) = 976;
  result = NtReadVirtualMemory(ProcessHandle, BaseAddress, &Buffer, v3, v4);
  if ( result >= 0 )
  {
    if ( (_DWORD)RegionSize == 976 )
    {
      if ( Buffer == 1146311504 )
      {
        if ( (v7 & 1) == 0 || (v7 & 2) != 0 )
        {
          return -1073741637;
        }
        else
        {
          if ( (v7 & 4) != 0 )
          {
            HIDWORD(RegionSize) = BaseAddress[194];
            LODWORD(RegionSize) = 0;
            NtFreeVirtualMemory(ProcessHandle, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
          }
          if ( SourceHandle )
            ZwDuplicateObject(ProcessHandle, SourceHandle, 0, 0, 0, 0, 1u);
          if ( v12 )
            ZwDuplicateObject(ProcessHandle, v12, 0, 0, 0, 0, 1u);
          if ( v10 )
            ZwDuplicateObject(ProcessHandle, v10, 0, 0, 0, 0, 1u);
          if ( v11 )
            ZwDuplicateObject(ProcessHandle, v11, 0, 0, 0, 0, 1u);
          if ( v9 )
            ZwDuplicateObject(ProcessHandle, v9, 0, 0, 0, 0, 1u);
          if ( v8 )
            ZwDuplicateObject(ProcessHandle, v8, 0, 0, 0, 0, 1u);
          HIDWORD(RegionSize) = BaseAddress;
          LODWORD(RegionSize) = 0;
          NtFreeVirtualMemory(ProcessHandle, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
          return 0;
        }
      }
      else
      {
        return -1073741816;
      }
    }
    else
    {
      return -2147483635;
    }
  }
  return result;
}
