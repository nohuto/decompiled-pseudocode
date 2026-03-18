/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C02CFE0C
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1C02D3654 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C004A3C4 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C004A49C (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C004A57C (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C004A654 (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct _KTHREAD **a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rax
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rdx
  unsigned int ProcessNodeStatistics; // eax
  __int64 v14; // rax
  struct _KTHREAD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _KTHREAD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *v21; // r14
  __int64 v22; // rax
  struct _KTHREAD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *v26; // r14

  v4 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 5567LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pQueryStatistics", 5567LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 || !*((_QWORD *)a2 + 350) )
  {
    WdLogSingleEntry1(1LL, 5568LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter && pAdapter->IsRenderAdapter()",
      5568LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 5570LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 5570LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3[16] != KeGetCurrentThread()
    && a3 != (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, (__int64)a3, a4) )
  {
    WdLogSingleEntry1(1LL, 5571LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsMutexOwner() || pProcess == DXGPROCESS::GetCurrent()",
      5571LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *(int *)a1;
  if ( *(_DWORD *)a1 == 1 )
  {
    v22 = *((_QWORD *)a2 + 350);
    v23 = a3[8];
    v24 = *(_QWORD *)(v22 + 648);
    if ( v23 )
      v25 = *((_QWORD *)v23 + (unsigned int)(*(_DWORD *)v24 - 1));
    else
      v25 = 0LL;
    v26 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v24 + 8) + 312LL))(
           *(_QWORD *)(v22 + 656),
           v25,
           (char *)a1 + 24);
    if ( v9 >= 0 )
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 350) + 624LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 350) + 632LL),
                             (struct DXGPROCESS *)a3,
                             v26);
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
    {
      switch ( *(_DWORD *)a1 )
      {
        case 4:
          v14 = *((_QWORD *)a2 + 350);
          v15 = a3[8];
          v16 = *(_QWORD *)(v14 + 648);
          if ( v15 )
            v4 = *((_QWORD *)v15 + (unsigned int)(*(_DWORD *)v16 - 1));
          ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v16 + 8)
                                                                                             + 336LL))(
                                    *(_QWORD *)(v14 + 656),
                                    *((unsigned int *)a1 + 200),
                                    v4,
                                    (char *)a1 + 24);
          break;
        case 6:
          ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                    *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 350) + 624LL),
                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 350) + 632LL),
                                    *((_DWORD *)a1 + 200),
                                    (struct DXGPROCESS *)a3,
                                    (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          break;
        case 8:
          ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                    *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 350) + 624LL),
                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 350) + 632LL),
                                    *((_DWORD *)a1 + 200),
                                    (struct DXGPROCESS *)a3,
                                    (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          break;
        case 9:
          v10 = *((_QWORD *)a2 + 350);
          v11 = a3[8];
          v12 = *(_QWORD *)(v10 + 648);
          if ( v11 )
            v4 = *((_QWORD *)v11 + (unsigned int)(*(_DWORD *)v12 - 1));
          ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v12 + 8)
                                                                                             + 344LL))(
                                    *(_QWORD *)(v10 + 656),
                                    *((unsigned int *)a1 + 200),
                                    v4,
                                    (char *)a1 + 24);
          break;
        default:
          v9 = -1073741811;
          WdLogSingleEntry1(3LL, v8);
          return (unsigned int)v9;
      }
      return ProcessNodeStatistics;
    }
    v17 = *((_QWORD *)a2 + 350);
    v18 = a3[8];
    v19 = *(_QWORD *)(v17 + 648);
    if ( v18 )
      v20 = *((_QWORD *)v18 + (unsigned int)(*(_DWORD *)v19 - 1));
    else
      v20 = 0LL;
    v21 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v19 + 8) + 320LL))(
           *(_QWORD *)(v17 + 656),
           v20,
           (char *)a1 + 24);
    if ( v9 >= 0 )
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 350) + 624LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 350) + 632LL),
                             (struct DXGPROCESS *)a3,
                             v21);
  }
  return (unsigned int)v9;
}
