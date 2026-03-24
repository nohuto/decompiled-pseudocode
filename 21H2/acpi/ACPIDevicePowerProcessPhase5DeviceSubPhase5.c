/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001B970
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C001CD30 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FEE0 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // al
  void *v4; // rcx
  void *v5; // r8
  __int64 v6; // rdx
  _UNKNOWN **v7; // rdx
  __int64 v8; // rcx

  v1 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  v4 = &unk_1C00701BA;
  v5 = &unk_1C00701BA;
  if ( v1 )
  {
    v6 = v1[1];
    v3 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v4 = (void *)v1[71];
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = (void *)v1[72];
    }
  }
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      10,
      79,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      v3,
      (__int64)v4,
      (__int64)v5);
  }
  *(_DWORD *)(a1 + 212) = 8;
  v8 = *(_QWORD *)(a1 + 232);
  if ( (v8 & 9) == 9 && ((v8 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    *(_OWORD *)(a1 + 216) = 0LL;
    *(_OWORD *)(a1 + 232) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    ACPIDeviceCompletePhase3Common(a1 + 208, 2LL, v5);
  }
  return 0LL;
}
