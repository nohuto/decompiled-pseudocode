/*
 * XREFs of _GetNameFromLangListNode@12 @ 0x4B2D4413
 * Callers:
 *     _RtlpMUIRegPatchLicenseInfortmation@4 @ 0x4B2D427F (_RtlpMUIRegPatchLicenseInfortmation@4.c)
 *     RtlpAddNeutralsToMergedList @ 0x4B2D44A1 (RtlpAddNeutralsToMergedList.c)
 *     RtlGetNeutralFallback @ 0x4B2D4663 (RtlGetNeutralFallback.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlpFilterandReplaceConsoleLanguages@20 @ 0x4B2D62B9 (_RtlpFilterandReplaceConsoleLanguages@20.c)
 * Callees:
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall GetNameFromLangListNode(int a1, _WORD *a2, PUNICODE_STRING DestinationString)
{
  int v4; // esi
  int v6; // ecx
  int v7; // eax
  LCID v8; // edi
  __int16 v9; // ax
  int v10; // ecx
  BOOLEAN v12; // al

  v4 = 0;
  if ( a1 && a2 && DestinationString )
  {
    if ( *a2 != 1 )
    {
      if ( *a2 == 2 )
      {
        v6 = 28 * (__int16)a2[2];
        v7 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 12);
        v8 = *(unsigned __int16 *)(v6 + v7 + 4);
        v9 = *(_WORD *)(v6 + v7 + 6);
        if ( v9 > 0 )
        {
          v10 = v9;
LABEL_8:
          RtlInitUnicodeString(
            DestinationString,
            (PCWSTR)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 16)
                   + 2 * *(__int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) + 2 * v10)));
          return v4;
        }
        if ( (_WORD)v8 )
        {
          v12 = RtlLCIDToCultureName(v8, DestinationString);
LABEL_11:
          if ( v12 )
            return v4;
        }
      }
      else if ( *a2 == 3 )
      {
        v10 = (__int16)a2[2];
        goto LABEL_8;
      }
      return -1073741595;
    }
    v12 = RtlLCIDToCultureName((__int16)a2[2], DestinationString);
    goto LABEL_11;
  }
  return -1073741811;
}
