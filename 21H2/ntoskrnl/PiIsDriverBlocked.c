/*
 * XREFs of PiIsDriverBlocked @ 0x14075E568
 * Callers:
 *     PiLookupInDDB @ 0x14075E908 (PiLookupInDDB.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x140250040 (RtlIsProcessorFeaturePresent.c)
 *     KeIsKernelCetEnabled @ 0x14025E490 (KeIsKernelCetEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbGetDatabaseMatch @ 0x14075E2D8 (SdbGetDatabaseMatch.c)
 *     PiUpdateDriverDBCache @ 0x14075E74C (PiUpdateDriverDBCache.c)
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140842F74 (SdbReadEntryInformation.c)
 *     SdbTagRefToTagID @ 0x140843CD4 (SdbTagRefToTagID.c)
 *     PiIsHVCIEnabled @ 0x1408649BC (PiIsHVCIEnabled.c)
 *     PnpLogEvent @ 0x140947068 (PnpLogEvent.c)
 *     PiNotifyCiDriverBlocked @ 0x140947F80 (PiNotifyCiDriverBlocked.c)
 *     PnpTraceDriverBlocked @ 0x140957508 (PnpTraceDriverBlocked.c)
 */

__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  const WCHAR *v6; // rdx
  int v8; // r8d
  unsigned int DatabaseMatch; // r12d
  unsigned int v10; // ebx
  int v11; // r8d
  char v12; // di
  char IsHVCIEnabled; // al
  wchar_t *v15; // rax
  const WCHAR *v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // [rsp+40h] [rbp-51h] BYREF
  int v19; // [rsp+44h] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-49h] BYREF
  __int64 v21; // [rsp+58h] [rbp-39h] BYREF
  int v22; // [rsp+60h] [rbp-31h] BYREF
  __int64 v23; // [rsp+68h] [rbp-29h]
  _OWORD v24[2]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v25; // [rsp+90h] [rbp-1h]

  v25 = 0LL;
  v6 = *(const WCHAR **)(a2 + 8);
  v23 = a3;
  memset(v24, 0, sizeof(v24));
  v18 = 0;
  DatabaseMatch = SdbGetDatabaseMatch(a1, v6, a3, a3, a4);
  if ( !DatabaseMatch )
  {
    v10 = 0;
LABEL_15:
    PiUpdateDriverDBCache(a2, v23, v8, v10, (__int64)v24);
    if ( v10 + 1073740949 <= 1 )
    {
      if ( a5 )
      {
        v17 = v18;
        *a5 = v24[0];
        if ( (v17 & 0x30) != 0 )
          PiNotifyCiDriverBlocked(a5, v17, a2);
      }
    }
    return v10;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  v22 = 4;
  v19 = 0;
  v21 = 0x400000000LL;
  if ( !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &DestinationString, &v19) )
  {
    AslLogCallPrintf(1LL);
LABEL_20:
    v10 = -1073740949;
    goto LABEL_10;
  }
  if ( (unsigned int)SdbQueryDataExTagID(
                       *(int *)&DestinationString.Length,
                       v19,
                       v11,
                       (int)&v22,
                       &v18,
                       (__int64)&v21 + 4,
                       (__int64)&v21) )
    goto LABEL_20;
  v10 = 0;
  v12 = v18;
  if ( (v18 & 0x20) != 0 )
  {
    v10 = KeIsKernelCetEnabled() ? 0xC000036B : 0;
  }
  else if ( (v18 & 0x10) != 0 )
  {
    IsHVCIEnabled = PiIsHVCIEnabled();
    v12 = v18;
    if ( IsHVCIEnabled )
      v10 = -1073740949;
  }
  else if ( (v18 & 4) == 0 || RtlIsProcessorFeaturePresent(9u) )
  {
    v10 = ((v12 & 1) != 0) - 1073740949;
  }
  if ( (v12 & 8) != 0
    && (PnpSetupInProgress || PnpSetupOOBEInProgress || PnpSetupUpgradeInProgress || PnpSetupRollbackActiveInProgress) )
  {
    goto LABEL_20;
  }
LABEL_10:
  if ( !(unsigned int)SdbReadEntryInformation(a1, DatabaseMatch, v24) && (PiLoggedErrorEventsMask & 0x100) == 0 )
  {
    PiLoggedErrorEventsMask |= 0x100u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
  if ( v10 == -1073740949 || v10 == -1073740948 )
  {
    v15 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    v16 = v15 ? v15 + 1 : *(const WCHAR **)(a2 + 8);
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v16);
    PnpLogEvent(&DestinationString, 0LL, v10, v24, 16);
    PnpTraceDriverBlocked(v16, v24, v18, v10);
    if ( v10 == -1073740949 )
      goto LABEL_15;
  }
  if ( v10 == -1073740948 || !v10 )
    goto LABEL_15;
  return v10;
}
