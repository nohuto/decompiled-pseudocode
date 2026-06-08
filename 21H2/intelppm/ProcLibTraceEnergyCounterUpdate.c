/*
 * XREFs of ProcLibTraceEnergyCounterUpdate @ 0x1C0008010
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0005F20 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0003830 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceEnergyCounterUpdate(__int64 a1, int a2, __int64 a3)
{
  int ProcessorNumber; // eax
  unsigned __int8 Number; // [rsp+38h] [rbp-9h] BYREF
  unsigned __int16 Group; // [rsp+3Ch] [rbp-5h] BYREF
  struct _PROCESSOR_NUMBER v8; // [rsp+40h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+64h] [rbp+23h]
  int *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  __int64 *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]
  int v19; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+B8h] [rbp+77h] BYREF

  v20 = a3;
  v19 = a2;
  v8 = 0;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(
                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                              &PPM_ETW_ENERGY_COUNTER_UPDATE);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v8);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      Group = v8.Group;
      Number = v8.Number;
      UserData.Ptr = (unsigned __int64)&Group;
      p_Number = &Number;
      v13 = &v19;
      v16 = &v20;
      UserData.Size = 2;
      v11 = 1;
      v14 = 4;
      v17 = 8;
      LOBYTE(ProcessorNumber) = EtwWrite(
                                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                  &PPM_ETW_ENERGY_COUNTER_UPDATE,
                                  0LL,
                                  4u,
                                  &UserData);
    }
  }
  return ProcessorNumber;
}
