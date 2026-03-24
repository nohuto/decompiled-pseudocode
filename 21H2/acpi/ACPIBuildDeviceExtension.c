/*
 * XREFs of ACPIBuildDeviceExtension @ 0x1C001BA9C
 * Callers:
 *     ACPIBuildProcessorExtension @ 0x1C0016024 (ACPIBuildProcessorExtension.c)
 *     OSNotifyCreateDevice @ 0x1C001B3BC (OSNotifyCreateDevice.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002FAC4 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildFixedButtonExtension @ 0x1C00312F0 (ACPIBuildFixedButtonExtension.c)
 *     ACPIBuildDockExtension @ 0x1C004B57C (ACPIBuildDockExtension.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C8A4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceExtension(volatile signed __int32 *a1, __int64 a2, struct _KEVENT **a3)
{
  __int64 v6; // rcx
  struct _KEVENT *v7; // rax
  struct _KEVENT *v8; // rbx
  _LIST_ENTRY *v9; // rdx
  _LIST_ENTRY *p_WaitListHead; // rax

  if ( a1 && (v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL)) != 0 )
  {
    if ( *(_QWORD *)(v6 + 752) == a2 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    return 3221225486LL;
  }
  else
  {
    v7 = (struct _KEVENT *)ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x3C8uLL);
      *(_QWORD *)&v8[30].Header.Lock = a1;
      ++HIDWORD(v8[28].Header.WaitListHead.Blink);
      ++LODWORD(v8[28].Header.WaitListHead.Blink);
      if ( a1 )
      {
        dword_1C0082908 = 0;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedAdd(a1 + 2, 1u);
      }
      *(_QWORD *)&v8[1].Header.Lock = 0LL;
      LODWORD(v8[13].Header.WaitListHead.Blink) = 0;
      HIDWORD(v8[19].Header.WaitListHead.Flink) = 0;
      LODWORD(v8[20].Header.WaitListHead.Blink) = 0;
      HIDWORD(v8[20].Header.WaitListHead.Blink) = 0;
      *(_QWORD *)&v8[32].Header.Lock = (char *)v8 + 760;
      v8[31].Header.WaitListHead.Blink = (_LIST_ENTRY *)&v8[31].Header.WaitListHead.Blink;
      v8[33].Header.WaitListHead.Flink = (_LIST_ENTRY *)&v8[33];
      *(_QWORD *)&v8[33].Header.Lock = v8 + 33;
      *(_QWORD *)&v8[34].Header.Lock = (char *)v8 + 808;
      v8[33].Header.WaitListHead.Blink = (_LIST_ENTRY *)&v8[33].Header.WaitListHead.Blink;
      *(_QWORD *)&v8[22].Header.Lock = (char *)v8 + 520;
      v8[21].Header.WaitListHead.Blink = (_LIST_ENTRY *)&v8[21].Header.WaitListHead.Blink;
      *(_QWORD *)&v8[23].Header.Lock = (char *)v8 + 544;
      v8[22].Header.WaitListHead.Blink = (_LIST_ENTRY *)&v8[22].Header.WaitListHead.Blink;
      LODWORD(v8[20].Header.WaitListHead.Flink) = 4;
      HIDWORD(v8[20].Header.WaitListHead.Flink) = 4;
      v8[34].Header.WaitListHead.Blink = &v8[34].Header.WaitListHead;
      v8[34].Header.WaitListHead.Flink = &v8[34].Header.WaitListHead;
      LODWORD(v8->Header.WaitListHead.Blink) = 1599293264;
      v8->Header.WaitListHead.Flink = (_LIST_ENTRY *)10;
      *a3 = v8;
      LODWORD(v8[19].Header.WaitListHead.Blink) = 1;
      HIDWORD(v8[19].Header.WaitListHead.Blink) = 1;
      v8[20].Header.LockNV = 1;
      v8[20].Header.SignalState = 1;
      v8[21].Header.SignalState = 1;
      KeInitializeEvent(v8 + 36, SynchronizationEvent, 1u);
      *(_QWORD *)&v8[37].Header.Lock = 0LL;
      LOBYTE(v8[37].Header.WaitListHead.Flink) = 0;
      v8[31].Header.WaitListHead.Flink = (_LIST_ENTRY *)a2;
      if ( a2 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a2 + 692), 1u);
        v9 = *(_LIST_ENTRY **)(a2 + 768);
        p_WaitListHead = &v8[32].Header.WaitListHead;
        if ( v9->Flink != (_LIST_ENTRY *)(a2 + 760) )
          __fastfail(3u);
        p_WaitListHead->Flink = (_LIST_ENTRY *)(a2 + 760);
        v8[32].Header.WaitListHead.Blink = v9;
        v9->Flink = p_WaitListHead;
        *(_QWORD *)(a2 + 768) = p_WaitListHead;
        _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40000000000uLL);
      }
      if ( a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 104LL) = v8;
      LODWORD(v8[27].Header.WaitListHead.Blink) = -1;
      v8[28].Header.WaitListHead.Flink = (_LIST_ENTRY *)&v8[28];
      *(_QWORD *)&v8[28].Header.Lock = v8 + 28;
      *(_QWORD *)&v8->Header.Lock = &gAcpiTriageInfo;
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xAu,
        (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
        (_DWORD)a1);
    return 3221225626LL;
  }
}
