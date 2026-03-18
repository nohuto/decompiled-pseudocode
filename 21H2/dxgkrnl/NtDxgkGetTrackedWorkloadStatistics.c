/*
 * XREFs of NtDxgkGetTrackedWorkloadStatistics @ 0x1C0346A50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C03446AC (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0344A1C (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C0345098 (-GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKED.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03451D4 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0345B20 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

__int64 __fastcall NtDxgkGetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v11; // rbx
  __int64 v12; // rdi
  struct DXGDEVICE *v13; // r14
  __int64 v14; // r9
  int v15; // eax
  struct COREDEVICEACCESS *v16; // r8
  unsigned __int64 *v17; // rax
  struct DXGDEVICE *v18; // rdx
  ULONG64 v19; // rdx
  _QWORD *v20; // rdx
  _DWORD *v21; // rdx
  struct DXGDEVICE *v22; // [rsp+50h] [rbp-348h] BYREF
  DXGTRACKEDWORKLOAD *v23[2]; // [rsp+58h] [rbp-340h] BYREF
  DXGTRACKEDWORKLOAD *v24; // [rsp+68h] [rbp-330h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp-328h] BYREF
  _BYTE v26[592]; // [rsp+80h] [rbp-318h] BYREF
  _BYTE v27[160]; // [rsp+2D0h] [rbp-C8h] BYREF

  v22 = a1;
  memset(v26, 0, sizeof(v26));
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 >= 0x250 )
  {
    if ( (unsigned int)v3 > 0x250 )
      v3 = 592LL;
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (const void *)MmUserProbeAddress;
    memmove(v26, v5, v3);
    v22 = 0LL;
    v24 = 0LL;
    Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v23,
      *(unsigned int *)&v26[4],
      Current,
      &v24,
      &v22);
    v11 = v24;
    if ( v24 )
    {
      v13 = v22;
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25, v22);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, (__int64)v13, 0, v14, 0);
      v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27, 0LL);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v17 = (unsigned __int64 *)&v26[16];
        if ( *((_DWORD *)v11 + 21) )
          v17 = 0LL;
        LODWORD(v12) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v11, v13, v16, *(unsigned __int64 *)&v26[8], v17);
        if ( (int)v12 >= 0 )
        {
          LODWORD(v12) = DXGTRACKEDWORKLOAD::GetTrackedWorkloadUserStatistics(
                           v11,
                           v18,
                           (struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)v26);
          if ( (int)v12 >= 0 )
          {
            DXGTRACKEDWORKLOAD::ReportStats(v11);
            v19 = (ULONG64)a1 + 536;
            if ( (unsigned __int64)a1 + 536 >= MmUserProbeAddress )
              v19 = MmUserProbeAddress;
            *(_OWORD *)v19 = *(_OWORD *)&v26[536];
            *(_OWORD *)(v19 + 16) = *(_OWORD *)&v26[552];
            *(_QWORD *)(v19 + 32) = *(_QWORD *)&v26[568];
            v20 = (_QWORD *)((char *)a1 + 576);
            if ( (unsigned __int64)a1 + 576 >= MmUserProbeAddress )
              v20 = (_QWORD *)MmUserProbeAddress;
            *v20 = *(_QWORD *)&v26[576];
            v21 = (_DWORD *)((char *)a1 + 584);
            if ( (unsigned __int64)a1 + 584 >= MmUserProbeAddress )
              v21 = (_DWORD *)MmUserProbeAddress;
            *v21 = *(_DWORD *)&v26[584];
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v13, v15);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
          (__int64)v13,
          v12,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25);
    }
    else
    {
      LODWORD(v12) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v23);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(3LL, 706LL);
    return 3221225485LL;
  }
}
