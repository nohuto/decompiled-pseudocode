/*
 * XREFs of _RtlImpersonateSelfEx@12 @ 0x4B2EBF70
 * Callers:
 *     _RtlImpersonateSelf@4 @ 0x4B2EBF50 (_RtlImpersonateSelf@4.c)
 *     _RtlAcquirePrivilege@16 @ 0x4B345D20 (_RtlAcquirePrivilege@16.c)
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlImpersonateSelfEx(int a1, int a2, HANDLE *a3)
{
  int v3; // esi
  _DWORD v5[6]; // [esp+10h] [ebp-34h] BYREF
  HANDLE v6; // [esp+28h] [ebp-1Ch] BYREF
  HANDLE Handle; // [esp+2Ch] [ebp-18h] BYREF
  _DWORD v8[2]; // [esp+30h] [ebp-14h] BYREF
  __int16 v9; // [esp+38h] [ebp-Ch]

  if ( !a3 && a2 )
    return -1073741584;
  v8[1] = a1;
  v5[0] = 24;
  v5[5] = v8;
  v5[1] = 0;
  v5[3] = 512;
  v5[2] = 0;
  v5[4] = 0;
  v8[0] = 12;
  v9 = 1;
  v3 = ZwOpenProcessTokenEx(-1, 2, 512, &v6);
  if ( v3 >= 0 )
  {
    v3 = NtDuplicateToken(v6, a2 | 4, v5, 0, 2, &Handle);
    if ( v3 >= 0 )
    {
      v3 = ZwSetInformationThread(-2, 5, &Handle, 4);
      if ( v3 >= 0 && a3 )
        *a3 = Handle;
      else
        NtClose(Handle);
    }
    NtClose(v6);
  }
  return v3;
}
