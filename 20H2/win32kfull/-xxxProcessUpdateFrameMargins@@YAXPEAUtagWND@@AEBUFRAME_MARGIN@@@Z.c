/*
 * XREFs of ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C011CF84
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C00C8264 (SetWindowCompositionInfo.c)
 */

void __fastcall xxxProcessUpdateFrameMargins(struct tagWND *a1, const struct FRAME_MARGIN *a2)
{
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v4) )
  {
    v5 = *(_QWORD *)a2;
    SetWindowCompositionInfo((__int64)a1, (__int64)v4);
  }
}
