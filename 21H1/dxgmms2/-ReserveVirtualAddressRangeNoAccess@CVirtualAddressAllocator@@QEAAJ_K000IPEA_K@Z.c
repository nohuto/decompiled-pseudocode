/*
 * XREFs of ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0084234
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003E774 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0083EC0 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00959E0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00BB4D4 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00BB768 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00BB8D8 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0070C40 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00845C8 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  struct _RTL_AVL_TREE *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct VIDMM_VAD *v13; // rbx
  struct VIDMM_VAD *v14; // rdx
  __int64 v16; // rax
  _BYTE v17[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+60h] [rbp-18h]
  struct VIDMM_VAD *v20; // [rsp+90h] [rbp+18h] BYREF

  v20 = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v18);
  v19 = 2;
  if ( (int)CVirtualAddressAllocator::AllocateVirtualAddressRange(
              (unsigned __int64)this,
              v10,
              a2,
              0LL,
              a4,
              a5,
              a6,
              &v20,
              1u) < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v16);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 3221225473LL;
  }
  else
  {
    v13 = v20;
    v14 = v20;
    *((_DWORD *)v20 + 18) |= 0x800u;
    CVirtualAddressAllocator::InsertVadToReservedList((CVirtualAddressAllocator *)this, v14);
    *a7 = *((_QWORD *)v13 + 3);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 0LL;
  }
}
