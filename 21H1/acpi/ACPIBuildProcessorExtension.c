/*
 * XREFs of ACPIBuildProcessorExtension @ 0x1C0015DC4
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0015FCC (OSNotifyCreateProcessor.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C588 (RtlStringCchPrintfA.c)
 *     ACPIBuildDeviceExtension @ 0x1C001B83C (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

__int64 __fastcall ACPIBuildProcessorExtension(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  char *v9; // rax
  char *v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  void *v13; // rsi
  void *v14; // rax
  __int64 v15; // rax
  void *v16; // rsi
  void *v17; // rdx
  void *v18; // rcx
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+38h] [rbp-30h]

  if ( !*((_QWORD *)&AcpiProcessorString + 1) )
    return 3221225524LL;
  result = ACPIBuildDeviceExtension();
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *a3;
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x1000300000uLL);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)AcpiProcessorString, 0x53706341u);
      *(_QWORD *)(v7 + 568) = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, *((const void **)&AcpiProcessorString + 1), (unsigned __int16)AcpiProcessorString);
        v9 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x53706341u);
        *(_QWORD *)(v7 + 184) = v9;
        if ( v9 )
        {
          strcpy(v9, "ACPI\\Processor");
          v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
          *(_QWORD *)(v7 + 576) = v10;
          if ( !v10 )
            return 3221225626LL;
          RtlStringCchPrintfA(v10, 0xBuLL, "%2x", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 8LL));
          _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x8001E00000000000uLL);
          v12 = *(_QWORD *)(v7 + 8);
          v13 = &unk_1C00701BA;
          v14 = &unk_1C00701BA;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v13 = *(void **)(v7 + 568);
            if ( (v12 & 0x400000000000LL) != 0 )
              v14 = *(void **)(v7 + 576);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 4;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v11,
              6,
              55,
              (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
              v6,
              v7,
              (__int64)v13,
              (__int64)v14);
          }
          return v6;
        }
        v19 = *(_QWORD *)(v7 + 8);
        v16 = &unk_1C00701BA;
        v17 = &unk_1C00701BA;
        v20 = &unk_1C00701BA;
        if ( (v19 & 0x200000000000LL) != 0 )
        {
          v17 = *(void **)(v7 + 568);
          if ( (v19 & 0x400000000000LL) != 0 )
            v20 = *(void **)(v7 + 576);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = (__int64)v17;
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v17,
            6,
            53,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            15,
            v7,
            v24,
            (__int64)v20);
        }
      }
      else
      {
        v15 = *(_QWORD *)(v7 + 8);
        v16 = &unk_1C00701BA;
        v17 = &unk_1C00701BA;
        v18 = &unk_1C00701BA;
        if ( (v15 & 0x200000000000LL) != 0 )
        {
          v17 = 0LL;
          if ( (v15 & 0x400000000000LL) != 0 )
            v18 = *(void **)(v7 + 576);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = (__int64)v17;
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v17,
            6,
            52,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            AcpiProcessorString,
            v7,
            v23,
            (__int64)v18);
        }
      }
      v21 = *(_QWORD *)(v7 + 8);
      v22 = &unk_1C00701BA;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v16 = *(void **)(v7 + 568);
        if ( (v21 & 0x400000000000LL) != 0 )
          v22 = *(void **)(v7 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v17,
          6,
          54,
          (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
          154,
          v7,
          (__int64)v16,
          (__int64)v22);
      }
      if ( *(_QWORD *)(v7 + 576) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFEBFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 576), 0);
        *(_QWORD *)(v7 + 576) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 568) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 568), 0);
        *(_QWORD *)(v7 + 568) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 184) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0x7FFFFFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 184), 0);
        *(_QWORD *)(v7 + 184) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x2000000000000uLL);
      return (unsigned int)-1073741670;
    }
  }
  return result;
}
