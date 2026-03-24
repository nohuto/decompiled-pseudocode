/*
 * XREFs of ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0062E98
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0062E04 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001B28 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001B5C (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012BE8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage @ 0x1C0017A40 (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage.c)
 *     CleanupVaRangeReference @ 0x1C005D008 (CleanupVaRangeReference.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0070480 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087208 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3)
{
  struct _LIST_ENTRY *v3; // rsi
  __int64 v5; // rax
  __int64 v7; // rbx
  VIDMM_GLOBAL *v8; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v9; // rdx
  CVirtualAddressAllocator *v10; // rcx
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rdi
  _QWORD *v14; // rdx
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  struct VIDMM_ALLOC *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = this;
  v3 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 7);
  if ( v3 )
  {
    if ( !v3[1].Flink->Flink )
    {
      v5 = WdLogNewEntry5_WdAssertion(this, a2, a3);
      *(_QWORD *)(v5 + 24) = 21859LL;
      WdLogEvent5_WdAssertion(v5);
      return 0LL;
    }
    v7 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 56));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, v3);
    *(_QWORD *)(v7 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 56, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 7));
  }
  v9 = (struct VIDMM_MAPPED_VA_RANGE *)*((_QWORD *)a2 + 6);
  v10 = (CVirtualAddressAllocator *)*((_QWORD *)a2 + 5);
  v16 = 0LL;
  v11 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v10, v9, &v16, 1u);
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    v12 = *((_QWORD *)a2 + 6);
    if ( (*(_DWORD *)(v12 + 64) & 0x2000) != 0 )
    {
      v13 = *((_QWORD *)a2 + 5);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v15,
        (struct DXGPUSHLOCK *const)(v13 + 56));
      if ( v11 >= 0 )
      {
        v11 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                (CVirtualAddressAllocator *)v13,
                *(struct VIDMM_VAD **)v12,
                (*(_DWORD *)(v12 + 64) >> 4) & 0x3F,
                0LL,
                (struct VIDMM_MAPPED_VA_RANGE *)v12);
        if ( (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage() )
        {
          if ( v11 < 0 )
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v12, (unsigned int)v14);
        }
      }
      CleanupVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v12, v14);
      DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15);
    }
  }
  return (unsigned int)v11;
}
