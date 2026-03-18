/*
 * XREFs of EtwpRealtimeCreateLogfile @ 0x14079AADC
 * Callers:
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     EtwpSendSessionNotification @ 0x1406EF58C (EtwpSendSessionNotification.c)
 *     EtwpDelayCreate @ 0x1406F0C9C (EtwpDelayCreate.c)
 *     EtwpExpandFileName @ 0x1406F0FCC (EtwpExpandFileName.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     EtwpRealtimeRestoreState @ 0x1408570CC (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14085CC28 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14085E858 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1409EDE34 (EtwpRealtimeResetReferenceTime.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpRealtimeCreateLogfile(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  size_t v5; // rbp
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  NTSTATUS v8; // eax
  WCHAR *v9; // rcx
  WCHAR i; // ax
  __int64 v11; // rax
  const WCHAR *v12; // rdx
  int updated; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  bool v15; // [rsp+80h] [rbp+8h] BYREF

  v1 = a1 + 360;
  DestinationString = 0LL;
  if ( *(_QWORD *)(a1 + 360) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 368) )
    goto LABEL_23;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 144) + 2 * v4) );
  v5 = 2LL * (unsigned int)(v4 + 9) + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v5, 1350005829LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v8 = RtlStringCbPrintfW(Pool2, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 144));
  v9 = v7;
  if ( !v8 )
  {
    for ( i = *v7; i; i = *v9 )
    {
      if ( i == 34 || i == 47 || i == 58 || i == 60 || i > 0x3Du && (i <= 0x3Fu || i == 92 || i == 124) )
        *v9 = 95;
      ++v9;
    }
    v11 = *(_QWORD *)(a1 + 1096);
    v12 = L"%SystemRoot%\\system32\\Logfiles\\WMI\\RtBackup\\";
    if ( *(_QWORD *)(v11 + 4112) )
      v12 = *(const WCHAR **)(v11 + 4112);
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 368), v12) )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      updated = EtwpExpandFileName(
                  1,
                  (UNICODE_STRING *)(a1 + 368),
                  0,
                  &DestinationString.Length,
                  *(_QWORD *)(a1 + 1096) == EtwpHostSiloState);
      if ( updated >= 0 )
      {
LABEL_23:
        v15 = (*(_BYTE *)(a1 + 816) & 1) != 0;
        updated = EtwpDelayCreate(v1, a1 + 368, &v15, 0LL, 1, 1, 0LL);
        if ( updated >= 0 )
        {
          *(_QWORD *)(a1 + 392) = 72LL;
          *(_QWORD *)(a1 + 384) = 72LL;
          *(_QWORD *)(a1 + 400) = 72LL;
          if ( (*(_DWORD *)(a1 + 816) & 1) != 0 )
          {
            updated = EtwpRealtimeRestoreState(a1);
            if ( updated < 0
              || *(_DWORD *)(a1 + 424) && (updated = EtwpRealtimeUpdateReferenceTime(a1, a1 + 304), updated < 0) )
            {
              EtwpRealtimeZeroTruncateLogfile(a1);
              EtwpRealtimeResetReferenceTime(a1);
              *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
              *(_DWORD *)(a1 + 448) = 3;
              *(_DWORD *)(a1 + 424) = 0;
              *(_QWORD *)(a1 + 408) = 0LL;
              EtwpSendSessionNotification(a1, 4u, 0xC0000102);
              updated = 0;
            }
          }
        }
      }
    }
    else
    {
      updated = -1073741801;
    }
    RtlFreeUnicodeString(&DestinationString);
    return (unsigned int)updated;
  }
  ExFreePoolWithTag(v7, 0);
  return 3221225485LL;
}
