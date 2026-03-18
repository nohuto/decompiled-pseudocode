/*
 * XREFs of ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C01BD164
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01BCEE4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0071B9C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // cx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)this == 0xFFFF )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 0x8000LL, a3, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    v10 = *((_WORD *)this + 1) | 1;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v11 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) = v10;
    *((_DWORD *)this + 4) = v11;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v10 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 4LL, v8, v9) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    *((_DWORD *)this + 18) &= ~8u;
  }
  else if ( (*((_DWORD *)a2 + 5) & 0x10) != 0 )
  {
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 18) = *((_DWORD *)this + 18) & 0xFFFFFFF3 | 4;
  }
  HIDWORD(v17) = *((_DWORD *)a2 + 4);
  LODWORD(v17) = 2;
  *((_QWORD *)this + 10) = v17;
  v16 = *((_DWORD *)a2 + 5);
  if ( (v16 & 2) != 0 )
  {
    *((_DWORD *)this + 18) |= 0x800u;
    v16 = *((_DWORD *)a2 + 5);
  }
  if ( (v16 & 4) != 0 )
  {
    *((_DWORD *)this + 18) |= 2u;
    v16 = *((_DWORD *)a2 + 5);
  }
  if ( (v16 & 0x20) != 0 )
  {
    *((_DWORD *)this + 18) |= 0x2000u;
    v16 = *((_DWORD *)a2 + 5);
  }
  if ( (v16 & 0x40) != 0 )
    *((_DWORD *)this + 18) |= 0x4000u;
}
