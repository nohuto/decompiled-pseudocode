/*
 * XREFs of CiDispatchCreateTaskIndexClient @ 0x1C000A580
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexDereference @ 0x1C0001B60 (CiTaskIndexDereference.c)
 *     CiTaskIndexReference @ 0x1C0001D90 (CiTaskIndexReference.c)
 *     WPP_SF_ @ 0x1C00043F8 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C000468C (WPP_SF_dd.c)
 *     CiLookupTask @ 0x1C000B060 (CiLookupTask.c)
 *     CiTaskIndexCreate @ 0x1C000B170 (CiTaskIndexCreate.c)
 */

__int64 __fastcall CiDispatchCreateTaskIndexClient(PIRP Irp, __int64 a2, __int64 a3)
{
  int v3; // r9d
  char v4; // r15
  struct _IRP *MasterIrp; // rax
  unsigned int v6; // ebp
  NTSTATUS v9; // ebx
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  signed __int64 v13; // rcx
  volatile signed __int64 *v14; // rax
  volatile signed __int64 *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 32);
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0;
  v9 = -1073741811;
  if ( v3 != 280 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xFu, a3, v3, 280);
    goto LABEL_11;
  }
  v10 = *(volatile signed __int64 **)&MasterIrp->Flags;
  if ( v10 && Irp->RequestorMode )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_f2567f649f8e330a8ddb4ba7f0878bc2_Traceguids);
    goto LABEL_11;
  }
  v16 = *(volatile signed __int64 **)&MasterIrp->Flags;
  v11 = 0LL;
  v17 = 0LL;
  if ( !v10 )
  {
    v9 = CiLookupTask(
           &MasterIrp->AssociatedIrp,
           &MasterIrp->Tail.CompletionKey + 4,
           &v17,
           BYTE3(MasterIrp->MdlAddress),
           &v17);
    if ( v9 < 0 )
      goto LABEL_22;
    v11 = v17;
  }
  v4 = 1;
  KeEnterCriticalRegion();
  if ( v10 )
  {
    CiTaskIndexReference((__int64)v10);
    goto LABEL_8;
  }
  v12 = CiTaskIndexCreate(v11, &v16);
  v10 = v16;
  v9 = v12;
  if ( v12 >= 0 )
  {
LABEL_8:
    v13 = *(_QWORD *)(a2 + 48);
    if ( !_InterlockedCompareExchange64(v10 + 1, v13, 0LL) )
    {
      v14 = v16;
      v9 = 0;
      *(_QWORD *)(v13 + 24) = v16;
      v6 = *((_DWORD *)v14 + 36);
LABEL_10:
      KeLeaveCriticalRegion();
      goto LABEL_11;
    }
    v10 = v16;
    v9 = -1073740008;
  }
LABEL_22:
  if ( v10 )
    CiTaskIndexDereference(v10);
  if ( v4 )
    goto LABEL_10;
LABEL_11:
  Irp->IoStatus.Information = v6;
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
