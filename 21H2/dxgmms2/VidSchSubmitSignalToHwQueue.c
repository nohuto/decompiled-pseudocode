/*
 * XREFs of VidSchSubmitSignalToHwQueue @ 0x1C0042100
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0001008 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B800 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EC80 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001F79E (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiSignalSyncObject @ 0x1C003A630 (VidSchiSignalSyncObject.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00B8D3A (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitSignalToHwQueue(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        char **a4,
        int a5,
        unsigned __int64 *a6)
{
  char v6; // bl
  char *v7; // rax
  __int64 v9; // r15
  unsigned int v10; // edi
  __int64 v11; // r12
  int v12; // esi
  __int64 v13; // r12
  unsigned __int64 *v14; // rdi
  char *v15; // r13
  __int64 v16; // rcx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  char v19; // r9
  unsigned __int64 v20; // rcx
  struct _VIDSCH_QUEUE_PACKET **v22; // rsi
  unsigned int v23; // edi
  __int64 v24; // rax
  unsigned int v25; // r14d
  KSPIN_LOCK *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // r13
  _DWORD *HwQueuePacket; // rax
  __int64 v31; // rdx
  __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // rax
  unsigned int v35; // r14d
  __int64 v36; // rcx
  __int64 v37; // rax
  char **v38; // r12
  unsigned __int64 *v39; // r13
  char *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rbx
  struct _VIDSCH_QUEUE_PACKET **v43; // r12
  unsigned int v44; // edi
  unsigned int v45; // r14d
  unsigned int v46; // r14d
  struct _VIDSCH_QUEUE_PACKET **v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // [rsp+58h] [rbp-89h]
  __int64 v50; // [rsp+60h] [rbp-81h]
  _QWORD v51[2]; // [rsp+68h] [rbp-79h] BYREF
  char v52; // [rsp+78h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-61h] BYREF
  KSPIN_LOCK *v54; // [rsp+98h] [rbp-49h]
  __int64 Elements; // [rsp+A0h] [rbp-41h]
  PVOID P; // [rsp+A8h] [rbp-39h] BYREF
  char v57; // [rsp+B0h] [rbp-31h] BYREF
  int v58; // [rsp+C0h] [rbp-21h]
  _QWORD v59[4]; // [rsp+C8h] [rbp-19h] BYREF
  __int16 v60; // [rsp+E8h] [rbp+7h]
  __int64 v63; // [rsp+140h] [rbp+5Fh]
  unsigned int v65; // [rsp+158h] [rbp+77h]

  v6 = a5;
  v7 = *a4;
  v9 = a3;
  v10 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = *((_QWORD *)v7 + 1);
  v50 = v11;
  if ( (a5 & 0x80000004) != 0 )
    goto LABEL_27;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 1728), &LockHandle);
  v12 = 0;
  v13 = 0LL;
  if ( !(_DWORD)v9 )
    goto LABEL_24;
  v14 = a6;
  v15 = (char *)((char *)a4 - (char *)a6);
  while ( 1 )
  {
    v16 = *(_QWORD *)&v15[(_QWORD)v14];
    v17 = *(_DWORD *)(v16 + 48);
    if ( (unsigned int)(v17 - 4) > 1 || *(_BYTE *)(v16 + 28) )
      goto LABEL_18;
    v18 = *v14;
    v19 = *(_BYTE *)(v16 + 29);
    if ( *(_BYTE *)(v16 + 27) )
      v20 = *(_QWORD *)(*(_QWORD *)(v16 + 208) + 40LL);
    else
      v20 = v17 == 2 ? *(_QWORD *)(v16 + 64) : *(_QWORD *)(v16 + 88);
    if ( !v19 )
      break;
    if ( v18 < v20 )
    {
      WdLogSingleEntry2(3LL, v18, v20);
      goto LABEL_22;
    }
    if ( v18 == v20 )
      WdLogSingleEntry1(3LL, v18);
LABEL_18:
    v13 = (unsigned int)(v13 + 1);
    ++v14;
    if ( (unsigned int)v13 >= (unsigned int)v9 )
      goto LABEL_23;
  }
  if ( (int)v20 - (int)v18 <= 0 )
  {
    if ( (_DWORD)v20 == (_DWORD)v18 )
      WdLogSingleEntry1(3LL, (unsigned int)v18);
    goto LABEL_18;
  }
  WdLogSingleEntry2(3LL, (unsigned int)v18, (unsigned int)v20);
LABEL_22:
  v12 = -1073741811;
  WdLogSingleEntry2(2LL, a6[v13], -1073741811LL);
  ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
    a6[v13],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_23:
  v10 = a1;
LABEL_24:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 < 0 )
    return (unsigned int)v12;
  v11 = v50;
LABEL_27:
  P = 0LL;
  v58 = 0;
  Elements = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements((__int64 *)&P, v10);
  v22 = (struct _VIDSCH_QUEUE_PACKET **)Elements;
  v23 = -1073741801;
  if ( !Elements )
  {
    WdLogSingleEntry0(3LL);
    goto LABEL_76;
  }
  v65 = 0;
  v24 = 0LL;
  v25 = 0;
  v49 = 0LL;
  if ( !a1 )
  {
LABEL_47:
    if ( v24 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v50 + 1728), &LockHandle);
      v43 = v22;
      v44 = 0;
      v45 = v65;
      do
      {
        if ( *v43 )
        {
          v46 = 0;
          if ( (_DWORD)v9 )
          {
            if ( v44 == v65 )
            {
              do
                VidSchiSignalSyncObject(v46++, (__int64)a4, v6, (__int64)a6, 1);
              while ( v46 < (unsigned int)v9 );
            }
            else
            {
              do
                VidSchiSignalSyncObject(v46++, (__int64)a4, v6, (__int64)a6, 0);
              while ( v46 < (unsigned int)v9 );
            }
          }
          v45 = v65;
        }
        ++v44;
        ++v43;
      }
      while ( v44 <= v45 );
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v47 = (struct _VIDSCH_QUEUE_PACKET **)Elements;
      v48 = v45 + 1;
      do
      {
        if ( *v47 )
          VidSchiSubmitCommandPacketToHwQueue(*v47);
        ++v47;
        --v48;
      }
      while ( v48 );
    }
    else
    {
      v60 = 0;
      v59[0] = v50 + 1728;
      AcquireSpinLock::Acquire((Acquire *)v59);
      v52 = 0;
      v51[1] = v51;
      v35 = 0;
      v51[0] = v51;
      if ( (_DWORD)v9 )
      {
        v36 = (__int64)a4;
        v37 = (__int64)a6;
        v38 = a4;
        v39 = a6;
        do
        {
          v40 = *v38;
          VidSchiSignalSyncObject(v35, v36, v6, v37, 1);
          VidSchiCompleteSignalSyncObject((__int64)v51, (__int64)v40, (v6 & 4) != 0, v39, 1);
          VidSchiReleaseSyncObjectReference(v40, v41);
          v37 = (__int64)a6;
          ++v38;
          v36 = (__int64)a4;
          ++v35;
          ++v39;
        }
        while ( v35 < (unsigned int)v9 );
      }
      if ( *(_DWORD *)(v50 + 804) )
        VidSchUnwaitFlipQueue((__int64)v51, v50);
      if ( !v52 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v51);
      AcquireSpinLock::Release((AcquireSpinLock *)v59);
    }
    v23 = 0;
    goto LABEL_76;
  }
  v26 = (KSPIN_LOCK *)(v11 + 1728);
  v27 = a2 - Elements;
  v63 = a2 - Elements;
  v28 = Elements;
  v54 = (KSPIN_LOCK *)(v11 + 1728);
  while ( 2 )
  {
    v29 = *(_QWORD *)(v27 + v28);
    KeAcquireInStackQueuedSpinLock(v26, &LockHandle);
    if ( *(_QWORD *)(v29 + 160) == v29 + 160 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v24 = v49;
      goto LABEL_46;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    HwQueuePacket = (_DWORD *)VidSchiAllocateHwQueuePacket(v29, 0LL);
    *(_QWORD *)v28 = HwQueuePacket;
    if ( HwQueuePacket )
    {
      *HwQueuePacket = 895576406;
      v65 = v25;
      *(_DWORD *)(*(_QWORD *)v28 + 48LL) = 5;
      *(_QWORD *)(*(_QWORD *)v28 + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)v28 + 52LL) = 2;
      *(_QWORD *)(*(_QWORD *)v28 + 96LL) = v29;
      *(_QWORD *)(*(_QWORD *)v28 + 104LL) = KeGetCurrentThread();
      *(_QWORD *)(*(_QWORD *)v28 + 72LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)v28 + 272LL) ^= ((unsigned __int8)v6 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v28 + 272LL)) & 1;
      if ( (v6 & 4) != 0 )
        *(_DWORD *)(*(_QWORD *)v28 + 272LL) |= 4u;
      if ( (_DWORD)v9 )
      {
        v31 = 67LL;
        v32 = v9;
        do
        {
          v33 = *((_DWORD *)a4[v31 - 67] + 12);
          if ( v33 == 4 || v33 == 2 )
            *(_QWORD *)(v31 * 8 + *(_QWORD *)v28) = a6[v31 - 67];
          *(_QWORD *)(*(_QWORD *)v28 + v31 * 8 - 256) = a4[v31 - 67];
          ++v31;
          --v32;
        }
        while ( v32 );
      }
      *(_DWORD *)(*(_QWORD *)v28 + 276LL) = v9;
      *(_QWORD *)(*(_QWORD *)v28 + 792LL) = 0LL;
      v34 = *(_QWORD *)v28;
      if ( v49 )
      {
        *(_QWORD *)(v34 + 800) = v49;
        *(_QWORD *)(v49 + 792) = *(_QWORD *)v28;
      }
      else
      {
        *(_QWORD *)(v34 + 800) = 0LL;
      }
      v24 = *(_QWORD *)v28;
      v49 = *(_QWORD *)v28;
LABEL_46:
      v26 = v54;
      ++v25;
      v27 = v63;
      v28 += 8LL;
      if ( v25 >= a1 )
        goto LABEL_47;
      continue;
    }
    break;
  }
  v23 = -1073741801;
  WdLogSingleEntry2(3LL, -1073741801LL, 4560LL);
  if ( v25 )
  {
    v42 = v25;
    do
    {
      if ( *v22 )
        VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v29, *v22);
      ++v22;
      --v42;
    }
    while ( v42 );
  }
LABEL_76:
  if ( P != &v57 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v23;
}
