/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C017A740
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C0056DA0 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018655C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C0186AC4 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  void *v10; // rax
  bool v12; // zf
  __int64 ButtonContact; // rsi
  __int64 v14; // rcx
  _OWORD *v15; // rax
  _OWORD *v16; // rax
  __int64 active; // rax
  __int64 v18; // xmm1_8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int128 v22; // xmm1
  __int64 v23; // xmm0_8
  __int64 v24; // rax
  int v25; // eax
  _OWORD *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  _OWORD *v29; // rax
  _OWORD *v30; // rsi
  __int128 v31; // [rsp+48h] [rbp-9h] BYREF
  __int64 v32; // [rsp+58h] [rbp+7h]
  __int128 v33; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+70h] [rbp+1Fh]
  _BYTE v35[32]; // [rsp+78h] [rbp+27h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !(_DWORD)v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( (_DWORD)v6 && (v8 = 192 * v6, (unsigned __int64)(192 * v6) <= 0xFFFFFFFF) && (_DWORD)v8 )
    v10 = Win32AllocPoolZInit((unsigned int)v8, 0x65707352u);
  else
    v10 = 0LL;
  HoldingFrame[9] = v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 47, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
    return 0LL;
  }
  v12 = *((_DWORD *)HoldingFrame + 11) == 0;
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    v14 = *(unsigned int *)(ButtonContact + 32);
    if ( (v14 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
      v14 = *(unsigned int *)(ButtonContact + 32);
    }
    if ( (v14 & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
    if ( (*(_DWORD *)(ButtonContact + 2420) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
      v15 = (_OWORD *)HoldingFrame[9];
      HoldingFrame[10] = v15;
    }
    else
    {
      v15 = (_OWORD *)HoldingFrame[9];
    }
    *v15 = *(_OWORD *)(ButtonContact + 2392);
    v15[1] = *(_OWORD *)(ButtonContact + 2408);
    v15[2] = *(_OWORD *)(ButtonContact + 2424);
    v15[3] = *(_OWORD *)(ButtonContact + 2440);
    v15[4] = *(_OWORD *)(ButtonContact + 2456);
    v15[5] = *(_OWORD *)(ButtonContact + 2472);
    v15[6] = *(_OWORD *)(ButtonContact + 2488);
    v16 = v15 + 8;
    *(v16 - 1) = *(_OWORD *)(ButtonContact + 2504);
    *v16 = *(_OWORD *)(ButtonContact + 2520);
    v16[1] = *(_OWORD *)(ButtonContact + 2536);
    v16[2] = *(_OWORD *)(ButtonContact + 2552);
    v16[3] = *(_OWORD *)(ButtonContact + 2568);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v33, v4);
    v18 = *(_QWORD *)(active + 16);
    v31 = *(_OWORD *)active;
    v32 = v18;
    while ( 1 )
    {
      v19 = RIMCmActiveContactsEnd(v35, v4);
      v21 = v32;
      v22 = *(_OWORD *)v19;
      v23 = *(_QWORD *)(v19 + 16);
      v24 = *(_QWORD *)v19;
      v34 = v23;
      v33 = v22;
      if ( (_QWORD)v31 == v24 && DWORD2(v31) == DWORD2(v33) && v32 == v34 )
        break;
      v25 = *(_DWORD *)(v32 + 16);
      v26 = (_OWORD *)(v32 + 2376);
      if ( (v25 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
        v25 = *(_DWORD *)(v21 + 16);
      }
      if ( (v25 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
      if ( (*(_DWORD *)(v21 + 2324) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v21 + 2404) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
          v27 = *((unsigned int *)HoldingFrame + 11);
          v28 = HoldingFrame[9];
          HoldingFrame[10] = v28 + 192 * v27;
        }
        else
        {
          LODWORD(v27) = *((_DWORD *)HoldingFrame + 11);
          v28 = HoldingFrame[9];
        }
        v29 = (_OWORD *)(v28 + 192LL * (unsigned int)v27);
        *v29 = *v26;
        v29[1] = *(_OWORD *)(v21 + 2392);
        v29[2] = *(_OWORD *)(v21 + 2408);
        v29[3] = *(_OWORD *)(v21 + 2424);
        v29[4] = *(_OWORD *)(v21 + 2440);
        v29[5] = *(_OWORD *)(v21 + 2456);
        v29[6] = *(_OWORD *)(v21 + 2472);
        v29 += 8;
        v30 = v26 + 8;
        *(v29 - 1) = *(_OWORD *)(v21 + 2488);
        *v29 = *v30;
        v29[1] = v30[1];
        v29[2] = v30[2];
        v29[3] = v30[3];
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v31);
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
