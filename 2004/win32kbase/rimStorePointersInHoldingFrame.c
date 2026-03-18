/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C0174410
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0173180 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     rimFindHoldingFrame @ 0x1C005DC40 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018085C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01808F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0180944 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C0180DC4 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rax
  bool v14; // zf
  __int64 v15; // rdx
  __int64 ButtonContact; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _OWORD *v20; // rax
  _OWORD *v21; // rax
  __int64 active; // rax
  __int64 v23; // xmm1_8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int128 v30; // xmm1
  __int64 v31; // xmm0_8
  __int64 v32; // rax
  int v33; // eax
  _OWORD *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdx
  _OWORD *v37; // rax
  _OWORD *v38; // rsi
  __int128 v39; // [rsp+48h] [rbp-9h] BYREF
  __int64 v40; // [rsp+58h] [rbp+7h]
  __int128 v41; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v42; // [rsp+70h] [rbp+1Fh]
  _BYTE v43[32]; // [rsp+78h] [rbp+27h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !(_DWORD)v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( (_DWORD)v6 && (v8 = 192 * v6, (unsigned __int64)(192 * v6) <= 0xFFFFFFFF) && (_DWORD)v8 )
    v12 = Win32AllocPoolZInit((unsigned int)v8, 1701868370LL);
  else
    v12 = 0LL;
  HoldingFrame[9] = v12;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 47, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
    return 0LL;
  }
  v14 = *((_DWORD *)HoldingFrame + 11) == 0;
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( !v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    v19 = *(unsigned int *)(ButtonContact + 32);
    if ( (v19 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v15, v17, v18);
      v19 = *(unsigned int *)(ButtonContact + 32);
    }
    if ( (v19 & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v15, v17, v18);
    if ( (*(_DWORD *)(ButtonContact + 2420) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v15, v17, v18);
      v20 = (_OWORD *)HoldingFrame[9];
      HoldingFrame[10] = v20;
    }
    else
    {
      v20 = (_OWORD *)HoldingFrame[9];
    }
    *v20 = *(_OWORD *)(ButtonContact + 2392);
    v20[1] = *(_OWORD *)(ButtonContact + 2408);
    v20[2] = *(_OWORD *)(ButtonContact + 2424);
    v20[3] = *(_OWORD *)(ButtonContact + 2440);
    v20[4] = *(_OWORD *)(ButtonContact + 2456);
    v20[5] = *(_OWORD *)(ButtonContact + 2472);
    v20[6] = *(_OWORD *)(ButtonContact + 2488);
    v21 = v20 + 8;
    *(v21 - 1) = *(_OWORD *)(ButtonContact + 2504);
    *v21 = *(_OWORD *)(ButtonContact + 2520);
    v21[1] = *(_OWORD *)(ButtonContact + 2536);
    v21[2] = *(_OWORD *)(ButtonContact + 2552);
    v21[3] = *(_OWORD *)(ButtonContact + 2568);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v41, v4);
    v23 = *(_QWORD *)(active + 16);
    v39 = *(_OWORD *)active;
    v40 = v23;
    while ( 1 )
    {
      v24 = RIMCmActiveContactsEnd(v43, v4);
      v29 = v40;
      v30 = *(_OWORD *)v24;
      v31 = *(_QWORD *)(v24 + 16);
      v32 = *(_QWORD *)v24;
      v42 = v31;
      v41 = v30;
      if ( (_QWORD)v39 == v32 && DWORD2(v39) == DWORD2(v41) && v40 == v42 )
        break;
      v33 = *(_DWORD *)(v40 + 16);
      v34 = (_OWORD *)(v40 + 2376);
      if ( (v33 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
        v33 = *(_DWORD *)(v29 + 16);
      }
      if ( (v33 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
      if ( (*(_DWORD *)(v29 + 2324) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v29 + 2404) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
          v35 = *((unsigned int *)HoldingFrame + 11);
          v36 = HoldingFrame[9];
          HoldingFrame[10] = v36 + 192 * v35;
        }
        else
        {
          LODWORD(v35) = *((_DWORD *)HoldingFrame + 11);
          v36 = HoldingFrame[9];
        }
        v37 = (_OWORD *)(v36 + 192LL * (unsigned int)v35);
        *v37 = *v34;
        v37[1] = *(_OWORD *)(v29 + 2392);
        v37[2] = *(_OWORD *)(v29 + 2408);
        v37[3] = *(_OWORD *)(v29 + 2424);
        v37[4] = *(_OWORD *)(v29 + 2440);
        v37[5] = *(_OWORD *)(v29 + 2456);
        v37[6] = *(_OWORD *)(v29 + 2472);
        v37 += 8;
        v38 = v34 + 8;
        *(v37 - 1) = *(_OWORD *)(v29 + 2488);
        *v37 = *v38;
        v37[1] = v38[1];
        v37[2] = v38[2];
        v37[3] = v38[3];
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v39);
    }
  }
  if ( *((_DWORD *)HoldingFrame + 11) != *((_DWORD *)HoldingFrame + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        (__int64)gRimLog,
        4u,
        1u,
        0x30u,
        (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
        *((_DWORD *)HoldingFrame + 11),
        *((_DWORD *)HoldingFrame + 10));
    return 0LL;
  }
  return 1LL;
}
