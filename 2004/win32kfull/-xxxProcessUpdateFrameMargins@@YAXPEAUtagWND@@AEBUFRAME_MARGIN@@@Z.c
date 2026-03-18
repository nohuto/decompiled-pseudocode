/*
 * XREFs of ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C011BFC4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 */

void __fastcall xxxProcessUpdateFrameMargins(struct tagWND *a1, const struct FRAME_MARGIN *a2, __int64 a3)
{
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v5, a3) )
  {
    v6 = *(_QWORD *)a2;
    SetWindowCompositionInfo((__int64)a1, (__int64)v5);
  }
}
