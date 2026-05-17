/*
 * XREFs of _RtlCopyUnicodeString@8 @ 0x4B2D5EF0
 * Callers:
 *     _LdrGetDllDirectory@4 @ 0x4B2AAD90 (_LdrGetDllDirectory@4.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774 (_RtlpComputeLangListCheckSum@4.c)
 *     _EtwpQueryUmLogger@16 @ 0x4B2ED9ED (_EtwpQueryUmLogger@16.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

unsigned int __stdcall RtlCopyUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2)
{
  const void *v2; // edx
  size_t v3; // esi
  void *v4; // ebx
  unsigned int result; // eax

  if ( a2 )
  {
    v2 = (const void *)*((_DWORD *)a2 + 1);
    v3 = *a2;
    v4 = (void *)*((_DWORD *)a1 + 1);
    if ( (unsigned __int16)v3 > a1[1] )
      v3 = a1[1];
    *a1 = v3;
    memcpy(v4, v2, v3);
    result = a1[1];
    if ( (unsigned int)*a1 + 2 <= result )
    {
      result = 0;
      *((_WORD *)v4 + (v3 >> 1)) = 0;
    }
  }
  else
  {
    result = (unsigned int)a1;
    *a1 = 0;
  }
  return result;
}
