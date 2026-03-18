/*
 * XREFs of EtwpRealtimeCreateLogfile @ 0x1406CA74C
 * Callers:
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14027DBC4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     EtwpSendSessionNotification @ 0x1406328F8 (EtwpSendSessionNotification.c)
 *     RtlCreateUnicodeString @ 0x140642DF0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     EtwpDelayCreate @ 0x1406C93DC (EtwpDelayCreate.c)
 *     EtwpExpandFileName @ 0x1406CBAA4 (EtwpExpandFileName.c)
 *     EtwpRealtimeRestoreState @ 0x1407B5F9C (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407BA768 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407BDA8C (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeResetReferenceTime @ 0x14093E6D0 (EtwpRealtimeResetReferenceTime.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeCreateLogfile(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rdi
  NTSTATUS v8; // eax
  WCHAR *v9; // rcx
  WCHAR i; // ax
  __int64 v11; // rcx
  int updated; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  bool v14; // [rsp+70h] [rbp+8h] BYREF

  v1 = a1 + 376;
  DestinationString = 0LL;
  if ( *(_QWORD *)(a1 + 376) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 384) )
    goto LABEL_21;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 160) + 2 * v4) );
  v5 = 2LL * (unsigned int)(v4 + 9) + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x50777445u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = RtlStringCbPrintfW(PoolWithTag, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 160));
  v9 = v7;
  if ( !v8 )
  {
    for ( i = *v7; i; i = *v9 )
    {
      if ( i == 34 || i == 47 || i == 58 || i == 60 || i > 0x3Du && (i <= 0x3Fu || i == 92 || i == 124) )
        *v9 = 95;
      ++v9;
    }
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 384), EtwpRTBacklogFileRoot) )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      LOBYTE(v11) = 1;
      updated = EtwpExpandFileName(v11, a1 + 384, 0LL, &DestinationString);
      if ( updated >= 0 )
      {
LABEL_21:
        v14 = (*(_BYTE *)(a1 + 832) & 1) != 0;
        updated = EtwpDelayCreate(v1, a1 + 384, &v14, 0LL, 1, 1);
        if ( updated >= 0 )
        {
          *(_QWORD *)(a1 + 408) = 72LL;
          *(_QWORD *)(a1 + 400) = 72LL;
          *(_QWORD *)(a1 + 416) = 72LL;
          if ( (*(_DWORD *)(a1 + 832) & 1) != 0 )
          {
            updated = EtwpRealtimeRestoreState(a1);
            if ( updated < 0 )
              goto LABEL_33;
            if ( *(_DWORD *)(a1 + 440) )
              updated = EtwpRealtimeUpdateReferenceTime(a1, a1 + 320);
            if ( updated < 0 )
            {
LABEL_33:
              EtwpRealtimeZeroTruncateLogfile(a1);
              EtwpRealtimeResetReferenceTime(a1);
              *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
              *(_DWORD *)(a1 + 464) = 3;
              *(_DWORD *)(a1 + 440) = 0;
              *(_QWORD *)(a1 + 424) = 0LL;
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
    RtlFreeAnsiString(&DestinationString);
    return (unsigned int)updated;
  }
  ExFreePoolWithTag(v7, 0);
  return 3221225485LL;
}
