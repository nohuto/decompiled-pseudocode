/*
 * XREFs of ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0076330
 * Callers:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C00761DC (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     VidSchMarkDeviceAsError @ 0x1C00140D0 (VidSchMarkDeviceAsError.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0064CA0 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0064D04 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0066138 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0077844 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_DEVICE::UnreferenceAllocationList(
        VIDMM_DEVICE *this,
        __int64 ***a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  VIDMM_PROCESS_ADAPTER_INFO *v8; // rcx
  __int64 v9; // r8
  struct VIDMM_ALLOC **v10; // r14
  __int64 **v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+30h] [rbp-28h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)this + 2) + 360LL), 0);
  DXGPUSHLOCK::AcquireExclusive(v21);
  v8 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)this + 2);
  v22 = 2;
  VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v8);
  v10 = (struct VIDMM_ALLOC **)&a2[a3];
  while ( a2 != (__int64 ***)v10 )
  {
    v11 = *a2;
    v12 = ***a2;
    v13 = (*(_DWORD *)(v12 + 80) >> 5) & 1;
    if ( *((_DWORD *)*a2 + 38) == (_DWORD)v13 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12, v13, v9);
      *(_QWORD *)(v17 + 24) = v11;
      *(_QWORD *)(v17 + 32) = (*(_DWORD *)(**v11 + 80) >> 5) & 1;
      WdLogEvent5_WdAssertion(v17);
    }
    else
    {
      --*((_DWORD *)v11 + 38);
      v14 = *((int *)v11 + 39);
      if ( !*((_DWORD *)v11 + 38) )
      {
        if ( (_DWORD)v14 )
        {
          v18 = **v11;
          if ( !*(_BYTE *)(v18 + 88) )
          {
            v19 = WdLogNewEntry5_WdAssertion(v18, v13, v9);
            *(_QWORD *)(v19 + 24) = v14;
            WdLogEvent5_WdAssertion(v19);
            VidSchMarkDeviceAsError(v11[1][4]);
          }
        }
      }
      if ( !(*((_BYTE *)v11 + 25) & 1 | *((_DWORD *)v11 + 38)) )
        VIDMM_DEVICE::NotifyAllocationEvicted((VIDMM_DEVICE ***)this, (struct VIDMM_ALLOC *)v11);
    }
    ++a2;
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), a4, 0, 1);
  VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), v15, v16);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
}
