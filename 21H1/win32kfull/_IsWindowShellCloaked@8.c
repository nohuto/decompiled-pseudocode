/*
 * XREFs of _IsWindowShellCloaked@8 @ 0xC3F32
 * Callers:
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

int __fastcall IsWindowShellCloaked(struct tagWND *a1, int a2)
{
  struct tagWND *TopLevelHostForComponent; // esi
  int v3; // ebx
  int v4; // edi
  unsigned int v6[9]; // [esp+10h] [ebp-28h] BYREF
  int v7; // [esp+34h] [ebp-4h]

  TopLevelHostForComponent = a1;
  v7 = a2;
  memset(v6, 0, sizeof(v6));
  v3 = 0;
  if ( CoreWindowProp::IsComponent(a1) )
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
  if ( TopLevelHostForComponent )
  {
    v4 = v7;
    while ( _GetWindowCompositionInfo((int)TopLevelHostForComponent, v6) )
    {
      if ( (v6[0] & 0x800) != 0 )
        return 1;
      if ( !v4 )
      {
        TopLevelHostForComponent = (struct tagWND *)*((_DWORD *)TopLevelHostForComponent + 14);
        if ( CoreWindowProp::IsComponent(TopLevelHostForComponent) )
          TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
        if ( TopLevelHostForComponent )
          continue;
      }
      return v3;
    }
  }
  return v3;
}
