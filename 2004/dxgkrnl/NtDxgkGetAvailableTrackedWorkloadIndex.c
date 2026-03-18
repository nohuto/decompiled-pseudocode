/*
 * XREFs of NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C02BD700
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005770 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BBD48 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BC0B8 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1C02BC550 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 */

__int64 __fastcall NtDxgkGetAvailableTrackedWorkloadIndex(struct DXGDEVICE *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rax
  size_t v4; // r8
  __int64 v5; // rax
  const void *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // rax
  DXGTRACKEDWORKLOAD *v11; // r14
  __int64 v12; // rbx
  struct DXGDEVICE *v13; // rsi
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 *v19; // rax
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  unsigned int v22; // [rsp+40h] [rbp-348h] BYREF
  int v23; // [rsp+44h] [rbp-344h] BYREF
  DXGTRACKEDWORKLOAD *v24; // [rsp+48h] [rbp-340h] BYREF
  struct DXGDEVICE *v25[2]; // [rsp+50h] [rbp-338h] BYREF
  DXGTRACKEDWORKLOAD *v26[2]; // [rsp+60h] [rbp-328h] BYREF
  _BYTE v27[8]; // [rsp+70h] [rbp-318h] BYREF
  __int64 v28; // [rsp+78h] [rbp-310h]
  char v29; // [rsp+80h] [rbp-308h]
  _BYTE v30[24]; // [rsp+88h] [rbp-300h] BYREF
  unsigned int v31[136]; // [rsp+A0h] [rbp-2E8h] BYREF
  _BYTE v32[160]; // [rsp+2C0h] [rbp-C8h] BYREF

  v25[1] = a1;
  memset(v31, 0, 0x218uLL);
  v3 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  if ( (unsigned int)v4 < 0x218 )
  {
    v5 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v5 + 24) = 439LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  if ( (unsigned int)v4 > 0x218 )
    v4 = 536LL;
  v7 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  memmove(v31, v7, v4);
  v25[0] = 0LL;
  v24 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)v26, v31[1], Current, &v24, v25);
  v11 = v24;
  if ( v24 )
  {
    v22 = 0;
    v23 = 0;
    v13 = v25[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30,
      v25[0]);
    v28 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    v29 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v13, 0, v14, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v19 = (unsigned __int64 *)&v31[4];
      if ( *((_DWORD *)v11 + 21) )
        v19 = 0LL;
      LODWORD(v12) = DXGTRACKEDWORKLOAD::GetAvailableIndex(
                       v11,
                       v13,
                       (struct COREDEVICEACCESS *)v32,
                       *(__int64 *)&v31[2],
                       v19,
                       &v22,
                       &v23);
      if ( (int)v12 >= 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
        if ( v29 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
        v20 = (_DWORD *)((char *)a1 + 528);
        if ( (unsigned __int64)a1 + 528 >= MmUserProbeAddress )
          v20 = (_DWORD *)MmUserProbeAddress;
        *v20 = v22;
        v21 = (_DWORD *)((char *)a1 + 532);
        if ( (unsigned __int64)a1 + 532 >= MmUserProbeAddress )
          v21 = (_DWORD *)MmUserProbeAddress;
        *v21 = v23;
        goto LABEL_11;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = v13;
      *(_QWORD *)(v18 + 32) = v12;
      WdLogEvent5_WdError(v18);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    if ( v29 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
  }
  else
  {
    LODWORD(v12) = -1073741811;
  }
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v26);
  return (unsigned int)v12;
}
