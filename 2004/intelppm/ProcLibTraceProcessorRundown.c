/*
 * XREFs of ProcLibTraceProcessorRundown @ 0x1C002CAE0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0026590 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C00037BC (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorRundown(__int64 a1)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  ULONG Type; // [rsp+48h] [rbp-19h] BYREF
  int Data; // [rsp+4Ch] [rbp-15h] BYREF
  int v14; // [rsp+50h] [rbp-11h] BYREF
  int v15; // [rsp+54h] [rbp-Dh] BYREF
  int v16; // [rsp+58h] [rbp-9h] BYREF
  ULONG RequiredSize; // [rsp+5Ch] [rbp-5h] BYREF
  int v18; // [rsp+60h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  int *v20; // [rsp+78h] [rbp+17h]
  int v21; // [rsp+80h] [rbp+1Fh]
  int v22; // [rsp+84h] [rbp+23h]
  int *v23; // [rsp+88h] [rbp+27h]
  int v24; // [rsp+90h] [rbp+2Fh]
  int v25; // [rsp+94h] [rbp+33h]
  char v26[16]; // [rsp+98h] [rbp+37h] BYREF

  v18 = 0;
  RequiredSize = 0;
  Type = 0;
  Data = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PROCESSOR_FIRMWARE_RUNDOWN,
                                                              (__int64)&PPM_ETW_PROCESSOR_FIRMWARE_RUNDOWN_HV,
                                                              (__int64)&v18,
                                                              (__int64)v26);
  v3 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v4 = *(_DWORD *)(a1 + 1088);
      v5 = v4 & *(_DWORD *)(a1 + 1092);
      v6 = ~*(_DWORD *)(a1 + 1096);
      v14 = v4;
      v7 = v5 & v6;
      v15 = v5;
      v16 = v7;
      if ( qword_1C001C900 )
      {
        v14 = v4 | 0x4000;
        v16 = v7 | 0x4000;
        v15 = v5 | 0x4000;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREPRESENT_OVERRIDE,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        v8 = v14;
        if ( Type == 7 )
          v8 = Data;
        v14 = v8;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREACCESSED_OVERRIDE,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        v9 = v15;
        if ( Type == 7 )
          v9 = Data;
        v15 = v9;
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &PROCESSOR_ETW_FEATUREVALID_OVERRIDE,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        v10 = v16;
        if ( Type == 7 )
          v10 = Data;
        v16 = v10;
      }
      UserData.Reserved = 0;
      v22 = 0;
      v25 = 0;
      UserData.Ptr = (unsigned __int64)&v14;
      v20 = &v15;
      v23 = &v16;
      UserData.Size = 4;
      v21 = 4;
      v24 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                                v3,
                                                0LL,
                                                4u,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
