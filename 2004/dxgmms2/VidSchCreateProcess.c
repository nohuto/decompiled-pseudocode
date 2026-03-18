/*
 * XREFs of VidSchCreateProcess @ 0x1C0076B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C000230C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 */

__int64 __fastcall VidSchCreateProcess(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    WdLogEvent5_WdAssertion(v18);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xAB8uLL, 0x32616956u);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v20 = WdLogNewEntry5_WdWarning(v6, v5);
    WdLogEvent5_WdWarning(v20);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0xAB8uLL);
  *(_DWORD *)v7 = 845244758;
  *(_QWORD *)(v7 + 8) = a1;
  *(_DWORD *)(v7 + 16) = *(_BYTE *)(a1 + 345) != 0 ? 5 : 2;
  TdrHistoryInit((struct _TDR_HISTORY *)(v7 + 32));
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v10 = ExAllocatePoolWithTag(PagedPool, 4 * ((unsigned __int64)(MaximumAdapterCount + 31) >> 5), 0x32616956u);
  *(_QWORD *)(v7 + 2616) = v10;
  if ( !v10 )
  {
    v19 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v19);
LABEL_13:
    ExFreePoolWithTag((PVOID)v7, 0);
    return 0LL;
  }
  memset(v10, 0, 4 * ((unsigned __int64)(MaximumAdapterCount + 31) >> 5));
  v13 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * MaximumAdapterCount, 0x32616956u);
  *(_QWORD *)(v7 + 24) = v13;
  if ( !v13 )
  {
    v21 = WdLogNewEntry5_WdWarning(v15, v14);
    WdLogEvent5_WdWarning(v21);
    ExFreePoolWithTag(*(PVOID *)(v7 + 2616), 0);
    goto LABEL_13;
  }
  memset(v13, 0, 8LL * MaximumAdapterCount);
  *(_QWORD *)(v7 + 2632) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL);
  *(_QWORD *)(v7 + 2648) = *(_QWORD *)(a1 + 56);
  v16 = *(_QWORD *)(a1 + 64);
  if ( v16 )
    v16 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v7 + 2640) = v16;
  if ( *(_BYTE *)(a1 + 345) )
    g_pVidSchSystemProcess = v7;
  return v7;
}
