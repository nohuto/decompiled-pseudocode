/*
 * XREFs of ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576
 * Callers:
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _SetPointer@4 @ 0xB155E (_SetPointer@4.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _xxxUserResetDisplayDevice@0 @ 0xD38BE (_xxxUserResetDisplayDevice@0.c)
 *     _SetMouseTrails@4 @ 0xD8942 (_SetMouseTrails@4.c)
 *     _UserResetPointer@0 @ 0xEBB4E (_UserResetPointer@0.c)
 *     _ChangeComposableCursor@4 @ 0x143332 (_ChangeComposableCursor@4.c)
 *     _RemoteShadowCleanup@8 @ 0x187B8D (_RemoteShadowCleanup@8.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 * Callees:
 *     ?GetCurrentCursorFrame@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748C4 (-GetCurrentCursorFrame@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     ?FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748E2 (-FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YG_NPAUtagTHREADINFO@@@Z @ 0x7494E (-TestRawInputModeCaptureMouse@@YG_NPAUtagTHREADINFO@@@Z.c)
 *     _GreSetPointer@16 @ 0x771C2 (_GreSetPointer@16.c)
 *     ?FCursorShadowed@@YGHPAU_CURSINFO@@@Z @ 0x773DE (-FCursorShadowed@@YGHPAU_CURSINFO@@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QBEIXZ @ 0xB170E (-GetCurrentCursorSize@CCursorSizes@@QBEIXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@3ABU?$_tlgWrapperByVal@$03@@4444444444444444@Z @ 0x142804 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@.c)
 *     ?CursorImageReasonToString@InputTraceLogging@@CGPBDW4CursorImageReason@Cursor@1@@Z @ 0x142F51 (-CursorImageReasonToString@InputTraceLogging@@CGPBDW4CursorImageReason@Cursor@1@@Z.c)
 *     ?CursorToString@InputTraceLogging@@CGPBDPAUtagCURSOR@@@Z @ 0x142FDC (-CursorToString@InputTraceLogging@@CGPBDPAUtagCURSOR@@@Z.c)
 */

char __fastcall SetPointerInternal(char a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  _DWORD *v4; // ecx
  struct tagCURSOR *CurrentCursorFrame; // eax
  int v6; // ecx
  _DWORD *v7; // edx
  struct tagCURSOR *v8; // edi
  int v9; // ecx
  struct _CURSINFO *Lock; // eax
  CCursorSizes *v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // ebx
  int v25; // ecx
  struct tagCURSOR *v27; // [esp+0h] [ebp-E0h]
  struct tagCURSOR *v28; // [esp+0h] [ebp-E0h]
  int CurrentCursorSize; // [esp+10h] [ebp-D0h] BYREF
  int v30; // [esp+14h] [ebp-CCh] BYREF
  int v31; // [esp+18h] [ebp-C8h] BYREF
  int v32; // [esp+1Ch] [ebp-C4h] BYREF
  int v33; // [esp+20h] [ebp-C0h] BYREF
  int v34; // [esp+24h] [ebp-BCh] BYREF
  int v35; // [esp+28h] [ebp-B8h] BYREF
  int v36; // [esp+2Ch] [ebp-B4h] BYREF
  int v37; // [esp+30h] [ebp-B0h]
  int v38; // [esp+34h] [ebp-ACh] BYREF
  int v39; // [esp+38h] [ebp-A8h] BYREF
  int v40; // [esp+3Ch] [ebp-A4h] BYREF
  int v41; // [esp+40h] [ebp-A0h] BYREF
  int v42; // [esp+44h] [ebp-9Ch] BYREF
  int v43; // [esp+48h] [ebp-98h] BYREF
  int v44; // [esp+4Ch] [ebp-94h] BYREF
  int v45; // [esp+50h] [ebp-90h] BYREF
  int v46; // [esp+54h] [ebp-8Ch] BYREF
  int v47; // [esp+58h] [ebp-88h] BYREF
  int v48; // [esp+5Ch] [ebp-84h] BYREF
  KSPIN_LOCK v49; // [esp+60h] [ebp-80h]
  int v50; // [esp+64h] [ebp-7Ch]
  struct tagCURSOR *v51; // [esp+68h] [ebp-78h]
  int v52; // [esp+6Ch] [ebp-74h]
  int v53; // [esp+70h] [ebp-70h]
  int v54; // [esp+74h] [ebp-6Ch]
  _DWORD v55[24]; // [esp+78h] [ebp-68h] BYREF

  v52 = a2;
  v2 = 0;
  if ( !a1 )
  {
    if ( gbForceSoftwareCursor == 1 )
      v2 = 32;
    GreSetPointer(0, (HDEV)v2, 0, 0);
    memset(v55, 0, sizeof(v55));
    if ( (unsigned int)dword_2689E8 <= 4 || !(unsigned __int8)_tlgKeywordOn(8, 0) )
    {
      v6 = 1;
      goto LABEL_23;
    }
    v24 = *(_DWORD *)UPDWORDPointer(8232);
    v43 = *(_DWORD *)UPDWORDPointer(8232);
    v42 = v55[15];
    v41 = v55[14];
    v40 = v55[13];
    v39 = SHIWORD(v55[12]);
    v38 = SLOWORD(v55[12]);
    v36 = v55[23] >> 1;
    v35 = v55[22];
    v34 = v55[11];
    v33 = v55[10];
    v32 = v55[6];
    v47 = _gpqCursor;
    v48 = v24;
    v46 = 0;
    v45 = 0;
    v44 = 0;
    v31 = v55[6] != 0 ? (unsigned int)v55 : 0;
    v30 = InputTraceLogging::CursorImageReasonToString(v52);
    CurrentCursorSize = (int)"Empty";
    LOBYTE(CurrentCursorFrame) = _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                   (int)&dword_2689E8,
                                   v25,
                                   v25,
                                   (int)&CurrentCursorSize,
                                   (int)&v30,
                                   (int)&v31,
                                   (int)&v32,
                                   (int)&v33,
                                   (int)&v34,
                                   (int)&v35,
                                   (int)&v36,
                                   (int)&v38,
                                   (int)&v39,
                                   (int)&v40,
                                   (int)&v41,
                                   (int)&v42,
                                   (int)&v43,
                                   (int)&v44,
                                   (int)&v45,
                                   (int)&v46,
                                   (int)&v47,
                                   (int)&v48);
    v6 = 1;
LABEL_25:
    if ( !v6 )
      return (char)CurrentCursorFrame;
    goto LABEL_23;
  }
  if ( !_gpqForeground
    || ((v3 = *(_DWORD *)(_gpqForeground + 56)) != 0
      ? (v4 = *(_DWORD **)(v3 + 8))
      : (v4 = *(_DWORD **)(_gpqForeground + 48)),
        *(int *)(_gpqForeground + 280) >= 0
     || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v4), !(_BYTE)CurrentCursorFrame)) )
  {
    LOBYTE(CurrentCursorFrame) = _gpqCursor;
    v6 = _gpqCursor != 0 ? 0 : 3;
    if ( _gpqCursor )
    {
      if ( *(int *)(_gpqCursor + 280) >= 0 )
      {
        v7 = *(_DWORD **)(_gpqCursor + 276);
        v36 = (int)v7;
        if ( v7 )
        {
          LOBYTE(CurrentCursorFrame) = _gpsi;
          if ( *(_DWORD *)(_gpsi + 1572) )
          {
            FixupCursorForMonitor(v7);
            CurrentCursorFrame = GetCurrentCursorFrame(v27);
            v8 = CurrentCursorFrame;
            v6 = _gpqCursor != 0 ? 0 : 3;
            v51 = CurrentCursorFrame;
            if ( CurrentCursorFrame )
            {
              v9 = FCursorShadowed((_DWORD *)CurrentCursorFrame + 11) ? 0x10 : 0;
              v50 = v9;
              if ( gbForceSoftwareCursor == 1 )
              {
                v9 |= 0x20u;
                v50 = v9;
              }
              Lock = 0;
              if ( !_gProtocolType )
                Lock = (struct _CURSINFO *)WPP_MAIN_CB.DeviceQueue.Lock;
              GreSetPointer((int)v8 + 44, (HDEV)v9, Lock, 0x32u);
              v37 = 2;
              if ( _gProtocolType )
                v49 = 0;
              else
                v49 = WPP_MAIN_CB.DeviceQueue.Lock;
              CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v11);
              if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(8, 0) )
              {
                v53 = *(_DWORD *)UPDWORDPointer(8232);
                v54 = _gpqCursor;
                v12 = (int *)UPDWORDPointer(8232);
                v13 = *((_DWORD *)v8 + 23);
                v14 = *((_DWORD *)v8 + 11);
                v15 = *v12;
                v35 = *((__int16 *)v8 + 24);
                v30 = v15;
                v16 = *((_DWORD *)v8 + 15);
                v38 = v53;
                v31 = v16;
                v17 = *((_DWORD *)v8 + 14);
                v39 = _gpqCursor;
                v32 = v17;
                v18 = *((_DWORD *)v8 + 13);
                v40 = v49;
                v33 = v18;
                v19 = *((__int16 *)v8 + 25);
                v41 = v50;
                v34 = v19;
                v20 = *((_DWORD *)v8 + 22);
                v21 = *((_DWORD *)v8 + 6);
                v42 = CurrentCursorSize;
                v44 = v20;
                v22 = *((_DWORD *)v51 + 10);
                v43 = v13 >> 1;
                v45 = v14;
                v46 = v22;
                v47 = v21;
                v48 = v21 != 0 ? (unsigned int)v51 : 0;
                CurrentCursorSize = InputTraceLogging::CursorImageReasonToString(v52);
                v36 = (int)InputTraceLogging::CursorToString(v28);
                LOBYTE(CurrentCursorFrame) = _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                               (int)&dword_2689E8,
                                               v23,
                                               v23,
                                               (int)&v36,
                                               (int)&CurrentCursorSize,
                                               (int)&v48,
                                               (int)&v47,
                                               (int)&v46,
                                               (int)&v45,
                                               (int)&v44,
                                               (int)&v43,
                                               (int)&v35,
                                               (int)&v34,
                                               (int)&v33,
                                               (int)&v32,
                                               (int)&v31,
                                               (int)&v30,
                                               (int)&v42,
                                               (int)&v41,
                                               (int)&v40,
                                               (int)&v39,
                                               (int)&v38);
                v6 = v37;
                goto LABEL_25;
              }
              v6 = v37;
LABEL_23:
              LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v6);
              return (char)CurrentCursorFrame;
            }
          }
        }
      }
    }
    goto LABEL_25;
  }
  return (char)CurrentCursorFrame;
}
