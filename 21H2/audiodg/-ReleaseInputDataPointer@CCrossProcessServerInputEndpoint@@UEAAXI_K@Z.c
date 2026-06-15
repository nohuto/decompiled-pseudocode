/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140015E60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0p_EventWriteTransfer @ 0x14006168C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062A60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        __int64 a2)
{
  int v2; // edi
  signed __int64 v4; // rcx
  __int64 v5; // r8
  signed __int64 v6; // rax
  signed __int64 v7; // r8
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  v2 = a2;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((_DWORD)this, a2, (_DWORD)this - 456, 7, a2, 0, 0);
  LODWORD(v4) = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL);
  if ( v2 )
  {
    LODWORD(v4) = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL) & 1;
    if ( (_BYTE)v4 || (*((_BYTE *)this - 280) & 1) != 0 )
    {
      v4 = *((_QWORD *)this - 48);
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), 0LL, 0LL);
      if ( v5 >= 0 )
      {
        LODWORD(a2) = v2 * *((_DWORD *)this - 92) - *((_DWORD *)this + 20);
        if ( *((_DWORD *)this + 4) <= 1u )
        {
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), 0LL, 0LL);
          v4 = (unsigned int)a2;
          a2 = *((_QWORD *)this - 48);
          v7 = v4 + v5;
          if ( v7 > v6 )
            v7 = v6;
          v9 = *(_QWORD *)(a2 + 24);
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v7, v9);
          if ( v9 != v8 )
          {
            do
            {
              v4 = v8;
              v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v7, v8);
            }
            while ( v8 != v4 );
          }
        }
      }
      else
      {
        if ( (byte_140090581 & 4) != 0 )
          McTemplateU0p_EventWriteTransfer(v4, a2, (char *)this - 456);
        _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL), 0xFFFFFFFE);
        AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6A6u, -2147467259);
      }
    }
  }
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v4, a2, (_DWORD)this - 456, 8, v2, *((_DWORD *)this + 4), 0);
  *((_DWORD *)this + 4) = 3;
}
