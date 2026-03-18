/*
 * XREFs of _WPP_RECORDER_SF_qd@28 @ 0x176592
 * Callers:
 *     ?TrackedWindowMoveSizeIntercept@NotifyShell@@YGXPAUtagWND@@IK@Z @ 0xF4EDE (-TrackedWindowMoveSizeIntercept@NotifyShell@@YGXPAUtagWND@@IK@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1715B3 (-HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_M.c)
 *     ?ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x19C248 (-ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qd(int a1, int a2, int a3, char a4, char a5)
{
  struct RECORDER_LOG__ *v5; // esi
  int v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+4h] [ebp-8h]

  v5 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, int, int, char *, int, char *, int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      a3,
      a2,
      &a4,
      4,
      &a5,
      4,
      0);
  return _WppAutoLogTrace(v5, 4, 1, a3, a2, &a4, 4, &a5, 4, 0, v7, v8);
}
