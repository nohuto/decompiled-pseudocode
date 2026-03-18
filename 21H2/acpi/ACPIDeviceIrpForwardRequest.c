/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x1C0030A70
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1C004FAD4 (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000575C (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C0030B70 (ACPIDispatchForwardPowerIrp.c)
 */

LONG __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  const char *v6; // rcx
  char v7; // r8
  const char *v9; // rdx
  __int64 v10; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = (const char *)&unk_1C006FB8B;
  v7 = 0;
  v9 = (const char *)&unk_1C006FB8B;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v7 = a1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(a1 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x20u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      (char)a2,
      a3,
      v7,
      v6,
      v9);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    *(_BYTE *)(a1 + 556) = 0;
  if ( a3 >= 0 )
  {
    ACPIDispatchForwardPowerIrp(CurrentStackLocation->DeviceObject, a2);
  }
  else
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
