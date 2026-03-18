/*
 * XREFs of RawDispatch @ 0x140652280
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     FsRtlIsNtstatusExpected @ 0x140312560 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RawReadWriteDeviceControl @ 0x140652488 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140652544 (RawCreate.c)
 *     RawClose @ 0x1406526DC (RawClose.c)
 *     RawCleanup @ 0x14065275C (RawCleanup.c)
 *     RawQueryVolumeInformation @ 0x1406529EC (RawQueryVolumeInformation.c)
 *     RawFileSystemControl @ 0x140701AAC (RawFileSystemControl.c)
 *     RawQueryInformation @ 0x14090B0A4 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090B148 (RawSetInformation.c)
 */

__int64 __fastcall RawDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  unsigned int MajorFunction; // edx
  unsigned int VolumeInformation; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  UCHAR v16; // al
  unsigned int v17; // r14d
  unsigned int v18; // [rsp+30h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_WORD *)(a1 + 2) != 336
    || (v16 = CurrentStackLocation->MajorFunction, CurrentStackLocation->MajorFunction == 13)
    && CurrentStackLocation->MinorFunction == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = a1 + 336;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction > 9 )
    {
      v11 = MajorFunction - 10;
      if ( !v11 )
      {
        VolumeInformation = RawQueryVolumeInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_9;
      }
      v12 = v11 - 3;
      if ( !v12 )
      {
        VolumeInformation = RawFileSystemControl(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_9;
      }
      v13 = v12 - 1;
      if ( !v13 )
        goto LABEL_8;
      v14 = v13 - 4;
      if ( !v14 )
      {
        VolumeInformation = RawCleanup((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_9;
      }
      if ( v14 == 9 )
      {
        if ( CurrentStackLocation->MinorFunction == 1 )
        {
          v18 = -2147483631;
          a2->IoStatus.Status = -2147483631;
          IofCompleteRequest(a2, 1);
          goto LABEL_30;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
        if ( (*(_DWORD *)(v5 + 104) & 2) != 0 )
        {
          v18 = -1073741202;
          a2->IoStatus.Status = -1073741202;
          IofCompleteRequest(a2, 1);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
          goto LABEL_30;
        }
        ++*(_DWORD *)(v5 + 112);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
        goto LABEL_8;
      }
    }
    else
    {
      if ( MajorFunction == 9 )
      {
LABEL_8:
        VolumeInformation = RawReadWriteDeviceControl((PFSRTL_ADVANCED_FCB_HEADER)v5, a2);
LABEL_9:
        v18 = VolumeInformation;
LABEL_30:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
        return v18;
      }
      if ( !CurrentStackLocation->MajorFunction )
      {
        VolumeInformation = RawCreate((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_9;
      }
      if ( MajorFunction == 2 )
      {
        VolumeInformation = RawClose((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_9;
      }
      if ( MajorFunction > 2 )
      {
        if ( MajorFunction <= 4 )
          goto LABEL_8;
        if ( MajorFunction == 5 )
        {
          VolumeInformation = RawQueryInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_9;
        }
        if ( MajorFunction == 6 )
        {
          VolumeInformation = RawSetInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_9;
        }
      }
    }
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v16 & 0xED) != 0 || v16 == 16 )
    v17 = -1073741808;
  else
    v17 = 0;
  a2->IoStatus.Status = v17;
  IofCompleteRequest(a2, 1);
  return v17;
}
