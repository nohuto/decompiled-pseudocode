/*
 * XREFs of ProcLibTraceEnergyCounterUpdate @ 0x1C0001920
 * Callers:
 *     ComputeProcessorEnergyUsingMsr @ 0x1C0001E90 (ComputeProcessorEnergyUsingMsr.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001AF0 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceEnergyCounterUpdate(__int64 a1, __int64 a2, __int64 a3)
{
  int ProcessorNumber; // eax
  char v6; // [rsp+30h] [rbp-19h] BYREF
  __int16 v7; // [rsp+34h] [rbp-15h] BYREF
  int v8; // [rsp+38h] [rbp-11h] BYREF
  int v9; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  __int64 *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]
  __int64 v17; // [rsp+C0h] [rbp+77h] BYREF

  v17 = a3;
  v9 = -1073675622;
  v8 = 0;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(
                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                              &PPM_ETW_ENERGY_COUNTER_UPDATE);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v8);
    if ( ProcessorNumber >= 0 )
    {
      v7 = v8;
      v6 = BYTE2(v8);
      UserData.Ptr = (unsigned __int64)&v7;
      v11 = &v6;
      v13 = &v9;
      v15 = &v17;
      *(_QWORD *)&UserData.Size = 2LL;
      v12 = 1LL;
      v14 = 4LL;
      v16 = 8LL;
      LOBYTE(ProcessorNumber) = EtwWrite(
                                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                  &PPM_ETW_ENERGY_COUNTER_UPDATE,
                                  0LL,
                                  4u,
                                  &UserData);
    }
  }
  return ProcessorNumber;
}
