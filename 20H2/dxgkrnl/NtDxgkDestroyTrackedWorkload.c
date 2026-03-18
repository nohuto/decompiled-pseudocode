/*
 * XREFs of NtDxgkDestroyTrackedWorkload @ 0x1C02BC300
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C004D248 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BAD68 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BB0D8 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall NtDxgkDestroyTrackedWorkload(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // r8
  unsigned int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r9
  char *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // r9d
  unsigned int v27; // r11d
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r8
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+30h] [rbp-128h] BYREF
  __int64 v43; // [rsp+38h] [rbp-120h]
  char v44; // [rsp+40h] [rbp-118h]
  struct DXGDEVICE *v45; // [rsp+48h] [rbp-110h] BYREF
  DXGTRACKEDWORKLOAD *v46; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v47[2]; // [rsp+58h] [rbp-100h] BYREF
  _QWORD v48[3]; // [rsp+60h] [rbp-F8h] BYREF
  DXGTRACKEDWORKLOAD *v49[2]; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v50[24]; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v51[160]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = (unsigned int *)a1;
  v48[2] = a1;
  v4 = 0;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2207;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2207);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2207LL);
  *(_QWORD *)v47 = 0LL;
  v6 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v7 = *v6;
  if ( (unsigned int)v7 < 8 )
  {
    v8 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v5);
    *(_QWORD *)(v8 + 24) = 344LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v9);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v42);
    }
    return 3221225485LL;
  }
  if ( (unsigned int)v7 > 8 )
    LODWORD(v7) = 8;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(v47, v3, (unsigned int)v7);
  v45 = 0LL;
  v46 = 0LL;
  Current = DXGPROCESS::GetCurrent(v14, v13);
  v16 = v47[1];
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v49,
    v47[1],
    (struct _KTHREAD **)Current,
    &v46,
    &v45);
  if ( !v46 )
  {
    v4 = -1073741811;
    v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = v16;
    *(_QWORD *)(v20 + 32) = 373LL;
    WdLogEvent5_WdWarning(v20);
LABEL_18:
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v39);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v42);
    return v4;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v45);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v45, 2, v21, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v51, v22);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v50,
    (struct _KTHREAD **)Current);
  v26 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
  v27 = *((_DWORD *)Current + 64);
  if ( v26 < v27
    && (v25 = v26,
        v28 = *((_QWORD *)Current + 30),
        v23 = *(unsigned int *)(v28 + 16LL * v26 + 8),
        v24 = ((unsigned int)v16 >> 25) & 0x60,
        (((unsigned int)v16 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16LL * v26 + 8) & 0x60))
    && (v23 & 0x2000) == 0
    && (v23 & 0x1F) != 0
    && (v25 = 2LL * v26, v23 &= 0x1Fu, (_BYTE)v23 == 19) )
  {
    v29 = *(_QWORD *)(v28 + 16LL * v26);
  }
  else
  {
    v29 = 0LL;
  }
  if ( v29 )
  {
    if ( v26 < v27 )
    {
      v34 = *((_QWORD *)Current + 30);
      v35 = *(_DWORD *)(v34 + 16LL * v26 + 8);
      if ( (((unsigned int)v16 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16LL * v26 + 8) & 0x60)
        && (v35 & 0x2000) == 0
        && (v35 & 0x1F) != 0 )
      {
        *(_DWORD *)(v34 + 16LL * (((unsigned int)v16 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
    if ( DXGTRACKEDWORKLOAD::Release(v46) != 1 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v38 + 24) = 405LL;
      WdLogEvent5_WdAssertion(v38);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    if ( v48[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    goto LABEL_18;
  }
  v30 = WdLogNewEntry5_WdWarning(v24, v23, v25);
  *(_QWORD *)(v30 + 24) = v16;
  WdLogEvent5_WdWarning(v30);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  if ( v48[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v49);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v31);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v42);
  return 0LL;
}
