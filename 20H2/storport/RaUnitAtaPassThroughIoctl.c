/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C0001190
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B1A8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C000161C (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C0001790 (RaUnitSetAtaPassThroughCdb.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001850 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x1C000BDD4 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C0010DE0 (RaSendIrpSynchronous.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     PortPassThroughBuildIrpEx @ 0x1C001F05C (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C001F394 (PortPassThroughFreeIrpEx.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C002A294 (McTemplateK0pd_EtwWriteTransfer.c)
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
  _IRP *v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  __int64 MdlAddress_low; // r8
  _IRP *v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // eax
  KPROCESSOR_MODE AccessMode; // al
  __int64 v23; // r8
  void *Pool; // rax
  char v25; // cl
  unsigned __int16 Size; // ax
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  char *v30; // rdx
  unsigned __int16 v31; // ax
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // r8
  _IRP *v35; // rcx
  _BYTE *v36; // rax
  __int64 v37; // rcx
  __int64 v39; // [rsp+40h] [rbp-49h]
  _IRP *v41; // [rsp+58h] [rbp-31h]
  __int128 v42; // [rsp+68h] [rbp-21h] BYREF
  __int128 v43; // [rsp+78h] [rbp-11h] BYREF
  __int128 v44; // [rsp+88h] [rbp-1h]
  __int128 v45; // [rsp+98h] [rbp+Fh]

  v41 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  *(_QWORD *)&v42 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v10 = *(_QWORD *)(v3 + 552);
  v43 = 0LL;
  v44 = 0LL;
  LODWORD(v3) = *(_DWORD *)(v10 + 184);
  v45 = 0LL;
  if ( (v3 & 2) == 0 )
  {
    Status = -1073741808;
    goto LABEL_46;
  }
  Status = RaUnitAtaPassThroughValidateInput(a1);
  if ( Status >= 0 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v13 = MasterIrp;
    if ( IoIs32bitProcess(a2) )
    {
      v15 = a2->AssociatedIrp.MasterIrp;
      MasterIrp = (_IRP *)&v43;
      v16 = *(_OWORD *)&v15->Type;
      *((_QWORD *)&v45 + 1) = v15->ThreadListEntry.Flink;
      v17 = *(_QWORD *)&v15->Flags;
      *(_QWORD *)&v45 = v15->AssociatedIrp.MasterIrp;
      *((_QWORD *)&v44 + 1) = *(&v15->Flags + 1);
      v43 = v16;
      *(_QWORD *)&v44 = v17;
    }
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    if ( (_DWORD)MdlAddress_low )
    {
      v19 = MasterIrp->AssociatedIrp.MasterIrp;
      v20 = *(_QWORD *)(a1 + 24);
      if ( !a3 )
        v19 = (_IRP *)((char *)v19 + (_QWORD)v13);
      v41 = v19;
      v14 = (MdlAddress_low + (unsigned __int64)((unsigned __int16)v19 & 0xFFF) + 4095) >> 12;
      if ( *(_BYTE *)(v20 + 4514) )
      {
        v21 = *(_DWORD *)(v20 + 740);
        if ( *(_DWORD *)(v20 + 356) < v21 )
          v21 = *(_DWORD *)(v20 + 356);
      }
      else
      {
        v21 = *(_DWORD *)(v20 + 356);
      }
      if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v20 + 352) || (unsigned int)v14 > v21 )
      {
        Status = -1073741811;
LABEL_17:
        v7 = 0LL;
        goto LABEL_46;
      }
    }
    else
    {
      LODWORD(v19) = 0;
    }
    if ( a3 )
      AccessMode = a2->RequestorMode;
    else
      AccessMode = 0;
    LODWORD(v39) = 0;
    LOBYTE(v14) = MasterIrp->Size & 2;
    v6 = (IRP *)PortPassThroughBuildIrpEx(
                  *(_QWORD *)(a1 + 8),
                  (int)v19,
                  MdlAddress_low,
                  v14,
                  AccessMode,
                  a2,
                  0,
                  0LL,
                  v39,
                  0LL);
    if ( !v6 )
    {
      Status = -1073741801;
      goto LABEL_17;
    }
    LOBYTE(v23) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 426LL);
    Srb = (_BYTE *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0LL, v23, 1LL);
    if ( Srb )
    {
      Pool = (void *)RaidAllocatePool(512LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8));
      v7 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0x4FuLL);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 426LL);
        Srb[3] = 0;
        if ( v25 == 1 )
        {
          *((_DWORD *)Srb + 5) = 0;
          Size = MasterIrp->Size;
          *(_QWORD *)&v42 = Srb;
          if ( (Size & 2) != 0 )
          {
            *((_DWORD *)Srb + 6) |= 0x40u;
            Size = MasterIrp->Size;
          }
          v27 = *((_DWORD *)Srb + 6);
          if ( (Size & 4) != 0 )
            v27 |= 0x80u;
          v28 = v27 | 0x100;
          *((_DWORD *)Srb + 6) = v28;
          if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
            *((_DWORD *)Srb + 6) = v28 | 0x80000;
          v29 = *((unsigned int *)Srb + 13);
          *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
          *((_QWORD *)Srb + 8) = v41;
          *((_QWORD *)Srb + 10) = v6;
          *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
          Srb[v29 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
          Srb[v29 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
          Srb[v29 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
          v8 = &Srb[*((unsigned int *)Srb + 30)];
          *(_DWORD *)v8 = 64;
          v30 = v8 + 24;
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
          v31 = MasterIrp->Size;
          if ( (v31 & 2) != 0 )
          {
            *((_DWORD *)Srb + 3) |= 0x40u;
            v31 = MasterIrp->Size;
          }
          v32 = *((_DWORD *)Srb + 3);
          if ( (v31 & 4) != 0 )
            v32 |= 0x80u;
          v33 = v32 | 0x100;
          *((_DWORD *)Srb + 3) = v33;
          if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
            *((_DWORD *)Srb + 3) = v33 | 0x80000;
          v30 = Srb + 72;
          *((_DWORD *)Srb + 4) = MasterIrp->MdlAddress;
          *((_QWORD *)Srb + 3) = v41;
          Srb[11] = 79;
          *((_QWORD *)Srb + 4) = v7;
          *((_QWORD *)Srb + 6) = v6;
          *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
        }
        RaUnitSetAtaPassThroughCdb(MasterIrp, v30);
        v6->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
        RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v6);
        LOBYTE(v34) = a3;
        RaUnitAtaPassThroughMarshalResults(Srb, MasterIrp, v34, &a2->IoStatus);
        if ( IoIs32bitProcess(a2) )
        {
          v35 = a2->AssociatedIrp.MasterIrp;
          *(_OWORD *)&v35->Type = *(_OWORD *)&MasterIrp->Type;
          *(_QWORD *)&v35->Flags = *(_QWORD *)&MasterIrp->Flags;
          v35->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
          v35->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
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
  }
LABEL_46:
  if ( v6 )
    PortPassThroughFreeIrpEx(v6);
  if ( Srb )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4E536152u);
    if ( Srb[2] == 40 )
    {
      v36 = Srb;
      if ( (_QWORD)v42 )
        v36 = (_BYTE *)v42;
      if ( v8 )
        *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v36 + 10) = 0LL;
      *((_QWORD *)v36 + 13) = 0LL;
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
    v42 = 0LL;
    IoGetActivityIdIrp(a2, &v42);
    if ( (byte_1C0069842 & 0x10) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v37, &EventNonReadWriteRequestComplete, &v42, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
