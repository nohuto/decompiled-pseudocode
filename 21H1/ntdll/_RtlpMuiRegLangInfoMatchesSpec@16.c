/*
 * XREFs of _RtlpMuiRegLangInfoMatchesSpec@16 @ 0x4B36B990
 * Callers:
 *     _RtlpMuiRegConfigMatchesInstalled@28 @ 0x4B36AEFF (_RtlpMuiRegConfigMatchesInstalled@28.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x4B2AD7D8 (_MuiRegAllocArray.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

char __fastcall RtlpMuiRegLangInfoMatchesSpec(DWORD a1, int a2, char a3, unsigned __int16 a4)
{
  const WCHAR *v4; // ebx
  wchar_t *v6; // edi
  __int16 v9; // ax
  int v10; // edx
  __int16 v11; // ax
  __int16 v12; // si
  int v13; // edx
  const WCHAR *v14; // eax
  int v15; // edx
  const wchar_t *v16; // eax
  int v17; // eax
  int v18; // ecx
  LCID v19; // [esp-8h] [ebp-28h]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-10h] BYREF
  DWORD Lcid; // [esp+18h] [ebp-8h] BYREF
  char v22; // [esp+1Fh] [ebp-1h]

  v4 = 0;
  Lcid = a1;
  v6 = 0;
  if ( a3 == 1 )
  {
    if ( *(_WORD *)(a2 + 4) )
      return *(unsigned __int16 *)(a2 + 4) == (__int16)a4;
    v9 = *(_WORD *)(a2 + 6);
    if ( v9 >= 0 )
    {
      v10 = *(_DWORD *)(a1 + 24);
      if ( v10 && v9 < (int)*(unsigned __int16 *)(v10 + 6) )
        v4 = (const WCHAR *)(*(_DWORD *)(v10 + 16) + 2 * *(__int16 *)(*(_DWORD *)(v10 + 12) + 2 * v9));
      if ( v4 )
      {
        RtlInitUnicodeString(&DestinationString, v4);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          return (_WORD)Lcid == a4;
      }
    }
    return 0;
  }
  if ( a3 != 3 )
  {
    if ( a3 == 2 && (a4 & 0x8000u) == 0 )
    {
      v18 = *(_DWORD *)(a1 + 20);
      if ( (__int16)a4 < (int)*(unsigned __int16 *)(v18 + 6) )
        return a2 == *(_DWORD *)(v18 + 12) + 28 * (__int16)a4;
    }
    return 0;
  }
  v11 = *(_WORD *)(a2 + 6);
  DestinationString.Buffer = 0;
  if ( v11 < 0 )
  {
    if ( *(_WORD *)(a2 + 4) )
    {
      v6 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
      if ( v6 )
      {
        v19 = *(unsigned __int16 *)(a2 + 4);
        DestinationString.Buffer = v6;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( RtlLCIDToCultureName(v19, &DestinationString) )
        {
          v12 = a4;
          goto LABEL_26;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      }
    }
    return 0;
  }
  v12 = a4;
  if ( v11 == a4 )
    return 1;
  v13 = *(_DWORD *)(a1 + 24);
  if ( v13 && v11 < (int)*(unsigned __int16 *)(v13 + 6) )
    v14 = (const WCHAR *)(*(_DWORD *)(v13 + 16) + 2 * *(__int16 *)(*(_DWORD *)(v13 + 12) + 2 * v11));
  else
    v14 = 0;
  if ( !v14 )
    return 0;
  RtlInitUnicodeString(&DestinationString, v14);
LABEL_26:
  v15 = *(_DWORD *)(Lcid + 24);
  if ( v15 && v12 >= 0 && v12 < (int)*(unsigned __int16 *)(v15 + 6) )
    v16 = (const wchar_t *)(*(_DWORD *)(v15 + 16) + 2 * *(__int16 *)(*(_DWORD *)(v15 + 12) + 2 * v12));
  else
    v16 = 0;
  if ( !v16 || (v17 = _wcsicmp(DestinationString.Buffer, v16), v22 = 1, v17) )
    v22 = 0;
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return v22;
}
