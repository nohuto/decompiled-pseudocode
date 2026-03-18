/*
 * XREFs of ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532
 * Callers:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 * Callees:
 *     _WindowHasShadow@4 @ 0x1FAEE (_WindowHasShadow@4.c)
 *     ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A (-FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z @ 0x2624C (-PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     ?xxxImeWindowPosChanged@@YGXPAUtagSMWP@@@Z @ 0x2C440 (-xxxImeWindowPosChanged@@YGXPAUtagSMWP@@@Z.c)
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     ?PostIAMPosChangedNotification@@YGXPAUtagCVR@@PAUtagWND@@@Z @ 0x3871C (-PostIAMPosChangedNotification@@YGXPAUtagCVR@@PAUtagWND@@@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?IsStillWindowC@@YGHPAUHWND__@@@Z @ 0x3D284 (-IsStillWindowC@@YGHPAUHWND__@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxRemoveShadow@4 @ 0x71BB2 (_xxxRemoveShadow@4.c)
 *     _ShouldHaveShadow@4 @ 0xA9746 (_ShouldHaveShadow@4.c)
 *     ?zzzApplyShadow@@YGHPAUtagWND@@0@Z @ 0x19D1DB (-zzzApplyShadow@@YGHPAUtagWND@@0@Z.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _xxxUpdateShadowZorder@4 @ 0x19D563 (_xxxUpdateShadowZorder@4.c)
 *     _zzzMoveShadow@4 @ 0x19D67F (_zzzMoveShadow@4.c)
 */

void __thiscall xxxSendChangedMsgs(_DWORD *this)
{
  int v1; // ebx
  int v2; // edi
  _DWORD *v3; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // eax
  int v7; // edi
  int *v8; // esi
  int *v9; // esi
  int v10; // eax
  struct tagRECT *v11; // eax
  int v12; // [esp-4h] [ebp-44h]
  struct tagCVR *v13; // [esp+0h] [ebp-40h]
  struct tagWND *v14; // [esp+4h] [ebp-3Ch]
  int v15[4]; // [esp+10h] [ebp-30h] BYREF
  int v16; // [esp+20h] [ebp-20h] BYREF
  _DWORD *v17; // [esp+24h] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-18h]
  _DWORD *v19; // [esp+2Ch] [ebp-14h]
  int v20; // [esp+30h] [ebp-10h]
  _DWORD *v21; // [esp+34h] [ebp-Ch]
  int v22; // [esp+38h] [ebp-8h]
  int v23; // [esp+3Ch] [ebp-4h] BYREF

  v1 = this[6];
  v19 = this;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v2 = this[4] - 1;
  v22 = v2;
  if ( v2 < 0 )
    goto LABEL_22;
  do
  {
    if ( !*(_DWORD *)v1 )
      goto LABEL_20;
    v3 = (_DWORD *)HMValidateHandleNoSecure(*(_DWORD *)v1, 1);
    v21 = v3;
    if ( !v3 )
    {
      *(_DWORD *)(v1 + 24) = 6159;
LABEL_32:
      *(_DWORD *)v1 = 0;
      goto LABEL_20;
    }
    if ( !IsStillWindowC((HWND)v13) )
      goto LABEL_32;
    if ( (((unsigned int)&loc_3FFFD + 3) & *(_DWORD *)(v1 + 24)) != 0 || (*(_DWORD *)(v1 + 24) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification(v13, v14);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v16 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v16;
      v17 = v3;
      HMLockObject(v3);
      v6 = *(_DWORD *)(v1 + 24);
      v23 = v6;
      if ( (v6 & 0x80u) != 0 )
      {
        xxxRemoveShadow(v3);
        v6 = *(_DWORD *)(v1 + 24);
        v23 = v6;
      }
      if ( (v6 & 0x40) != 0 )
      {
        if ( ShouldHaveShadow(v3) )
          xxxAddShadow(v3);
      }
      else if ( WindowHasShadow(v3) )
      {
        if ( (v23 & 0x21) == 1 )
        {
          if ( (v23 & 2) == 0 )
            zzzMoveShadow(v3);
        }
        else if ( FindShadow(v3) )
        {
          zzzApplyShadow(v13, v14);
        }
        if ( (*(_BYTE *)(v1 + 24) & 4) == 0 )
          xxxUpdateShadowZorder(v3);
      }
      v7 = *(_DWORD *)(v1 + 24) & 0x9820;
      v20 = v7;
      if ( IsWindowDesktopComposed(v3) && v7 != 6144 )
        DwmChildRectChange(v3);
      if ( (((unsigned int)&loc_3FFFD + 3) & *(_DWORD *)(_gptiCurrent + 688)) == 0 || _gptiCurrent == v3[2] )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((ULONG_PTR)v3, 0, v1, 0, 0, 0, 1, 0);
      }
      else if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 288) != 1 )
      {
        v23 = 0;
        xxxSendTransformableMessageTimeout((ULONG_PTR)v3, 0, v1, 2u, 100, (int)&v23, 1, 0);
      }
      if ( (*(_BYTE *)(v1 + 120) & 0x40) != 0 )
      {
        if ( ((unsigned int)&loc_80000 & *(_DWORD *)(v1 + 24)) != 0 )
          v8 = (int *)(v3[5] + 52);
        else
          v8 = (int *)(v1 + 100);
        v12 = *(_DWORD *)(v1 + 96);
        v15[0] = *v8;
        v9 = v8 + 1;
        v15[1] = *v9++;
        v15[2] = *v9;
        v15[3] = v9[1];
        v10 = ValidateHmonitorNoRip(v12);
        if ( v10 )
          v11 = (struct tagRECT *)*(unsigned __int16 *)(*(_DWORD *)(v10 + 20) + 52);
        else
          v11 = 0;
        v3 = v21;
        xxxNotifyMonitorChanged(v21, v15, *(struct tagWND **)(v1 + 124), v11);
        v7 = v20;
      }
      PostIAMPosChangedNotification(v13, v14);
      NotifyShell::PositioningChanged((int)v3, v1);
      CalcWindowFullScreen(v3);
      if ( v7 != 6144 )
        xxxWindowEvent(32779, v3, 0, 0, 1);
      ThreadUnlock1();
      v2 = v22;
    }
LABEL_20:
    v1 += 128;
    v22 = --v2;
  }
  while ( v2 >= 0 );
  this = v19;
LABEL_22:
  if ( (*_gpsi & 4) != 0 )
    xxxImeWindowPosChanged(this);
}
