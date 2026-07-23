/*
 * XREFs of RtlpMuiRegLangInfoMatchesSpec @ 0x1801052A0
 * Callers:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1801042E0 (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     _MuiRegAllocArray @ 0x18003B244 (_MuiRegAllocArray.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x18008E370 (_wcsicmp.c)
 */

bool __fastcall RtlpMuiRegLangInfoMatchesSpec(__int64 a1, __int64 a2, char a3, __int16 a4)
{
  __int64 v4; // rbx
  char v5; // bp
  wchar_t *v8; // rsi
  int v9; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  const WCHAR *v17; // rdx
  wchar_t *v18; // rax
  LCID v19; // ecx
  __int64 v20; // r8
  const wchar_t *v21; // rdx
  __int64 v22; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+18h] BYREF

  v4 = a4;
  v5 = 1;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    if ( (_WORD)v9 )
      return v9 == a4;
    v12 = *(__int16 *)(a2 + 6);
    if ( (v12 & 0x8000u) == 0LL )
    {
      v13 = *(_QWORD *)(a1 + 32);
      if ( v13 && (int)v12 < *(unsigned __int16 *)(v13 + 6) )
        v14 = (const WCHAR *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2 * v12));
      else
        v14 = 0LL;
      if ( v14 )
      {
        RtlInitUnicodeString(&DestinationString, v14);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          return (_WORD)Lcid == (unsigned __int16)v4;
      }
    }
    return 0;
  }
  if ( a3 == 3 )
  {
    v15 = *(__int16 *)(a2 + 6);
    DestinationString.Buffer = 0LL;
    if ( (v15 & 0x8000u) != 0LL )
    {
      if ( *(_WORD *)(a2 + 4) )
      {
        v18 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
        v8 = v18;
        if ( v18 )
        {
          v19 = *(unsigned __int16 *)(a2 + 4);
          DestinationString.Buffer = v18;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( RtlLCIDToCultureName(v19, &DestinationString) )
          {
LABEL_26:
            v20 = *(_QWORD *)(a1 + 32);
            if ( v20 && (v4 & 0x8000u) == 0LL && (int)v4 < *(unsigned __int16 *)(v20 + 6) )
              v21 = (const wchar_t *)(*(_QWORD *)(v20 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v20 + 16) + 2 * v4));
            else
              v21 = 0LL;
            if ( !v21 || wcsicmp(DestinationString.Buffer, v21) )
              v5 = 0;
            if ( v8 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
            return v5;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
        }
      }
    }
    else
    {
      if ( (_WORD)v15 == a4 )
        return v5;
      v16 = *(_QWORD *)(a1 + 32);
      if ( v16 && (int)v15 < *(unsigned __int16 *)(v16 + 6) )
        v17 = (const WCHAR *)(*(_QWORD *)(v16 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v16 + 16) + 2 * v15));
      else
        v17 = 0LL;
      if ( v17 )
      {
        RtlInitUnicodeString(&DestinationString, v17);
        goto LABEL_26;
      }
    }
  }
  else if ( a3 == 2 && a4 >= 0 )
  {
    v22 = *(_QWORD *)(a1 + 24);
    if ( a4 < (int)*(unsigned __int16 *)(v22 + 6) )
      return a2 == *(_QWORD *)(v22 + 16) + 28LL * a4;
  }
  return 0;
}
