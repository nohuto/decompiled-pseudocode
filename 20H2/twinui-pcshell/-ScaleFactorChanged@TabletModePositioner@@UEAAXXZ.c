/*
 * XREFs of ?ScaleFactorChanged@TabletModePositioner@@UEAAXXZ @ 0x1803FAA80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x1803F909C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 */

void __fastcall TabletModePositioner::ScaleFactorChanged(IUnknown *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = TabletModePositioner::LayoutEnvironmentChanged(this - 14);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B1,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v1);
}
