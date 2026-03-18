/*
 * XREFs of ?DeferMessage@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z @ 0xC28BC
 * Callers:
 *     _DeferMessagesOnQueue@8 @ 0xC2828 (_DeferMessagesOnQueue@8.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DeferMessage(int a1, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    *v2 = a2;
    a2[1] = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = a2;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = a2;
    a2[1] = 0;
  }
  *a2 = 0;
}
