/*
 * XREFs of ACPICMButtonNotify @ 0x1C004D608
 * Callers:
 *     ACPICMButtonNotifyByDeviceExtension @ 0x1C004D6F0 (ACPICMButtonNotifyByDeviceExtension.c)
 *     ACPICMButtonNotifyByDeviceObject @ 0x1C004D710 (ACPICMButtonNotifyByDeviceObject.c)
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 *     ACPIButtonEvent @ 0x1C002C7AC (ACPIButtonEvent.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C004D9FC (ACPICMExperienceButtonHandleEvent.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C004DEE0 (WPP_RECORDER_SF_dqss.c)
 */

void __fastcall ACPICMButtonNotify(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  char v4; // r10
  int v5; // edx
  __int64 v6; // r9
  unsigned int v7; // r8d
  void *v8; // rcx
  void *v9; // rdx
  unsigned int v10; // edx
  __int64 v11; // [rsp+40h] [rbp-18h]

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
    v8 = &unk_1C006FB8B;
    v9 = &unk_1C006FB8B;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v8 = *(void **)(a2 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = *(void **)(a2 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = (__int64)v9;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v9,
        5,
        10,
        (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
        v4,
        a2,
        (__int64)v8,
        v11);
    }
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
