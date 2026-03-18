/*
 * XREFs of ACPIRootIrpCompleteRoutine @ 0x1C0001800
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIRootIrpCompleteRoutine(ULONG_PTR a1, __int64 a2, struct _KEVENT *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  void *v8; // r11
  void *v9; // rbx
  unsigned int v10; // ecx
  unsigned int v11; // edx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = DeviceExtension;
  if ( DeviceExtension )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = &unk_1C006FB8B;
    v9 = &unk_1C006FB8B;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(void **)(v6 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(void **)(v6 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
      if ( v10 >= 0x1A )
        v10 = 26;
      v11 = v10;
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_qsLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        5,
        11,
        (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
        a2,
        (__int64)ACPIDispatchPnpTableNames[v10],
        *(_DWORD *)(a2 + 48),
        v6,
        (__int64)v8,
        (__int64)v9);
    }
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
