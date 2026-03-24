/*
 * XREFs of NtDxgkResetTrackedWorkloadStatistics @ 0x1C02BE160
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00072B0 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BC178 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BC4E8 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C02BD0D8 (-ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall NtDxgkResetTrackedWorkloadStatistics(DXGTRACKEDWORKLOAD *a1)
{
  const void *v1; // rdx
  unsigned int *v2; // rax
  size_t v3; // r8
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rbx
  struct DXGDEVICE *v10; // rsi
  __int64 v11; // r9
  int v12; // eax
  struct DXGDEVICE *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGTRACKEDWORKLOAD *v16; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-F0h] BYREF
  char v18; // [rsp+40h] [rbp-E8h]
  unsigned int v19[2]; // [rsp+48h] [rbp-E0h] BYREF
  struct DXGDEVICE *v20; // [rsp+50h] [rbp-D8h] BYREF
  DXGTRACKEDWORKLOAD *v21[3]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v22[160]; // [rsp+70h] [rbp-B8h] BYREF

  v1 = a1;
  v21[2] = a1;
  *(_QWORD *)v19 = 0LL;
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 >= 8 )
  {
    if ( (unsigned int)v3 > 8 )
      v3 = 8LL;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v1 = (const void *)MmUserProbeAddress;
    memmove(v19, v1, v3);
    v20 = 0LL;
    v16 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v21,
      v19[1],
      Current,
      &v16,
      &v20);
    if ( v16 )
    {
      v10 = v20;
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v17, v20);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, (__int64)v10, 0, v11, 0);
      v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22, 0LL);
      v9 = v12;
      if ( v12 >= 0 )
      {
        LODWORD(v9) = DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics((struct _KTHREAD **)v16, v13);
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v15 + 24) = v10;
        *(_QWORD *)(v15 + 32) = v9;
        WdLogEvent5_WdError(v15);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
      if ( v17 )
      {
        if ( v18 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v17 + 136));
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      LODWORD(v9) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v21);
    return (unsigned int)v9;
  }
  else
  {
    v4 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, a1, v3);
    *(_QWORD *)(v4 + 24) = 773LL;
    WdLogEvent5_WdWarning(v4);
    return 3221225485LL;
  }
}
