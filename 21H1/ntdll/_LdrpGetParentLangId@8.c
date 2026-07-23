/*
 * XREFs of _LdrpGetParentLangId@8 @ 0x4B2A8888
 * Callers:
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _RtlLocaleNameToLcid@12 @ 0x4B2D5860 (_RtlLocaleNameToLcid@12.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  LCID v3; // esi
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  NTSTATUS v6; // esi
  _UNICODE_STRING ParentLocaleName; // [esp+10h] [ebp-58h] BYREF
  _UNICODE_STRING LocaleName; // [esp+18h] [ebp-50h] BYREF
  DWORD lcid; // [esp+20h] [ebp-48h] BYREF
  _BYTE v11[32]; // [esp+24h] [ebp-44h] BYREF
  _BYTE v12[32]; // [esp+44h] [ebp-24h] BYREF

  *(_DWORD *)&ParentLocaleName.Length = 0;
  ParentLocaleName.Buffer = 0;
  *(_DWORD *)&LocaleName.Length = 0;
  LocaleName.Buffer = 0;
  if ( !a2 )
    return -1073741811;
  v3 = a1;
  *a2 = 0;
  LocaleName.Buffer = (wchar_t *)v12;
  LocaleName.MaximumLength = 30;
  v4 = RtlLcidToLocaleName(a1, &LocaleName, 2u, 0);
  if ( v4 >= 0 )
    goto LABEL_3;
  if ( v4 == -1073741789 )
  {
    LocaleName.Buffer = 0;
    LocaleName.MaximumLength = 0;
    v4 = RtlLcidToLocaleName(v3, &LocaleName, 2u, 1u);
  }
  if ( v4 >= 0 )
  {
LABEL_3:
    ParentLocaleName.Buffer = (wchar_t *)v11;
    ParentLocaleName.MaximumLength = 30;
    v5 = RtlGetParentLocaleName((PCWSTR)LocaleName.Buffer, &ParentLocaleName, 6u, 0);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_23;
    if ( v5 == -1073741789 )
    {
      ParentLocaleName.Buffer = 0;
      ParentLocaleName.MaximumLength = 0;
      v6 = RtlGetParentLocaleName((PCWSTR)LocaleName.Buffer, &ParentLocaleName, 6u, 1u);
    }
    if ( v6 >= 0 )
    {
LABEL_23:
      if ( ParentLocaleName.Length )
      {
        v6 = RtlLocaleNameToLcid((PCWSTR)ParentLocaleName.Buffer, &lcid, 3u);
        if ( v6 >= 0 )
          *a2 = lcid;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( (_BYTE *)ParentLocaleName.Buffer != v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ParentLocaleName.Buffer);
  if ( (_BYTE *)LocaleName.Buffer != v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, LocaleName.Buffer);
  return v6;
}
