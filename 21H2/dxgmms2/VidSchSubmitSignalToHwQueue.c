/*
 * XREFs of VidSchSubmitSignalToHwQueue @ 0x1C003A3A0
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4F68 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C00086B0 (VidSchiSignalSyncObject.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000AFF0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000C9A8 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000CB40 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D800 (VidSchUnwaitFlipQueue.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011F60 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00129FC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0032B4C (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037A90 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C0B4 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D367C (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitSignalToHwQueue(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned __int64 *a6)
{
  char v7; // bl
  unsigned int v8; // esi
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdx
  unsigned __int64 *v12; // r12
  int v13; // r14d
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct _VIDSCH_QUEUE_PACKET **v24; // rsi
  unsigned int v25; // edi
  struct _VIDSCH_QUEUE_PACKET *v26; // rax
  unsigned int v27; // r14d
  KSPIN_LOCK *v28; // rcx
  __int64 v29; // rdx
  struct _VIDSCH_QUEUE_PACKET **v30; // rdi
  __int64 v31; // r13
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  int v37; // ecx
  struct _VIDSCH_QUEUE_PACKET *v38; // rax
  unsigned int v39; // r14d
  __int64 v40; // rcx
  __int64 v41; // rax
  char **v42; // r12
  unsigned __int64 *v43; // r13
  char *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rbx
  struct _VIDSCH_QUEUE_PACKET **v47; // r12
  unsigned int v48; // edi
  unsigned int v49; // r14d
  unsigned int v50; // r14d
  struct _VIDSCH_QUEUE_PACKET **v51; // rsi
  __int64 v52; // rbx
  __int64 i; // [rsp+38h] [rbp-89h]
  struct _VIDSCH_QUEUE_PACKET *v54; // [rsp+38h] [rbp-89h]
  __int64 v55; // [rsp+40h] [rbp-81h]
  _QWORD v56[2]; // [rsp+48h] [rbp-79h] BYREF
  char v57; // [rsp+58h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-61h] BYREF
  KSPIN_LOCK *v59; // [rsp+78h] [rbp-49h]
  struct _VIDSCH_QUEUE_PACKET **v60; // [rsp+80h] [rbp-41h]
  PVOID P; // [rsp+88h] [rbp-39h] BYREF
  char v62; // [rsp+90h] [rbp-31h] BYREF
  int v63; // [rsp+A0h] [rbp-21h]
  _QWORD v64[4]; // [rsp+A8h] [rbp-19h] BYREF
  __int16 v65; // [rsp+C8h] [rbp+7h]
  __int64 v68; // [rsp+120h] [rbp+5Fh]
  unsigned int v70; // [rsp+138h] [rbp+77h]

  v7 = a5;
  v8 = a1;
  v9 = a3;
  v10 = *(_QWORD *)(*(_QWORD *)a4 + 8LL);
  v55 = v10;
  if ( (a5 & 0x80000004) != 0 )
  {
    v12 = a6;
    goto LABEL_30;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 1712), &LockHandle);
  v12 = a6;
  v13 = 0;
  v14 = 0LL;
  if ( !(_DWORD)v9 )
    goto LABEL_26;
  v15 = a4 - (_QWORD)a6;
  for ( i = a4 - (_QWORD)a6; ; v15 = i )
  {
    v16 = *(unsigned __int64 *)((char *)v12 + v15);
    v17 = *(unsigned int *)(v16 + 44);
    if ( (unsigned int)(v17 - 4) <= 1 && !*(_BYTE *)(v16 + 28) )
    {
      v18 = *v12;
      LOBYTE(v11) = *(_BYTE *)(v16 + 29);
      if ( *(_BYTE *)(v16 + 27) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v16 + 208) + 40LL);
      }
      else if ( (_DWORD)v17 == 2 )
      {
        v19 = *(_QWORD *)(v16 + 64);
      }
      else
      {
        v19 = *(_QWORD *)(v16 + 88);
      }
      if ( (_BYTE)v11 )
      {
        if ( v18 >= v19 )
        {
          if ( v18 != v19 )
            goto LABEL_19;
          v20 = WdLogNewEntry5_WdWarning(v17, v11);
          *(_QWORD *)(v20 + 24) = v18;
LABEL_18:
          WdLogEvent5_WdWarning(v20);
          goto LABEL_19;
        }
        v21 = WdLogNewEntry5_WdWarning(v17, v11);
        *(_QWORD *)(v21 + 24) = v18;
        *(_QWORD *)(v21 + 32) = v19;
      }
      else
      {
        if ( (int)v19 - (int)v18 <= 0 )
        {
          if ( (_DWORD)v19 != (_DWORD)v18 )
            goto LABEL_19;
          v20 = WdLogNewEntry5_WdWarning(v17, v11);
          *(_QWORD *)(v20 + 24) = (unsigned int)v18;
          goto LABEL_18;
        }
        v21 = WdLogNewEntry5_WdWarning(v17, v11);
        *(_QWORD *)(v21 + 24) = (unsigned int)v18;
        *(_QWORD *)(v21 + 32) = (unsigned int)v19;
      }
      WdLogEvent5_WdWarning(v21);
      v13 = -1073741811;
      v22 = WdLogNewEntry5_WdError();
      v12 = a6;
      *(_QWORD *)(v22 + 24) = a6[v14];
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v22);
      goto LABEL_25;
    }
LABEL_19:
    v14 = (unsigned int)(v14 + 1);
    ++v12;
    if ( (unsigned int)v14 >= (unsigned int)v9 )
      break;
  }
  v12 = a6;
LABEL_25:
  v8 = a1;
LABEL_26:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v13 < 0 )
    return (unsigned int)v13;
  v10 = v55;
LABEL_30:
  P = 0LL;
  v63 = 0;
  v60 = (struct _VIDSCH_QUEUE_PACKET **)NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements(
                                          &P,
                                          v8);
  v24 = v60;
  v25 = -1073741801;
  if ( !v60 )
    goto LABEL_78;
  v70 = 0;
  v26 = 0LL;
  v27 = 0;
  v54 = 0LL;
  if ( !a1 )
  {
LABEL_49:
    if ( v26 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v55 + 1712), &LockHandle);
      v47 = v24;
      v48 = 0;
      v49 = v70;
      do
      {
        if ( *v47 )
        {
          v50 = 0;
          if ( (_DWORD)v9 )
          {
            if ( v48 == v70 )
            {
              do
                VidSchiSignalSyncObject(v50++, a4, v7, (__int64)a6, 1);
              while ( v50 < (unsigned int)v9 );
            }
            else
            {
              do
                VidSchiSignalSyncObject(v50++, a4, v7, (__int64)a6, 0);
              while ( v50 < (unsigned int)v9 );
            }
          }
          v49 = v70;
        }
        ++v48;
        ++v47;
      }
      while ( v48 <= v49 );
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v51 = v60;
      v52 = v49 + 1;
      do
      {
        if ( *v51 )
          VidSchiSubmitCommandPacketToHwQueue(*v51);
        ++v51;
        --v52;
      }
      while ( v52 );
    }
    else
    {
      v65 = 0;
      v64[0] = v55 + 1712;
      AcquireSpinLock::Acquire((Acquire *)v64);
      v57 = 0;
      v56[1] = v56;
      v39 = 0;
      v56[0] = v56;
      if ( (_DWORD)v9 )
      {
        v40 = a4;
        v41 = (__int64)a6;
        v42 = (char **)a4;
        v43 = a6;
        do
        {
          v44 = *v42;
          VidSchiSignalSyncObject(v39, v40, v7, v41, 1);
          VidSchiCompleteSignalSyncObject((__int64)v56, (__int64)v44, (v7 & 4) != 0, v43, 1);
          VidSchiReleaseSyncObjectReference(v44);
          v41 = (__int64)a6;
          ++v42;
          v40 = a4;
          ++v39;
          ++v43;
        }
        while ( v39 < (unsigned int)v9 );
      }
      if ( *(_DWORD *)(v55 + 796) )
        VidSchUnwaitFlipQueue((__int64)v56, v55);
      if ( !v57 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v56);
      AcquireSpinLock::Release((AcquireSpinLock *)v64);
    }
    v25 = 0;
    goto LABEL_78;
  }
  v28 = (KSPIN_LOCK *)(v10 + 1712);
  v29 = a2 - (_QWORD)v60;
  v59 = (KSPIN_LOCK *)(v10 + 1712);
  v68 = a2 - (_QWORD)v60;
  v30 = v60;
  while ( 2 )
  {
    v31 = *(__int64 *)((char *)v30 + v29);
    KeAcquireInStackQueuedSpinLock(v28, &LockHandle);
    if ( *(_QWORD *)(v31 + 160) == v31 + 160 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v26 = v54;
      goto LABEL_48;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v31, 0LL);
    *v30 = HwQueuePacket;
    if ( HwQueuePacket )
    {
      *(_DWORD *)HwQueuePacket = 895576406;
      v70 = v27;
      *((_DWORD *)*v30 + 12) = 5;
      *((_QWORD *)*v30 + 7) = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)*v30 + 13) = 2;
      *((_QWORD *)*v30 + 12) = v31;
      *((_QWORD *)*v30 + 13) = KeGetCurrentThread();
      *((_QWORD *)*v30 + 9) = 0LL;
      *((_DWORD *)*v30 + 68) ^= ((unsigned __int8)v7 ^ (unsigned __int8)*((_DWORD *)*v30 + 68)) & 1;
      if ( (v7 & 4) != 0 )
        *((_DWORD *)*v30 + 68) |= 4u;
      if ( (_DWORD)v9 )
      {
        v35 = 536LL;
        v36 = v9;
        do
        {
          v37 = *(_DWORD *)(*(_QWORD *)(a4 + v35 - 536) + 44LL);
          if ( v37 == 4 || v37 == 2 )
            *(_QWORD *)((char *)*v30 + v35) = v12[(unsigned __int64)v35 / 8 - 67];
          *(_QWORD *)((char *)*v30 + v35 - 256) = *(_QWORD *)(a4 + v35 - 536);
          v35 += 8LL;
          --v36;
        }
        while ( v36 );
      }
      *((_DWORD *)*v30 + 69) = v9;
      *((_QWORD *)*v30 + 99) = 0LL;
      v38 = *v30;
      if ( v54 )
      {
        *((_QWORD *)v38 + 100) = v54;
        *((_QWORD *)v54 + 99) = *v30;
      }
      else
      {
        *((_QWORD *)v38 + 100) = 0LL;
      }
      v26 = *v30;
      v54 = *v30;
LABEL_48:
      v28 = v59;
      ++v27;
      v29 = v68;
      ++v30;
      if ( v27 >= a1 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  v45 = WdLogNewEntry5_WdWarning(v34, v33);
  v25 = -1073741801;
  *(_QWORD *)(v45 + 24) = -1073741801LL;
  *(_QWORD *)(v45 + 32) = 4357LL;
  WdLogEvent5_WdWarning(v45);
  if ( v27 )
  {
    v46 = v27;
    do
    {
      if ( *v24 )
        VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v31, *v24);
      ++v24;
      --v46;
    }
    while ( v46 );
  }
LABEL_78:
  if ( P != &v62 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v25;
}
