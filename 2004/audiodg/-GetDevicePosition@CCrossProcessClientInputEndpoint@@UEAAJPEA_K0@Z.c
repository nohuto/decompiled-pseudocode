/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140059920
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x1400585BC (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140058CFC (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetDevicePosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  struct SharedMessageQueueItem *v9; // rcx
  __int64 v10; // rax
  bool v12; // [rsp+68h] [rbp+10h] BYREF
  struct SharedMessageQueueItem *v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( a2 )
  {
    v13 = 0LL;
    v12 = 0;
    if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
            (CCrossProcessClientInputEndpoint *)((char *)this - 416),
            &v13,
            &v12) )
    {
      v9 = v13;
      *a2 = *((_QWORD *)v13 + 2);
      if ( a3 )
        *a3 = *((_QWORD *)v9 + 5);
      if ( (byte_140085401 & 4) != 0 )
      {
        LOBYTE(v10) = 0;
        if ( a3 )
          v10 = *a3;
        McTemplateU0pqxxxx_EventWriteTransfer(*a2, v8, 0LL, 7, 0, *a2, 0, v10);
      }
    }
    *((_QWORD *)this - 28) = *a2;
  }
  else
  {
    v4 = -2147467261;
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetDevicePosition", 430, 2147500035LL, a4);
  }
  return v4;
}
