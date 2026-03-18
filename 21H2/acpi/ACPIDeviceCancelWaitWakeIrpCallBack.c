/*
 * XREFs of ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C004F400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00623F0 (ACPIDereferenceWaitWakePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceCancelWaitWakeIrpCallBack(__int64 a1, char a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  void *v5; // r10
  __int64 v6; // r8
  void *v8; // r11
  __int64 v9; // rcx

  v4 = (_QWORD *)a4[5];
  v5 = &unk_1C006FB8B;
  LOBYTE(v6) = 0;
  v8 = &unk_1C006FB8B;
  if ( v4 )
  {
    v9 = v4[1];
    v6 = a4[5];
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v4[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (void *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0xDu,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a2,
      v6,
      (__int64)v5,
      (__int64)v8);
  ACPIDereferenceWaitWakePowerRequest(a4);
  return 0LL;
}
