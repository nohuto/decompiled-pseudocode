/*
 * XREFs of _LdrpLangFallbackListFindNode@16 @ 0x4B2D5519
 * Callers:
 *     _LdrpLangFallbackListAppendNode@24 @ 0x4B2D5467 (_LdrpLangFallbackListAppendNode@24.c)
 * Callees:
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

int __fastcall LdrpLangFallbackListFindNode(int a1, int a2, PCWSTR SourceString, _WORD *a4)
{
  __int16 v5; // di
  __int16 v6; // ax
  int v7; // edx
  int v8; // esi
  const WCHAR *v9; // eax
  int v10; // ecx
  __int16 v11; // dx
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  bool v21; // zf
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-18h] BYREF
  int v23; // [esp+18h] [ebp-10h]
  int v24; // [esp+1Ch] [ebp-Ch]
  DWORD Lcid; // [esp+20h] [ebp-8h] BYREF
  int v26; // [esp+24h] [ebp-4h]

  v24 = a2;
  v23 = a1;
  if ( a1 && a2 && SourceString && a4 )
  {
    *a4 = -1;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return -1073741772;
    v5 = 0;
    if ( Lcid == 4096 || Lcid == 5120 )
      Lcid = 0;
    v6 = -1;
    if ( *SourceString )
    {
      v7 = *(_DWORD *)(a1 + 24);
      v26 = v7;
      if ( v7 && (v8 = 0, *(_WORD *)(v7 + 6)) )
      {
        while ( 1 )
        {
          v9 = (const WCHAR *)(*(_DWORD *)(v7 + 16) + 2 * *(__int16 *)(*(_DWORD *)(v7 + 12) + 2 * v8));
          if ( v9 == SourceString || !_wcsicmp((const wchar_t *)v9, (const wchar_t *)SourceString) )
            break;
          v7 = v26;
          if ( ++v8 >= *(unsigned __int16 *)(v26 + 6) )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        v8 = -1;
      }
      if ( v8 < 0 )
        LOWORD(v8) = -1;
      v6 = v8;
      if ( (v8 & 0x8000u) != 0 )
      {
LABEL_33:
        v11 = -1;
LABEL_20:
        v26 = *(unsigned __int16 *)(v24 + 4);
        if ( v26 )
        {
          v12 = *(_DWORD *)(v24 + 16);
          v13 = 0;
          v14 = v26;
          while ( 1 )
          {
            v15 = 6 * v13;
            v16 = *(unsigned __int16 *)(6 * v13 + v12) - 1;
            if ( !v16 )
              break;
            v17 = v16 - 1;
            if ( !v17 )
            {
              v18 = *(__int16 *)(v15 + v12 + 4);
              v19 = *(_DWORD *)(*(_DWORD *)(v23 + 20) + 12);
              v24 = v19;
              if ( v11 > 0 && v11 == *(_WORD *)(28 * v18 + v19 + 6) )
                goto LABEL_26;
              if ( Lcid )
              {
                v21 = Lcid == *(unsigned __int16 *)(28 * v18 + v24 + 4);
LABEL_29:
                if ( v21 )
                  goto LABEL_26;
              }
              goto LABEL_30;
            }
            if ( v17 == 1 && v11 != -1 && *(_WORD *)(v15 + v12 + 4) == v11 )
            {
LABEL_26:
              *a4 = v5;
              return 0;
            }
LABEL_31:
            v13 = ++v5;
            if ( v5 >= v14 )
              return -1073741772;
          }
          if ( Lcid )
          {
            v21 = *(__int16 *)(v15 + v12 + 4) == Lcid;
            goto LABEL_29;
          }
LABEL_30:
          v14 = v26;
          goto LABEL_31;
        }
        return -1073741772;
      }
      v10 = 0;
    }
    else
    {
      v10 = -1073741811;
    }
    v11 = v6;
    if ( v10 >= 0 )
      goto LABEL_20;
    goto LABEL_33;
  }
  return -1073741811;
}
