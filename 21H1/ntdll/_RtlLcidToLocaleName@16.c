/*
 * XREFs of _RtlLcidToLocaleName@16 @ 0x4B2D5A10
 * Callers:
 *     _LdrpGetParentLangId@8 @ 0x4B2A8888 (_LdrpGetParentLangId@8.c)
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x4B2D5B2E (RtlStringLengthWorkerW.c)
 *     _RtlpInitUnicodeStringUsingBuffer@16 @ 0x4B2D5B73 (_RtlpInitUnicodeStringUsingBuffer@16.c)
 *     _RtlpNlsGetLcidIndex@4 @ 0x4B2D5BC8 (_RtlpNlsGetLcidIndex@4.c)
 *     _RtlpLoadNlsData@0 @ 0x4B2EA1FB (_RtlpLoadNlsData@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpGetUserLocaleName@4 @ 0x4B3633E0 (_RtlpGetUserLocaleName@4.c)
 *     _RtlpGetUserOrMachineUILanguage4NLS@12 @ 0x4B36A9A0 (_RtlpGetUserOrMachineUILanguage4NLS@12.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  LCID v4; // esi
  int v5; // edi
  int LcidIndex; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  wchar_t *v10; // edx
  int v12; // [esp-8h] [ebp-D8h]
  PUNICODE_STRING v13; // [esp-4h] [ebp-D4h]
  int StackCookie; // [esp+Ch] [ebp-C4h] BYREF
  uintptr_t StackCookie_4; // [esp+10h] [ebp-C0h] BYREF
  _BYTE v16[180]; // [esp+18h] [ebp-B8h] BYREF

  v4 = lcid;
  StackCookie = 85;
  if ( !lcid || lcid == 4096 )
    return -1073741585;
  if ( LocaleName )
  {
    if ( (Flags & 0xFFFFFFFD) != 0 )
      return -1073741583;
    if ( AllocateDestinationString || LocaleName->Buffer )
    {
      if ( lcid == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1, v16, &StackCookie) >= 0 )
        {
          v13 = LocaleName;
          v12 = StackCookie;
          v10 = (wchar_t *)v16;
          goto LABEL_19;
        }
        return -1073741823;
      }
      if ( lcid == 3072 || lcid == 1024 )
      {
        HIDWORD(StackCookie_4) = v16;
        WORD1(StackCookie_4) = 170;
        if ( RtlpGetUserLocaleName((PUNICODE_STRING)&StackCookie_4) >= 0 )
        {
          v10 = (wchar_t *)HIDWORD(StackCookie_4);
          v13 = LocaleName;
          v12 = (unsigned __int16)StackCookie_4 >> 1;
          goto LABEL_19;
        }
      }
      else
      {
        v5 = pTblPtrs;
        if ( pTblPtrs )
          goto LABEL_11;
        if ( (unsigned __int8)RtlpLoadNlsData() )
        {
          v5 = pTblPtrs;
LABEL_11:
          if ( lcid == 2048 )
            v4 = gSystemLocale;
          LcidIndex = RtlpNlsGetLcidIndex(v4);
          if ( LcidIndex >= 0 )
          {
            if ( (Flags & 2) != 0
              || (_mm_lfence(),
                  (*(_BYTE *)(*(unsigned __int16 *)(v5 + 28)
                            * *(unsigned __int16 *)(*(_DWORD *)(v5 + 12) + 8 * LcidIndex + 4)
                            + *(_DWORD *)(v5 + 8)
                            + 24) & 1) != 0) )
            {
              v7 = *(_DWORD *)(v5 + 20) + 2 * (*(unsigned __int16 *)(*(_DWORD *)(v5 + 12) + 8 * LcidIndex + 6) + 1);
              if ( v7 )
              {
                v8 = RtlStringLengthWorkerW(&StackCookie);
                v9 = StackCookie;
              }
              else
              {
                v8 = -1073741811;
                v9 = 85;
              }
              if ( v8 >= 0 )
              {
                v13 = LocaleName;
                v12 = v9;
                v10 = (wchar_t *)v7;
LABEL_19:
                LOBYTE(v9) = AllocateDestinationString;
                return RtlpInitUnicodeStringUsingBuffer(v9, v10, v12, v13);
              }
              return -1073741823;
            }
          }
          return -1073741585;
        }
      }
      return -1073741823;
    }
  }
  return -1073741584;
}
