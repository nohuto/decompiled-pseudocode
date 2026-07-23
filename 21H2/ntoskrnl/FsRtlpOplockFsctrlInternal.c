/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x1406D98D0
 * Callers:
 *     FsRtlOplockFsctrl @ 0x140607410 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x14060AAF0 (FsRtlOplockFsctrlEx.c)
 *     FsRtlUpperOplockFsctrl @ 0x14088BE20 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     IoIsOperationSynchronous @ 0x1402145D0 (IoIsOperationSynchronous.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14022BE58 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140238100 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402AAA80 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     FsRtlCheckOplockEx @ 0x140360AE0 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockDequeueRH @ 0x1403617F0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpAttachOplockKey @ 0x1403647CC (FsRtlpAttachOplockKey.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     memset @ 0x140414300 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F0444 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAllocateOplock @ 0x1406040A8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088BFBC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14088C0F8 (FsRtlpOplockBreakNotify.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  PFAST_MUTEX *v28; // r15
  int v29; // eax
  int v30; // ecx
  int v32; // ecx
  int v33; // r8d
  int v34; // r13d
  int v35; // edx
  int v36; // r12d
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  __int16 v40; // r8
  __int16 v41; // dx
  __int16 v42; // cx
  int v43; // ecx
  PVOID *v44; // rdx
  unsigned int v45; // edi
  char v46; // r9
  __int64 v47; // rdi
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  int v51; // [rsp+40h] [rbp-58h]
  int v52; // [rsp+44h] [rbp-54h]
  struct _IRP *v53; // [rsp+48h] [rbp-50h]
  char v54; // [rsp+48h] [rbp-50h]
  PVOID P[8]; // [rsp+58h] [rbp-40h] BYREF
  PVOID v56; // [rsp+A8h] [rbp+10h] BYREF
  int v57; // [rsp+B8h] [rbp+20h]

  v57 = a4;
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
      v53 = MasterIrp;
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
            LODWORD(v56) = v15 & 1;
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
                  if ( (_DWORD)v56 )
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
                    v15 = *(_DWORD *)(&v53->Size + 1);
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
                || (v29 = 0x4000, (CurrentStackLocation->FileObject->Flags & 0x4000) != 0) )
              {
LABEL_102:
                v8 = -1073741598;
                Irp->IoStatus.Status = -1073741598;
LABEL_149:
                IofCompleteRequest(Irp, 1);
                return v8;
              }
              if ( (_DWORD)v56 )
                v30 = 4160;
              else
                v30 = 64;
              if ( (v15 & 4) == 0 )
                v29 = 0;
              if ( (v15 & 2) == 0 )
                v17 = 0;
              return (unsigned int)FsRtlpRequestExclusiveOplock(
                                     Oplock,
                                     (__int64)CurrentStackLocation,
                                     (__int64)Irp,
                                     a3,
                                     v57,
                                     v30 | v29 | (unsigned int)v17,
                                     a5);
            }
            v47 = *Oplock;
            if ( *Oplock )
            {
              v56 = 0LL;
              if ( (*(_DWORD *)(v47 + 144) & 0x10000) != 0 )
              {
                if ( FsRtlpCallerIsAtomicRequestor(v47, (__int64)CurrentStackLocation->FileObject, &v56) )
                {
                  v48 = v56;
                  FsRtlpOplockDequeueRH((__int64)v56);
                  v49 = v48[7];
                  v50 = (_QWORD *)v48[8];
                  if ( *(_QWORD **)(v49 + 8) != v48 + 7 || (_QWORD *)*v50 != v48 + 7 )
                    __fastfail(3u);
                  *v50 = v49;
                  *(_QWORD *)(v49 + 8) = v50;
                  if ( *(_QWORD *)(v47 + 120) == v47 + 120 )
                    *(_DWORD *)(v47 + 144) &= 0xFFFCFFFF;
                  if ( v48[5] )
                    FsRtlpClearOwner(v47, (__int64)v48);
                  ExFreePoolWithTag(v48, 0);
                  FsRtlpComputeShareableOplockState(v47);
                  FsRtlpReleaseIrpsWaitingForRH(v47);
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
            v32 = *(_DWORD *)(&MasterIrp->Size + 1);
            v54 = v32;
            LODWORD(v56) = v32 & 1;
            if ( (v32 & 1) != 0 )
              v33 = 4096;
            else
              v33 = 0;
            v52 = v32 & 4;
            v34 = 0x4000;
            if ( (v32 & 4) != 0 )
              v35 = 0x4000;
            else
              v35 = 0;
            v51 = v32 & 2;
            v36 = 0x2000;
            if ( (v32 & 2) != 0 )
              v37 = 0x2000;
            else
              v37 = 0;
            v38 = v33 | v35 | v37;
            if ( v38 && v38 != 4096 && v38 != 12288 && v38 != 20480 && v38 != 28672 || IoIsOperationSynchronous(Irp) )
              goto LABEL_124;
            if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
            {
              v39 = 4096;
              if ( (_DWORD)v56 )
                v40 = 4096;
              else
                v40 = 0;
              if ( v52 )
                v41 = 0x4000;
              else
                v41 = 0;
              if ( v51 )
                v42 = 0x2000;
              else
                v42 = 0;
              if ( (((unsigned __int16)v40 | (unsigned __int16)(v41 | v42)) & 0x2000) != 0 )
              {
                P[0] = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                memset(P[0], 0, 0x48uLL);
                v43 = *(_DWORD *)(&MasterIrp->Size + 1);
                v9 = P[0];
                v39 = 4096;
              }
              else
              {
                LOBYTE(v43) = v54;
              }
              if ( v9 )
                v44 = P;
              else
                v44 = 0LL;
              if ( (v43 & 1) == 0 )
                v39 = 0;
              if ( (v43 & 4) == 0 )
                v34 = 0;
              if ( (v43 & 2) == 0 )
                v36 = 0;
              v8 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                     *Oplock,
                     (__int64)CurrentStackLocation,
                     (__int64)Irp,
                     v39 | v34 | (unsigned int)v36,
                     v44,
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
        v46 = 1;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v46, a5);
      case 0x90010u:
        return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, CurrentStackLocation, Irp);
      case 0x90014u:
        return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, 0x140000000uLL, Irp);
      case 0x90050u:
        v46 = 0;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v46, a5);
      case 0x9005Cu:
        v11 = 4;
LABEL_96:
        v11 *= 2;
LABEL_97:
        v45 = v11 | 0x40;
        if ( a3 != 1
          || IoIsOperationSynchronous(Irp)
          || (Irp->Flags & 0x40) != 0
          || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          goto LABEL_102;
        }
        v8 = FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 1u, 0, v45, a5);
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
        v28 = (PFAST_MUTEX *)*Oplock;
        if ( !*Oplock )
        {
          v28 = (PFAST_MUTEX *)FsRtlpAllocateOplock();
          *Oplock = (__int64)v28;
        }
        v56 = v28;
        ExAcquireFastMutexUnsafe(v28[19]);
        v8 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v8 )
        {
          P[0] = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
          memset(P[0], 0, 0x48uLL);
          v8 = FsRtlpRequestShareableOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, P, 0, 0, a5);
        }
        if ( P[0] )
        {
          FsRtlpClearOwner((__int64)v28, (__int64)P[0]);
          ExFreePoolWithTag(P[0], 0);
        }
        ExReleaseFastMutexUnsafe(v28[19]);
      }
    }
  }
  return v8;
}
