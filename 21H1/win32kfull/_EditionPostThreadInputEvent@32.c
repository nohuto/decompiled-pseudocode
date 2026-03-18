/*
 * XREFs of _EditionPostThreadInputEvent@32 @ 0xF1784
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

BOOL __stdcall EditionPostThreadInputEvent(
        struct tagTHREADINFO *a1,
        int a2,
        int a3,
        int a4,
        struct tagQMSG *a5,
        struct tagWND *a6,
        unsigned int a7,
        int a8)
{
  int v8; // esi
  int v10; // [esp+0h] [ebp-4h]
  struct tagINPUT_MESSAGE_SOURCE *savedregs; // [esp+4h] [ebp+0h]

  v8 = 0;
  if ( a1 != (struct tagTHREADINFO *)30 )
    return PostEventMessageEx(*(tagDomLock **)(a2 + 236), a2, a1, 0, a5, a6, a7, 0, v10, savedregs) != 0;
  return v8;
}
