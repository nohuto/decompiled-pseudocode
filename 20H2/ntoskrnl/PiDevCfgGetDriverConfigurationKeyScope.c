/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x14050C5A8
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14073EA70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408AA078 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  const wchar_t **i; // rsi

  v1 = 0;
  v2 = 0;
  for ( i = (const wchar_t **)&off_140987640; wcsicmp(*i, Str2); i += 2 )
  {
    if ( ++v2 >= 7 )
      return v1;
  }
  return *((unsigned int *)&off_140987640 + 4 * v2 + 2);
}
