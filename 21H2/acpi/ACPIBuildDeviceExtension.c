/*
 * XREFs of ACPIBuildDeviceExtension @ 0x1C0019F08
 * Callers:
 *     ACPIBuildFixedButtonExtension @ 0x1C0002530 (ACPIBuildFixedButtonExtension.c)
 *     OSNotifyCreateDevice @ 0x1C0009C54 (OSNotifyCreateDevice.c)
 *     ACPIBuildProcessorExtension @ 0x1C001F0E0 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002D2A8 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDockExtension @ 0x1C0049E7C (ACPIBuildDockExtension.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001A120 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0030080 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceExtension(volatile signed __int32 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char *v7; // rax
  char *v8; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  if ( a1 && (v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL)) != 0 )
  {
    if ( *(_QWORD *)(v6 + 792) == a2 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    return 3221225486LL;
  }
  else
  {
    v7 = (char *)ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x3F0uLL);
      *((_QWORD *)v8 + 95) = a1;
      ++*((_DWORD *)v8 + 183);
      ++*((_DWORD *)v8 + 182);
      if ( a1 )
      {
        dword_1C0081AC8 = 0;
        byte_1C0081ACC = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedAdd(a1 + 2, 1u);
      }
      *((_QWORD *)v8 + 3) = 0LL;
      *((_DWORD *)v8 + 92) = 0;
      *((_DWORD *)v8 + 127) = 0;
      *((_DWORD *)v8 + 134) = 0;
      *((_DWORD *)v8 + 135) = 0;
      *((_QWORD *)v8 + 101) = v8 + 800;
      *((_QWORD *)v8 + 100) = v8 + 800;
      *((_QWORD *)v8 + 105) = v8 + 832;
      *((_QWORD *)v8 + 104) = v8 + 832;
      *((_QWORD *)v8 + 107) = v8 + 848;
      *((_QWORD *)v8 + 106) = v8 + 848;
      *((_QWORD *)v8 + 71) = v8 + 560;
      *((_QWORD *)v8 + 70) = v8 + 560;
      *((_QWORD *)v8 + 74) = v8 + 584;
      *((_QWORD *)v8 + 73) = v8 + 584;
      *((_DWORD *)v8 + 132) = 4;
      *((_DWORD *)v8 + 133) = 4;
      *((_QWORD *)v8 + 109) = v8 + 864;
      *((_QWORD *)v8 + 108) = v8 + 864;
      *((_DWORD *)v8 + 4) = 1599293264;
      *((_QWORD *)v8 + 1) = 10LL;
      *a3 = v8;
      *((_DWORD *)v8 + 128) = 1;
      *((_DWORD *)v8 + 129) = 1;
      *((_DWORD *)v8 + 130) = 1;
      *((_DWORD *)v8 + 131) = 1;
      *((_DWORD *)v8 + 137) = 1;
      KeInitializeEvent((PRKEVENT)(v8 + 904), SynchronizationEvent, 1u);
      *((_QWORD *)v8 + 116) = 0LL;
      v8[936] = 0;
      *((_QWORD *)v8 + 99) = a2;
      if ( a2 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a2 + 732), 1u);
        v9 = *(_QWORD **)(a2 + 808);
        v10 = v8 + 816;
        if ( *v9 != a2 + 800 )
          __fastfail(3u);
        *v10 = a2 + 800;
        *((_QWORD *)v8 + 103) = v9;
        *v9 = v10;
        *(_QWORD *)(a2 + 808) = v10;
        _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40000000000uLL);
      }
      if ( a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 104LL) = v8;
      *((_DWORD *)v8 + 176) = -1;
      *((_QWORD *)v8 + 90) = v8 + 712;
      *((_QWORD *)v8 + 89) = v8 + 712;
      *(_QWORD *)v8 = &gAcpiTriageInfo;
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xAu,
        (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
        (_DWORD)a1);
    return 3221225626LL;
  }
}
