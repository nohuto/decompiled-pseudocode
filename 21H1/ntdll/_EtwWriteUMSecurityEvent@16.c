/*
 * XREFs of _EtwWriteUMSecurityEvent@16 @ 0x4B3806D0
 * Callers:
 *     _EvtIntReportEventWorker@48 @ 0x4B382BB1 (_EvtIntReportEventWorker@48.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall EtwWriteUMSecurityEvent(int *a1, __int16 a2, int a3, int a4)
{
  NTSTATUS result; // eax
  _GUID *p_ActivityId; // esi
  _BYTE v6[4]; // [esp+8h] [ebp-80h] BYREF
  __int16 v7; // [esp+Ch] [ebp-7Ch]
  __int16 v8; // [esp+Eh] [ebp-7Ah]
  int v9; // [esp+30h] [ebp-58h]
  int v10; // [esp+34h] [ebp-54h]
  int v11; // [esp+38h] [ebp-50h]
  int v12; // [esp+3Ch] [ebp-4Ch]
  unsigned int Data1; // [esp+48h] [ebp-40h]
  unsigned int v14; // [esp+4Ch] [ebp-3Ch]
  __int64 v15; // [esp+50h] [ebp-38h]
  char v16; // [esp+58h] [ebp-30h]
  __int16 v17; // [esp+5Ah] [ebp-2Eh]
  int v18; // [esp+5Ch] [ebp-2Ch]
  int v19; // [esp+60h] [ebp-28h]
  int v20; // [esp+64h] [ebp-24h]
  int v21; // [esp+78h] [ebp-10h]

  if ( !a1 )
    return 87;
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v12 = a1[3];
  v7 = 0;
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  v8 = a2;
  v18 = a3;
  v19 = a4;
  v20 = 0;
  Data1 = p_ActivityId->Data1;
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  v14 = p_ActivityId->Data1;
  v15 = *(_QWORD *)&p_ActivityId->Data2;
  v17 = 0;
  v16 = 0;
  v21 = 0;
  result = NtTraceEvent(0, 1280, 120, (int)v6);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
