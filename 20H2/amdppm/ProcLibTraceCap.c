/*
 * XREFs of ProcLibTraceCap @ 0x1C0020124
 * Callers:
 *     CapLogWorker @ 0x1C0028AC0 (CapLogWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0003404 (ProcLibGetEventDescriptorAndProcessorId.c)
 */

char __fastcall ProcLibTraceCap(__int64 a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v8; // rbx
  _DWORD v10[4]; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  int *v12; // [rsp+58h] [rbp-21h]
  int v13; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+64h] [rbp-15h]
  int *v15; // [rsp+68h] [rbp-11h]
  int v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+74h] [rbp-5h]
  int *v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+84h] [rbp+Bh]
  char *v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+94h] [rbp+1Bh]
  int v24; // [rsp+D0h] [rbp+57h] BYREF
  int v25; // [rsp+D8h] [rbp+5Fh] BYREF
  int v26; // [rsp+E0h] [rbp+67h] BYREF

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v10[0] = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              a6,
                                                              a7,
                                                              (__int64)v10,
                                                              (__int64)&UserData);
  v8 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v12 = &v24;
      v15 = &v25;
      v13 = 4;
      v18 = &v26;
      v21 = &a5;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                v8,
                                                0LL,
                                                5u,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
