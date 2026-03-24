/*
 * XREFs of ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C00505E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0025774 (ACPIDereferenceWaitWakePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceCancelWaitWakeIrpCallBack(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  void *v5; // r10
  char v6; // r8
  void *v8; // r11
  __int64 v9; // rcx

  v4 = *(_QWORD **)(a4 + 40);
  v5 = &unk_1C00701BA;
  v6 = 0;
  v8 = &unk_1C00701BA;
  if ( v4 )
  {
    v9 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v4[71];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (void *)v4[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0xDu,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a2,
      v6,
      (__int64)v5,
      (__int64)v8);
  ACPIDereferenceWaitWakePowerRequest((char *)a4);
  return 0LL;
}
