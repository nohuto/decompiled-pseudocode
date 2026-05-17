/*
 * XREFs of _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0
 * Callers:
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _SHA256Final@8 @ 0x4B2EE630 (_SHA256Final@8.c)
 *     _SHA256Init@4 @ 0x4B2EE6E0 (_SHA256Init@4.c)
 *     _SHA256Update@12 @ 0x4B2EE726 (_SHA256Update@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlDeriveCapabilitySidsFromName(unsigned __int16 *a1, char *a2, char *a3)
{
  int result; // eax
  int v4; // esi
  unsigned __int16 *v5; // edi
  unsigned int v6; // [esp+Ch] [ebp-9Ch]
  UNICODE_STRING UnicodeString; // [esp+10h] [ebp-98h] BYREF
  _BYTE v8[108]; // [esp+18h] [ebp-90h] BYREF
  _BYTE v9[32]; // [esp+84h] [ebp-24h] BYREF

  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  memset(a3, 0, 0x30u);
  memset(a2, 0, 0x2Cu);
  result = RtlUpcaseUnicodeString((int)&UnicodeString, a1, 1);
  if ( result >= 0 )
  {
    SHA256Init(v8);
    SHA256Update(UnicodeString.Length);
    SHA256Final(v8, v9);
    RtlInitializeSid((int)a2, (int)&RtlpNtAuthority, 9u);
    *((_DWORD *)a2 + 2) = 32;
    qmemcpy(a2 + 12, v9, 0x20u);
    v4 = 0;
    v5 = (unsigned __int16 *)&RtlpLegacyApplicationCapabilityNames;
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( RtlEqualUnicodeString(&UnicodeString.Length, v5, 0) )
        break;
      ++v4;
      v5 += 4;
      if ( v6 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid((int)a3, (int)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)a3 + 2) = 3;
    *((_DWORD *)a3 + 3) = v6;
LABEL_8:
    RtlFreeAnsiString(&UnicodeString);
    if ( v4 == 12 )
    {
      RtlInitializeSid((int)a3, (int)&RtlpAppPackageAuthority, 0xAu);
      *((_DWORD *)a3 + 2) = 3;
      *((_DWORD *)a3 + 3) = 1024;
      qmemcpy(a3 + 16, v9, 0x20u);
    }
    return 0;
  }
  return result;
}
