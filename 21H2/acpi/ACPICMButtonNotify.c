/*
 * XREFs of ACPICMButtonNotify @ 0x1C004E918
 * Callers:
 *     ACPICMButtonNotifyByDeviceExtension @ 0x1C004EA20 (ACPICMButtonNotifyByDeviceExtension.c)
 *     ACPICMButtonNotifyByDeviceObject @ 0x1C004EA40 (ACPICMButtonNotifyByDeviceObject.c)
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C0013470 (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001DBF4 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIButtonEvent @ 0x1C003000C (ACPIButtonEvent.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C004ED7C (ACPICMExperienceButtonHandleEvent.c)
 */

void __fastcall ACPICMButtonNotify(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  char v4; // r10
  int v5; // edx
  __int64 v6; // r9
  unsigned int v7; // r8d
  const char *v8; // rcx
  const char *v9; // rdx
  unsigned int v10; // edx

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 200);
  v6 = *(_QWORD *)(a2 + 8);
  if ( (v6 & 0x2000) != 0 )
  {
    ACPICMExperienceButtonHandleEvent(a2, a3);
    return;
  }
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( !a1 )
      return;
    v10 = 0x80000000;
    goto LABEL_16;
  }
  if ( v7 != 126 )
  {
    v8 = (const char *)&unk_1C00701BA;
    v9 = (const char *)&unk_1C00701BA;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(a2 + 568);
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(a2 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xAu,
        (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
        v4,
        a2,
        v8,
        v9);
    return;
  }
  if ( (v5 & 4) != 0 )
  {
    ACPISetDeviceWorker(a2, 0);
    return;
  }
  if ( a1 )
  {
    v10 = v5 & 0x7FFFFFFF;
LABEL_16:
    ACPIButtonEvent(a1, v10);
  }
}
