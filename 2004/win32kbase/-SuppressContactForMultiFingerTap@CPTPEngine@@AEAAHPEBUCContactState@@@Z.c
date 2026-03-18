/*
 * XREFs of ?SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z @ 0x1C01C51A8
 * Callers:
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01C3258 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::SuppressContactForMultiFingerTap(CPTPEngine *this, const struct CContactState *a2)
{
  return (*(_DWORD *)a2 & 0x80u) != 0 && (*(_DWORD *)a2 & 0x800000) != 0
      || *((_DWORD *)this + 909) > *((_DWORD *)a2 + 33);
}
