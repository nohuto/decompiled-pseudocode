/*
 * XREFs of ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400627C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140061978 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetPosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  CCrossProcessClientInputEndpoint *v3; // r9
  int v4; // ebx
  __int64 v5; // r10
  __int64 v6; // r8
  signed __int64 v7; // rax

  v3 = this;
  v4 = 0;
  if ( a2 )
  {
    *a2 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 42) + 16LL), 0LL, 0LL);
    if ( a3 )
      *a3 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 42) + 56LL), 0LL, 0LL);
    *((_QWORD *)this - 28) = *a2;
  }
  else
  {
    v4 = -2147467261;
  }
  if ( (byte_140090581 & 4) != 0 )
  {
    LOBYTE(v5) = 0;
    if ( a3 )
      v5 = *a3;
    LOBYTE(v6) = 0;
    if ( a2 )
      v6 = *a2;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 42) + 24LL), 0LL, 0LL);
    McTemplateU0pqxxxxffff_EventWriteTransfer(
      *((_QWORD *)this - 42),
      v7,
      0LL,
      6,
      v6,
      v5,
      _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 42) + 16LL), 0LL, 0LL),
      v7,
      0,
      0,
      0,
      0);
  }
  if ( v4 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetPosition", 358, (unsigned int)v4, (__int64)v3);
  return (unsigned int)v4;
}
