/*
 * XREFs of ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00228E4
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00B4430 (PnpiCmResourceToBiosExtendedIrq.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00B6D8C (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C000A724 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     WPP_RECORDER_SF_Dqqss @ 0x1C005766C (WPP_RECORDER_SF_Dqqss.c)
 */

char __fastcall ACPIInternalInterruptPolarityCacheGetPolarity(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // di
  KIRQL v7; // bp
  _QWORD *i; // rbx
  int v9; // r8d
  int v10; // r9d
  __int64 *j; // rax
  int v12; // edx
  __int64 v14; // rax
  void *v15; // rdx
  void *v16; // rcx
  int v17; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  for ( i = (_QWORD *)ACPIInternalFindDeviceExtensionNoLock(a1, RootDeviceExtension); i; i = (_QWORD *)i[99] )
  {
    for ( j = (__int64 *)i[89]; j != i + 89; j = (__int64 *)*j )
    {
      if ( a2 == *((_DWORD *)j + 4) )
      {
        v12 = *((_DWORD *)j + 5);
        if ( v12 != -1 )
        {
          *a3 = v12;
          v3 = 1;
        }
        goto LABEL_9;
      }
    }
    v14 = i[1];
    if ( (v14 & 0x20) != 0 )
    {
      v15 = &unk_1C006FB8B;
      v16 = &unk_1C006FB8B;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = (void *)i[76];
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = (void *)i[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v15,
          v9,
          v10,
          v17,
          a2,
          (char)i,
          (char)i,
          (__int64)v15,
          (__int64)v16);
    }
  }
LABEL_9:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return v3;
}
