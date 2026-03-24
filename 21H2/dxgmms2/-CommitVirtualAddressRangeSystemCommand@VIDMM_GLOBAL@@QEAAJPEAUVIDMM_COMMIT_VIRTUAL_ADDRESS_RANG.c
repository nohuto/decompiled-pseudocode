/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0073444
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0067880 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006BD00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1C005D098 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 *     ?ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z @ 0x1C0060584 (-ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0070480 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087208 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00898C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  int v5; // edi
  bool v6; // zf
  struct _KTHREAD **v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  struct _VIDMM_GLOBAL_ALLOC ***v15; // rcx
  unsigned __int64 v16; // r14
  struct _VIDMM_GLOBAL_ALLOC *v17; // rdi
  int v18; // ebp
  __int64 v19; // r9
  struct _MDL *FullMDL; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 **v25; // rdx
  VIDMM_GLOBAL *v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  char v30[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v31; // [rsp+58h] [rbp-30h]
  int v32; // [rsp+60h] [rbp-28h]

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a2 == -56LL;
  v7 = (struct _KTHREAD **)(*(_QWORD *)a2 + 56LL);
  v31 = (DXGPUSHLOCK *)v7;
  if ( !v6 && v7[1] == KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, a2, a3);
    *(_QWORD *)(v8 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGPUSHLOCK::AcquireExclusive(v31);
  v11 = *((_QWORD *)a2 + 3);
  v32 = 2;
  if ( v11 && (!**(_QWORD **)(v11 + 16) || !**((_QWORD **)a2 + 1)) )
  {
    v12 = WdLogNewEntry5_WdWarning(v10, v9);
    WdLogEvent5_WdWarning(v12);
    goto LABEL_30;
  }
  v13 = *((_QWORD *)a2 + 1);
  switch ( (int)(*(_DWORD *)(v13 + 64) << 28) >> 28 )
  {
    case 1:
      v15 = *(struct _VIDMM_GLOBAL_ALLOC ****)(v13 + 56);
      if ( (*((_DWORD *)v15 + 7) & 3) == 2 )
      {
        v16 = *(_QWORD *)(v13 + 72);
        v17 = **v15;
        v18 = *(_DWORD *)(*((_QWORD *)v17 + 16) + 80LL) & 0x1001;
        if ( v18 )
        {
          FullMDL = VidMmGetFullMDL(**v15, 0LL);
          v13 = *((_QWORD *)a2 + 1);
          v19 = (__int64)FullMDL;
        }
        else
        {
          v16 += *((_QWORD *)v17 + 17);
          v19 = 0LL;
        }
        if ( v18 )
          v21 = 0;
        else
          v21 = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)v17 + 16));
        v22 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                *(_QWORD *)a2,
                v13,
                *((_DWORD *)v17 + 19) & 0x3F,
                v21,
                v16,
                v19,
                1,
                a3,
                0LL);
      }
      else
      {
        v22 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                *(CVirtualAddressAllocator **)a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v13,
                a3,
                1);
      }
      v5 = v22;
      if ( v22 >= 0 )
        Feature_3895685435__private_IsEnabledDeviceUsage();
      break;
    case 2:
      goto LABEL_12;
    case 6:
      v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(*(_QWORD *)a2, v13, 0LL, -2, 0LL, 0LL, 1, a3, 0LL);
      goto LABEL_13;
    case 7:
LABEL_12:
      v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(_QWORD *)a2,
              v13,
              0LL,
              0,
              0LL,
              *((_QWORD *)a2 + 2),
              1,
              a3,
              0LL);
LABEL_13:
      v5 = v14;
      break;
  }
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    if ( v5 >= 0 )
    {
      v23 = *((_QWORD *)a2 + 1);
      v24 = *(_DWORD *)(v23 + 64);
      if ( (v24 & 0x2000) != 0 )
        v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               *(CVirtualAddressAllocator **)a2,
               *(struct VIDMM_VAD **)v23,
               (v24 >> 4) & 0x3F,
               0LL,
               *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 1));
    }
  }
LABEL_30:
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    if ( v5 == -1073741267 )
    {
      if ( *((_BYTE *)a2 + 32) )
        goto LABEL_49;
      v5 = -1073741823;
    }
    if ( v5 < 0 )
    {
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1), (unsigned int)v25);
      CVirtualAddressAllocator::ResetAddressSpaceForFailure(*(CVirtualAddressAllocator **)a2);
    }
    VIDMM_GLOBAL::CleanupVadReference(v26, a2);
  }
  else
  {
    if ( *((_BYTE *)a2 + 32) && v5 == -1073741267 )
      goto LABEL_52;
    v27 = (__int64 *)*((_QWORD *)a2 + 3);
    if ( v27 )
    {
      v28 = *v27;
      if ( *v27 )
      {
        if ( *(__int64 **)(v28 + 8) != v27 || (v25 = (__int64 **)v27[1], *v25 != v27) )
          __fastfail(3u);
        *v25 = (__int64 *)v28;
        *(_QWORD *)(v28 + 8) = v25;
        *v27 = 0LL;
        v27[1] = 0LL;
      }
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1), (unsigned int)v25);
      operator delete(*((void **)a2 + 3));
      *((_QWORD *)a2 + 3) = 0LL;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
    }
    if ( v5 == -1073741267 )
    {
LABEL_52:
      if ( !*((_BYTE *)a2 + 32) )
        v5 = -1073741823;
    }
  }
LABEL_49:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return (unsigned int)v5;
}
