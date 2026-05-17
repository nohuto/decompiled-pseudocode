/*
 * XREFs of _RtlStringCbLengthW@12 @ 0x4B3475AA
 * Callers:
 *     _RtlpPopulateLanguageConfigList@12 @ 0x4B2AD962 (_RtlpPopulateLanguageConfigList@12.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 *     _RtlpConvertAbsoluteToRelativeSecurityAttribute@12 @ 0x4B34B9A0 (_RtlpConvertAbsoluteToRelativeSecurityAttribute@12.c)
 *     _RtlpConvertRelativeToAbsoluteSecurityAttribute@16 @ 0x4B34BDB0 (_RtlpConvertRelativeToAbsoluteSecurityAttribute@16.c)
 *     _RtlpIsAttributeAceInSacl@16 @ 0x4B34C479 (_RtlpIsAttributeAceInSacl@16.c)
 *     _RtlpValidRelativeAttribute@8 @ 0x4B34CD2B (_RtlpValidRelativeAttribute@8.c)
 * Callees:
 *     RtlStringLengthWorkerW_0 @ 0x4B3476B3 (RtlStringLengthWorkerW_0.c)
 */

int __thiscall RtlStringCbLengthW(void *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // edx
  int v5; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  v5 = 0;
  if ( this )
  {
    v3 = RtlStringLengthWorkerW_0(&v5);
    v2 = v5;
  }
  else
  {
    v3 = -1073741811;
  }
  if ( a2 )
  {
    if ( v3 < 0 )
      *a2 = 0;
    else
      *a2 = 2 * v2;
  }
  return v3;
}
