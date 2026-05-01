/*
 * XREFs of ?IsUserOOBE@@YA_NXZ @ 0x1801F994C
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E0C40 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801F99F0 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x18034B95C (-IsAnyOOBE@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

char IsUserOOBE(void)
{
  char v0; // bl
  bool v1; // zf
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 4;
  v0 = 0;
  v4 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
          L"LaunchUserOOBE",
          0x10000012u,
          &v4,
          &v3,
          &v5) )
  {
    if ( v4 == 4 )
    {
      v1 = v3 == 1;
      if ( v3 <= 1 )
        return v1;
    }
    else if ( v5 == 4 && (unsigned __int16)(v3 - 48) <= 1u )
    {
      return (_WORD)v3 == 49;
    }
  }
  return v0;
}
