/*
 * XREFs of ACPIBuildProcessorExtension @ 0x1C001F0E0
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0005604 (OSNotifyCreateProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDeviceExtension @ 0x1C0019F08 (ACPIBuildDeviceExtension.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ACPIBuildProcessorExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  void *Pool2; // rax
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  void *v12; // rsi
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rsi
  const char *v16; // rdx
  const char *v17; // rcx
  __int64 v18; // rax
  const char *v19; // rdx
  const char *v20; // rcx
  __int64 v21; // rcx
  void *v22; // rax

  if ( !*((_QWORD *)&AcpiProcessorString + 1) )
    return 3221225524LL;
  result = ACPIBuildDeviceExtension(a1, a2, a3);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *a3;
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x1000300000uLL);
      Pool2 = (void *)ExAllocatePool2(64LL, (unsigned __int16)AcpiProcessorString, 1399874369LL);
      *(_QWORD *)(v7 + 608) = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, *((const void **)&AcpiProcessorString + 1), (unsigned __int16)AcpiProcessorString);
        v9 = (char *)ExAllocatePool2(64LL, 15LL, 1399874369LL);
        *(_QWORD *)(v7 + 184) = v9;
        if ( v9 )
        {
          strcpy(v9, "ACPI\\Processor");
          v10 = (char *)ExAllocatePool2(64LL, 11LL, 1399874369LL);
          *(_QWORD *)(v7 + 616) = v10;
          if ( !v10 )
            return 3221225626LL;
          RtlStringCchPrintfA(v10, 0xBuLL, "%2x", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 8LL));
          _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x8001E00000000000uLL);
          v11 = *(_QWORD *)(v7 + 8);
          v12 = &unk_1C006FB8B;
          v13 = &unk_1C006FB8B;
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v12 = *(void **)(v7 + 608);
            if ( (v11 & 0x400000000000LL) != 0 )
              v13 = *(void **)(v7 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              6u,
              0x37u,
              (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
              v6,
              v7,
              (__int64)v12,
              (__int64)v13);
          return v6;
        }
        v18 = *(_QWORD *)(v7 + 8);
        v15 = &unk_1C006FB8B;
        v19 = (const char *)&unk_1C006FB8B;
        v20 = (const char *)&unk_1C006FB8B;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v19 = *(const char **)(v7 + 608);
          if ( (v18 & 0x400000000000LL) != 0 )
            v20 = *(const char **)(v7 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x35u,
            (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
            15,
            v7,
            v19,
            v20);
      }
      else
      {
        v14 = *(_QWORD *)(v7 + 8);
        v15 = &unk_1C006FB8B;
        v16 = (const char *)&unk_1C006FB8B;
        v17 = (const char *)&unk_1C006FB8B;
        if ( (v14 & 0x200000000000LL) != 0 )
        {
          v16 = 0LL;
          if ( (v14 & 0x400000000000LL) != 0 )
            v17 = *(const char **)(v7 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            0x34u,
            (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
            AcpiProcessorString,
            v7,
            v16,
            v17);
      }
      v21 = *(_QWORD *)(v7 + 8);
      v22 = &unk_1C006FB8B;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v15 = *(void **)(v7 + 608);
        if ( (v21 & 0x400000000000LL) != 0 )
          v22 = *(void **)(v7 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x36u,
          (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
          154,
          v7,
          (__int64)v15,
          (__int64)v22);
      if ( *(_QWORD *)(v7 + 616) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFEBFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 616), 0);
        *(_QWORD *)(v7 + 616) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 608) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 608), 0);
        *(_QWORD *)(v7 + 608) = 0LL;
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
