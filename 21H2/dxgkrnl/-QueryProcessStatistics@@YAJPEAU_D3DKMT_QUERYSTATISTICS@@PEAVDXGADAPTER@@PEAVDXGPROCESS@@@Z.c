/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C0222060
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1C0225608 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C003F248 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C003F2D8 (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C003F36C (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C003F3FC (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int ProcessNodeStatistics; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx

  v3 = 0LL;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v7 + 24) = 5393LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 || !*((_QWORD *)a2 + 338) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 5394LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = 5396LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a3 + 13) + 16LL) != CurrentThread
    && a3 != DXGPROCESS::GetCurrent((__int64)CurrentThread, (__int64)a2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, a2);
    *(_QWORD *)(v12 + 24) = 5397LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v26 = *((_QWORD *)a2 + 338);
    v27 = *((_QWORD *)a3 + 8);
    v28 = *(_QWORD *)(v26 + 640);
    if ( v27 )
      v29 = *(_QWORD *)(v27 + 8LL * (unsigned int)(*(_DWORD *)v28 - 1));
    else
      v29 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v28 + 8) + 304LL))(
            *(_QWORD *)(v26 + 648),
            v29,
            (char *)a1 + 24);
    if ( v13 >= 0 )
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 338) + 616LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 338) + 624LL),
                             a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
    {
      switch ( *(_DWORD *)a1 )
      {
        case 4:
          v19 = *((_QWORD *)a2 + 338);
          v20 = *((_QWORD *)a3 + 8);
          v21 = *(_QWORD *)(v19 + 640);
          if ( v20 )
            v3 = *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)v21 - 1));
          ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v21 + 8)
                                                                                             + 328LL))(
                                    *(_QWORD *)(v19 + 648),
                                    *((unsigned int *)a1 + 200),
                                    v3,
                                    (char *)a1 + 24);
          break;
        case 6:
          ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                    *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 338) + 616LL),
                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 338) + 624LL),
                                    *((_DWORD *)a1 + 200),
                                    a3,
                                    (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          break;
        case 8:
          ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                    *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 338) + 616LL),
                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 338) + 624LL),
                                    *((_DWORD *)a1 + 200),
                                    a3,
                                    (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          break;
        case 9:
          v15 = *((_QWORD *)a2 + 338);
          v16 = *((_QWORD *)a3 + 8);
          v17 = *(_QWORD *)(v15 + 640);
          if ( v16 )
            v3 = *(_QWORD *)(v16 + 8LL * (unsigned int)(*(_DWORD *)v17 - 1));
          ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v17 + 8)
                                                                                             + 336LL))(
                                    *(_QWORD *)(v15 + 648),
                                    *((unsigned int *)a1 + 200),
                                    v3,
                                    (char *)a1 + 24);
          break;
        default:
          v13 = -1073741811;
          v14 = WdLogNewEntry5_WdWarning((unsigned int)(*(_DWORD *)a1 - 8), a2, a3);
          *(_QWORD *)(v14 + 24) = *(int *)a1;
          WdLogEvent5_WdWarning(v14);
          return (unsigned int)v13;
      }
      return ProcessNodeStatistics;
    }
    v22 = *((_QWORD *)a2 + 338);
    v23 = *((_QWORD *)a3 + 8);
    v24 = *(_QWORD *)(v22 + 640);
    if ( v23 )
      v25 = *(_QWORD *)(v23 + 8LL * (unsigned int)(*(_DWORD *)v24 - 1));
    else
      v25 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v24 + 8) + 312LL))(
            *(_QWORD *)(v22 + 648),
            v25,
            (char *)a1 + 24);
    if ( v13 >= 0 )
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 338) + 616LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 338) + 624LL),
                             a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  return (unsigned int)v13;
}
