/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140015F40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0p_EventWriteTransfer @ 0x140058ACC (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140059E60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx

  v3 = a2;
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((_DWORD)this, a2, (_DWORD)this - 456, 7, a2, 0, 0);
  LODWORD(v4) = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL);
  if ( v3 )
  {
    LODWORD(v4) = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL) & 1;
    if ( (_BYTE)v4 || (*((_BYTE *)this - 280) & 1) != 0 )
    {
      a2 = *((_QWORD *)this - 48);
      v4 = *(_QWORD *)(a2 + 24);
      if ( v4 < 0 )
      {
        if ( (byte_140085401 & 4) != 0 )
        {
          McTemplateU0p_EventWriteTransfer(v4, a2, (char *)this - 456);
          a2 = *((_QWORD *)this - 48);
        }
        _InterlockedAnd((volatile signed __int32 *)(a2 + 164), 0xFFFFFFFE);
        AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6A6u, -2147467259);
      }
      else if ( *((_DWORD *)this + 4) <= 1u )
      {
        v4 += (unsigned int)(v3 * *((_DWORD *)this - 92) - *((_DWORD *)this + 20));
        if ( v4 > *(_QWORD *)(a2 + 16) )
          v4 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 24) = v4;
      }
    }
  }
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v4, a2, (_DWORD)this - 456, 8, v3, *((_DWORD *)this + 4), 0);
  *((_DWORD *)this + 4) = 3;
}
