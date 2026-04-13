/*
 * XREFs of ?StringCchCatW@@YGJPAGIPBG@Z @ 0x10003317
 * Callers:
 *     _TelpReadUsersPolicySetting@12 @ 0x10002C36 (_TelpReadUsersPolicySetting@12.c)
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 *     _TelGetRegionalSettingsValue@12 @ 0x10003210 (_TelGetRegionalSettingsValue@12.c)
 * Callees:
 *     StringCopyWorkerW @ 0x10003769 (StringCopyWorkerW.c)
 */

HRESULT __userpurge StringCchCatW@<eax>(
        _WORD *a1@<ecx>,
        unsigned __int16 *cchDest,
        unsigned int a3,
        const unsigned __int16 *a4)
{
  int v5; // ecx
  _WORD *v6; // eax
  HRESULT result; // eax
  const wchar_t *v8; // [esp+0h] [ebp-8h]
  size_t v9; // [esp+4h] [ebp-4h]

  v5 = 260;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 != 0 ? 0 : -2147024809;
  if ( v5 )
    return StringCopyWorkerW((STRSAFE_LPWSTR)v5, (size_t)cchDest, (size_t *)v5, v8, v9);
  return result;
}
