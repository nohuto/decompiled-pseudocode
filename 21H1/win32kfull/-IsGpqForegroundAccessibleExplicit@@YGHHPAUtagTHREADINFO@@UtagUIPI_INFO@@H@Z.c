/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0xA4996
 * Callers:
 *     _EditionKeyEventLLHook@48 @ 0x1292C (_EditionKeyEventLLHook@48.c)
 *     ?zzzSetCursorPos@@YG_NHH@Z @ 0x7C9A8 (-zzzSetCursorPos@@YG_NHH@Z.c)
 *     _EditionIsGpqForegroundAccessibleExplicit@20 @ 0xA496E (_EditionIsGpqForegroundAccessibleExplicit@20.c)
 *     _EditionHandleAltTabCancel@32 @ 0xACBB8 (_EditionHandleAltTabCancel@32.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YGHH@Z @ 0xAFF1C (-IsGpqForegroundAccessibleCurrent@@YGHH@Z.c)
 * Callees:
 *     ?IsForegroundShellFrameQueueAccessible@@YGHPBUtagTHREADINFO@@@Z @ 0xA49E0 (-IsForegroundShellFrameQueueAccessible@@YGHPBUtagTHREADINFO@@@Z.c)
 */

int __thiscall IsGpqForegroundAccessibleExplicit(void *this, int a2, char a3, int a4)
{
  int v4; // esi
  const struct tagTHREADINFO *v6; // [esp+0h] [ebp-4h]

  if ( !this )
    return 1;
  v4 = 0;
  if ( !_gpqForeground
    || a2
    || IsForegroundShellFrameQueueAccessible(v6)
    || (unsigned __int8)CheckAccess(&a3, _gpqForeground + 316) )
  {
    return 1;
  }
  return v4;
}
