/*
 * XREFs of _xxxDCompSpeedHitTest@28 @ 0xF09A4
 * Callers:
 *     _xxxSpeedHitTest@24 @ 0xF3E36 (_xxxSpeedHitTest@24.c)
 *     _xxxPointerSpeedHitTest@20 @ 0x17C2EC (_xxxPointerSpeedHitTest@20.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176 (-DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z @ 0x26B90 (-DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     ?TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0xAC018 (-TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     _PWND_FROM_INPUTDEST_OPT@4 @ 0xAED7A (_PWND_FROM_INPUTDEST_OPT@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z @ 0x179A75 (-ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z.c)
 *     _TouchTargetChildTree@24 @ 0x17BA7D (_TouchTargetChildTree@24.c)
 *     _xxxTouchTargetWindow@28 @ 0x17C92C (_xxxTouchTargetWindow@28.c)
 */

char __fastcall xxxDCompSpeedHitTest(
        _DWORD *a1,
        int a2,
        struct tagDESKTOP *a3,
        int a4,
        int a5,
        struct tagPOINT *a6,
        _DWORD *a7)
{
  const void *v7; // eax
  _DWORD *v8; // ebx
  LONG v9; // edx
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  struct tagWND *CompositionInputWindowUIOwner; // esi
  char result; // al
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  LONG y; // ebx
  int v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // esi
  int v22; // edi
  int TopLevelWindow; // eax
  struct tagWND *v24; // esi
  struct tagWND *v25; // eax
  struct tagPOINT v26; // [esp-8h] [ebp-11Ch]
  int v27; // [esp-8h] [ebp-11Ch]
  LONG v28; // [esp-8h] [ebp-11Ch]
  const struct _SUBPIXELS *v29; // [esp+0h] [ebp-114h]
  _DWORD v30[26]; // [esp+10h] [ebp-104h] BYREF
  _BYTE v31[104]; // [esp+78h] [ebp-9Ch] BYREF
  _DWORD v32[3]; // [esp+E4h] [ebp-30h] BYREF
  _DWORD v33[2]; // [esp+F0h] [ebp-24h] BYREF
  int v34; // [esp+F8h] [ebp-1Ch]
  LONG v35; // [esp+FCh] [ebp-18h] BYREF
  struct tagPOINT v36; // [esp+100h] [ebp-14h] BYREF
  _DWORD *v37; // [esp+108h] [ebp-Ch]

  v26.y = (LONG)a6;
  v37 = a1;
  v7 = (const void *)DCompHitTest(v30, a1, a2, a4);
  v8 = a7;
  v9 = 0;
  qmemcpy(v31, v7, sizeof(v31));
  qmemcpy(a7, v31, 0x68u);
  v10 = a7[22] == 2;
  v34 = a7[1];
  if ( v10 )
    v11 = (int)(a7[21] << 31) >> 31;
  else
    v11 = 0;
  if ( v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(16, 34, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      v9 = 0;
    }
    v12 = 2;
    goto LABEL_19;
  }
  if ( !PWND_FROM_INPUTDEST_OPT(a7) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(16, 36, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      v9 = 0;
    }
    v12 = 1;
LABEL_19:
    if ( a5 )
    {
      if ( v12 == 2 )
      {
        v27 = a7[20];
        v33[0] = v9;
        v33[1] = v9;
        v35 = v9;
        v36.x = v9;
        v36.y = _GetTopLevelWindow(v27);
        if ( v36.y )
        {
          v32[2] = 0;
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          y = v36.y;
          v28 = v36.y;
          v32[0] = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = v32;
          v32[1] = y;
          HMLockObject(v28);
          v37 += 5;
          LOBYTE(y) = xxxTouchTargetWindow(
                        y,
                        a5,
                        v37,
                        &v35,
                        &v36,
                        v33,
                        *(_DWORD *)(**(_DWORD **)(_grpdeskRitInput + 4) + 32) & 1) != 0;
          ThreadUnlock1();
          if ( (_BYTE)y )
          {
            v19 = (_DWORD *)TouchTargetChildTree(v36.y, a5, v33, v18, *v37, v37[1]);
            v20 = INPUTDEST_FROM_PWND(v19, v30);
            v8 = a7;
LABEL_24:
            v21 = v20;
            result = 1;
LABEL_41:
            qmemcpy(v31, v21, sizeof(v31));
            qmemcpy(v8, v31, 0x68u);
            goto LABEL_42;
          }
          v8 = a7;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(16, 37, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    else
    {
      v22 = (int)(v37 + 5);
      v36.x = v37[5];
      v35 = v37[6];
      if ( v12 != 2
        || (TopLevelWindow = _GetTopLevelWindow(a7[20]), (v24 = (struct tagWND *)TopLevelWindow) == 0)
        || !DCEIsWindowHit((HDEV *)v22, TopLevelWindow, a3, a6, v29) )
      {
        v24 = TopLevelSpeedHitTest(v22, _grpdeskRitInput, a3, (struct tagPOINT *)v26.y, v29);
      }
      if ( v24 )
      {
        if ( gfDwmChildWindowDpiIsolationEnabled )
        {
          v25 = DCEChildTreeSpeedHitTest(
                  (_DWORD *)v22,
                  (int)v24,
                  a3,
                  (struct tagPOINT)__PAIR64__(v35, v36.x),
                  (struct tagPOINT *)v26.y,
                  v29);
        }
        else
        {
          v26.x = *(_DWORD *)(v22 + 4);
          v25 = ClassicChildTreeSpeedHitTest(*(struct tagWND **)v22, v26);
        }
        if ( v25 )
        {
          v20 = INPUTDEST_FROM_PWND(v25, v30);
          goto LABEL_24;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(16, 38, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    v21 = INPUTDEST_FROM_PWND(*(_DWORD **)(*(_DWORD *)(_grpdeskRitInput + 4) + 12), v30);
    result = 0;
    goto LABEL_41;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(16, 35, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  CompositionInputWindowUIOwner = (struct tagWND *)a7[20];
  if ( (*(_DWORD *)(*((_DWORD *)CompositionInputWindowUIOwner + 5) + 184) & 0xF) != 2 )
  {
    if ( IsIndependentInputWindow((void *)a7[20]) )
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)a6);
    v36.y = ValidateHmonitorNoRip(*(_DWORD *)(*((_DWORD *)CompositionInputWindowUIOwner + 5) + 164));
    PhysicalToLogicalDPIPoint(
      v37 + 5,
      v37 + 5,
      *(_DWORD *)(*((_DWORD *)CompositionInputWindowUIOwner + 5) + 184),
      &v36.y);
  }
  result = 1;
LABEL_42:
  v8[1] = v34;
  return result;
}
