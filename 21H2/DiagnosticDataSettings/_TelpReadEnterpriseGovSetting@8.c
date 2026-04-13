/*
 * XREFs of _TelpReadEnterpriseGovSetting@8 @ 0x10002B1F
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x10002EA6 (TelpEvaluateWithoutLicenseCheck.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

signed int __fastcall TelpReadEnterpriseGovSetting(_BYTE *a1, unsigned int *a2)
{
  FARPROC NtQuerySecurityPolicy; // edi
  signed int v3; // ebx
  HMODULE Library; // eax
  HMODULE v5; // esi
  _WORD v7[2]; // [esp+Ch] [ebp-34h] BYREF
  const wchar_t *v8; // [esp+10h] [ebp-30h]
  _WORD v9[2]; // [esp+14h] [ebp-2Ch] BYREF
  const wchar_t *v10; // [esp+18h] [ebp-28h]
  _WORD v11[2]; // [esp+1Ch] [ebp-24h] BYREF
  const wchar_t *v12; // [esp+20h] [ebp-20h]
  _BYTE *v13; // [esp+24h] [ebp-1Ch]
  int v14; // [esp+28h] [ebp-18h] BYREF
  int v15; // [esp+2Ch] [ebp-14h] BYREF
  int v16; // [esp+30h] [ebp-10h] BYREF
  unsigned int *v17; // [esp+34h] [ebp-Ch]
  unsigned int v18; // [esp+38h] [ebp-8h] BYREF
  int v19; // [esp+3Ch] [ebp-4h] BYREF

  v17 = a2;
  v13 = a1;
  NtQuerySecurityPolicy = 0;
  *a1 = 1;
  v3 = 0;
  v18 = 0;
  v7[1] = 48;
  v9[1] = 48;
  v11[0] = 20;
  v15 = 4;
  v7[0] = 46;
  v8 = L"Reserved.PlatformSigned";
  v9[0] = 46;
  v10 = L"CodeIntegrity.Telemetry";
  v11[1] = 22;
  v12 = L"OptInLevel";
  Library = LoadLibraryExW(L"ntdll.dll", 0, 0x800u);
  v5 = Library;
  if ( Library )
    NtQuerySecurityPolicy = GetProcAddress(Library, "NtQuerySecurityPolicy");
  v19 = 0;
  v16 = 4;
  NtQueryLicenseValue(&unk_10005008, 0, &v19, 4, &v16);
  if ( (v19 == 171 || v19 == 172) && NtQuerySecurityPolicy )
  {
    v3 = (unsigned int)&_ImageBase | ((int (__thiscall *)(FARPROC, _WORD *, _WORD *, _WORD *, int *, unsigned int *, int *))NtQuerySecurityPolicy)(
                                       NtQuerySecurityPolicy,
                                       v7,
                                       v9,
                                       v11,
                                       &v14,
                                       &v18,
                                       &v15);
    if ( v3 >= 0 )
    {
      if ( v14 == 1 && v18 <= 3 )
        *v17 = v18;
      else
        *v17 = 0;
    }
  }
  else
  {
    *v13 = 0;
  }
  if ( v5 )
    FreeLibrary(v5);
  return v3;
}
