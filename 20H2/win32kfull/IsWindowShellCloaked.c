/*
 * XREFs of IsWindowShellCloaked @ 0x1C0013E60
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00142DC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall IsWindowShellCloaked(struct tagWND *a1, int a2)
{
  unsigned int v2; // edi
  struct tagWND *TopLevelHostForComponent; // rbx
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v7 = 0LL;
  TopLevelHostForComponent = a1;
  memset(v6, 0, sizeof(v6));
  while ( 1 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelHostForComponent);
    if ( !TopLevelHostForComponent || !(unsigned int)GetWindowCompositionInfo(TopLevelHostForComponent, v6) )
      break;
    if ( (v6[0] & 0x800) != 0 )
      return 1;
    if ( a2 )
      return v2;
    TopLevelHostForComponent = (struct tagWND *)*((_QWORD *)TopLevelHostForComponent + 13);
    a1 = TopLevelHostForComponent;
  }
  return v2;
}
