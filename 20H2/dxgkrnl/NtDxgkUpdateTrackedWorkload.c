/*
 * XREFs of NtDxgkUpdateTrackedWorkload @ 0x1C02BCFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005770 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006954 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     DxgkGetDeviceStateInternal @ 0x1C00F6630 (DxgkGetDeviceStateInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BAD68 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BB0D8 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02BB838 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C02BBEC0 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 */

__int64 __fastcall NtDxgkUpdateTrackedWorkload(struct DXGDEVICE *a1)
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
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  int DeviceStateInternal; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  struct DXGDEVICE *v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  _DWORD *v32; // rdx
  _BYTE v33[8]; // [rsp+30h] [rbp-468h] BYREF
  __int64 v34; // [rsp+38h] [rbp-460h]
  char v35; // [rsp+40h] [rbp-458h]
  struct DXGDEVICE *v36; // [rsp+48h] [rbp-450h] BYREF
  int v37; // [rsp+50h] [rbp-448h]
  DXGTRACKEDWORKLOAD *v38[2]; // [rsp+58h] [rbp-440h] BYREF
  _BYTE v39[16]; // [rsp+68h] [rbp-430h] BYREF
  DXGTRACKEDWORKLOAD *v40; // [rsp+78h] [rbp-420h] BYREF
  struct DXGDEVICE *v41[2]; // [rsp+80h] [rbp-418h] BYREF
  int v42; // [rsp+90h] [rbp-408h]
  _OWORD v43[2]; // [rsp+98h] [rbp-400h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-3E0h]
  __int64 v45; // [rsp+C8h] [rbp-3D0h]
  _BYTE v46[600]; // [rsp+D0h] [rbp-3C8h] BYREF
  _BYTE v47[160]; // [rsp+330h] [rbp-168h] BYREF
  _BYTE v48[160]; // [rsp+3D0h] [rbp-C8h] BYREF

  v41[1] = a1;
  memset(v46, 0, sizeof(v46));
  v3 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  if ( (unsigned int)v4 < 0x258 )
  {
    v5 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v5 + 24) = 535LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  if ( (unsigned int)v4 > 0x258 )
    v4 = 600LL;
  v7 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  memmove(v46, v7, v4);
  v41[0] = 0LL;
  v40 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v38,
    *(unsigned int *)&v46[4],
    Current,
    &v40,
    v41);
  v11 = v40;
  if ( v40 )
  {
    v13 = v41[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v39,
      v41[0]);
    v34 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    v35 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v13, 0, v14, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v47, 0LL);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v19 = (unsigned __int64 *)&v46[80];
      if ( *((_DWORD *)v11 + 21) )
        v19 = 0LL;
      LODWORD(v12) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
                       v11,
                       v13,
                       (struct COREDEVICEACCESS *)v47,
                       *(unsigned __int64 *)&v46[48],
                       v19);
      if ( (int)v12 < 0 )
        goto LABEL_14;
      v22 = 0LL;
      if ( *((_DWORD *)v11 + 284) == 1 )
      {
        memset(v43, 0, sizeof(v43));
        v44 = 0LL;
        v45 = 0LL;
        LODWORD(v43[0]) = *((_DWORD *)v13 + 109);
        DWORD1(v43[0]) = 4;
        DeviceStateInternal = DxgkGetDeviceStateInternal((ULONG64)v43, 0, v20);
        v12 = DeviceStateInternal;
        if ( DeviceStateInternal < 0 )
        {
          v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
          *(_QWORD *)(v27 + 24) = v12;
          *(_QWORD *)(v27 + 32) = 598LL;
          WdLogEvent5_WdWarning(v27);
          goto LABEL_14;
        }
        v22 = (unsigned int)(v44 + 1);
      }
      v36 = v13;
      v37 = 0;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v13, 0, v21, 0);
      if ( *((_DWORD *)v11 + 284) == 1
        && (DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v36),
            v29 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL),
            v12 = v29,
            v29 < 0) )
      {
        v31 = WdLogNewEntry5_WdError(v30, v28);
        *(_QWORD *)(v31 + 24) = v13;
        *(_QWORD *)(v31 + 32) = v12;
        WdLogEvent5_WdError(v31);
      }
      else
      {
        LODWORD(v12) = DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
                         v11,
                         v28,
                         (const struct _D3DKMT_UPDATETRACKEDWORKLOAD *)v46,
                         v22);
        if ( (int)v12 >= 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
          if ( v36 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v36);
          v42 = 1;
          v32 = (_DWORD *)((char *)a1 + 592);
          if ( (unsigned __int64)a1 + 592 >= MmUserProbeAddress )
            v32 = (_DWORD *)MmUserProbeAddress;
          *v32 = 1;
          goto LABEL_14;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
      if ( v36 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v36);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = v13;
      *(_QWORD *)(v18 + 32) = v12;
      WdLogEvent5_WdError(v18);
    }
LABEL_14:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v39);
    goto LABEL_11;
  }
  LODWORD(v12) = -1073741811;
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v38);
  return (unsigned int)v12;
}
