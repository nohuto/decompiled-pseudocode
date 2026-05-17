/*
 * XREFs of _RtlCreateVirtualAccountSid@16 @ 0x4B3461A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _A_SHAFinal@8 @ 0x4B2E7AE0 (_A_SHAFinal@8.c)
 *     _A_SHAUpdate@12 @ 0x4B2E7BC0 (_A_SHAUpdate@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _A_SHAInit@4 @ 0x4B308A40 (_A_SHAInit@4.c)
 */

signed int __stdcall RtlCreateVirtualAccountSid(unsigned __int16 *a1, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  signed int result; // eax
  int v6; // eax
  UNICODE_STRING UnicodeString; // [esp+8h] [ebp-7Ch] BYREF
  int v8[23]; // [esp+10h] [ebp-74h] BYREF
  int v9[5]; // [esp+6Ch] [ebp-18h] BYREF

  if ( !a1 || !a4 || (unsigned int)(a2 - 80) > 0x1F )
    return -1073741811;
  v4 = *a4;
  *a4 = 32;
  if ( v4 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString((int)&UnicodeString, a1, 1);
  if ( result >= 0 )
  {
    A_SHAInit(v8);
    A_SHAUpdate(v8, (char *)UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v8, (int)v9);
    RtlFreeAnsiString(&UnicodeString);
    RtlInitializeSid((int)a3, (int)&RtlpNtAuthority, 6u);
    v6 = v9[0];
    a3[2] = a2;
    a3[3] = v6;
    a3[4] = v9[1];
    a3[5] = v9[2];
    a3[6] = v9[3];
    a3[7] = v9[4];
    return 0;
  }
  return result;
}
