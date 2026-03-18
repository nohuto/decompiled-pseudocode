/*
 * XREFs of ACPIBuildThermalZoneExtension @ 0x1C002D2A8
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x1C002D154 (OSNotifyCreateThermalZone.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDeviceExtension @ 0x1C0019F08 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildThermalZoneExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 Pool2; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  void *v14; // rdi
  const char *v15; // rdx
  const char *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx

  result = ACPIBuildDeviceExtension(a1, RootDeviceExtension, a3);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *a3;
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x8300000uLL);
      Pool2 = ExAllocatePool2(64LL, 336LL, 1416651585LL);
      *(_QWORD *)(v6 + 200) = Pool2;
      v8 = Pool2;
      if ( Pool2 )
      {
        v9 = (_QWORD *)(Pool2 + 176);
        v9[1] = v9;
        *v9 = v9;
        KeInitializeEvent((PRKEVENT)(v8 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v8 + 280), NotificationEvent, 1u);
        v10 = *(_QWORD *)(v6 + 8);
        v11 = &unk_1C006FB8B;
        v12 = &unk_1C006FB8B;
        if ( (v10 & 0x200000000000LL) != 0 )
        {
          v11 = *(void **)(v6 + 608);
          if ( (v10 & 0x400000000000LL) != 0 )
            v12 = *(void **)(v6 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x59u,
            (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
            v5,
            v6,
            (__int64)v11,
            (__int64)v12);
      }
      else
      {
        v13 = *(_QWORD *)(v6 + 8);
        v14 = &unk_1C006FB8B;
        v15 = (const char *)&unk_1C006FB8B;
        v16 = (const char *)&unk_1C006FB8B;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v15 = *(const char **)(v6 + 608);
          if ( (v13 & 0x400000000000LL) != 0 )
            v16 = *(const char **)(v6 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x57u,
            (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
            80,
            v6,
            v15,
            v16);
          v13 = *(_QWORD *)(v6 + 8);
        }
        v5 = -1073741670;
        v17 = &unk_1C006FB8B;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v14 = *(void **)(v6 + 608);
          if ( (v13 & 0x400000000000LL) != 0 )
            v17 = *(void **)(v6 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x58u,
            (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
            154,
            v6,
            (__int64)v14,
            (__int64)v17);
        v18 = *(void **)(v6 + 200);
        if ( v18 )
        {
          ExFreePoolWithTag(v18, 0);
          *(_QWORD *)(v6 + 200) = 0LL;
        }
        _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x2000000000000uLL);
      }
      return v5;
    }
  }
  return result;
}
