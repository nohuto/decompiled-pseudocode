/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0173CBC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0173180 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     rimFindHoldingFrame @ 0x1C005DC40 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0172768 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     rimReclaimHoldingFrame @ 0x1C01743B8 (rimReclaimHoldingFrame.c)
 *     ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C01CAEB0 (ApiSetEtwTraceBeginPointerFrameCommit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *HoldingFrame; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rdx
  int v14; // eax
  __int64 v15; // r15
  unsigned int v16; // esi
  _DWORD *v17; // rax
  _DWORD *v18; // r14
  unsigned int v19; // ebp
  _QWORD *v20; // rax
  __int64 i; // rsi
  __int64 v22; // r12
  _OWORD *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r15
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  unsigned int v29; // eax

  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9, v10);
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9, v10);
  if ( HoldingFrame[3] != *(_QWORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9, v10);
  v11 = *((unsigned int *)HoldingFrame + 10);
  if ( !(_DWORD)v11 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v11, v9, v10);
    v11 = *((unsigned int *)HoldingFrame + 10);
  }
  if ( (_DWORD)v11 != *((_DWORD *)HoldingFrame + 11) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v11, v9, v10);
    v11 = *((unsigned int *)HoldingFrame + 10);
  }
  ApiSetEtwTraceBeginPointerFrameCommit(v7, v11);
  v12 = HoldingFrame[7];
  v13 = 0LL;
  while ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 4);
    v12 = *(_QWORD *)(v12 + 16);
    v13 = (__int64 *)(((v14 + 7) & 0xFFFFFFF8) + (_DWORD)v13 + 24);
  }
  v15 = (unsigned int)(192 * *((_DWORD *)HoldingFrame + 10));
  v16 = (_DWORD)v13 + v15 + 128;
  if ( v16 )
  {
    v17 = Win32AllocPoolZInit(v16, 1717793618LL);
    v18 = v17;
    if ( v17 )
    {
      *v17 = v16;
      v19 = 0;
      v20 = v17 + 2;
      v20[1] = v20;
      *v20 = v20;
      v18[6] = *((_DWORD *)HoldingFrame + 10);
      *((_QWORD *)v18 + 4) = HoldingFrame[3];
      *((_QWORD *)v18 + 5) = HoldingFrame[4];
      *((_QWORD *)v18 + 15) = v18 + 32;
      for ( i = HoldingFrame[9]; v19 < *((_DWORD *)HoldingFrame + 10); i += 192LL )
      {
        v22 = 192LL * v19;
        v23 = (_OWORD *)(v22 + *((_QWORD *)v18 + 15));
        *v23 = *(_OWORD *)i;
        v23[1] = *(_OWORD *)(i + 16);
        v23[2] = *(_OWORD *)(i + 32);
        v23[3] = *(_OWORD *)(i + 48);
        v23[4] = *(_OWORD *)(i + 64);
        v23[5] = *(_OWORD *)(i + 80);
        v23[6] = *(_OWORD *)(i + 96);
        v23[7] = *(_OWORD *)(i + 112);
        v23[8] = *(_OWORD *)(i + 128);
        v23[9] = *(_OWORD *)(i + 144);
        v23[10] = *(_OWORD *)(i + 160);
        v23[11] = *(_OWORD *)(i + 176);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_d(
            (_DWORD)gRimLog,
            (_DWORD)v13,
            1,
            26,
            (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
            v19);
        }
        DumpPointerEventInt((struct tagPOINTEREVENTINT *)(i + 8), (int)v13);
        if ( i == HoldingFrame[10] )
        {
          v12 = v22 + *((_QWORD *)v18 + 15);
          *((_QWORD *)v18 + 13) = v12;
        }
        ++v19;
      }
      v18[7] = *((_DWORD *)HoldingFrame + 12);
      v24 = HoldingFrame[7];
      if ( v24 )
      {
        v25 = *((_QWORD *)v18 + 15) + v15;
        *((_QWORD *)v18 + 14) = v25;
        v24 = HoldingFrame[7];
      }
      else
      {
        v25 = *((_QWORD *)v18 + 14);
      }
      while ( v24 )
      {
        while ( 1 )
        {
          *(_DWORD *)v25 = *(_DWORD *)v24;
          *(_DWORD *)(v25 + 4) = *(_DWORD *)(v24 + 4);
          *(_QWORD *)(v25 + 8) = v25 + 24;
          memmove((void *)(v25 + 24), *(const void **)(v24 + 8), *(unsigned int *)(v24 + 4));
          v13 = (__int64 *)(v24 + 16);
          v28 = *(_DWORD *)(v24 + 4) + 7;
          *(_QWORD *)(v25 + 16) = 0LL;
          v24 = *(_QWORD *)(v24 + 16);
          v29 = (v28 & 0xFFFFFFF8) + 24;
          v12 = 0LL;
          if ( v24 )
          {
            v12 = v25 + v29;
            *(_QWORD *)(v25 + 16) = v12;
            v24 = *v13;
          }
          v25 = v12;
          if ( !v12 )
            break;
          if ( !v24 )
            goto LABEL_31;
        }
        if ( !v24 )
          break;
LABEL_31:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v13, v26, v27);
      }
      *a3 = v18;
      v3 = 1;
    }
  }
  rimReclaimHoldingFrame(v12, v13, HoldingFrame);
  return v3;
}
