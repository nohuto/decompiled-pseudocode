/*
 * XREFs of HvpMarkDirty @ 0x14071F430
 * Callers:
 *     HvMarkDirtyForFlush @ 0x14020AEB4 (HvMarkDirtyForFlush.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x14068C700 (HvpEnlistFreeCells.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140742834 (CmpTransMgrSyncHive.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402A4320 (CmpArmLazyWriter.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpLogDirtyVectorUse @ 0x140688290 (CmpLogDirtyVectorUse.c)
 *     CmpIssueNewDirtyCallback @ 0x1406CA588 (CmpIssueNewDirtyCallback.c)
 *     HvpSetRangeProtection @ 0x14079B0D0 (HvpSetRangeProtection.c)
 *     CmpForceFlushForCoalescing @ 0x140881450 (CmpForceFlushForCoalescing.c)
 */

__int64 __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  int v4; // eax
  int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // ebx
  int v12; // esi
  unsigned int v13; // ebx
  ULONG v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // ebp
  ULONG v17; // eax
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // r14d
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rax
  __int16 v27; // [rsp+30h] [rbp-98h] BYREF
  int v28; // [rsp+34h] [rbp-94h] BYREF
  __int64 v29; // [rsp+38h] [rbp-90h] BYREF
  __int64 *v30; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+48h] [rbp-80h]
  int v32; // [rsp+58h] [rbp-70h]
  int v33; // [rsp+5Ch] [rbp-6Ch]

  v4 = *(_DWORD *)(BugCheckParameter2 + 164);
  if ( (v4 & 1) != 0 )
    return 3221225506LL;
  if ( (v4 & 2) != 0 && a4 != 2 )
    return 3221225865LL;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 || a2 < 0 )
    return 0LL;
  v9 = a2 - 1;
  v10 = *(_DWORD *)(BugCheckParameter2 + 136);
  v11 = (unsigned int)(a3 + v9) >> 9;
  if ( v10 > 1 )
  {
    v19 = ~(v10 - 1);
    v12 = ((unsigned int)a2 >> 9) & v19;
    v11 = (v19 & (v10 + v11)) - 1;
  }
  else
  {
    v12 = (unsigned int)a2 >> 9;
  }
  v13 = ((v11 + 16) & 0xFFFFFFF8) - 9;
  v14 = (v12 + 8) & 0xFFFFFFF8;
  if ( v14 )
    v14 -= 8;
  v15 = *(_DWORD *)(BugCheckParameter2 + 280) >> 9;
  if ( v13 >= v15 )
    v13 = v15 - 1;
  v16 = 0;
  v17 = v14;
  if ( v14 > v13 )
    goto LABEL_16;
  do
  {
    if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 96), v17) )
      ++v16;
    ++v17;
  }
  while ( v17 <= v13 );
  if ( !v16 )
  {
LABEL_16:
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 2) == 0 )
    {
      v29 = *(_QWORD *)(BugCheckParameter2 + 4136) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
      CmpArmLazyWriter(0, (unsigned __int64 *)&v29, 0);
    }
    return 0LL;
  }
  v20 = v13 - v14;
  if ( (unsigned __int8)HvpSetRangeProtection(BugCheckParameter2, v14 << 9) )
  {
    v21 = *(_DWORD *)(BugCheckParameter2 + 104);
    *(_DWORD *)(BugCheckParameter2 + 104) = v21 + v16;
    RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v14, v20 + 1);
    CmpLogDirtyVectorUse(BugCheckParameter2, 0, a2, a3);
    v29 = BugCheckParameter2;
    if ( (DWORD2(PerfGlobalGroupMask[0]) & 0x1000000) != 0 )
    {
      v28 = a4;
      v27 = 0;
      v30 = &v29;
      v31[0] = 8LL;
      v22 = *(_QWORD *)(BugCheckParameter2 + 1864);
      v23 = 1;
      if ( v22 )
      {
        v23 = 2;
        v32 = *(unsigned __int16 *)(BugCheckParameter2 + 1856);
        v31[1] = v22;
        v33 = 0;
      }
      v24 = 2LL * v23;
      v25 = v23 + 1;
      v31[v24 - 1] = &v27;
      v31[v24] = 2LL;
      v26 = 2LL * v25;
      v31[v26 - 1] = &v28;
      v31[v26] = 4LL;
      EtwTraceKernelEvent((__int64)&v30, v25 + 1, 0x41000000u, 0x928u, 0x501902u);
    }
    if ( !v21 )
    {
      *(_QWORD *)(BugCheckParameter2 + 4136) = KiQueryUnbiasedInterruptTime();
      CmpIssueNewDirtyCallback();
    }
    if ( (int)(v16 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v16)) >= 0x8000 )
      CmpForceFlushForCoalescing();
    goto LABEL_16;
  }
  return 3221225853LL;
}
