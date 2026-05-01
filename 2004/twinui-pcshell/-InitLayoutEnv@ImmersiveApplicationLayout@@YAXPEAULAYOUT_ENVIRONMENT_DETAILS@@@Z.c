/*
 * XREFs of ?InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180471AB8
 * Callers:
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803F7CBC (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x1804811D0 (--0CAppLayout@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ImmersiveApplicationLayout::InitLayoutEnv(
        ImmersiveApplicationLayout *this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  SetRectEmpty((LPRECT)this);
  SetRectEmpty((LPRECT)((char *)this + 24));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = 100;
}
