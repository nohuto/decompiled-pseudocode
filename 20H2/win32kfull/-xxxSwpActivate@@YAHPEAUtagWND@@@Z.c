/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C002B4F4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002B5A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    xxxSendMessage(a1, 34LL, 0LL, 0LL);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == a1 || !xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  v3 = *(_QWORD *)(v2 + 120);
  if ( v3 )
  {
    SetOrClrWF(1LL, v3, 257LL, 1LL);
    v2 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v4 = *(_QWORD *)(v2 + 128);
  if ( v4 )
    SetOrClrWF(1LL, v4, 257LL, 1LL);
  return 1LL;
}
