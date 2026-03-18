/*
 * XREFs of DpiPdoHandleQueryId @ 0x1C0182C80
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000C3DC (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     DpiAppendNumberToString @ 0x1C0183174 (DpiAppendNumberToString.c)
 *     DpiAppendStringToString @ 0x1C0184200 (DpiAppendStringToString.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  char v5; // di
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  const WCHAR *v10; // rax
  int appended; // eax
  unsigned __int16 *v12; // rax
  const WCHAR *v13; // rcx
  PVOID v14; // rax
  void *v15; // rsi
  const WCHAR *v17; // rdx
  void *v18; // rdi
  unsigned int v19; // esi
  PVOID PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  void *Src[2]; // [rsp+98h] [rbp+27h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)Src = 0LL;
  LODWORD(v4) = 0;
  v5 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v6 )
  {
    v12 = (unsigned __int16 *)(v3 + 512);
    if ( *(_DWORD *)(v3 + 496) == 1 && !*v12 )
    {
      v17 = L"DISPLAY\\Default_Monitor";
      goto LABEL_24;
    }
    v13 = L"DISPLAY\\";
LABEL_10:
    appended = DpiAppendStringToString(v13, v12, (PUNICODE_STRING)Src);
LABEL_11:
    LODWORD(v4) = appended;
    if ( appended < 0 )
      return (unsigned int)v4;
    goto LABEL_12;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 2 || !*(_QWORD *)(v3 + 968) )
        {
          LODWORD(v4) = *(_DWORD *)(a2 + 48);
          return (unsigned int)v4;
        }
        *(_OWORD *)Src = *(_OWORD *)(v3 + 960);
        goto LABEL_13;
      }
      v10 = (const WCHAR *)(v3 + 614);
      if ( !*(_WORD *)(v3 + 614) )
      {
        appended = DpiAppendNumberToString(L"UID", *(_DWORD *)(v3 + 504), (PUNICODE_STRING)Src);
        goto LABEL_11;
      }
    }
    else
    {
      v10 = (const WCHAR *)(v3 + 716);
      if ( *(_DWORD *)(v3 + 496) == 1 && !*v10 )
      {
        v17 = L"*PNP09FF";
LABEL_24:
        RtlInitUnicodeString((PUNICODE_STRING)Src, v17);
        goto LABEL_13;
      }
    }
    v17 = v10;
    goto LABEL_24;
  }
  v12 = (unsigned __int16 *)(v3 + 512);
  if ( *(_DWORD *)(v3 + 496) == 1 )
  {
    if ( !*v12 )
    {
      v17 = L"MONITOR\\Default_Monitor";
      goto LABEL_24;
    }
    v13 = L"MONITOR\\";
    goto LABEL_10;
  }
  v18 = 0LL;
  v19 = 0;
  do
  {
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    v19 += 256;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x74727044u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v4) = -1073741801;
      v34 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
      *(_QWORD *)(v34 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v34);
      return (unsigned int)v4;
    }
    memset(PoolWithTag, 0, v19);
    v25 = RtlStringCbPrintfW(
            (wchar_t *)v18,
            v19,
            L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&%ws,VIDEO\\VE"
             "N_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
    v26 = v25;
  }
  while ( v25 == -2147483643 );
  if ( v25 < 0 )
  {
    ExFreePoolWithTag(v18, 0);
    LODWORD(v4) = -1073741823;
    v29 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v29 + 24) = v26;
LABEL_40:
    WdLogEvent5_WdError(v29);
    return (unsigned int)v4;
  }
  v4 = (int)DpiAppendStringToString((PCWSTR)v18, L",,", (PUNICODE_STRING)Src);
  ExFreePoolWithTag(v18, 0);
  if ( (int)v4 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v29 + 24) = v4;
    goto LABEL_40;
  }
  if ( LOWORD(Src[0]) >> 1 )
  {
    v32 = 0LL;
    v33 = LOWORD(Src[0]) >> 1;
    do
    {
      if ( *(_WORD *)((char *)Src[1] + v32) == 44 )
        *(_WORD *)((char *)Src[1] + v32) = 0;
      v32 += 2LL;
      --v33;
    }
    while ( v33 );
  }
LABEL_12:
  v5 = 1;
LABEL_13:
  v14 = ExAllocatePoolWithTag(PagedPool, WORD1(Src[0]) + 2LL, 0x74727044u);
  v15 = v14;
  if ( v14 )
  {
    memset(v14, 0, WORD1(Src[0]) + 2LL);
    memmove(v15, Src[1], WORD1(Src[0]));
    *(_QWORD *)(a2 + 56) = v15;
  }
  else
  {
    LODWORD(v4) = -1073741801;
  }
  if ( v5 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)Src);
  return (unsigned int)v4;
}
