/*
 * XREFs of ACPIRootIrpCompleteRoutine @ 0x1C00031F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIRootIrpCompleteRoutine(ULONG_PTR BugCheckParameter3, __int64 a2, struct _KEVENT *a3)
{
  KIRQL v6; // al
  __int64 v7; // rbx
  __int64 v8; // rax
  const char *v9; // r8
  const char *v10; // r10
  unsigned int v11; // ecx

  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v7 && *(_DWORD *)(v7 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    v9 = (const char *)&unk_1C00701BA;
    v10 = (const char *)&unk_1C00701BA;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v7 + 568);
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v7 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
      if ( v11 >= 0x1A )
        v11 = 26;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xBu,
        (__int64)&WPP_a909ee2b802d35766e487243411108b1_Traceguids,
        a2,
        ACPIDispatchPnpTableNames[v11],
        *(_DWORD *)(a2 + 48),
        v7,
        v9,
        v10);
    }
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
