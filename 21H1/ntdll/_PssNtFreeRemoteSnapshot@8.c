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

int __stdcall PssNtFreeRemoteSnapshot(int a1, int a2)
{
  int result; // eax
  int v3; // [esp+10h] [ebp-3E0h] BYREF
  int v4; // [esp+14h] [ebp-3DCh] BYREF
  int v5; // [esp+18h] [ebp-3D8h] BYREF
  char v6; // [esp+1Ch] [ebp-3D4h]
  int v7; // [esp+308h] [ebp-E8h]
  int v8; // [esp+31Ch] [ebp-D4h]
  int v9; // [esp+32Ch] [ebp-C4h]
  int v10; // [esp+33Ch] [ebp-B4h]
  int v11; // [esp+350h] [ebp-A0h]
  int v12; // [esp+368h] [ebp-88h]

  result = NtReadVirtualMemory(a1, a2, (int)&v5, 976, (int)&v3);
  if ( result >= 0 )
  {
    if ( v3 == 976 )
    {
      if ( v5 == 1146311504 )
      {
        if ( (v6 & 1) == 0 || (v6 & 2) != 0 )
        {
          return -1073741637;
        }
        else
        {
          if ( (v6 & 4) != 0 )
          {
            v4 = *(_DWORD *)(a2 + 776);
            v3 = 0;
            NtFreeVirtualMemory(a1, (int)&v4, (int)&v3, 0x8000);
          }
          if ( v12 )
            ZwDuplicateObject(a1, v12, 0, 0, 0, 0, 1);
          if ( v11 )
            ZwDuplicateObject(a1, v11, 0, 0, 0, 0, 1);
          if ( v9 )
            ZwDuplicateObject(a1, v9, 0, 0, 0, 0, 1);
          if ( v10 )
            ZwDuplicateObject(a1, v10, 0, 0, 0, 0, 1);
          if ( v8 )
            ZwDuplicateObject(a1, v8, 0, 0, 0, 0, 1);
          if ( v7 )
            ZwDuplicateObject(a1, v7, 0, 0, 0, 0, 1);
          v4 = a2;
          v3 = 0;
          NtFreeVirtualMemory(a1, (int)&v4, (int)&v3, 0x8000);
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
