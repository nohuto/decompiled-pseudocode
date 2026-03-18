/*
 * XREFs of _xxxCapture@12 @ 0xC4EA6
 * Callers:
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxCancelTrackingForThread@4 @ 0x17668C (_xxxCancelTrackingForThread@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxSetCapture@4 @ 0x18772B (_xxxSetCapture@4.c)
 *     _xxxMNSetCapture@8 @ 0x19A754 (_xxxMNSetCapture@8.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _xxxCancelMouseMoveTracking@16 @ 0x15E12 (_xxxCancelMouseMoveTracking@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     ?Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z @ 0x9AEC8 (-Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z.c)
 *     _IsMiPEnabledForThread@4 @ 0x9AF9E (_IsMiPEnabledForThread@4.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _LockCaptureWindow@8 @ 0xC5242 (_LockCaptureWindow@8.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z @ 0xC529E (-SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z.c)
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@CG?AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z @ 0x14D176 (-GetWindowDetails@InputTraceLogging@@CG-AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z.c)
 *     _IsMiPEnabledForWindow@4 @ 0x14E372 (_IsMiPEnabledForWindow@4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapSz@G@@33334ABU?$_tlgWrapSz@D@@@Z @ 0x1875FF (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlg.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCapture(_DWORD *a1, int a2, int a3)
{
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // edi
  int *v9; // esi
  int v10; // eax
  int v11; // edx
  int *v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // esi
  int v16; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  size_t v19; // eax
  int v20; // esi
  unsigned int v21; // [esp-8h] [ebp-90h]
  struct tagQMSG *v22; // [esp-4h] [ebp-8Ch]
  bool v23; // [esp-4h] [ebp-8Ch]
  _DWORD *v24; // [esp+8h] [ebp-80h]
  int v25; // [esp+Ch] [ebp-7Ch]
  int v26; // [esp+10h] [ebp-78h]
  int v27; // [esp+14h] [ebp-74h] BYREF
  int v28; // [esp+18h] [ebp-70h] BYREF
  int v29; // [esp+1Ch] [ebp-6Ch] BYREF
  int v30; // [esp+20h] [ebp-68h] BYREF
  int v31; // [esp+24h] [ebp-64h] BYREF
  int v32; // [esp+28h] [ebp-60h] BYREF
  int v33; // [esp+2Ch] [ebp-5Ch] BYREF
  int v34; // [esp+30h] [ebp-58h] BYREF
  int v35; // [esp+34h] [ebp-54h] BYREF
  int v36[3]; // [esp+38h] [ebp-50h] BYREF
  _DWORD v37[7]; // [esp+44h] [ebp-44h] BYREF
  char v38[40]; // [esp+60h] [ebp-28h] BYREF

  v5 = 0;
  v6 = a3;
  v26 = (int)a1;
  v28 = 0;
  if ( a3 == 6 )
  {
    v23 = a2;
    HMAssignmentLock(6, a2);
    InputTraceLogging::Mouse::SetCapture((const struct tagQ *)1, _gspwndInternalCapture, v23);
    v6 = 2;
    a3 = 2;
  }
  v25 = 4;
  if ( !v6 && _gspwndInternalCapture && a1 == *((_DWORD **)_gspwndInternalCapture + 2) )
  {
    HMAssignmentUnlock(_gspwndInternalCapture);
    v27 = a1[59];
    if ( InputTraceLogging::Enabled(0) )
    {
      qmemcpy(v37, (const void *)InputTraceLogging::GetWindowDetails(0, v38), sizeof(v37));
      if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 64LL) )
      {
        v28 = v37[0];
        v29 = v37[1];
        v30 = v37[6];
        v31 = v37[5];
        v32 = v37[4];
        v33 = v37[3];
        v34 = v37[2];
        v35 = 0;
        v36[0] = 1;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (int)&dword_2689E8,
          (int)&unk_2566B2,
          v7,
          v7,
          (int)&v27,
          (int)v36,
          (int)&v35,
          (int)&v34,
          (int)&v33,
          (int)&v32,
          (int)&v31,
          (int)&v30,
          (int)&v29,
          (int)&v28);
      }
      v5 = (int)a1;
      a1 = v24;
    }
    v6 = a3;
  }
  v8 = (_DWORD *)a1[59];
  if ( v8 )
  {
    v9 = (int *)v24[62];
    if ( (v9[6] & 0xC0) != 0 && v9[26] == 1 )
    {
      if ( (v10 = v9[25], v10 == a2) && v6 != 2 || v10 == v8[14] && v8[20] != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v36);
        xxxCancelMouseMoveTracking(v9[6], v9[25], v9[26], 192);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v36);
      }
    }
    v5 = LockCaptureWindow(v8, a2);
    v26 = v5;
    v8[20] = a3;
    if ( a2 )
    {
      v36[0] = *(_DWORD *)(a2 + 8);
      if ( IsMiPEnabledForThread((_DWORD *)v36[0]) )
      {
        if ( !IsMiPEnabledForWindow(a2) )
        {
          v11 = v36[0];
          v12 = *(int **)(v36[0] + 720);
          if ( v12 )
          {
            v13 = *v12;
            if ( (*v12 & 0x16) == 0 && (v13 & 1) != 0 )
            {
              if ( (v13 & 0x20) == 0 && (v12[7] & 0x1F0) == 0 )
                v25 = 2;
              *v12 = v25 | v13;
              **(_DWORD **)(v11 + 720) &= ~0x10u;
            }
          }
        }
      }
    }
  }
  ++_gdwDeferWinEvent;
  if ( !a2 )
  {
    if ( !v5 )
    {
LABEL_50:
      zzzEndDeferWinEventNotify();
      return;
    }
    v14 = *(_DWORD *)(v5 + 8);
    v36[0] = v14;
    if ( (*(_DWORD *)(v14 + 356) & 0x10000000) != 0 )
    {
      v15 = *(_DWORD *)(v14 + 236);
      *(_DWORD *)(v15 + 284) |= 0x20u;
      SetSystemInputSource(v15 + 308);
      WakeSomeone((struct tagQ *)0x200, 0, v21, v22);
      v5 = v26;
    }
    GenerateMouseMove(0);
  }
  if ( v5 )
    xxxWindowEvent(9u, (struct tagEVENTHOOK *)v5, 0, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
  if ( a2 )
    xxxWindowEvent(8u, (struct tagEVENTHOOK *)a2, 0, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
  if ( !v5 )
    goto LABEL_50;
  v16 = *(_DWORD *)(v5 + 20);
  if ( (*(_BYTE *)(v16 + 13) & 2) == 0 || *(__int16 *)(v16 + 30) < 0 )
    goto LABEL_50;
  v36[2] = 0;
  if ( v24[82] && a2 )
    v8[71] |= 0x100000u;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v36[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v36;
  v36[1] = v5;
  HMLockObject(v5);
  zzzEndDeferWinEventNotify();
  v19 = 0;
  if ( a2 )
    v19 = *(_DWORD *)a2;
  xxxSendMessageCallback(v5, 0x215u, 0, v19, 0, 0, 0, 0, 1);
  ThreadUnlock1();
  v20 = v24[59];
  if ( !v20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *(_DWORD *)(v20 + 284) &= ~0x100000u;
}
