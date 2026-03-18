/*
 * XREFs of ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BAD68
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1C02BC300 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C02BC720 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02BCA60 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1C02BCDD0 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02BCFD0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C004D248 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 */

DXGTRACKEDWORKLOADBYHANDLE *__fastcall DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
        DXGTRACKEDWORKLOADBYHANDLE *this,
        __int64 a2,
        struct _KTHREAD **a3,
        struct DXGTRACKEDWORKLOAD **a4,
        struct DXGDEVICE **a5)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  struct _KTHREAD *v13; // r9
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v24[40]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *a4 = 0LL;
  v8 = (unsigned int)a2;
  *a5 = 0LL;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdWarning(this, a2, 0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 60LL;
    WdLogEvent5_WdWarning(v9);
    return this;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v24, a3);
  v12 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *((_DWORD *)a3 + 64) )
    goto LABEL_9;
  v13 = a3[30];
  v11 = (unsigned int)v12;
  v10 = ((unsigned int)v8 >> 25) & 0x60;
  v14 = *((_DWORD *)v13 + 4 * v12 + 2);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*((_BYTE *)v13 + 16 * v12 + 8) & 0x60)
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v11 = 2LL * (unsigned int)v12;
  v15 = v14 & 0x1F;
  if ( (_BYTE)v15 != 19 )
  {
    v16 = WdLogNewEntry5_WdError(v10, v15);
    *(_QWORD *)(v16 + 24) = 267LL;
    WdLogEvent5_WdError(v16);
LABEL_9:
    v17 = 0LL;
    goto LABEL_10;
  }
  v17 = *((_QWORD *)v13 + 2 * (unsigned int)v12);
LABEL_10:
  *(_QWORD *)this = v17;
  if ( v17 && *(_BYTE *)(v17 + 116) )
  {
    _m_prefetchw((const void *)(v17 + 72));
    v18 = *(_QWORD *)(v17 + 72);
    do
    {
      if ( !v18 )
        goto LABEL_19;
      v19 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), v18 + 1, v18);
    }
    while ( v19 != v18 );
    v20 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    *((_QWORD *)this + 1) = v20;
    if ( !v20 )
    {
      v21 = WdLogNewEntry5_WdWarning(0LL, v17, v11);
      *(_QWORD *)(v21 + 24) = 79LL;
      WdLogEvent5_WdWarning(v21);
      DXGTRACKEDWORKLOAD::Release(*(DXGTRACKEDWORKLOAD **)this);
LABEL_19:
      *(_QWORD *)this = 0LL;
      goto LABEL_22;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v20 + 64));
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v10, v17, v11);
    *(_QWORD *)(v22 + 24) = v8;
    *(_QWORD *)(v22 + 32) = 68LL;
    WdLogEvent5_WdWarning(v22);
  }
LABEL_22:
  *a4 = *(struct DXGTRACKEDWORKLOAD **)this;
  *a5 = (struct DXGDEVICE *)*((_QWORD *)this + 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return this;
}
