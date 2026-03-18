/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x1406111D0
 * Callers:
 *     FsRtlOplockFsctrl @ 0x1406D6480 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x1406D8110 (FsRtlOplockFsctrlEx.c)
 *     FsRtlUpperOplockFsctrl @ 0x1408878B0 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     FsRtlCheckOplockEx @ 0x140256AF0 (FsRtlCheckOplockEx.c)
 *     FsRtlpRequestShareableOplock @ 0x14025A570 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x14025AE70 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     IoIsOperationSynchronous @ 0x1402EFB10 (IoIsOperationSynchronous.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402F569C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockDequeueRH @ 0x1402F5C84 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x1402F5CF4 (FsRtlpClearOwner.c)
 *     FsRtlpAttachOplockKey @ 0x1402FFEA8 (FsRtlpAttachOplockKey.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140308130 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140373290 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14038FC2C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     memset @ 0x140408F80 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EAA64 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAllocateOplock @ 0x1406D3758 (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x140887A4C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140887B88 (FsRtlpOplockBreakNotify.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v8; // edi
  PVOID v9; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v11; // edi
  ULONG LowPart; // eax
  struct _IRP *MasterIrp; // rdi
  int MdlAddress; // eax
  int v15; // edi
  int v16; // r8d
  int v17; // r12d
  int v18; // eax
  int v19; // eax
  int v20; // edx
  __int16 v21; // r8
  __int16 v22; // cx
  __int16 v23; // ax
  PVOID *v24; // rcx
  int v25; // eax
  ULONG Options; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PFAST_MUTEX *v30; // r15
  int v31; // eax
  int v32; // ecx
  int v34; // ecx
  int v35; // r8d
  int v36; // r13d
  int v37; // edx
  int v38; // r12d
  int v39; // ecx
  int v40; // ecx
  int v41; // eax
  __int16 v42; // r8
  __int16 v43; // dx
  __int16 v44; // cx
  int v45; // ecx
  PVOID *v46; // rdx
  unsigned int v47; // edi
  char v48; // r9
  __int64 v49; // rdi
  _QWORD *v50; // rbx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  int v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+44h] [rbp-54h]
  struct _IRP *v55; // [rsp+48h] [rbp-50h]
  char v56; // [rsp+48h] [rbp-50h]
  PVOID P[8]; // [rsp+58h] [rbp-40h] BYREF
  PVOID v58; // [rsp+A8h] [rbp+10h] BYREF
  int v59; // [rsp+B8h] [rbp+20h]

  v59 = a4;
  v8 = 0;
  v9 = 0LL;
  P[0] = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
  {
    v11 = 2;
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 590400 )
    {
      MasterIrp = Irp->AssociatedIrp.MasterIrp;
      v55 = MasterIrp;
      if ( CurrentStackLocation->Parameters.Create.Options < 0xC || CurrentStackLocation->Parameters.Read.Length < 0x18 )
      {
        v8 = -1073741789;
      }
      else
      {
        if ( MasterIrp->Type <= 1u )
        {
          MdlAddress = (int)MasterIrp->MdlAddress;
          if ( (MdlAddress & 1) != 0 )
          {
            v15 = *(_DWORD *)(&MasterIrp->Size + 1);
            LODWORD(v58) = v15 & 1;
            if ( (v15 & 1) != 0 )
              v16 = 4096;
            else
              v16 = 0;
            v17 = 0x2000;
            if ( (v15 & 2) != 0 )
              v18 = 0x2000;
            else
              v18 = 0;
            v19 = ((v15 & 4) != 0 ? 0x4000 : 0) | v16 | v18;
            if ( v19 == 12288 )
            {
LABEL_12:
              if ( !a3 && !IoIsOperationSynchronous(Irp) )
              {
                v20 = 0x4000;
                if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                {
                  if ( (_DWORD)v58 )
                    v21 = 4096;
                  else
                    v21 = 0;
                  if ( (v15 & 4) != 0 )
                    v22 = 0x4000;
                  else
                    v22 = 0;
                  if ( (v15 & 2) != 0 )
                    v23 = 0x2000;
                  else
                    v23 = 0;
                  if ( (((unsigned __int16)v21 | (unsigned __int16)(v22 | v23)) & 0x2000) != 0 )
                  {
                    P[0] = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                    memset(P[0], 0, 0x48uLL);
                    v15 = *(_DWORD *)(&v55->Size + 1);
                    v9 = P[0];
                    v20 = 0x4000;
                  }
                  if ( v9 )
                    v24 = P;
                  else
                    v24 = 0LL;
                  if ( (v15 & 1) != 0 )
                    v25 = 4096;
                  else
                    v25 = 0;
                  if ( (v15 & 4) == 0 )
                    v20 = 0;
                  if ( (v15 & 2) == 0 )
                    v17 = 0;
                  v8 = FsRtlpRequestShareableOplock(
                         Oplock,
                         (__int64)CurrentStackLocation,
                         (__int64)Irp,
                         v25 | v20 | (unsigned int)v17,
                         v24,
                         1,
                         0,
                         a5);
LABEL_37:
                  if ( P[0] )
                  {
                    FsRtlpClearOwner(*Oplock, (__int64)P[0]);
                    ExFreePoolWithTag(P[0], 0);
                  }
                  return v8;
                }
              }
              goto LABEL_102;
            }
            if ( v19 )
            {
              if ( v19 == 4096 )
                goto LABEL_12;
              if ( v19 != 28672 && v19 != 20480 )
              {
LABEL_124:
                v8 = -1073741811;
                Irp->IoStatus.Status = -1073741811;
                goto LABEL_149;
              }
              if ( IoIsOperationSynchronous(Irp)
                || (v31 = 0x4000, (CurrentStackLocation->FileObject->Flags & 0x4000) != 0) )
              {
LABEL_102:
                v8 = -1073741598;
                Irp->IoStatus.Status = -1073741598;
LABEL_149:
                IofCompleteRequest(Irp, 1);
                return v8;
              }
              if ( (_DWORD)v58 )
                v32 = 4160;
              else
                v32 = 64;
              if ( (v15 & 4) == 0 )
                v31 = 0;
              if ( (v15 & 2) == 0 )
                v17 = 0;
              return (unsigned int)FsRtlpRequestExclusiveOplock(
                                     Oplock,
                                     (__int64)CurrentStackLocation,
                                     (__int64)Irp,
                                     a3,
                                     v59,
                                     v32 | v31 | (unsigned int)v17,
                                     a5);
            }
            v49 = *Oplock;
            if ( *Oplock )
            {
              v58 = 0LL;
              if ( (*(_DWORD *)(v49 + 144) & 0x10000) != 0 )
              {
                if ( FsRtlpCallerIsAtomicRequestor(v49, (__int64)CurrentStackLocation->FileObject, &v58) )
                {
                  v50 = v58;
                  FsRtlpOplockDequeueRH((__int64)v58);
                  v51 = v50[7];
                  v52 = (_QWORD *)v50[8];
                  if ( *(_QWORD **)(v51 + 8) != v50 + 7 || (_QWORD *)*v52 != v50 + 7 )
                    __fastfail(3u);
                  *v52 = v51;
                  *(_QWORD *)(v51 + 8) = v52;
                  if ( *(_QWORD *)(v49 + 120) == v49 + 120 )
                    *(_DWORD *)(v49 + 144) &= 0xFFFCFFFF;
                  if ( v50[5] )
                    FsRtlpClearOwner(v49, (__int64)v50);
                  ExFreePoolWithTag(v50, 0);
                  FsRtlpComputeShareableOplockState(v49);
                  FsRtlpReleaseIrpsWaitingForRH(v49);
                }
              }
            }
LABEL_146:
            Irp->IoStatus.Status = 0;
            IofCompleteRequest(Irp, 1);
            return 0;
          }
          if ( (MdlAddress & 2) != 0 )
          {
            v34 = *(_DWORD *)(&MasterIrp->Size + 1);
            v56 = v34;
            LODWORD(v58) = v34 & 1;
            if ( (v34 & 1) != 0 )
              v35 = 4096;
            else
              v35 = 0;
            v54 = v34 & 4;
            v36 = 0x4000;
            if ( (v34 & 4) != 0 )
              v37 = 0x4000;
            else
              v37 = 0;
            v53 = v34 & 2;
            v38 = 0x2000;
            if ( (v34 & 2) != 0 )
              v39 = 0x2000;
            else
              v39 = 0;
            v40 = v35 | v37 | v39;
            if ( v40 && v40 != 4096 && v40 != 12288 && v40 != 20480 && v40 != 28672 || IoIsOperationSynchronous(Irp) )
              goto LABEL_124;
            if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
            {
              v41 = 4096;
              if ( (_DWORD)v58 )
                v42 = 4096;
              else
                v42 = 0;
              if ( v54 )
                v43 = 0x4000;
              else
                v43 = 0;
              if ( v53 )
                v44 = 0x2000;
              else
                v44 = 0;
              if ( (((unsigned __int16)v42 | (unsigned __int16)(v43 | v44)) & 0x2000) != 0 )
              {
                P[0] = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                memset(P[0], 0, 0x48uLL);
                v45 = *(_DWORD *)(&MasterIrp->Size + 1);
                v9 = P[0];
                v41 = 4096;
              }
              else
              {
                LOBYTE(v45) = v56;
              }
              if ( v9 )
                v46 = P;
              else
                v46 = 0LL;
              if ( (v45 & 1) == 0 )
                v41 = 0;
              if ( (v45 & 4) == 0 )
                v36 = 0;
              if ( (v45 & 2) == 0 )
                v38 = 0;
              v8 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                     *Oplock,
                     (__int64)CurrentStackLocation,
                     (__int64)Irp,
                     v41 | v36 | (unsigned int)v38,
                     v46,
                     a5);
              goto LABEL_37;
            }
            *(_OWORD *)&MasterIrp->Type = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            Irp->IoStatus.Information = 24LL;
            goto LABEL_146;
          }
        }
        v8 = -1073741811;
      }
      Irp->IoStatus.Status = v8;
      goto LABEL_149;
    }
    switch ( LowPart )
    {
      case 0x90000u:
        goto LABEL_97;
      case 0x90004u:
        if ( a3
          || IoIsOperationSynchronous(Irp)
          || (Irp->Flags & 0x40) != 0
          || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          goto LABEL_102;
        }
        return (unsigned int)FsRtlpRequestShareableOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               0x10u,
                               0LL,
                               1,
                               0,
                               a5);
      case 0x90008u:
        goto LABEL_96;
      case 0x9000Cu:
        v48 = 1;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v48, a5);
      case 0x90010u:
        return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, CurrentStackLocation, Irp);
      case 0x90014u:
        return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, 0x140000000uLL, Irp);
      case 0x90050u:
        v48 = 0;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v48, a5);
      case 0x9005Cu:
        v11 = 4;
LABEL_96:
        v11 *= 2;
LABEL_97:
        v47 = v11 | 0x40;
        if ( a3 != 1
          || IoIsOperationSynchronous(Irp)
          || (Irp->Flags & 0x40) != 0
          || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          goto LABEL_102;
        }
        v8 = FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 1u, 0, v47, a5);
        break;
      default:
        goto LABEL_124;
    }
  }
  else
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 )
    {
      if ( a3 != 1
        || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
        || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
      {
        return (unsigned int)-1073741598;
      }
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 1u, 0, 0xC8u, a5);
    }
    else if ( (Options & 0x10000) != 0 )
    {
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
      {
        v30 = (PFAST_MUTEX *)*Oplock;
        if ( !*Oplock )
        {
          v30 = (PFAST_MUTEX *)FsRtlpAllocateOplock(v29, v28);
          *Oplock = (__int64)v30;
        }
        v58 = v30;
        ExAcquireFastMutexUnsafe(v30[19]);
        v8 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v8 )
        {
          P[0] = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
          memset(P[0], 0, 0x48uLL);
          v8 = FsRtlpRequestShareableOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, P, 0, 0, a5);
        }
        if ( P[0] )
        {
          FsRtlpClearOwner((__int64)v30, (__int64)P[0]);
          ExFreePoolWithTag(P[0], 0);
        }
        ExReleaseFastMutexUnsafe(v30[19]);
      }
    }
  }
  return v8;
}
