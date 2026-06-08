/*
 * XREFs of ProcLibTraceQueryCapabilities @ 0x1C001F240
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001E5F0 (ProcLibTraceControlCallback.c)
 *     QueryPepCapabilites @ 0x1C0036A50 (QueryPepCapabilites.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001AF0 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceQueryCapabilities(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rdi
  int ProcessorNumber; // eax
  int v5; // eax
  struct _PROCESSOR_NUMBER v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  int v10; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v11; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 *p_Number; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+68h] [rbp-11h]
  int v15; // [rsp+6Ch] [rbp-Dh]
  int *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]
  __int64 v28; // [rsp+B0h] [rbp+37h]
  int v29; // [rsp+B8h] [rbp+3Fh]
  int v30; // [rsp+BCh] [rbp+43h]

  v7 = 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_QUERY_CAPABILITIES;
  if ( a2 )
    v2 = &PPM_ETW_QUERY_CAPABILITIES_RUNDOWN;
  LOBYTE(ProcessorNumber) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v2);
  if ( (_BYTE)ProcessorNumber )
  {
    if ( *(_QWORD *)(a1 + 1104) )
    {
      ProcessorNumber = ProcLibGetProcessorNumber(a1, &v7);
      if ( ProcessorNumber >= 0 )
      {
        v5 = *(_DWORD *)(a1 + 1116);
        UserData.Reserved = 0;
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v9 = v5;
        v8 = *(_DWORD *)(a1 + 1112);
        v10 = *(unsigned __int8 *)(a1 + 1121);
        v11 = *(unsigned __int8 *)(a1 + 1122);
        UserData.Ptr = (unsigned __int64)&v7;
        p_Number = &v7.Number;
        v16 = &v8;
        v19 = &v9;
        v22 = &v10;
        v25 = &v11;
        v28 = a1 + 1120;
        v14 = 1;
        v17 = 4;
        v20 = 4;
        v23 = 4;
        v26 = 4;
        v29 = 1;
        UserData.Size = 2;
        LOBYTE(ProcessorNumber) = EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v2, 0LL, 7u, &UserData);
      }
    }
  }
  return ProcessorNumber;
}
