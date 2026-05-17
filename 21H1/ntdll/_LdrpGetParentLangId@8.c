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
  int v3; // esi
  int v4; // eax
  int ParentLocaleName; // eax
  int v6; // esi
  int v8; // [esp+10h] [ebp-58h] BYREF
  PCWSTR v9; // [esp+14h] [ebp-54h]
  int v10; // [esp+18h] [ebp-50h] BYREF
  PCWSTR SourceString; // [esp+1Ch] [ebp-4Ch]
  int v12; // [esp+20h] [ebp-48h] BYREF
  _BYTE v13[32]; // [esp+24h] [ebp-44h] BYREF
  _BYTE v14[32]; // [esp+44h] [ebp-24h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0;
  SourceString = 0;
  if ( !a2 )
    return -1073741811;
  v3 = a1;
  *a2 = 0;
  SourceString = (PCWSTR)v14;
  HIWORD(v10) = 30;
  v4 = RtlLcidToLocaleName(a1, &v10, 2, 0);
  if ( v4 >= 0 )
    goto LABEL_3;
  if ( v4 == -1073741789 )
  {
    SourceString = 0;
    HIWORD(v10) = 0;
    v4 = RtlLcidToLocaleName(v3, &v10, 2, 1);
  }
  if ( v4 >= 0 )
  {
LABEL_3:
    v9 = (PCWSTR)v13;
    HIWORD(v8) = 30;
    ParentLocaleName = RtlGetParentLocaleName(SourceString, (int)&v8, 6, 0);
    v6 = ParentLocaleName;
    if ( ParentLocaleName >= 0 )
      goto LABEL_23;
    if ( ParentLocaleName == -1073741789 )
    {
      v9 = 0;
      HIWORD(v8) = 0;
      v6 = RtlGetParentLocaleName(SourceString, (int)&v8, 6, 1);
    }
    if ( v6 >= 0 )
    {
LABEL_23:
      if ( (_WORD)v8 )
      {
        v6 = RtlLocaleNameToLcid(v9, (int)&v12, 3);
        if ( v6 >= 0 )
          *a2 = v12;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v9 != (PCWSTR)v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  if ( SourceString != (PCWSTR)v14 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, SourceString);
  return v6;
}
