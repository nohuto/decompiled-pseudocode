/*
 * XREFs of CanForceForeground @ 0x1C003BA20
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000F220 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00197A8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C002D0F0 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     CheckAllowForeground @ 0x1C003B790 (CheckAllowForeground.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C01177E0 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D1E50 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     xxxHardErrorControl @ 0x1C0241A0C (xxxHardErrorControl.c)
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
    v3 = (_QWORD *)*((_QWORD *)PtiLastWoken + 53);
    if ( v3 != (_QWORD *)a1
      && gptiForeground
      && *(_QWORD *)(gptiForeground + 424LL) != a1
      && (*(_DWORD *)(a1 + 12) & 0x80100) == 0
      && a1 != gppiInputProvider
      && gpqForeground
      && (gfDebugForegroundIgnoreDebugPort
       || !PsGetProcessDebugPort(*v3) && !PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 424LL))) )
    {
      v4 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v4) )
        return 0;
    }
  }
  return result;
}
