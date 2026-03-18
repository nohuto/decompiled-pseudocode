/*
 * XREFs of CanForceForeground @ 0x1C00287E0
 * Callers:
 *     CheckAllowForeground @ 0x1C0028550 (CheckAllowForeground.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C00303A4 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0036D38 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00F5A1C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0116290 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D2C60 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     xxxHardErrorControl @ 0x1C0242CAC (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CanForceForeground(__int64 a1)
{
  struct tagTHREADINFO *PtiLastWoken; // rax
  _QWORD *v3; // rdx
  unsigned int *v4; // rax
  _BOOL8 result; // rax

  PtiLastWoken = CInputGlobals::GetPtiLastWoken(gpInputGlobals);
  result = 1;
  if ( PtiLastWoken )
  {
    v3 = (_QWORD *)*((_QWORD *)PtiLastWoken + 52);
    if ( v3 != (_QWORD *)a1
      && gptiForeground
      && *(_QWORD *)(gptiForeground + 416LL) != a1
      && (*(_DWORD *)(a1 + 12) & 0x80100) == 0
      && a1 != gppiInputProvider
      && gpqForeground
      && (gfDebugForegroundIgnoreDebugPort
       || !PsGetProcessDebugPort(*v3) && !PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 416LL))) )
    {
      v4 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v4) )
        return 0;
    }
  }
  return result;
}
