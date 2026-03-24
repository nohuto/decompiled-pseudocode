/*
 * XREFs of ACPIBuildDockExtension @ 0x1C004B57C
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A5C0 (ACPIBuildProcessDevicePhaseEjd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002B90 (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C000C948 (RtlStringCchPrintfA.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C00116E4 (ACPIAmliBuildObjectPathname.c)
 *     ACPIBuildDeviceExtension @ 0x1C001BA9C (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildDockExtension(__int64 a1)
{
  PVOID v2; // r14
  __int64 result; // rax
  struct _KEVENT *v4; // rbx
  char *PoolWithTag; // rax
  void *Blink; // rdi
  char *v7; // r15
  int v8; // esi
  void **v9; // r13
  _LIST_ENTRY *p_WaitListHead; // r14
  _LIST_ENTRY *Flink; // rax
  void *v12; // rdx
  void *v13; // rcx
  _LIST_ENTRY *v14; // rcx
  void *v15; // rax
  void *v16; // rax
  struct _KEVENT *v17; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF
  void **p_Blink; // [rsp+A8h] [rbp+20h]

  v17 = 0LL;
  v2 = 0LL;
  P = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v17);
  if ( (int)result >= 0 )
  {
    v4 = v17;
    if ( v17 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x15uLL, 0x53706341u);
      Blink = &unk_1C00701BA;
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        RtlStringCchPrintfA(PoolWithTag, 0x15uLL, "ACPI\\DockDevice");
        p_Blink = (void **)&v4[23].Header.WaitListHead.Blink;
        v4[23].Header.WaitListHead.Blink = (_LIST_ENTRY *)v7;
        v8 = ACPIAmliBuildObjectPathname(a1, (char **)&P, 0);
        if ( v8 >= 0 )
        {
          *(_QWORD *)&v4[24].Header.Lock = P;
          v4[7].Header.WaitListHead.Blink = *(_LIST_ENTRY **)(*(_QWORD *)a1 + 104LL);
          v4[8].Header.LockNV = 4;
          LODWORD(v4[8].Header.WaitListHead.Flink) = 0;
          p_WaitListHead = &v4->Header.WaitListHead;
          _InterlockedOr64((volatile signed __int64 *)&v4->Header.WaitListHead, 0x209E00000020008uLL);
          v4 = v17;
          v9 = p_Blink;
        }
        else
        {
          v9 = p_Blink;
          p_WaitListHead = &v4->Header.WaitListHead;
          Flink = v4->Header.WaitListHead.Flink;
          v12 = &unk_1C00701BA;
          v13 = &unk_1C00701BA;
          if ( ((unsigned __int64)Flink & 0x200000000000LL) != 0 )
          {
            v12 = *p_Blink;
            if ( ((unsigned __int64)Flink & 0x400000000000LL) != 0 )
              v13 = *(void **)&v4[24].Header.Lock;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0x15u,
              0x53u,
              (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
              v8,
              (char)v4,
              (__int64)v12,
              (__int64)v13);
        }
        if ( v8 >= 0 )
        {
          v16 = &unk_1C00701BA;
          if ( ((__int64)p_WaitListHead->Flink & 0x200000000000LL) != 0 )
          {
            Blink = *v9;
            if ( ((__int64)p_WaitListHead->Flink & 0x400000000000LL) != 0 )
              v16 = *(void **)&v4[24].Header.Lock;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              6u,
              0x55u,
              (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
              v8,
              (char)v4,
              (__int64)Blink,
              (__int64)v16);
          return (unsigned int)v8;
        }
        v2 = P;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x52u,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            21);
        v8 = -1073741670;
      }
      v14 = v4->Header.WaitListHead.Flink;
      v15 = &unk_1C00701BA;
      if ( ((unsigned __int64)v14 & 0x200000000000LL) != 0 )
      {
        Blink = v4[23].Header.WaitListHead.Blink;
        if ( ((unsigned __int64)v14 & 0x400000000000LL) != 0 )
          v15 = *(void **)&v4[24].Header.Lock;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x54u,
          (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
          v8,
          (char)v4,
          (__int64)Blink,
          (__int64)v15);
      if ( v2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&v4->Header.WaitListHead, 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(P, 0);
        *(_QWORD *)&v17[24].Header.Lock = 0LL;
      }
      if ( v7 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&v4->Header.WaitListHead, 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v7, 0);
        v17[23].Header.WaitListHead.Blink = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&v4->Header.WaitListHead, 0x2000000000000uLL);
      return (unsigned int)v8;
    }
  }
  return result;
}
