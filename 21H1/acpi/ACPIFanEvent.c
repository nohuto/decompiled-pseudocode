/*
 * XREFs of ACPIFanEvent @ 0x1C0055110
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIFanLoop @ 0x1C000D1CC (ACPIFanLoop.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 */

void __fastcall ACPIFanEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  const char *v5; // rdx
  __int64 v6; // rbx
  const char *v7; // r8
  __int64 v8; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LOBYTE(v4) = 0;
  v5 = (const char *)&unk_1C00701BA;
  v6 = DeviceExtension;
  v7 = (const char *)&unk_1C00701BA;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v4 + 568);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(v4 + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x10u,
      0xEu,
      (__int64)&WPP_3f41a75ade0b3c322354d339e206c4ba_Traceguids,
      a2,
      v4,
      v5,
      v7);
  if ( a2 == 128 )
    ACPIFanLoop(v6, 1, 0);
}
