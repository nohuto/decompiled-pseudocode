/*
 * XREFs of ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140059BF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140058DB8 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetPosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 **a3)
{
  int v3; // ebx
  CCrossProcessClientInputEndpoint *v4; // r9
  unsigned __int64 *v5; // rcx

  v3 = 0;
  v4 = this;
  if ( a2 )
  {
    v5 = *(unsigned __int64 **)(*((_QWORD *)this - 42) + 16LL);
    *a2 = (unsigned __int64)v5;
    if ( a3 )
    {
      *a3 = *(unsigned __int64 **)(*((_QWORD *)v4 - 42) + 56LL);
      v5 = (unsigned __int64 *)*a2;
    }
    *((_QWORD *)v4 - 28) = v5;
  }
  else
  {
    v3 = -2147467261;
  }
  if ( (byte_140085401 & 4) != 0 )
  {
    if ( a3 )
      a3 = (unsigned __int64 **)*a3;
    if ( a2 )
      a2 = (unsigned __int64 *)*a2;
    McTemplateU0pqxxxxffff_EventWriteTransfer(
      *((_QWORD *)v4 - 42),
      (__int64)a2,
      0LL,
      6,
      (char)a2,
      (char)a3,
      *(_QWORD *)(*((_QWORD *)v4 - 42) + 16LL),
      *(_QWORD *)(*((_QWORD *)v4 - 42) + 24LL),
      0,
      0,
      0,
      0);
  }
  if ( v3 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetPosition", 358, (unsigned int)v3, (__int64)v4);
  return (unsigned int)v3;
}
