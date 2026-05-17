/*
 * XREFs of _RtlpIsAppContainer@8 @ 0x4B3490A6
 * Callers:
 *     _RtlpCapabilityCheckSystemCapability@12 @ 0x4B2EF5A6 (_RtlpCapabilityCheckSystemCapability@12.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _NtOpenThreadTokenEx@20 @ 0x4B2F2C70 (_NtOpenThreadTokenEx@20.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpIsAppContainer(HANDLE a1, bool *a2)
{
  int InformationToken; // esi
  _DWORD v5[6]; // [esp+10h] [ebp-38h] BYREF
  int v6; // [esp+28h] [ebp-20h] BYREF
  int v7; // [esp+2Ch] [ebp-1Ch] BYREF
  HANDLE Handle; // [esp+30h] [ebp-18h] BYREF
  HANDLE v9; // [esp+34h] [ebp-14h] BYREF
  _DWORD v10[2]; // [esp+38h] [ebp-10h] BYREF
  __int16 v11; // [esp+40h] [ebp-8h]

  v9 = 0;
  *a2 = 0;
  if ( a1 )
  {
LABEL_7:
    v7 = 0;
    InformationToken = ZwQueryInformationToken((int)a1, 29, (int)&v6, 4, (int)&v7);
    if ( InformationToken >= 0 )
      *a2 = v6 != 0;
    goto LABEL_9;
  }
  InformationToken = NtOpenThreadTokenEx(-2, 8, 1, 0, (int)&v9);
  if ( InformationToken == -1073741700 )
  {
    InformationToken = ZwOpenProcessTokenEx(-1, 10, 0, (int)&Handle);
    if ( InformationToken < 0 )
      goto LABEL_9;
    v5[0] = 24;
    v5[5] = v10;
    memset(&v5[1], 0, 16);
    v10[0] = 12;
    v10[1] = 2;
    v11 = 1;
    InformationToken = NtDuplicateToken((int)Handle, 8, (int)v5, 0, 2, (int)&v9);
    NtClose(Handle);
  }
  if ( InformationToken >= 0 )
  {
    a1 = v9;
    goto LABEL_7;
  }
LABEL_9:
  if ( v9 )
    NtClose(v9);
  return InformationToken;
}
