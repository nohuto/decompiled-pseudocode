/*
 * XREFs of ?GetWindowToForegroundActivate@CWindow@@QBEPAUtagWND@@XZ @ 0x19F1D5
 * Callers:
 *     ?ForceForeground@CWindow@@QAE_NXZ @ 0x19F061 (-ForceForeground@CWindow@@QAE_NXZ.c)
 *     ?GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z @ 0x19F137 (-GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

struct tagWND *__thiscall CWindow::GetWindowToForegroundActivate(CWindow *this)
{
  struct tagWND *result; // eax
  int v2; // edx

  result = (struct tagWND *)HMValidateHandleNoSecure(*((_DWORD *)this + 2), 1);
  if ( result )
  {
    v2 = *((_DWORD *)result + 27);
    if ( v2 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 23) & 0x18) == 0x10 )
        return (struct tagWND *)*((_DWORD *)result + 27);
    }
  }
  return result;
}
