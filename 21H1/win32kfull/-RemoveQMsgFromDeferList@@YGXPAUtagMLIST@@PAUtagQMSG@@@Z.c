/*
 * XREFs of ?RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z @ 0xC3B74
 * Callers:
 *     _DestroyThreadsMessages@8 @ 0x6FE90 (_DestroyThreadsMessages@8.c)
 *     _FreeMessageList@4 @ 0x9C39C (_FreeMessageList@4.c)
 *     _MergeDeferredMessagesOfThreadOnQueue@4 @ 0xAAAC0 (_MergeDeferredMessagesOfThreadOnQueue@4.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveQMsgFromDeferList(int a1, _DWORD *a2)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)a2[1];
  if ( v3 )
    *v3 = *a2;
  if ( *a2 )
    *(_DWORD *)(*a2 + 4) = a2[1];
  if ( *(_DWORD **)(a1 + 16) == a2 )
    *(_DWORD *)(a1 + 16) = a2[1];
  a2[1] = 0;
  *a2 = 0;
}
