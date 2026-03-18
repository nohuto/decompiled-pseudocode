/*
 * XREFs of PpmEventBiosCapChange @ 0x1403903A0
 * Callers:
 *     PpmRegisterPerfCap @ 0x1403901C0 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x14039669C (PpmEventGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

char __fastcall PpmEventBiosCapChange(int a1, int a2)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  REGHANDLE v4; // rbx
  int v6; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]
  int v11; // [rsp+88h] [rbp+10h] BYREF

  v11 = a2;
  v6 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (unsigned int)PPM_ETW_BIOS_CAP_CHANGE,
                                                              (unsigned int)PPM_ETW_BIOS_CAP_CHANGE_HV,
                                                              (unsigned int)&v6,
                                                              (__int64)&UserData);
  v3 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v10 = 0;
      v8 = &v11;
      v9 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(v4, v3, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
