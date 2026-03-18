/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01BD270
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C01AB630 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C01BD384 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01BE904 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  __int64 v14; // xmm1_8
  struct _KEVENT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE v20[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v21[3]; // [rsp+38h] [rbp-38h] BYREF

  RIMLockExclusive((__int64)this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 8) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    v6 = *(_OWORD *)((char *)this + 56);
    memset(v20, 0, sizeof(v20));
    v7 = *(_OWORD *)((char *)this + 40);
    v21[1] = v6;
    v21[0] = v7;
    v21[2] = *(_OWORD *)((char *)this + 72);
    v8 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v21, v20);
    v13 = v8;
    if ( v8 != 2 )
    {
      if ( v8 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
      *(_DWORD *)v20 = v13;
      memset(&v20[4], 0, 20);
    }
    v14 = *(_QWORD *)&v20[16];
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)v20;
    *((_QWORD *)this + 13) = v14;
  }
  v15 = (struct _KEVENT *)*((_QWORD *)this + 14);
  if ( v15 )
  {
    if ( KeReadStateEvent(v15) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18, v19);
    KeSetEvent(*((PRKEVENT *)this + 14), 1, 0);
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
