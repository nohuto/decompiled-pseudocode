/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C0001AF0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C0001E3C (PortPassThroughFreeIrp.c)
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001E8C (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C0002000 (RaUnitSetAtaPassThroughCdb.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00020C0 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidAllocateSrb @ 0x1C0007594 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C000E060 (RaSendIrpSynchronous.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0028DF4 (McTemplateK0pd_EtwWriteTransfer.c)
 *     PortPassThroughBuildIrp @ 0x1C0071008 (PortPassThroughBuildIrp.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  __int64 v3; // rax
  _BYTE *Srb; // rbx
  IRP *v6; // r13
  void *v7; // r12
  char *v8; // r14
  __int64 v10; // rcx
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v13; // r12
  unsigned __int64 v14; // r9
  __int64 MdlAddress_low; // r8
  _IRP *v16; // r10
  __int64 v17; // rdx
  unsigned int v18; // eax
  char RequestorMode; // al
  __int64 v20; // r8
  void *Pool; // rax
  char v22; // cl
  unsigned __int16 v23; // ax
  int v24; // ecx
  int v25; // ecx
  char *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  _IRP *v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  unsigned __int16 Size; // ax
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rcx
  _IRP *v37; // rcx
  _BYTE *v38; // rax
  _IRP *v40; // [rsp+38h] [rbp-31h]
  __int128 v41; // [rsp+48h] [rbp-21h] BYREF
  __int128 v42; // [rsp+58h] [rbp-11h] BYREF
  __int128 v43; // [rsp+68h] [rbp-1h]
  __int128 v44; // [rsp+78h] [rbp+Fh]

  v40 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  *(_QWORD *)&v41 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v10 = *(_QWORD *)(v3 + 536);
  v42 = 0LL;
  v43 = 0LL;
  LODWORD(v3) = *(_DWORD *)(v10 + 184);
  v44 = 0LL;
  if ( (v3 & 2) == 0 )
  {
    Status = -1073741808;
    goto LABEL_29;
  }
  Status = RaUnitAtaPassThroughValidateInput(a1);
  if ( Status < 0 )
    goto LABEL_29;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v13 = MasterIrp;
  if ( IoIs32bitProcess(a2) )
  {
    v30 = a2->AssociatedIrp.MasterIrp;
    MasterIrp = (_IRP *)&v42;
    v31 = *(_OWORD *)&v30->Type;
    *((_QWORD *)&v44 + 1) = v30->ThreadListEntry.Flink;
    v32 = *(_QWORD *)&v30->Flags;
    *(_QWORD *)&v44 = v30->AssociatedIrp.MasterIrp;
    *((_QWORD *)&v43 + 1) = *(&v30->Flags + 1);
    v42 = v31;
    *(_QWORD *)&v43 = v32;
  }
  MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
  if ( (_DWORD)MdlAddress_low )
  {
    v16 = MasterIrp->AssociatedIrp.MasterIrp;
    v17 = *(_QWORD *)(a1 + 24);
    if ( !a3 )
      v16 = (_IRP *)((char *)v16 + (_QWORD)v13);
    v40 = v16;
    v14 = (MdlAddress_low + (unsigned __int64)((unsigned __int16)v16 & 0xFFF) + 4095) >> 12;
    if ( *(_BYTE *)(v17 + 4514) )
    {
      v18 = *(_DWORD *)(v17 + 724);
      if ( *(_DWORD *)(v17 + 340) < v18 )
        v18 = *(_DWORD *)(v17 + 340);
    }
    else
    {
      v18 = *(_DWORD *)(v17 + 340);
    }
    if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v17 + 336) || (unsigned int)v14 > v18 )
    {
      Status = -1073741811;
LABEL_46:
      v7 = 0LL;
      goto LABEL_29;
    }
  }
  else
  {
    v16 = 0LL;
  }
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  LOBYTE(v14) = MasterIrp->Size & 2;
  v6 = (IRP *)PortPassThroughBuildIrp(*(_QWORD *)(a1 + 8), v16, MdlAddress_low, v14, RequestorMode);
  if ( !v6 )
  {
    Status = -1073741801;
    goto LABEL_46;
  }
  LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 410LL);
  Srb = (_BYTE *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0LL, v20, 1LL);
  if ( Srb )
  {
    Pool = (void *)RaidAllocatePool(512LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8));
    v7 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, 0x4FuLL);
      v22 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 410LL);
      Srb[3] = 0;
      if ( v22 == 1 )
      {
        *((_DWORD *)Srb + 5) = 0;
        Size = MasterIrp->Size;
        *(_QWORD *)&v41 = Srb;
        if ( (Size & 2) != 0 )
        {
          *((_DWORD *)Srb + 6) |= 0x40u;
          Size = MasterIrp->Size;
        }
        v34 = *((_DWORD *)Srb + 6);
        if ( (Size & 4) != 0 )
          v34 |= 0x80u;
        v35 = v34 | 0x100;
        *((_DWORD *)Srb + 6) = v35;
        if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
          *((_DWORD *)Srb + 6) = v35 | 0x80000;
        v36 = *((unsigned int *)Srb + 13);
        *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
        *((_QWORD *)Srb + 8) = v40;
        *((_QWORD *)Srb + 10) = v6;
        *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
        Srb[v36 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
        Srb[v36 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
        Srb[v36 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
        v8 = &Srb[*((unsigned int *)Srb + 30)];
        *(_DWORD *)v8 = 64;
        v26 = v8 + 24;
        *((_DWORD *)v8 + 1) = 32;
        *(_WORD *)(v8 + 9) = 4175;
        *((_QWORD *)v8 + 2) = v7;
      }
      else
      {
        Srb[2] = 0;
        *(_WORD *)Srb = 88;
        Srb[5] = *((_BYTE *)&MasterIrp->Size + 2);
        Srb[6] = *((_BYTE *)&MasterIrp->Size + 3);
        Srb[7] = *((_BYTE *)&MasterIrp->Size + 4);
        Srb[10] = 16;
        v23 = MasterIrp->Size;
        if ( (v23 & 2) != 0 )
        {
          *((_DWORD *)Srb + 3) |= 0x40u;
          v23 = MasterIrp->Size;
        }
        v24 = *((_DWORD *)Srb + 3);
        if ( (v23 & 4) != 0 )
          v24 |= 0x80u;
        v25 = v24 | 0x100;
        *((_DWORD *)Srb + 3) = v25;
        if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
          *((_DWORD *)Srb + 3) = v25 | 0x80000;
        v26 = Srb + 72;
        *((_DWORD *)Srb + 4) = MasterIrp->MdlAddress;
        *((_QWORD *)Srb + 3) = v40;
        Srb[11] = 79;
        *((_QWORD *)Srb + 4) = v7;
        *((_QWORD *)Srb + 6) = v6;
        *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
      }
      RaUnitSetAtaPassThroughCdb(MasterIrp, v26);
      v6->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
      RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v6);
      LOBYTE(v27) = a3;
      RaUnitAtaPassThroughMarshalResults(Srb, MasterIrp, v27, &a2->IoStatus);
      if ( IoIs32bitProcess(a2) )
      {
        v37 = a2->AssociatedIrp.MasterIrp;
        *(_OWORD *)&v37->Type = *(_OWORD *)&MasterIrp->Type;
        *(_QWORD *)&v37->Flags = *(_QWORD *)&MasterIrp->Flags;
        v37->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
        v37->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
      }
      Status = a2->IoStatus.Status;
    }
    else
    {
      Status = -1073741801;
    }
  }
  else
  {
    Status = -1073741801;
    v7 = 0LL;
  }
LABEL_29:
  if ( v6 )
    PortPassThroughFreeIrp(v6);
  if ( Srb )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4E536152u);
    if ( Srb[2] == 40 )
    {
      v38 = Srb;
      if ( (_QWORD)v41 )
        v38 = (_BYTE *)v41;
      if ( v8 )
        *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v38 + 10) = 0LL;
      *((_QWORD *)v38 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 4) = 0LL;
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( StorEtwLoggingEnabled )
  {
    v41 = 0LL;
    IoGetActivityIdIrp(a2, &v41);
    if ( (byte_1C0068842 & 0x10) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v28, &EventNonReadWriteRequestComplete, &v41, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
