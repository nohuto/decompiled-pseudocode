/*
 * XREFs of _RtlpHasMachineUILock@8 @ 0x4B36ABB1
 * Callers:
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall RtlpHasMachineUILock(void *a1, _BYTE *a2)
{
  int v4; // ecx
  int result; // eax
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-14h] BYREF
  int v7; // [esp+14h] [ebp-Ch] BYREF
  ULONG v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v9 = -1;
  v7 = 4;
  v8 = 4;
  if ( !a2 || !a1 )
    return -1073741811;
  *a2 = 0;
  RtlInitUnicodeString(&DestinationString, L"MachineUILock");
  result = LdrpQueryValueKey(a1, &DestinationString, &v7, &v9, &v8, v4);
  if ( result >= 0 )
  {
    if ( v9 == 1 )
    {
      *a2 = 1;
    }
    else if ( v9 )
    {
      return -1073741823;
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
