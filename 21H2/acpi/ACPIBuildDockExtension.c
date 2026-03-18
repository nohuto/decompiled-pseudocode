/*
 * XREFs of ACPIBuildDockExtension @ 0x1C0049E7C
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C00093E0 (ACPIBuildProcessDevicePhaseEjd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0006528 (ACPIAmliBuildObjectPathname.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDeviceExtension @ 0x1C0019F08 (ACPIBuildDeviceExtension.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 */

__int64 __fastcall ACPIBuildDockExtension(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  char *Pool2; // rax
  void *v5; // rsi
  char *v6; // r15
  int v7; // ebp
  __int64 v8; // rax
  void *v9; // rdx
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rdx
  void *v14; // rsi
  void *v15; // rax
  __int64 v16; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF

  v16 = 0LL;
  P = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v16);
  if ( (int)result >= 0 )
  {
    v3 = v16;
    if ( v16 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 21LL, 1399874369LL);
      v5 = &unk_1C006FB8B;
      v6 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, 0x15uLL, "ACPI\\DockDevice");
        *(_QWORD *)(v3 + 608) = v6;
        v7 = ACPIAmliBuildObjectPathname(a1, &P, 0);
        if ( v7 >= 0 )
        {
          *(_QWORD *)(v3 + 616) = P;
          *(_QWORD *)(v3 + 184) = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
          *(_DWORD *)(v3 + 192) = 4;
          *(_DWORD *)(v3 + 200) = 0;
          _InterlockedOr64((volatile signed __int64 *)(v3 + 8), 0x209E00000020008uLL);
          v13 = *(_QWORD *)(v3 + 8);
          v14 = &unk_1C006FB8B;
          v15 = &unk_1C006FB8B;
          if ( (v13 & 0x200000000000LL) != 0 )
          {
            v14 = *(void **)(v3 + 608);
            if ( (v13 & 0x400000000000LL) != 0 )
              v15 = *(void **)(v16 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              6u,
              0x55u,
              (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
              v7,
              v16,
              (__int64)v14,
              (__int64)v15);
          return (unsigned int)v7;
        }
        v8 = *(_QWORD *)(v3 + 8);
        v9 = &unk_1C006FB8B;
        v10 = &unk_1C006FB8B;
        if ( (v8 & 0x200000000000LL) != 0 )
        {
          v9 = *(void **)(v3 + 608);
          if ( (v8 & 0x400000000000LL) != 0 )
            v10 = *(void **)(v3 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x15u,
            0x53u,
            (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
            v7,
            v3,
            (__int64)v9,
            (__int64)v10);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x52u,
            (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
            21);
        v7 = -1073741670;
      }
      v11 = *(_QWORD *)(v3 + 8);
      v12 = &unk_1C006FB8B;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v5 = *(void **)(v3 + 608);
        if ( (v11 & 0x400000000000LL) != 0 )
          v12 = *(void **)(v3 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x54u,
          (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
          v7,
          v3,
          (__int64)v5,
          (__int64)v12);
      if ( P )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(P, 0);
        *(_QWORD *)(v16 + 616) = 0LL;
      }
      if ( v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v6, 0);
        *(_QWORD *)(v16 + 608) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), 0x2000000000000uLL);
      return (unsigned int)v7;
    }
  }
  return result;
}
