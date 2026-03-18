/*
 * XREFs of OSNotifyCreatePowerResource @ 0x1C002DCD4
 * Callers:
 *     OSNotifyCreate @ 0x1C001D3F0 (OSNotifyCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0019748 (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002DD28 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002DDF8 (ACPIBuildPowerResourceExtension.c)
 */

__int64 __fastcall OSNotifyCreatePowerResource(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  unsigned __int16 v4; // r9
  int v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = a1;
  v2 = ACPIBuildPowerResourceExtension(a1, &v6);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 15;
LABEL_8:
      v5 = v2;
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        v4,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
        v1,
        v5);
    }
  }
  else
  {
    v1 = v6;
    v2 = ACPIBuildPowerResourceRequest(v6);
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 16;
      goto LABEL_8;
    }
  }
  return (unsigned int)v2;
}
