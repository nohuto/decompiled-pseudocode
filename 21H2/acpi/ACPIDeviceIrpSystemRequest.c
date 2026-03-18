/*
 * XREFs of ACPIDeviceIrpSystemRequest @ 0x1C004FAD4
 * Callers:
 *     ACPIRootIrpSetPower @ 0x1C005FEA0 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000D718 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0030A70 (ACPIDeviceIrpForwardRequest.c)
 */

__int64 __fastcall ACPIDeviceIrpSystemRequest(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v5; // rbx
  int EaLength; // r14d
  int v7; // edx
  unsigned int v8; // ebp
  char v9; // r8
  const char *v10; // rcx
  const char *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  int Status; // esi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = DeviceExtension;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v7 = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  v8 = (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4;
  if ( v8 == 5 && (v7 == 2 || (unsigned int)(v7 - 3) <= 1) )
    v8 = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  v9 = 0;
  v10 = (const char *)&unk_1C006FB8B;
  v11 = (const char *)&unk_1C006FB8B;
  if ( DeviceExtension )
  {
    v12 = *(_QWORD *)(DeviceExtension + 8);
    v9 = v5;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(v5 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(v5 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v8 < 7 )
      v13 = AcpiSystemStateTranslation[v8];
    else
      LOBYTE(v13) = -1;
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v11,
      0xAu,
      0x21u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      (char)a2,
      v13,
      v9,
      v10,
      v11);
  }
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( Status >= 0 )
    return ACPIDeviceInitializePowerRequest(
             v5,
             v8,
             (_SLIST_ENTRY *)ACPIDeviceIrpForwardRequest,
             (__int64)a2,
             EaLength,
             1,
             0);
  ACPIDeviceIrpForwardRequest(v5, a2, Status);
  return (unsigned int)Status;
}
