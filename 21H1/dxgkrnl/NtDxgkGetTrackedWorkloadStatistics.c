/*
 * XREFs of NtDxgkGetTrackedWorkloadStatistics @ 0x1C02B9500
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EE14 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02B7808 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02B7B78 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C02B818C (-GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKED.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02B82D8 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 */

__int64 __fastcall NtDxgkGetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rax
  size_t v4; // r8
  __int64 v5; // rax
  const void *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // rax
  DXGTRACKEDWORKLOAD *v11; // rsi
  __int64 v12; // rbx
  struct DXGDEVICE *v13; // r14
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 *v19; // rax
  struct DXGDEVICE *v20; // rdx
  ULONG64 v21; // rdx
  _QWORD *v22; // rdx
  _DWORD *v23; // rdx
  __int64 v24; // [rsp+30h] [rbp-358h] BYREF
  char v25; // [rsp+38h] [rbp-350h]
  DXGTRACKEDWORKLOAD *v26[2]; // [rsp+40h] [rbp-348h] BYREF
  DXGTRACKEDWORKLOAD *v27; // [rsp+50h] [rbp-338h] BYREF
  struct DXGDEVICE *v28[3]; // [rsp+58h] [rbp-330h] BYREF
  _BYTE v29[592]; // [rsp+70h] [rbp-318h] BYREF
  _BYTE v30[160]; // [rsp+2C0h] [rbp-C8h] BYREF

  v28[1] = a1;
  memset(v29, 0, sizeof(v29));
  v3 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  if ( (unsigned int)v4 >= 0x250 )
  {
    if ( (unsigned int)v4 > 0x250 )
      v4 = 592LL;
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    memmove(v29, v7, v4);
    v28[0] = 0LL;
    v27 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8);
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v26,
      *(unsigned int *)&v29[4],
      Current,
      &v27,
      v28);
    v11 = v27;
    if ( v27 )
    {
      v13 = v28[0];
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v24, v28[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v13, 0, v14, 0);
      v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v19 = (unsigned __int64 *)&v29[16];
        if ( *((_DWORD *)v11 + 21) )
          v19 = 0LL;
        LODWORD(v12) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
                         v11,
                         v13,
                         (struct COREDEVICEACCESS *)v30,
                         *(unsigned __int64 *)&v29[8],
                         v19);
        if ( (int)v12 >= 0 )
        {
          LODWORD(v12) = DXGTRACKEDWORKLOAD::GetTrackedWorkloadUserStatistics(
                           v11,
                           v20,
                           (struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)v29);
          if ( (int)v12 >= 0 )
          {
            v21 = (ULONG64)a1 + 536;
            if ( (unsigned __int64)a1 + 536 >= MmUserProbeAddress )
              v21 = MmUserProbeAddress;
            *(_OWORD *)v21 = *(_OWORD *)&v29[536];
            *(_OWORD *)(v21 + 16) = *(_OWORD *)&v29[552];
            *(_QWORD *)(v21 + 32) = *(_QWORD *)&v29[568];
            v22 = (_QWORD *)((char *)a1 + 576);
            if ( (unsigned __int64)a1 + 576 >= MmUserProbeAddress )
              v22 = (_QWORD *)MmUserProbeAddress;
            *v22 = *(_QWORD *)&v29[576];
            v23 = (_DWORD *)((char *)a1 + 584);
            if ( (unsigned __int64)a1 + 584 >= MmUserProbeAddress )
              v23 = (_DWORD *)MmUserProbeAddress;
            *v23 = *(_DWORD *)&v29[584];
          }
        }
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v18 + 24) = v13;
        *(_QWORD *)(v18 + 32) = v12;
        WdLogEvent5_WdError(v18);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
      if ( v24 )
      {
        if ( v25 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v24 + 136));
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      LODWORD(v12) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v26);
    return (unsigned int)v12;
  }
  else
  {
    v5 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v5 + 24) = 671LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
}
