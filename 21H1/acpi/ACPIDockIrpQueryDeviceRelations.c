/*
 * XREFs of ACPIDockIrpQueryDeviceRelations @ 0x1C00AB7C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C002B34C (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C008F328 (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00AB9F8 (ACPIDockIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIDockIrpQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rax
  unsigned __int8 MinorFunction; // r12
  const char *v7; // r14
  unsigned int Length; // ebx
  char v9; // bp
  __int64 v10; // rsi
  char *IrpText; // rax
  __int64 v12; // rdx
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  int TargetRelation; // eax
  unsigned int Status; // ebx
  __int64 v18; // rcx
  char *v19; // rax
  const char *v20; // r8
  unsigned __int64 Information; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Information = Irp->IoStatus.Information;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  MinorFunction = CurrentStackLocation->MinorFunction;
  v7 = byte_1C00701BA;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = 0;
  v10 = DeviceExtension;
  switch ( Length )
  {
    case 0u:
      goto LABEL_13;
    case 1u:
      TargetRelation = ACPIDockIrpQueryEjectRelations(Object, Irp, &Information);
      break;
    case 4u:
      TargetRelation = ACPIBusIrpQueryTargetRelation(Object, (char)Irp, (PVOID *)&Information);
      break;
    default:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(0x200000000000LL, MinorFunction);
        WPP_RECORDER_SF_qsdqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v12,
          (__int64)v13,
          0xFu,
          (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
          (char)Irp,
          IrpText,
          Length,
          v14,
          v15,
          v13);
      }
      goto LABEL_13;
  }
  Status = TargetRelation;
  if ( TargetRelation < 0 )
  {
    if ( TargetRelation != -1073741637 && !Information )
    {
      Irp->IoStatus.Status = TargetRelation;
      Irp->IoStatus.Information = 0LL;
      goto LABEL_14;
    }
LABEL_13:
    Status = Irp->IoStatus.Status;
    goto LABEL_14;
  }
  Irp->IoStatus.Status = TargetRelation;
  Irp->IoStatus.Information = Information;
LABEL_14:
  IofCompleteRequest(Irp, 0);
  if ( v10 )
  {
    v18 = 0x200000000000LL;
    v9 = v10;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v10 + 568);
      v18 = 0x400000000000LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = ACPIDebugGetIrpText(v18, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x10u,
      (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
      (char)Irp,
      v19,
      Status,
      v9,
      v7,
      v20);
  }
  return Status;
}
