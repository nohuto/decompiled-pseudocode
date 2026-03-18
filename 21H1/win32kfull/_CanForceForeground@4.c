/*
 * XREFs of _CanForceForeground@4 @ 0x1B040
 * Callers:
 *     ?CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z @ 0x19546 (-CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _CheckAllowForeground@4 @ 0x1AE3E (_CheckAllowForeground@4.c)
 *     ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518 (-xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?_AllowSetForegroundWindow@@YGHK@Z @ 0x811C4 (-_AllowSetForegroundWindow@@YGHK@Z.c)
 *     ?ForceForegroundChangeOnMinimize@@YGHPAUtagWND@@0@Z @ 0xAD5E8 (-ForceForegroundChangeOnMinimize@@YGHPAUtagWND@@0@Z.c)
 *     ?_LockSetForegroundWindow@@YGHI@Z @ 0x141663 (-_LockSetForegroundWindow@@YGHI@Z.c)
 *     _xxxHardErrorControl@12 @ 0x1A022C (_xxxHardErrorControl@12.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall CanForceForeground(_DWORD *a1)
{
  struct tagTHREADINFO *PtiLastWoken; // eax
  _DWORD *v2; // edx
  unsigned int *v3; // eax
  BOOL result; // eax

  PtiLastWoken = CInputGlobals::GetPtiLastWoken(_gpInputGlobals);
  result = 1;
  if ( PtiLastWoken )
  {
    v2 = (_DWORD *)*((_DWORD *)PtiLastWoken + 58);
    if ( v2 != a1
      && _gptiForeground
      && *(_DWORD **)(_gptiForeground + 232) != a1
      && (((unsigned int)&loc_800FF + 1) & a1[2]) == 0
      && a1 != (_DWORD *)_gppiInputProvider
      && _gpqForeground
      && (WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink
       || !PsGetProcessDebugPort(*v2) && !PsGetProcessDebugPort(**(_DWORD **)(_gptiForeground + 232))) )
    {
      v3 = (unsigned int *)UPDWORDPointer(0x2000);
      if ( !CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, *v3) )
        return 0;
    }
  }
  return result;
}
