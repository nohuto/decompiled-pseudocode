/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C01070C8
 * Callers:
 *     CheckCursorClipAccess @ 0x1C0030640 (CheckCursorClipAccess.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C003AEFC (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C003B2AC (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     EditionKeyEventLLHook @ 0x1C0045F20 (EditionKeyEventLLHook.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x1C01070A0 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     EditionHandleAltTabCancel @ 0x1C0115CE0 (EditionHandleAltTabCancel.c)
 * Callees:
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C0107130 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleExplicit(int a1, const struct tagTHREADINFO *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v4 = 0;
  if ( !a1
    || !gpqForeground
    || a4
    || (unsigned int)IsForegroundShellFrameQueueAccessible(a2)
    || (unsigned __int8)CheckAccess(&v6, gpqForeground + 428LL) )
  {
    return 1;
  }
  return v4;
}
