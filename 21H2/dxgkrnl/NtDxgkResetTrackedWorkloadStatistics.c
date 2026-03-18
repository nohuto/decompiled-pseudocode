/*
 * XREFs of NtDxgkResetTrackedWorkloadStatistics @ 0x1C0346D70
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C03446AC (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0344A1C (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0345C10 (-ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall NtDxgkResetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  const void *v1; // rdx
  unsigned int *v2; // rax
  size_t v3; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rdi
  struct DXGDEVICE *v12; // rsi
  __int64 v13; // r9
  int v14; // eax
  struct DXGDEVICE *v15; // rdx
  struct DXGDEVICE *v16; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v17[2]; // [rsp+58h] [rbp-F0h] BYREF
  DXGTRACKEDWORKLOAD *v18; // [rsp+60h] [rbp-E8h] BYREF
  DXGTRACKEDWORKLOAD *v19[2]; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v20[24]; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v21[160]; // [rsp+90h] [rbp-B8h] BYREF

  v1 = a1;
  v16 = a1;
  *(_QWORD *)v17 = 0LL;
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
    memmove(v17, v1, v3);
    v16 = 0LL;
    v18 = 0LL;
    Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v19,
      v17[1],
      Current,
      &v18,
      &v16);
    v10 = (struct _KTHREAD **)v18;
    if ( v18 )
    {
      v12 = v16;
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v20, v16);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v21, (__int64)v12, 0, v13, 0);
      v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v21, 0LL);
      v11 = v14;
      if ( v14 >= 0 )
      {
        LODWORD(v11) = DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics(v10, v15);
      }
      else
      {
        WdLogSingleEntry2(2LL, v12, v14);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
          (__int64)v12,
          v11,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v20);
    }
    else
    {
      LODWORD(v11) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v19);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(3LL, 810LL);
    return 3221225485LL;
  }
}
