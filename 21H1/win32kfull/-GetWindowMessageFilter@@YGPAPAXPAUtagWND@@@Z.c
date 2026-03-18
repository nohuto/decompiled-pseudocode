/*
 * XREFs of ?GetWindowMessageFilter@@YGPAPAXPAUtagWND@@@Z @ 0x7FF2A
 * Callers:
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 * Callees:
 *     _VWPLGetData@12 @ 0x7FF58 (_VWPLGetData@12.c)
 */

void **__cdecl GetWindowMessageFilter()
{
  int v0; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  v0 = VWPLGetData(&v2);
  return v0 != 0 ? (void **)v2 : 0;
}
