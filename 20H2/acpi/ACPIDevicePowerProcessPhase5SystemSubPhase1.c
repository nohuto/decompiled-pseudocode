/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0051340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C001E028 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FC80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIPauseInterpreter @ 0x1C00633CC (AMLIPauseInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase1(__int64 a1)
{
  _QWORD *v1; // rax
  const char *v2; // rdx
  const char *v4; // r10
  char v5; // cl
  __int64 v6; // r8
  bool v7; // zf

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C00701BA;
  v4 = (const char *)&unk_1C00701BA;
  v5 = 0;
  if ( v1 )
  {
    v6 = v1[1];
    v5 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[71];
      if ( (v6 & 0x400000000000LL) != 0 )
        v4 = (const char *)v1[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x51u,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      v5,
      v2,
      v4);
  v7 = *(_DWORD *)(a1 + 104) == 1;
  *(_DWORD *)(a1 + 212) = 4;
  if ( !v7 )
  {
    qword_1C0082098 = a1;
    qword_1C0082088 = (__int64)&AcpiPauseInterpreterEntry;
    qword_1C0082090 = (__int64)ACPIDeviceCompleteInterpreterRequest;
    AcpiPauseInterpreterEntry = (__int64)&AcpiPauseInterpreterEntry;
    if ( (unsigned int)AMLIPauseInterpreter() == 259 )
      return 259LL;
  }
  ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  return 0LL;
}
