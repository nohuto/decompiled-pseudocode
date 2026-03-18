/*
 * XREFs of _zzzUpdateCursorImage@0 @ 0x745FA
 * Callers:
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 *     ?zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z @ 0x77D78 (-zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     ?zzzShowCursor@@YGH_N@Z @ 0xAEA1C (-zzzShowCursor@@YGH_N@Z.c)
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z @ 0xD9236 (-zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z.c)
 *     _HideAutorunCursor@16 @ 0x143392 (_HideAutorunCursor@16.c)
 *     ?_SetCursorContents@@YG_NPAUtagCURSOR@@0@Z @ 0x15635E (-_SetCursorContents@@YG_NPAUtagCURSOR@@0@Z.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?GetCurrentCursorFrame@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748C4 (-GetCurrentCursorFrame@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     ?FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748E2 (-FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YG_NPAUtagTHREADINFO@@@Z @ 0x7494E (-TestRawInputModeCaptureMouse@@YG_NPAUtagTHREADINFO@@@Z.c)
 *     _GreSetPointer@16 @ 0x771C2 (_GreSetPointer@16.c)
 *     ?FCursorShadowed@@YGHPAU_CURSINFO@@@Z @ 0x773DE (-FCursorShadowed@@YGHPAU_CURSINFO@@@Z.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QBEIXZ @ 0xB170E (-GetCurrentCursorSize@CCursorSizes@@QBEIXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@3ABU?$_tlgWrapperByVal@$03@@4444444444444444@Z @ 0x142804 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@.c)
 *     ?CursorImageReasonToString@InputTraceLogging@@CGPBDW4CursorImageReason@Cursor@1@@Z @ 0x142F51 (-CursorImageReasonToString@InputTraceLogging@@CGPBDW4CursorImageReason@Cursor@1@@Z.c)
 *     ?CursorToString@InputTraceLogging@@CGPBDPAUtagCURSOR@@@Z @ 0x142FDC (-CursorToString@InputTraceLogging@@CGPBDPAUtagCURSOR@@@Z.c)
 */

void __stdcall zzzUpdateCursorImage()
{
  int v0; // ebx
  int v1; // edi
  struct tagCURSOR *CurrentCursorFrame; // eax
  struct tagCURSOR *v3; // ecx
  int v4; // esi
  KSPIN_LOCK Lock; // eax
  CCursorSizes *v6; // ecx
  bool v7; // bl
  unsigned int v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // esi
  unsigned int v12; // edx
  int *v14; // eax
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  struct tagTHREADINFO *v26; // [esp+0h] [ebp-78h]
  struct tagCURSOR *v27; // [esp+0h] [ebp-78h]
  struct _CURSINFO *v28; // [esp+0h] [ebp-78h]
  struct tagCURSOR *v29; // [esp+0h] [ebp-78h]
  int v30; // [esp+10h] [ebp-68h]
  int v31; // [esp+14h] [ebp-64h]
  int v32; // [esp+18h] [ebp-60h]
  struct tagCURSOR *v33; // [esp+1Ch] [ebp-5Ch]
  struct tagCURSOR *v34; // [esp+20h] [ebp-58h]
  KSPIN_LOCK v35; // [esp+20h] [ebp-58h]
  struct tagCURSOR *v36; // [esp+24h] [ebp-54h]
  int v37; // [esp+28h] [ebp-50h]
  int v38; // [esp+2Ch] [ebp-4Ch] BYREF
  int CurrentCursorSize; // [esp+30h] [ebp-48h] BYREF
  int v40; // [esp+34h] [ebp-44h] BYREF
  int v41; // [esp+38h] [ebp-40h] BYREF
  int v42; // [esp+3Ch] [ebp-3Ch] BYREF
  int v43; // [esp+40h] [ebp-38h] BYREF
  int v44; // [esp+44h] [ebp-34h] BYREF
  int v45; // [esp+48h] [ebp-30h] BYREF
  int v46; // [esp+4Ch] [ebp-2Ch] BYREF
  int v47; // [esp+50h] [ebp-28h] BYREF
  int v48; // [esp+54h] [ebp-24h] BYREF
  int v49; // [esp+58h] [ebp-20h] BYREF
  int v50; // [esp+5Ch] [ebp-1Ch] BYREF
  int v51; // [esp+60h] [ebp-18h] BYREF
  int v52; // [esp+64h] [ebp-14h] BYREF
  int v53; // [esp+68h] [ebp-10h] BYREF
  int v54; // [esp+6Ch] [ebp-Ch] BYREF
  int v55; // [esp+70h] [ebp-8h] BYREF
  int v56; // [esp+74h] [ebp-4h] BYREF

  v0 = 0;
  v31 = 0;
  v1 = 0;
  v30 = 0;
  if ( !_gpqForeground || !TestRawInputModeCaptureMouse(v26) || *(int *)(_gpqForeground + 280) >= 0 )
  {
    if ( !_gpqCursor )
      return;
    v1 = 4;
    v30 = 4;
    if ( *(int *)(_gpqCursor + 280) >= 0 )
    {
      v0 = *(_DWORD *)(_gpqCursor + 276);
      v1 = 3;
      v31 = v0;
      v30 = 3;
      if ( (gtimeStartCursorHide || gtmridAutorunCursor)
        && (v0 == _gasyscur[1] || v0 == *(_DWORD *)(_gasyscur[0] + 8580) || v0 == *(_DWORD *)(_gasyscur[0] + 5900)) )
      {
        if ( gtmridAutorunCursor )
        {
          v0 = *(_DWORD *)(_gasyscur[0] + 8580);
          v1 = 1;
        }
        else
        {
          v0 = *(_DWORD *)(_gasyscur[0] + 5900);
          v1 = 2;
        }
        v30 = v1;
        v31 = v0;
      }
    }
  }
  v34 = gpcurLogCurrent;
  if ( (struct tagCURSOR *)v0 != gpcurLogCurrent )
  {
    if ( v0 && (*(_BYTE *)(v0 + 44) & 8) != 0 && *(_DWORD *)(v0 + 64) )
    {
      if ( !gtmridAniCursor )
      {
        *(_DWORD *)(v0 + 68) = 0;
        v9 = MEMORY[0xFFDF0004];
        if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
        {
          v11 = MEMORY[0xFFDF0324];
          v12 = MEMORY[0xFFDF0320];
          if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
          {
            do
            {
              _mm_pause();
              v11 = MEMORY[0xFFDF0324];
              v12 = MEMORY[0xFFDF0320];
            }
            while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
            v0 = v31;
            v1 = v30;
            v9 = MEMORY[0xFFDF0004];
          }
          v10 = v9 * (v11 << 8) + (((unsigned int)v9 * (unsigned __int64)v12) >> 24);
        }
        else
        {
          v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
        }
        gdwLastAniTick = v10;
        gtmridAniCursor = SetRITTimer(gtmridAniCursor, 100 * **(_DWORD **)(v0 + 64) / 6u, zzzAnimateCursor, 1);
      }
    }
    else if ( gtmridAniCursor )
    {
      FindTimer(4, 1, 0);
      gtmridAniCursor = 0;
    }
    EtwTraceWaitCursor(v0, gpcurLogCurrent);
    gpcurLogCurrent = (struct tagCURSOR *)v0;
  }
  FixupCursorForMonitor(v26);
  CurrentCursorFrame = GetCurrentCursorFrame(v27);
  v3 = gpcurPhysCurrent;
  v33 = CurrentCursorFrame;
  v36 = gpcurPhysCurrent;
  if ( gpcurPhysCurrent != CurrentCursorFrame )
  {
    gpcurPhysCurrent = CurrentCursorFrame;
    if ( CurrentCursorFrame )
    {
      v4 = *(_DWORD *)(v0 + 44) & 8;
      v32 = v4;
      if ( FCursorShadowed(v28) )
      {
        v4 |= 0x10u;
        v32 = v4;
      }
      if ( gbForceSoftwareCursor == 1 )
      {
        v4 |= 0x20u;
        v32 = v4;
      }
      Lock = 0;
      if ( !_gProtocolType )
        Lock = WPP_MAIN_CB.DeviceQueue.Lock;
      GreSetPointer((char *)v33 + 44, v4, Lock, 50);
      if ( v34 == (struct tagCURSOR *)v0 )
      {
        v6 = v36;
        if ( *((_DWORD *)v33 + 10) == *((_DWORD *)v36 + 10) )
        {
LABEL_19:
          v7 = gpcurPhysCurrent != 0;
          LOBYTE(v56) = gpcurPhysCurrent != 0;
          if ( (gpcurPhysCurrent != 0) != (v36 != 0) )
            SendVisibilityChanged(v56);
          v8 = 32780;
          if ( v7 )
          {
            if ( !v36 )
              v8 = 32770;
          }
          else
          {
            v8 = 32771;
          }
          xxxWindowEvent(v8, 0, 0xFFFFFFF7, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
          return;
        }
        v30 = 5;
      }
      if ( _gProtocolType )
        v35 = 0;
      else
        v35 = WPP_MAIN_CB.DeviceQueue.Lock;
      CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v6);
      if ( (unsigned int)dword_2689E8 > 4 )
      {
        if ( (unsigned __int8)_tlgKeywordOn(8, 0) )
        {
          v37 = *(_DWORD *)UPDWORDPointer(8232);
          v38 = _gpqCursor;
          v14 = (int *)UPDWORDPointer(8232);
          v15 = *((_DWORD *)v33 + 23);
          v16 = *((_DWORD *)v33 + 11);
          v17 = *v14;
          v45 = *((__int16 *)v33 + 24);
          v40 = v17;
          v18 = *((_DWORD *)v33 + 15);
          v46 = v37;
          v41 = v18;
          v19 = *((_DWORD *)v33 + 14);
          v47 = _gpqCursor;
          v42 = v19;
          v20 = *((_DWORD *)v33 + 13);
          v48 = v35;
          v43 = v20;
          v21 = *((__int16 *)v33 + 25);
          v49 = v32;
          v44 = v21;
          v22 = *((_DWORD *)v33 + 22);
          v23 = *((_DWORD *)v33 + 6);
          v50 = CurrentCursorSize;
          v52 = v22;
          v24 = *((_DWORD *)v33 + 10);
          v51 = v15 >> 1;
          v53 = v16;
          v54 = v24;
          v55 = v23;
          v56 = v23 != 0 ? (unsigned int)v33 : 0;
          CurrentCursorSize = InputTraceLogging::CursorImageReasonToString(v30);
          v38 = (int)InputTraceLogging::CursorToString(v29);
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_2689E8,
            v25,
            v25,
            (int)&v38,
            (int)&CurrentCursorSize,
            (int)&v56,
            (int)&v55,
            (int)&v54,
            (int)&v53,
            (int)&v52,
            (int)&v51,
            (int)&v45,
            (int)&v44,
            (int)&v43,
            (int)&v42,
            (int)&v41,
            (int)&v40,
            (int)&v50,
            (int)&v49,
            (int)&v48,
            (int)&v47,
            (int)&v46);
        }
      }
      goto LABEL_19;
    }
    LOBYTE(v3) = 0;
    SetPointerInternal(v3, v1, v28);
    goto LABEL_19;
  }
}
