/*
 * XREFs of ?GetAppcommandQueue@@YGPAUtagQ@@XZ @ 0x16DB9F
 * Callers:
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 * Callees:
 *     <none>
 */

struct tagQ *__stdcall GetAppcommandQueue()
{
  int v0; // eax

  if ( _gpqForeground && ((v0 = *(_DWORD *)(_gpqForeground + 60)) != 0 || (v0 = *(_DWORD *)(_gpqForeground + 64)) != 0) )
    return *(struct tagQ **)(*(_DWORD *)(v0 + 8) + 236);
  else
    return 0;
}
