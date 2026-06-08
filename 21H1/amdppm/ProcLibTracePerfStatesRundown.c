/*
 * XREFs of ProcLibTracePerfStatesRundown @ 0x1C001DD54
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001C5F0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0003404 (ProcLibGetEventDescriptorAndProcessorId.c)
 */

void __fastcall ProcLibTracePerfStatesRundown(__int64 a1)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  _BYTE *PoolWithTag; // rbx
  unsigned int v7; // ecx
  __int64 i; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  _BYTE *v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]

  v13 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PERF_STATES_RUNDOWN,
                                                              (__int64)&PPM_ETW_PERF_STATES_RUNDOWN_HV,
                                                              (__int64)&v13,
                                                              (__int64)&UserData);
  v3 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptorAndProcessorId) )
    {
      v4 = *(_QWORD *)(a1 + 216);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 24);
        v12 = *(_DWORD *)(v5 + 64);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 6LL * v12, 0x72637250u);
        if ( PoolWithTag )
        {
          v7 = v12;
          for ( i = 0LL; (unsigned int)i < v12; v7 = v12 )
          {
            v9 = 3 * i;
            v10 = 32LL * (unsigned int)i;
            i = (unsigned int)(i + 1);
            v11 = *(_QWORD *)(v5 + 56) + v10;
            *(_DWORD *)&PoolWithTag[2 * v9] = *(_DWORD *)(v11 + 16);
            PoolWithTag[2 * v9 + 4] = *(_BYTE *)(v11 + 24);
            PoolWithTag[2 * v9 + 5] = *(_BYTE *)(v11 + 25);
          }
          v17 = 0;
          v20 = 0;
          v15 = &v12;
          v16 = 4;
          v19 = 6 * v7;
          v18 = PoolWithTag;
          EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, 3u, &UserData);
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
        }
      }
    }
  }
}
