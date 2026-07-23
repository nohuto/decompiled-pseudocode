/*
 * XREFs of _RtlpLoadMachineUIByPolicy@12 @ 0x4B2A71E0
 * Callers:
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 * Callees:
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 *     _RtlpMuiRegGrowLanguageList@8 @ 0x4B36B8F3 (_RtlpMuiRegGrowLanguageList@8.c)
 */

NTSTATUS __stdcall RtlpLoadMachineUIByPolicy(int a1, int a2, int *a3)
{
  NTSTATUS v3; // edi
  int v5; // esi
  int LanguageList; // eax
  unsigned __int8 v7; // [esp+Fh] [ebp-29h] BYREF
  __int16 v8; // [esp+10h] [ebp-28h] BYREF
  HANDLE KeyHandle; // [esp+14h] [ebp-24h] BYREF
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-20h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+20h] [ebp-18h] BYREF

  KeyHandle = 0;
  v7 = 0;
  v8 = 0;
  if ( !a2 || !a3 )
  {
    v3 = -1073741811;
    goto LABEL_5;
  }
  if ( !a1 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v3 < 0 )
      goto LABEL_5;
  }
  v3 = RtlpLoadPolicyLanguageSpec(&v7, &v8);
  if ( v3 )
    goto LABEL_5;
  v5 = *a3;
  if ( *a3 )
  {
    if ( *(_WORD *)(v5 + 4) < *(_WORD *)(v5 + 6) )
      goto LABEL_17;
    LanguageList = RtlpMuiRegGrowLanguageList(*a3);
  }
  else
  {
    LanguageList = RtlpMuiRegCreateLanguageList(a2);
  }
  v5 = LanguageList;
  *a3 = LanguageList;
  if ( !LanguageList )
  {
    v3 = -1073741801;
    goto LABEL_5;
  }
LABEL_17:
  *(_WORD *)(6 * *(unsigned __int16 *)(v5 + 4) + *(_DWORD *)(v5 + 16)) = v7;
  *(_WORD *)(6 * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + *(_DWORD *)(*a3 + 16) + 4) = v8;
LABEL_5:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v3;
}
