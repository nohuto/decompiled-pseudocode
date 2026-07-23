/*
 * XREFs of _GetLCIDFromLangListNode@12 @ 0x4B2E9857
 * Callers:
 *     _RtlpQueryDefaultUILanguage@8 @ 0x4B2E9760 (_RtlpQueryDefaultUILanguage@8.c)
 * Callees:
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall GetLCIDFromLangListNode(_DWORD *a1, _WORD *a2, _WORD *a3)
{
  int v4; // esi
  _DWORD *v5; // edx
  __int16 v6; // ax
  int v8; // ecx
  __int16 v9; // ax
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-Ch] BYREF
  DWORD Lcid; // [esp+18h] [ebp-4h] BYREF

  v4 = 0;
  Lcid = 0;
  v5 = a1;
  if ( a2 && a3 )
  {
    if ( !a1 )
      v5 = g_RegInfo;
    *a3 = 0;
    switch ( *a2 )
    {
      case 1:
        *a3 = a2[2];
        return v4;
      case 2:
        v6 = *(_WORD *)(28 * (__int16)a2[2] + *(_DWORD *)(v5[5] + 12) + 4);
        *a3 = v6;
        if ( v6 )
          return v4;
        v9 = *(_WORD *)(28 * (__int16)a2[2] + *(_DWORD *)(v5[5] + 12) + 6);
        if ( v9 <= 0 )
          return -1073741595;
        v8 = v9;
        break;
      case 3:
        v8 = (__int16)a2[2];
        break;
      default:
        return -1073741595;
    }
    RtlInitUnicodeString(
      &DestinationString,
      (PCWSTR)(*(_DWORD *)(v5[6] + 16) + 2 * *(__int16 *)(*(_DWORD *)(v5[6] + 12) + 2 * v8)));
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      *a3 = Lcid;
      return v4;
    }
    return -1073741595;
  }
  return -1073741811;
}
