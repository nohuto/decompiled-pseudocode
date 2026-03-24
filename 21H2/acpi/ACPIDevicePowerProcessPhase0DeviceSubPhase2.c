/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001C5F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FEE0 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase2(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // edi
  void *v4; // rcx
  void *v5; // r8
  char v6; // r10
  __int64 v7; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = 0;
  v4 = &unk_1C00701BA;
  v5 = &unk_1C00701BA;
  v6 = 0;
  if ( v1 )
  {
    v7 = v1[1];
    v6 = (char)v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v4 = (void *)v1[71];
      if ( (v7 & 0x400000000000LL) != 0 )
        v5 = (void *)v1[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      53,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      v6,
      (__int64)v4,
      (__int64)v5);
  if ( (*(_DWORD *)(a1 + 232) & 1) == 0 )
  {
    *(_DWORD *)(a1 + 256) = 0;
    v2 = 2;
  }
  *(_DWORD *)(a1 + 212) = v2;
  ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  return 0LL;
}
