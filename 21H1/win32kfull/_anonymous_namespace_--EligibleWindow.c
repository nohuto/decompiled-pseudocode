/*
 * XREFs of _anonymous_namespace_::EligibleWindow @ 0xF4E24
 * Callers:
 *     ?EligibleWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z @ 0xF4E7E (-EligibleWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 * Callees:
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     ?GetRootOwner@@YGPAUtagWND@@PAU1@@Z @ 0x979A6 (-GetRootOwner@@YGPAUtagWND@@PAU1@@Z.c)
 *     _IsImmersiveApplicationBandId@4 @ 0xAAF18 (_IsImmersiveApplicationBandId@4.c)
 */

bool __fastcall anonymous_namespace_::EligibleWindow(struct tagWND *a1, int a2)
{
  int v4; // edx
  int v5; // ecx
  struct tagWND *RootOwner; // eax

  if ( !IsImmersiveApplicationBandId(*(_DWORD *)(*((_DWORD *)a1 + 5) + 148)) && v5 != 1
    || !a2 && (*(_BYTE *)(v4 + 22) & 1) == 0 )
  {
    return 0;
  }
  if ( IsTrayWindow(a1) )
    return 1;
  if ( a2 != 1 )
    return 0;
  RootOwner = GetRootOwner(a1);
  return IsTrayWindow(RootOwner) != 0;
}
