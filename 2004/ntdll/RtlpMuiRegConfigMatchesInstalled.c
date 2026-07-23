/*
 * XREFs of RtlpMuiRegConfigMatchesInstalled @ 0x180103F70
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x1801058C8 (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18003AFAC (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     _MuiRegAllocArray @ 0x18003B244 (_MuiRegAllocArray.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x18008DC70 (_wcsicmp.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180104F30 (RtlpMuiRegLangInfoMatchesSpec.c)
 */

char __fastcall RtlpMuiRegConfigMatchesInstalled(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5,
        __int64 *a6,
        unsigned __int16 *a7)
{
  __int64 v7; // r15
  int v8; // r12d
  __int64 v9; // r14
  wchar_t *v11; // r13
  bool v12; // zf
  char v13; // bl
  unsigned __int16 *v14; // rdi
  __int64 v15; // rdx
  unsigned __int16 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 *v19; // rdi
  __int64 v20; // r8
  const WCHAR *v21; // rdx
  wchar_t *v22; // rax
  __int64 v23; // r8
  const wchar_t *v24; // rdx
  __int64 v25; // r8
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int16 v28; // [rsp+88h] [rbp+48h] BYREF
  DWORD Lcid; // [rsp+98h] [rbp+58h] BYREF

  v7 = 0LL;
  v8 = a2;
  v9 = (__int16)a3;
  v11 = 0LL;
  if ( a2 == a4 )
  {
    v12 = (_WORD)a3 == a5;
LABEL_3:
    v13 = v12;
    goto LABEL_22;
  }
  if ( !a2 || !a4 )
    goto LABEL_47;
  v14 = a7;
  if ( a7 )
    *a7 = -1;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      if ( (a3 & 0x8000u) == 0LL )
      {
        v15 = *(_QWORD *)(a1 + 24);
        if ( (__int16)a3 < (int)*(unsigned __int16 *)(v15 + 6) )
        {
          LOBYTE(a3) = a4;
          v7 = *(_QWORD *)(v15 + 16) + 28 * v9;
          v13 = RtlpMuiRegLangInfoMatchesSpec(a1, v7, a3, a5);
          goto LABEL_22;
        }
      }
    }
    goto LABEL_47;
  }
  if ( a4 != 2 )
  {
    v13 = 1;
    if ( a2 == 1 )
    {
      if ( a4 == 3 )
      {
        v20 = *(_QWORD *)(a1 + 32);
        if ( v20 && (a5 & 0x8000u) == 0 && (__int16)a5 < (int)*(unsigned __int16 *)(v20 + 6) )
          v21 = (const WCHAR *)(*(_QWORD *)(v20 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v20 + 16) + 2LL * (__int16)a5));
        else
          v21 = 0LL;
        if ( v21 )
        {
          RtlInitUnicodeString(&DestinationString, v21);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            v12 = (_WORD)v9 == (unsigned __int16)Lcid;
            goto LABEL_3;
          }
        }
      }
    }
    else if ( a2 == 3 && a4 == 1 )
    {
      v22 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
      v11 = v22;
      if ( v22 )
      {
        DestinationString.Buffer = v22;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( RtlLCIDToCultureName((__int16)a5, &DestinationString) )
        {
          v23 = *(_QWORD *)(a1 + 32);
          if ( v23 && (v9 & 0x8000u) == 0LL && (int)v9 < *(unsigned __int16 *)(v23 + 6) )
            v24 = (const wchar_t *)(*(_QWORD *)(v23 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v23 + 16) + 2 * v9));
          else
            v24 = 0LL;
          if ( v24 && !wcsicmp(DestinationString.Buffer, v24) )
            goto LABEL_48;
        }
      }
    }
LABEL_47:
    v13 = 0;
LABEL_48:
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    v11 = 0LL;
    v7 = 0LL;
    goto LABEL_22;
  }
  if ( !a1 )
    goto LABEL_47;
  v16 = a5;
  if ( (a5 & 0x8000u) != 0 )
    goto LABEL_47;
  v17 = *(_QWORD *)(a1 + 24);
  if ( (__int16)a5 >= (int)*(unsigned __int16 *)(v17 + 6) )
    goto LABEL_47;
  v18 = (unsigned __int16)a3;
  LOBYTE(a3) = v8;
  v11 = (wchar_t *)(*(_QWORD *)(v17 + 16) + 28LL * (__int16)a5);
  v13 = RtlpMuiRegLangInfoMatchesSpec(a1, v11, a3, v18);
  if ( v13 && v11 && v14 )
    *v14 = v16;
  v7 = 0LL;
LABEL_22:
  v19 = a6;
  if ( a6 )
  {
    if ( v13 )
    {
      if ( v11 )
      {
        *a6 = (__int64)v11;
      }
      else if ( v7 )
      {
        *a6 = v7;
      }
      else
      {
        *a6 = 0LL;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndex(a1, v8, (unsigned __int16)v9, &v28) >= 0 && v28 >= 0 )
        {
          v25 = *(_QWORD *)(a1 + 24);
          if ( v28 < (int)*(unsigned __int16 *)(v25 + 6) )
            *v19 = *(_QWORD *)(v25 + 16) + 28LL * v28;
        }
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return v13;
}
