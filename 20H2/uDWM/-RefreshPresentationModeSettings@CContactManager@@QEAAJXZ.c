/*
 * XREFs of ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x1800340F0
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180033FB0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180035B38 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x180051950 (--0CContactManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::RefreshPresentationModeSettings(CContactManager *this)
{
  BOOL v2; // eax
  bool v3; // dl
  int pvParam; // [rsp+38h] [rbp+10h] BYREF

  v2 = SystemParametersInfoW(0x2018u, 0, &pvParam, 0);
  v3 = 0;
  if ( v2 )
    v3 = pvParam == 2;
  *((_BYTE *)this + 324) = v3;
  return 0LL;
}
