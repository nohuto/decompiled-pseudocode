/*
 * XREFs of PiIsDriverBlocked @ 0x14077A524
 * Callers:
 *     PiLookupInDDB @ 0x14077A41C (PiLookupInDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExIsProcessorFeaturePresent @ 0x14032FCF0 (ExIsProcessorFeaturePresent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1403D3790 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     PiUpdateDriverDBCache @ 0x14077A6AC (PiUpdateDriverDBCache.c)
 *     SdbGetDatabaseMatch @ 0x14077A868 (SdbGetDatabaseMatch.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1407BD63C (SdbReadEntryInformation.c)
 *     SdbTagRefToTagID @ 0x1407BDC90 (SdbTagRefToTagID.c)
 *     PiIsHVCIEnabled @ 0x1407D064C (PiIsHVCIEnabled.c)
 *     PnpLogEvent @ 0x1408A492C (PnpLogEvent.c)
 *     PiNotifyCiDriverBlocked @ 0x1408A5764 (PiNotifyCiDriverBlocked.c)
 *     PnpTraceDriverBlocked @ 0x1408B4628 (PnpTraceDriverBlocked.c)
 */

__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v9; // r8
  unsigned int DatabaseMatch; // r12d
  unsigned int v11; // ebx
  int v13; // r8d
  char v14; // di
  char IsHVCIEnabled; // al
  wchar_t *v16; // rax
  const WCHAR *v17; // rdi
  bool v18; // zf
  unsigned int v19; // [rsp+40h] [rbp-51h] BYREF
  int v20; // [rsp+44h] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-49h] BYREF
  __int64 v22; // [rsp+58h] [rbp-39h] BYREF
  int v23; // [rsp+60h] [rbp-31h] BYREF
  __int64 v24; // [rsp+68h] [rbp-29h]
  _OWORD v25[2]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v26; // [rsp+90h] [rbp-1h]

  v26 = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = a3;
  v24 = a3;
  v19 = 0;
  memset(v25, 0, sizeof(v25));
  DatabaseMatch = SdbGetDatabaseMatch(a1, v6, a3, a3, a4);
  if ( !DatabaseMatch )
  {
    v11 = 0;
    goto LABEL_3;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  v23 = 4;
  v20 = 0;
  v22 = 0x400000000LL;
  if ( (unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &DestinationString, &v20) )
  {
    if ( !(unsigned int)SdbQueryDataExTagID(
                          *(int *)&DestinationString.Length,
                          v20,
                          v13,
                          (int)&v23,
                          &v19,
                          (__int64)&v22 + 4,
                          (__int64)&v22) )
    {
      v11 = 0;
      v14 = v19;
      if ( (v19 & 0x10) != 0 )
      {
        IsHVCIEnabled = PiIsHVCIEnabled();
        v14 = v19;
        if ( IsHVCIEnabled )
          v11 = -1073740949;
      }
      else if ( (v19 & 4) == 0 || ExIsProcessorFeaturePresent(9u) )
      {
        v11 = ((v14 & 1) != 0) - 1073740949;
      }
      if ( (v14 & 8) != 0
        && (PnpSetupInProgress || PnpSetupOOBEInProgress
                               || PnpSetupUpgradeInProgress
                               || PnpSetupRollbackActiveInProgress) )
      {
        v11 = -1073740949;
      }
      goto LABEL_13;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  v11 = -1073740949;
LABEL_13:
  if ( !(unsigned int)SdbReadEntryInformation(a1, DatabaseMatch, v25) && (PiLoggedErrorEventsMask & 0x100) == 0 )
  {
    PiLoggedErrorEventsMask |= 0x100u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
  v7 = v24;
LABEL_3:
  if ( v11 + 1073740949 <= 1 )
  {
    v16 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    if ( v16 )
      v17 = v16 + 1;
    else
      v17 = *(const WCHAR **)(a2 + 8);
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v17);
    PnpLogEvent(&DestinationString, 0LL, v11, v25, 16);
    PnpTraceDriverBlocked(v17, v25, v19, v11);
  }
  if ( !v11 || v11 + 1073740949 <= 1 )
  {
    PiUpdateDriverDBCache(a2, v7, v9, v11, v25);
    if ( v11 + 1073740949 <= 1 )
    {
      if ( a5 )
      {
        v18 = (v19 & 0x10) == 0;
        *a5 = v25[0];
        if ( !v18 )
          PiNotifyCiDriverBlocked(a5, a2);
      }
    }
  }
  return v11;
}
