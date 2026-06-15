/*
 * XREFs of ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x1400615A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140051030 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400610E8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140061830 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Stop(CCrossProcessControl *this)
{
  int v2; // ebx
  unsigned int v3; // ebx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 164LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(*((CCrossProcessBaseEndpoint **)this + 1), v3) )
    {
      if ( (v3 & 1) != 0 )
      {
        v2 = 0;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 164LL), 0xFFFFFFFC);
        AERTUnlockZoneHeap(
          *(void **)(*((_QWORD *)this + 1) + 144LL),
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 160LL), 1),
          v4);
        if ( (byte_140090581 & 4) != 0 )
          McTemplateU0pqx_EventWriteTransfer(v6, v5, this, 7LL);
      }
      else
      {
        v2 = -2005139433;
      }
    }
    else
    {
      v2 = -2005139387;
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v2 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Stop", 0x65Du, v2);
  return (unsigned int)v2;
}
