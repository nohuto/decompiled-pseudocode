/*
 * XREFs of EtwSetProcessTelemetryCoverage @ 0x1406D435C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     EtwpCoverageRecordAtHighIrql @ 0x1406310E4 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1406D43E8 (EtwpCoverageEnsureUserModeView.c)
 *     EtwpCoverageRecord @ 0x1406D45B4 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x14085A124 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageCheckCP @ 0x1409E512C (EtwpCoverageCheckCP.c)
 *     EtwpCoverageReset @ 0x1409E52D0 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409E54B0 (EtwpCoverageResetCP.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E57B8 (EtwpCoverageUserIsAdmin.c)
 */

__int64 __fastcall EtwSetProcessTelemetryCoverage(_KPROCESS *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // eax

  if ( a1 != KeGetCurrentThread()->ApcState.Process )
    return 3221225659LL;
  if ( EtwpCoverageContext || (result = EtwpCoverageEnsureContext(), (int)result >= 0) )
  {
    v3 = EtwpCoverageContext;
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 12) = -1;
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 12);
      if ( v4 < 0xFFFFFF00 )
      {
        EtwpCoverageRecord(EtwpCoverageContext, a2);
        result = EtwpCoverageEnsureUserModeView(v3);
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      switch ( v4 )
      {
        case 0xFFFFFFFE:
          v6 = EtwpCoverageCheckCP(EtwpCoverageContext, a2);
          goto LABEL_16;
        case 0xFFFFFFFD:
          v6 = EtwpCoverageResetCP(EtwpCoverageContext, a2);
LABEL_16:
          if ( !v6 )
            return 3221226021LL;
          return 0LL;
        case 0xFFFFFFFC:
          if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
            return 3221225506LL;
          EtwpCoverageReset(v3, 1LL);
          *(_DWORD *)(a2 + 12) = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
          return 0LL;
        case 0xFFFFFFFB:
          EtwpCoverageRecordAtHighIrql((__int64 *)a2);
          return 0LL;
      }
    }
    return 3221225485LL;
  }
  return result;
}
