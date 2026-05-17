/*
 * XREFs of _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30
 * Callers:
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpLogLoadFailureEtwEvent@20 @ 0x4B2EC106 (_LdrpLogLoadFailureEtwEvent@20.c)
 *     _LdrpCheckComponentOnDemandEtwEvent@4 @ 0x4B32FAB2 (_LdrpCheckComponentOnDemandEtwEvent@4.c)
 *     _LdrpLogFatalLdrEtwEvent@8 @ 0x4B330261 (_LdrpLogFatalLdrEtwEvent@8.c)
 *     _SignalStartWerSvc@0 @ 0x4B33AD08 (_SignalStartWerSvc@0.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall EtwEventWriteNoRegistration(int a1, int *a2, int a3, int a4)
{
  _GUID *p_ActivityId; // esi
  NTSTATUS result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-80h] BYREF
  int v7; // [esp+Ch] [ebp-7Ch]
  int v8; // [esp+30h] [ebp-58h]
  int v9; // [esp+34h] [ebp-54h]
  int v10; // [esp+38h] [ebp-50h]
  int v11; // [esp+3Ch] [ebp-4Ch]
  unsigned int Data1; // [esp+48h] [ebp-40h]
  unsigned int v13; // [esp+4Ch] [ebp-3Ch]
  __int64 v14; // [esp+50h] [ebp-38h]
  char v15; // [esp+58h] [ebp-30h]
  __int16 v16; // [esp+5Ah] [ebp-2Eh]
  int v17; // [esp+5Ch] [ebp-2Ch]
  int v18; // [esp+60h] [ebp-28h]
  int v19; // [esp+64h] [ebp-24h]
  int v20; // [esp+78h] [ebp-10h]

  if ( !a2 || !a1 )
    return 87;
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  v11 = a2[3];
  v7 = 0;
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  v17 = a3;
  v18 = a4;
  v19 = 0;
  Data1 = p_ActivityId->Data1;
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  v13 = p_ActivityId->Data1;
  v14 = *(_QWORD *)&p_ActivityId->Data2;
  v15 = 0;
  v20 = 0;
  v16 = 0;
  result = NtTraceEvent(a1, 1792, 120, v6);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
