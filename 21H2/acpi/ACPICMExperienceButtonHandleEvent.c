/*
 * XREFs of ACPICMExperienceButtonHandleEvent @ 0x1C004D9FC
 * Callers:
 *     ACPICMButtonNotify @ 0x1C004D608 (ACPICMButtonNotify.c)
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C004DEE0 (WPP_RECORDER_SF_dqss.c)
 */

void __fastcall ACPICMExperienceButtonHandleEvent(_QWORD *a1, int a2)
{
  char v3; // r11
  int v4; // edx
  int v5; // eax
  char v6; // al
  void *v7; // r8
  void *v8; // r10
  __int64 v9; // r9

  v3 = a2;
  v4 = 2;
  v5 = a2 - 2;
  if ( !v5 )
    goto LABEL_10;
  if ( v5 == 126 )
  {
    v4 = 1;
LABEL_10:
    ACPISetDeviceWorker((__int64)a1, v4);
    return;
  }
  v6 = 0;
  v7 = &unk_1C006FB8B;
  v8 = &unk_1C006FB8B;
  if ( a1 )
  {
    v9 = a1[1];
    v6 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)a1[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (void *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      17,
      25,
      (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
      v3,
      v6,
      (__int64)v7,
      (__int64)v8);
}
