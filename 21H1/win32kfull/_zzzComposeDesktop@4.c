/*
 * XREFs of _zzzComposeDesktop@4 @ 0xE0A14
 * Callers:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     _IsWindowContentProtected@4 @ 0x20BBA (_IsWindowContentProtected@4.c)
 *     ?ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z @ 0x23494 (-ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z.c)
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 *     ?NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z @ 0xC2CB2 (-NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z @ 0xCC5E2 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCSwapChainProp@@@Z.c)
 *     ?IsWindowComposedOnDesktop@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z @ 0xCF190 (-IsWindowComposedOnDesktop@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreRemoveDisplayDriverRealizations@4 @ 0xCF2AE (_GreRemoveDisplayDriverRealizations@4.c)
 *     ?ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z @ 0xE0D4A (-ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SGXPAUtagWND@@@Z @ 0xE0D90 (-ReNotifyDwm@CHwndTargetProp@@SGXPAUtagWND@@@Z.c)
 *     _DwmAsyncShellWindowChange@12 @ 0xE105C (_DwmAsyncShellWindowChange@12.c)
 *     ?BroadcastCompositionChange@@YGXPBUtagDESKTOP@@@Z @ 0xE110C (-BroadcastCompositionChange@@YGXPBUtagDESKTOP@@@Z.c)
 *     _MagpComposeDesktop@8 @ 0xE1152 (_MagpComposeDesktop@8.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     ?ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z @ 0xF494A (-ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z.c)
 *     _ForceDisplayAffinity@4 @ 0x1A5967 (_ForceDisplayAffinity@4.c)
 */

int __thiscall zzzComposeDesktop(int ***this)
{
  NTSTATUS v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  struct _NT_TIB *v7; // eax
  int **v9; // eax
  void *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edi
  BOOL v14; // eax
  struct tagWND *v15; // ecx
  int ***v16; // eax
  int v17; // ebx
  int v18; // ecx
  struct tagWND *v19; // ecx
  struct tagWND **v20; // eax
  int **v21; // ecx
  int *v22; // eax
  void *v23; // eax
  int v24; // [esp-4h] [ebp-3Ch]
  int v25; // [esp-4h] [ebp-3Ch]
  struct tagWND *v26; // [esp+0h] [ebp-38h]
  struct tagWND *v27; // [esp+0h] [ebp-38h]
  struct tagDESKTOP *v28; // [esp+4h] [ebp-34h]
  int v29; // [esp+Ch] [ebp-2Ch]
  unsigned int v30; // [esp+Ch] [ebp-2Ch]
  int v31; // [esp+Ch] [ebp-2Ch]
  int v32; // [esp+10h] [ebp-28h]
  CSwapChainProp *v33; // [esp+14h] [ebp-24h] BYREF
  int v34; // [esp+18h] [ebp-20h]
  int v35; // [esp+1Ch] [ebp-1Ch]
  int v36; // [esp+20h] [ebp-18h]
  _DWORD v37[5]; // [esp+24h] [ebp-14h] BYREF

  v2 = -1073741823;
  v32 = -1073741823;
  v3 = (int)*this[1];
  v4 = *(_DWORD *)(v3 + 32);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v3 + 32) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = 0;
  v29 = v5;
  v36 = 0;
  if ( v5 )
  {
    v37[1] = v5;
    v37[2] = this;
    v37[0] = 1;
    v37[3] = 0;
    v37[4] = 1;
    v2 = MapDesktop(v37);
    v32 = v2;
    if ( v2 < 0 )
    {
      v7 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v7);
      (*this[1])[8] &= ~1u;
      DereferenceDwmProcess(v29);
      return -1073741823;
    }
    DereferenceDwmProcess(v29);
  }
  if ( GreTransferSpriteStateToDwmState(*(HWND *)(_gpDispInfo + 20)) )
  {
    v9 = this[1];
    if ( !v9[3] )
    {
      v24 = **v9;
      v10 = (void *)ReferenceDwmApiPort();
      DwmAsyncShellWindowChange(v10, v24);
      return 0;
    }
    v11 = 0;
    v30 = 0;
    v12 = 0;
    v35 = 0;
    v34 = 0;
    do
    {
      if ( *(_BYTE *)(_gSharedInfo[1] + v11 + 12) == 1 )
      {
        v13 = *(_DWORD *)(v12 + _gpKernelHandleTable);
        if ( ShouldComposeWindow(v26, v28) )
        {
          if ( (*(_BYTE *)(*(_DWORD *)(v13 + 20) + 23) & 1) != 0 )
            PostEventMessage((struct tagTHREADINFO *)0x10, (struct tagQ *)v13, 0, 0, 0, (unsigned int)v26, (int)v28);
          v14 = IsDesktopWindow((_DWORD *)v13);
          v2 = ComposeWindow(v15, 4 * v14 + 1);
          v32 = v2;
          if ( v2 < 0 )
          {
            v6 = v30;
            goto LABEL_31;
          }
        }
        if ( IsWindowContentProtected() )
          ForceDisplayAffinity(v13);
        v16 = *(int ****)(v13 + 12);
        if ( v16 && v16 == this && !IsWindowBeingDestroyed((_DWORD *)v13) )
        {
          CHwndTargetProp::ReNotifyDwm(v26);
          if ( !UserIsRemoteAndNotDisconnectConnection() || UserIsRemoteAndNotDisconnectConnection() )
          {
            v33 = 0;
            if ( CWindowProp::GetProp<CSwapChainProp>(v13, (int *)&v33) )
              CSwapChainProp::NotifyDwm(v33, (struct tagWND *const)v13);
          }
          CVisRgnTrackerProp::ReNotifyDwm(v27);
        }
        v6 = v30;
        if ( v2 < 0 )
          goto LABEL_31;
        v11 = v34;
        v12 = v35;
      }
      ++v6;
      v11 += 16;
      v30 = v6;
      v12 += 12;
      v34 = v11;
      v35 = v12;
    }
    while ( v6 <= _giheLast );
    if ( v2 >= 0 )
      goto LABEL_41;
LABEL_31:
    if ( v6 <= _giheLast )
    {
      v17 = 12 * v6;
      v18 = 16 * v6;
      v31 = 16 * v6;
      do
      {
        if ( *(_BYTE *)(_gSharedInfo[1] + v18 + 12) == 1 )
        {
          if ( IsWindowComposedOnDesktop(*(_DWORD *)(v17 + _gpKernelHandleTable), (int)this) )
            ComposeWindow(v19, 2);
          v18 = v31;
        }
        --v6;
        v18 -= 16;
        v17 -= 12;
        v31 = v18;
      }
      while ( v6 <= _giheLast );
      v2 = v32;
    }
    GreRemoveDisplayDriverRealizations(*(_DWORD **)(_gpDispInfo + 20));
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(_gpDispInfo + 20), **this[1]);
  }
  else
  {
    v2 = -1073741823;
  }
LABEL_41:
  v20 = (struct tagWND **)this[1];
  if ( v2 < 0 )
  {
    *((_DWORD *)*v20 + 8) &= ~1u;
  }
  else
  {
    ReorderChildrenSpriteList(v20[3], 0);
    MagpComposeDesktop(_gMagnContext, this);
    BroadcastCompositionChange(v26);
  }
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  GreUpdateSpriteVisRgn(*(_DWORD *)(_gpDispInfo + 20), 0);
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  if ( v2 >= 0 )
  {
    v21 = this[1];
    v22 = v21[21];
    if ( v22 )
      v36 = *v22;
    v25 = **v21;
    v23 = (void *)ReferenceDwmApiPort();
    DwmAsyncShellWindowChange(v23, v25);
  }
  return v2;
}
