/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01C2FD0
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C01B1390 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C01C30E4 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01C4680 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int64 v2; // rcx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // xmm1_8
  struct _KEVENT *v9; // rcx
  __int64 v10; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v12[3]; // [rsp+38h] [rbp-38h] BYREF

  RIMLockExclusive((__int64)this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 8) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v3 = *(_OWORD *)((char *)this + 56);
    memset(v11, 0, sizeof(v11));
    v4 = *(_OWORD *)((char *)this + 40);
    v12[1] = v3;
    v12[0] = v4;
    v12[2] = *(_OWORD *)((char *)this + 72);
    v5 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v12, v11);
    v7 = v5;
    if ( v5 != 2 )
    {
      if ( v5 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      *(_DWORD *)v11 = v7;
      memset(&v11[4], 0, 20);
    }
    v8 = *(_QWORD *)&v11[16];
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)v11;
    *((_QWORD *)this + 13) = v8;
  }
  v9 = (struct _KEVENT *)*((_QWORD *)this + 14);
  if ( v9 )
  {
    if ( KeReadStateEvent(v9) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    KeSetEvent(*((PRKEVENT *)this + 14), 1, 0);
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
