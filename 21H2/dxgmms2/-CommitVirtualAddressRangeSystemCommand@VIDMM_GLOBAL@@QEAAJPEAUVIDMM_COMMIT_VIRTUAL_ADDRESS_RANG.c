/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0089730
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C009B124 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0002648 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C008A930 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v11; // rcx
  unsigned int v12; // eax
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 **v15; // rdx
  volatile signed __int32 *v16; // rcx
  __int64 v18; // r15
  __int64 v19; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v20; // rdi
  struct _MDL *FullMDL; // rax
  __int64 v22; // rdx
  struct _MDL *v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r9
  int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-50h]
  struct VIDMM_ALLOC **v29; // [rsp+38h] [rbp-40h]

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a2 + 56LL;
  if ( *(_QWORD *)a2 != -56LL && *(struct _KTHREAD **)(*(_QWORD *)a2 + 64LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(v27, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v26 = *(_DWORD *)(v6 + 24);
      if ( v26 != -1 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventBlockThread, v8, v26);
    }
    ExAcquirePushLockExclusiveEx(v6, 0LL);
  }
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  v9 = *((_QWORD *)a2 + 3);
  if ( !v9 || **(_QWORD **)(v9 + 16) && **((_QWORD **)a2 + 1) )
  {
    v10 = *((_QWORD *)a2 + 1);
    switch ( (int)(*(_DWORD *)(v10 + 64) << 28) >> 28 )
    {
      case 1:
        v11 = *(struct _VIDMM_GLOBAL_ALLOC ****)(v10 + 56);
        if ( (*((_DWORD *)v11 + 7) & 3) == 2 )
        {
          v18 = *(_QWORD *)(v10 + 72);
          v19 = *(_QWORD *)a2;
          v20 = **v11;
          if ( (*(_DWORD *)(*((_QWORD *)v20 + 15) + 80LL) & 0x1001) != 0 )
          {
            FullMDL = VidMmGetFullMDL(**v11, 0LL);
            v22 = *((_QWORD *)a2 + 1);
            v23 = FullMDL;
            v24 = 0;
          }
          else
          {
            v18 += *((_QWORD *)v20 + 16);
            v24 = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)v20 + 15));
            v23 = 0LL;
          }
          v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  v19,
                  v22,
                  *((_DWORD *)v20 + 17) & 0x3F,
                  v24,
                  v18,
                  v23,
                  1,
                  a3,
                  0LL);
        }
        else
        {
          v12 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *(CVirtualAddressAllocator **)a2,
                  (struct VIDMM_MAPPED_VA_RANGE *)v10,
                  a3,
                  1u);
        }
        goto LABEL_11;
      case 2:
        goto LABEL_26;
      case 6:
        v25 = 4294967294LL;
        v29 = a3;
        v28 = 0LL;
        goto LABEL_27;
      case 7:
LABEL_26:
        v25 = 0LL;
        v29 = a3;
        v28 = *((_QWORD *)a2 + 2);
LABEL_27:
        v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(*(_QWORD *)a2, v10, 0LL, v25, 0LL, v28, 1, v29, 0LL);
LABEL_11:
        v5 = v12;
        break;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
  if ( v5 == -1073741267 && *((_BYTE *)a2 + 32) )
    goto LABEL_48;
  v13 = (__int64 *)*((_QWORD *)a2 + 3);
  if ( v13 )
  {
    v14 = *v13;
    if ( *v13 )
    {
      if ( *(__int64 **)(v14 + 8) != v13 || (v15 = (__int64 **)v13[1], *v15 != v13) )
        __fastfail(3u);
      *v15 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
      v13[1] = 0LL;
    }
    v16 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
    if ( _InterlockedExchangeAdd(v16 + 32, 0xFFFFFFFF) == 1 && v16 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((VIDMM_MAPPED_VA_RANGE *)v16);
    operator delete(*((void **)a2 + 3));
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  if ( v5 == -1073741267 )
  {
LABEL_48:
    if ( !*((_BYTE *)a2 + 32) )
      v5 = -1073741823;
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
