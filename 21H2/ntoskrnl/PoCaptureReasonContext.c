/*
 * XREFs of PoCaptureReasonContext @ 0x14027184C
 * Callers:
 *     NtSetTimerEx @ 0x1402ED9F0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x1403764F0 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14056F150 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x140670E30 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x1406713E0 (NtSetThreadExecutionState.c)
 *     PoCreatePowerRequest @ 0x140772900 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x140791ED0 (PoCreateThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A720FC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PoGetRequester @ 0x1402719A4 (PoGetRequester.c)
 *     PopCaptureReasonContext @ 0x140271AF0 (PopCaptureReasonContext.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     PoGetRequesterOld @ 0x1403F7F10 (PoGetRequesterOld.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCaptureReasonContext(unsigned __int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Requester; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  int IsEnabledDeviceUsage; // eax
  PVOID v14; // r8
  _BOOL8 v15; // rcx
  int v17; // [rsp+20h] [rbp-38h]
  __int128 v18; // [rsp+28h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-10h]

  v7 = a2;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *a6 = 0LL;
  if ( a1 && (_BYTE)a2 )
  {
    if ( !a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = 0x7FFFFFFF0000LL;
      if ( a1 + 40 > 0x7FFFFFFF0000LL || a1 + 40 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v18 = *(_OWORD *)a1;
      v19 = *(_OWORD *)(a1 + 16);
      v20 = *(_QWORD *)(a1 + 32);
      a1 = (unsigned __int64)&v18;
    }
    LOBYTE(a2) = v7;
    Requester = PopCaptureReasonContext(a1, a2, a5, a6);
    v17 = Requester;
  }
  else
  {
    Requester = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( Requester >= 0 )
  {
    IsEnabledDeviceUsage = Feature_3401902395__private_IsEnabledDeviceUsage(v9, v8, v11, v12, v17, v18);
    v15 = IsEnabledDeviceUsage != 0;
    v14 = *a6;
    LOBYTE(v15) = v7;
    if ( IsEnabledDeviceUsage )
    {
      Requester = PoGetRequester(v15, a3, v14);
      if ( Requester < 0 && *a6 )
      {
        ExFreePoolWithTag(*a6, 0x78435250u);
        *a6 = 0LL;
      }
    }
    else
    {
      PoGetRequesterOld(v15, a3, v14);
    }
  }
  return (unsigned int)Requester;
}
