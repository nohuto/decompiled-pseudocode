/*
 * XREFs of AdjustPwndPtiPqForDelegation @ 0x1C00BEC60
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionPostInputMessage @ 0x1C00BD830 (EditionPostInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00BDD10 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostMouseMoveToQ @ 0x1C00BEA80 (EditionPostMouseMoveToQ.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C010001C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionHandleAltTab @ 0x1C01285A0 (EditionHandleAltTab.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01E12A0 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01EE3D0 (PostPointerEventMessage.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0223280 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004E698 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CalcWakeMask @ 0x1C00516D0 (CalcWakeMask.c)
 *     GetInputDelegate @ 0x1C00BED28 (GetInputDelegate.c)
 */

__int64 __fastcall AdjustPwndPtiPqForDelegation(
        __int64 *a1,
        __int64 *a2,
        struct tagTHREADINFO **a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // edx
  int v12; // r11d
  unsigned int v13; // r12d
  struct tagTHREADINFO *InputDelegate; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagTHREADINFO *v17; // rbx
  __int64 result; // rax
  char v19; // si
  unsigned __int8 v20; // al
  bool v21; // zf
  _QWORD v22[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 255 )
    return 1LL;
  v9 = *a1;
  v10 = *a2;
  v13 = CalcWakeMask(a4, a4, 0);
  if ( (v11 == 513 || v11 == 516)
    && v10
    && (*(_DWORD *)(v10 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 1264LL)
    && a5
    && ((*a5 - 2) & 0xFFFFFFEF) == 0 )
  {
    v19 = (v12 != 513) + 1;
    if ( !*(_QWORD *)(v9 + 136) )
    {
      v22[0] = v9 + 136;
      v22[1] = v10;
      HMAssignmentLock(v22);
    }
    *(_BYTE *)(v9 + 144) |= v19;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(v9 + 136) )
    goto LABEL_5;
  if ( v12 != 514 && v12 != 517 )
  {
    if ( v12 == 512 )
      v10 = *(_QWORD *)(v9 + 136);
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v9 + 136);
  v20 = (v12 == 514) - 3;
  v21 = (v20 & *(_BYTE *)(v9 + 144)) == 0;
  *(_BYTE *)(v9 + 144) &= v20;
  if ( !v21 || (result = HMAssignmentUnlock(v9 + 136), (v10 = result) != 0) )
  {
LABEL_5:
    *a2 = v10;
    InputDelegate = (struct tagTHREADINFO *)GetInputDelegate(v10, v13);
    v17 = InputDelegate;
    if ( InputDelegate )
    {
      vAdjustDelegatePriority(InputDelegate, v15, v16);
      *a1 = *((_QWORD *)v17 + 54);
      *a3 = v17;
      *a6 = 1;
    }
    return 1LL;
  }
  return result;
}
