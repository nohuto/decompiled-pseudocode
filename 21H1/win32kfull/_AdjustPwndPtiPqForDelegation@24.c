/*
 * XREFs of _AdjustPwndPtiPqForDelegation@24 @ 0x47910
 * Callers:
 *     _EditionPostMouseMoveToQ@28 @ 0x477E6 (_EditionPostMouseMoveToQ@28.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     ?PostHidNotification@@YGHPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@II@Z @ 0xC3A22 (-PostHidNotification@@YGHPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@II@Z.c)
 *     _EditionPostInputMessage@48 @ 0xF1632 (_EditionPostInputMessage@48.c)
 *     _EditionHandleAltTab@32 @ 0xF3338 (_EditionHandleAltTab@32.c)
 *     _EditionPostMouseWheelToForeground@40 @ 0x14E0AE (_EditionPostMouseWheelToForeground@40.c)
 *     _PostPointerEventMessage@16 @ 0x159285 (_PostPointerEventMessage@16.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z @ 0x185481 (-DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z.c)
 * Callees:
 *     _GetInputDelegate@8 @ 0x47988 (_GetInputDelegate@8.c)
 *     _CalcWakeMask@12 @ 0x69C20 (_CalcWakeMask@12.c)
 *     ?vAdjustDelegatePriority@@YGXPAUtagTHREADINFO@@@Z @ 0xA1CA0 (-vAdjustDelegatePriority@@YGXPAUtagTHREADINFO@@@Z.c)
 *     ?UseDelegationImplicitMouseCapture@@YGHPAUtagWND@@PAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14DE1E (-UseDelegationImplicitMouseCapture@@YGHPAUtagWND@@PAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __fastcall AdjustPwndPtiPqForDelegation(int *a1, int *a2, int *a3, int a4, int a5, _DWORD *a6)
{
  int v6; // edi
  int v7; // ebx
  int InputDelegate; // esi
  int result; // eax
  int v10; // edx
  char v11; // al
  unsigned __int8 v12; // al
  bool v13; // zf
  struct tagWND *v14; // [esp+0h] [ebp-18h]
  struct tagINPUT_MESSAGE_SOURCE *v15; // [esp+4h] [ebp-14h]
  int v17; // [esp+10h] [ebp-8h]
  char v19; // [esp+27h] [ebp+Fh]

  if ( a4 == 255 )
    return 1;
  v6 = *a2;
  v7 = *a1;
  v17 = CalcWakeMask(0);
  if ( (a4 == 513 || a4 == 516) && UseDelegationImplicitMouseCapture(v14, v15) )
  {
    v11 = (a4 != 513) + 1;
    v19 = v11;
    if ( !*(_DWORD *)(v7 + 72) )
    {
      HMAssignmentLock(v7 + 72, v10);
      v11 = v19;
    }
    *(_BYTE *)(v7 + 76) |= v11;
    goto LABEL_5;
  }
  if ( !*(_DWORD *)(v7 + 72) )
    goto LABEL_5;
  if ( a4 != 514 && a4 != 517 )
  {
    if ( a4 == 512 )
      v6 = *(_DWORD *)(v7 + 72);
    goto LABEL_5;
  }
  v6 = *(_DWORD *)(v7 + 72);
  v12 = (a4 == 514) - 3;
  v13 = (v12 & *(_BYTE *)(v7 + 76)) == 0;
  *(_BYTE *)(v7 + 76) &= v12;
  if ( !v13 || (result = HMAssignmentUnlock(v7 + 72), (v6 = result) != 0) )
  {
LABEL_5:
    *a2 = v6;
    InputDelegate = GetInputDelegate(v6, v17);
    if ( InputDelegate )
    {
      vAdjustDelegatePriority(v14);
      *a3 = InputDelegate;
      *a1 = *(_DWORD *)(InputDelegate + 236);
      *a6 = 1;
    }
    return 1;
  }
  return result;
}
