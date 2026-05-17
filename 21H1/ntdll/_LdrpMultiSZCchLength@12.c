/*
 * XREFs of _LdrpMultiSZCchLength@12 @ 0x4B35187C
 * Callers:
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlSetProcessPreferredUILanguages@12 @ 0x4B352E10 (_RtlSetProcessPreferredUILanguages@12.c)
 *     _RtlpConvertCultureNamesToLCIDs@8 @ 0x4B353970 (_RtlpConvertCultureNamesToLCIDs@8.c)
 *     _RtlpConvertLCIDsToCultureNames@8 @ 0x4B353B60 (_RtlpConvertLCIDsToCultureNames@8.c)
 * Callees:
 *     _RtlStringCchLengthW@12 @ 0x4B2D415E (_RtlStringCchLengthW@12.c)
 */

int __thiscall LdrpMultiSZCchLength(_WORD *this, unsigned int *a2)
{
  unsigned int *v2; // edx
  int v3; // ebx
  unsigned int v4; // esi
  _WORD *v5; // edi
  __int16 v7; // cx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  v8 = 0;
  v3 = 0;
  v4 = 0;
  v5 = this;
  if ( !a2 )
    return -1073741811;
  if ( this )
  {
    v7 = *this;
    if ( !v7 )
    {
      v4 = 1;
      v7 = *++v5;
    }
    if ( v7 )
    {
      while ( v4 <= 0x7FFFFFFF && RtlStringCchLengthW((int)v5, 0x7FFFFFFF - v4, &v8) >= 0 )
      {
        v4 += v8 + 1;
        v5 += v8 + 1;
        if ( !*v5 )
        {
          v2 = a2;
          goto LABEL_11;
        }
      }
      v2 = a2;
      v3 = -2147483643;
      v4 = 0;
    }
    else
    {
LABEL_11:
      ++v4;
    }
  }
  *v2 = v4;
  return v3;
}
