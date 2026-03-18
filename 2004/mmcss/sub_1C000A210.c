/*
 * XREFs of sub_1C000A210 @ 0x1C000A210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001B60 @ 0x1C0001B60 (sub_1C0001B60.c)
 *     sub_1C0001D90 @ 0x1C0001D90 (sub_1C0001D90.c)
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 *     sub_1C000464C @ 0x1C000464C (sub_1C000464C.c)
 *     sub_1C000ACF0 @ 0x1C000ACF0 (sub_1C000ACF0.c)
 *     sub_1C000AE00 @ 0x1C000AE00 (sub_1C000AE00.c)
 */

__int64 __fastcall sub_1C000A210(PIRP Irp, __int64 a2, __int64 a3)
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
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C000464C((__int64)off_1C0007000->AttachedDevice, 0xFu, a3, v3, 280);
    goto LABEL_11;
  }
  v10 = *(volatile signed __int64 **)&MasterIrp->Flags;
  if ( v10 && Irp->RequestorMode )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C00043B8((__int64)off_1C0007000->AttachedDevice, 0x10u, (__int64)&unk_1C00053E8);
    goto LABEL_11;
  }
  v16 = *(volatile signed __int64 **)&MasterIrp->Flags;
  v11 = 0LL;
  v17 = 0LL;
  if ( !v10 )
  {
    v9 = sub_1C000ACF0(
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
    sub_1C0001D90((__int64)v10);
    goto LABEL_8;
  }
  v12 = sub_1C000AE00(v11, &v16);
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
    sub_1C0001B60(v10);
  if ( v4 )
    goto LABEL_10;
LABEL_11:
  Irp->IoStatus.Information = v6;
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
