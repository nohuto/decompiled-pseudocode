/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001B810
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E3E0 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FEE0 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase4(__int64 a1)
{
  __int64 *v1; // rbx
  char v3; // bp
  unsigned int v4; // eax
  void *v5; // rcx
  unsigned int v6; // esi
  void *v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+48h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 40);
  *(_DWORD *)(a1 + 212) = 7;
  *(_OWORD *)(a1 + 216) = 0LL;
  v3 = 0;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v4 = ACPIGet(v1, 1096045407, -1610344446, 0LL, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1, a1 + 232, a1 + 240);
  v5 = &unk_1C00701BA;
  v6 = v4;
  v7 = &unk_1C00701BA;
  if ( v1 )
  {
    v8 = v1[1];
    v3 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v1[71];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (void *)v1[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (__int64)v7;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      10,
      78,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      v6,
      v3,
      (__int64)v5,
      v10);
  }
  result = 259LL;
  if ( v6 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
    return 0LL;
  }
  return result;
}
