/*
 * XREFs of ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0086E20
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0086C50 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C00871BC (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C00871F4 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00872F4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0087388 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        bool a4,
        unsigned __int64 *a5)
{
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edx
  struct VIDMM_GLOBAL **v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rcx
  struct VIDMM_ALLOC **v16; // r14
  struct VIDMM_ALLOC **v17; // r10
  __int64 **v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 *v24; // r15
  unsigned int v25; // r12d
  unsigned __int64 *v26; // rdx
  struct VIDMM_GLOBAL *i; // r8
  VIDMM_PROCESS_BUDGET_STATE *v28; // rcx
  struct VIDMM_ALLOC **v29; // rcx
  __int64 v30; // rax
  struct VIDMM_ALLOC *v31; // r9
  struct VIDMM_ALLOC **v32; // rdx
  VIDMM_DEVICE *v33; // rax
  VIDMM_DEVICE **v34; // rcx
  VIDMM_DEVICE **v35; // rdx
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // rcx
  _QWORD *v39; // r8
  unsigned int j; // ecx
  __int64 v41; // rax
  _QWORD *v42; // rdx
  unsigned int v43; // ebx
  int v45; // r9d
  __int64 v46; // rcx

  v9 = *((_QWORD *)this + 2) + 360LL;
  if ( *((_QWORD *)this + 2) != -360LL && *(struct _KTHREAD **)(*((_QWORD *)this + 2) + 368LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(v46, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v45 = *(_DWORD *)(v9 + 24);
      if ( v45 != -1 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventBlockThread, v11, v45);
    }
    ExAcquirePushLockExclusiveEx(v9, 0LL);
  }
  v12 = 0;
  *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
  v13 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  if ( *((_DWORD *)*v13 + 1754) )
  {
    do
    {
      v14 = v12++;
      v15 = (_QWORD *)((char *)v13[6] + 296 * v14);
      v15[13] = v15[9];
      v15[14] = v15[10];
      v15[15] = v15[11];
      v15[16] = v15[12];
    }
    while ( v12 < *((_DWORD *)*v13 + 1754) );
    v13 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  }
  v16 = &a2[a3];
  v17 = a2;
  if ( a2 != v16 )
  {
    do
    {
      if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(*v17)
        && !(*((_BYTE *)v18 + 25) & 1 | *((_DWORD *)v18 + 38))
        && !*((_BYTE *)v18 + 27) )
      {
        v21 = **v18;
        if ( (*((_BYTE *)v18 + 36) & 1) != 0 && (*(_DWORD *)(v21 + 68) & 0x1E0000) == 0x40000 )
          v22 = 0LL;
        else
          v22 = (*(_DWORD *)(v21 + 68) >> 17) & 0xF;
        v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (*(_DWORD *)(v20 + 68) & 0x3F) + 8 * v22;
        *(_QWORD *)(v23 + 104) += *(_QWORD *)(v20 + 16);
        *((_BYTE *)v18 + 27) = 1;
      }
      v17 = (struct VIDMM_ALLOC **)(v19 + 8);
    }
    while ( v17 != v16 );
    v13 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  }
  v24 = a5;
  v25 = 0;
  v26 = 0LL;
  *a5 = 0LL;
  for ( i = *v13; v25 < *((_DWORD *)*v13 + 1754); i = *v13 )
  {
    v28 = (struct VIDMM_GLOBAL *)((char *)v13[6] + 296 * v25);
    a5 = 0LL;
    VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(v28, (unsigned __int64 *)&a5, a4, 0, i, v25);
    v26 = a5;
    if ( *v24 > (unsigned __int64)a5 )
      v26 = (unsigned __int64 *)*v24;
    ++v25;
    *v24 = (unsigned __int64)v26;
  }
  v29 = a2;
  if ( a2 != v16 )
  {
    do
    {
      v30 = (__int64)*v29++;
      *(_BYTE *)(v30 + 27) = 0;
    }
    while ( v29 != v16 );
    v26 = (unsigned __int64 *)*v24;
  }
  if ( v26 )
  {
    v43 = -1073741801;
  }
  else
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    for ( ; a2 != v16; ++*((_DWORD *)v31 + 38) )
    {
      v31 = *a2;
      if ( !(*((_BYTE *)*a2 + 25) & 1 | *((_DWORD *)*a2 + 38)) )
      {
        v32 = (struct VIDMM_ALLOC **)*((_QWORD *)v31 + 14);
        v33 = (struct VIDMM_ALLOC *)((char *)v31 + 112);
        if ( v32[1] != (struct VIDMM_ALLOC *)((char *)v31 + 112)
          || (v34 = (VIDMM_DEVICE **)*((_QWORD *)v31 + 15), *v34 != v33)
          || (*v34 = (VIDMM_DEVICE *)v32,
              v32[1] = (struct VIDMM_ALLOC *)v34,
              v35 = (VIDMM_DEVICE **)*((_QWORD *)this + 21),
              *v35 != (VIDMM_DEVICE *)((char *)this + 160)) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v33 = (char *)this + 160;
        *((_QWORD *)v31 + 15) = v35;
        *v35 = v33;
        *((_QWORD *)this + 21) = v33;
        if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v31) )
        {
          v38 = (*(_DWORD *)(v36 + 68) >> 13) & 0xF;
          *(_QWORD *)(v37 + 8 * v38 + 136) += *(_QWORD *)(v36 + 16);
        }
      }
      ++a2;
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    v39 = (_QWORD *)*((_QWORD *)this + 2);
    for ( j = 0; j < *(_DWORD *)(*v39 + 7016LL); v42[12] = v42[16] )
    {
      v41 = j++;
      v42 = (_QWORD *)(v39[6] + 296 * v41);
      v42[9] = v42[13];
      v42[10] = v42[14];
      v42[11] = v42[15];
    }
    v43 = 0;
  }
  *(_QWORD *)(v9 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  return v43;
}
