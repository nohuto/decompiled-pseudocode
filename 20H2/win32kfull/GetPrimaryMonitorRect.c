/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C0106640
 * Callers:
 *     _GetClientRect @ 0x1C003C56C (_GetClientRect.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C01064C0 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSoundSentry @ 0x1C0152300 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRect(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 DispInfo; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // xmm0
  _OWORD *result; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo(a1, a2, a3, a4);
  v8 = *GetMonitorRect(&v10, *(_QWORD *)(DispInfo + 96), v6, v7);
  result = a1;
  *a1 = v8;
  return result;
}
