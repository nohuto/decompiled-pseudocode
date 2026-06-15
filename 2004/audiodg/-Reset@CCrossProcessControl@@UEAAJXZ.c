/*
 * XREFs of ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140058650
 * Callers:
 *     <none>
 * Callees:
 *     ?DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ @ 0x1400578E8 (-DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140058528 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140058C70 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Reset(CCrossProcessControl *this)
{
  int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 164LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(*((CCrossProcessBaseEndpoint **)this + 1), v3) )
    {
      if ( (v3 & 1) != 0 )
      {
        v2 = -2005139434;
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 24LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 16LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 152LL), 0LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 1) + 192LL) = 0LL;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 160LL), 1);
        CCrossProcessBaseEndpoint::DrainAndResetQueue(*((CCrossProcessBaseEndpoint **)this + 1));
        if ( (byte_140085401 & 4) != 0 )
          McTemplateU0pqx_EventWriteTransfer(v5, v4, this, 8LL);
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
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Reset", 0x5EAu, v2);
  return (unsigned int)v2;
}
