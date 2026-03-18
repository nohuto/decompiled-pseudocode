/*
 * XREFs of CreateKernelIocpWcp @ 0x1C004A0D0
 * Callers:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00649BC (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 */

__int64 CreateKernelIocpWcp()
{
  int v0; // eax
  int v1; // edx
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-30h]
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int128 v8; // [rsp+50h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0LL;
  v3[1] = 0;
  v7 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v8 = 0LL;
  v3[0] = 48;
  v6 = 512;
  v0 = ZwCreateWaitCompletionPacket(&v9, 1LL, v3);
  if ( v0 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v1,
      17,
      13,
      (__int64)&WPP_c375c14636bd34c1ee492b0bbe3963bc_Traceguids,
      v0);
  }
  return v9;
}
