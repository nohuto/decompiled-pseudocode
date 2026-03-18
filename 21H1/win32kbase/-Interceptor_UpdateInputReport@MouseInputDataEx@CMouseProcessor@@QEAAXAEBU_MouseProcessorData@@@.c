/*
 * XREFs of ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C01C2EC4
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01C2C44 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0065FBC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2)
{
  __int64 v4; // rcx
  __int16 v5; // cx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)this == 0xFFFF )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 0x8000) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    v5 = *((_WORD *)this + 1) | 1;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) = v5;
    *((_DWORD *)this + 4) = v6;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v5 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    *((_DWORD *)this + 18) &= ~8u;
  }
  else if ( (*((_DWORD *)a2 + 5) & 0x10) != 0 )
  {
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 18) = *((_DWORD *)this + 18) & 0xFFFFFFF3 | 4;
  }
  HIDWORD(v9) = *((_DWORD *)a2 + 4);
  LODWORD(v9) = 2;
  *((_QWORD *)this + 10) = v9;
  v8 = *((_DWORD *)a2 + 5);
  if ( (v8 & 2) != 0 )
  {
    *((_DWORD *)this + 18) |= 0x800u;
    v8 = *((_DWORD *)a2 + 5);
  }
  if ( (v8 & 4) != 0 )
  {
    *((_DWORD *)this + 18) |= 2u;
    v8 = *((_DWORD *)a2 + 5);
  }
  if ( (v8 & 0x20) != 0 )
  {
    *((_DWORD *)this + 18) |= 0x2000u;
    v8 = *((_DWORD *)a2 + 5);
  }
  if ( (v8 & 0x40) != 0 )
    *((_DWORD *)this + 18) |= 0x4000u;
}
