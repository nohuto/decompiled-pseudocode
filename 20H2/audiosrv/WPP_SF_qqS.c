/*
 * XREFs of WPP_SF_qqS @ 0x1800CD324
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180037EA0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180043D00 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qqS(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v7; // [rsp+90h] [rbp+28h]
  __int64 v8; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  if ( v8 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v8 + 2 * v3) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, a2, (__int64 *)va);
}
