/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C01204C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EAC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01207F8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C0225724 (DxgkDestroyClientAllocation.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rbx
  char *v14; // rdi
  char *v15; // rdx
  volatile signed __int64 *v16; // rcx
  volatile signed __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  struct _KTHREAD *v20; // r8
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // edi
  struct DXGADAPTER *v28; // rcx
  struct DXGADAPTER *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  struct DXGDEVICE *v41; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  char v45; // [rsp+58h] [rbp-A8h]
  char v46[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h]
  char v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  char v50; // [rsp+80h] [rbp-80h]
  char v51[8]; // [rsp+88h] [rbp-78h] BYREF
  DXGPUSHLOCK *v52; // [rsp+90h] [rbp-70h]
  int v53; // [rsp+98h] [rbp-68h]
  char v54[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v55[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTER *v57; // [rsp+B8h] [rbp-48h]
  char v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  char v60[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-10h]
  struct DXGADAPTER *v62; // [rsp+F8h] [rbp-8h]
  char v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  struct DXGDEVICE *v65; // [rsp+128h] [rbp+28h]
  char v66; // [rsp+130h] [rbp+30h]

  v3 = a2;
  v4 = (unsigned int)a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3018);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 3018LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v10 = Current;
  if ( !Current )
  {
    v27 = -1073741811;
    v33 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    *(_QWORD *)(v33 + 32) = PsGetCurrentProcess(v35, v34);
    WdLogEvent5_WdError(v33);
    goto LABEL_41;
  }
  v41 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, (unsigned int)v4, Current, &v41);
  v13 = v41;
  if ( v41 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v49, v41);
    v14 = (char *)v13 + 16;
    v48 = 0;
    v47 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
    v16 = *(volatile signed __int64 **)(*((_QWORD *)v13 + 2) + 16LL);
    v57 = (struct DXGADAPTER *)v16;
    v58 = 0;
    v59 = 0LL;
    if ( v16 )
    {
      _InterlockedIncrement64(v16 + 3);
      v13 = v41;
      v56 = -1LL;
    }
    v17 = *(volatile signed __int64 **)(*(_QWORD *)v14 + 16LL);
    v62 = (struct DXGADAPTER *)v17;
    v63 = 0;
    v64 = 0LL;
    if ( v17 )
    {
      _InterlockedIncrement64(v17 + 3);
      v13 = v41;
      v61 = -1LL;
    }
    v65 = v13;
    v66 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v54, v15);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 16LL) + 200LL) == 4 )
      goto LABEL_23;
    v52 = (DXGPUSHLOCK *)(v10 + 26);
    if ( v10 != (struct _KTHREAD **)-208LL && v10[27] == KeGetCurrentThread() )
    {
      v37 = WdLogNewEntry5_WdAssertion(v10 + 26, v18);
      *(_QWORD *)(v37 + 24) = 1569LL;
      WdLogEvent5_WdAssertion(v37);
    }
    DXGPUSHLOCK::AcquireExclusive(v52);
    v53 = 2;
    v19 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *((_DWORD *)v10 + 64) )
    {
      v20 = v10[30];
      v21 = *((_DWORD *)v20 + 4 * v19 + 2);
      if ( (((unsigned int)v3 >> 25) & 0x60) == (*((_BYTE *)v20 + 16 * v19 + 8) & 0x60)
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) != 0 )
      {
        v22 = v21 & 0x1F;
        if ( (_BYTE)v22 == 5 )
        {
          v23 = *((_QWORD *)v20 + 2 * (unsigned int)v19);
          if ( v23 )
            *((_DWORD *)v20 + 4 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          goto LABEL_20;
        }
        v38 = WdLogNewEntry5_WdError(0x2000LL, v22);
        *(_QWORD *)(v38 + 24) = 267LL;
        WdLogEvent5_WdError(v38);
      }
    }
    v23 = 0LL;
LABEL_20:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v51);
    if ( !v23 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v40 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
      v39[4] = v41;
      v39[3] = v40;
      v39[5] = v3;
      WdLogEvent5_WdError(v39);
      v27 = -1073741811;
      goto LABEL_24;
    }
    v26 = *((unsigned int *)v41 + 144);
    if ( (_DWORD)v26 == 4 )
      DxgkDestroyClientAllocation(v26, v41, 0LL, 0LL, *(_QWORD *)(v23 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v41,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v23 + 40),
        (struct COREDEVICEACCESS *)v54,
        DXGDEVICE::DestroyFlagsDefault);
LABEL_23:
    v27 = 0;
LABEL_24:
    v28 = v62;
    if ( v62 )
    {
      if ( v63 )
      {
        COREACCESS::Release((COREACCESS *)v60);
        v28 = v62;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v28 + 2), v28);
    }
    v29 = v57;
    if ( v57 )
    {
      if ( v58 )
      {
        COREACCESS::Release((COREACCESS *)v55);
        v29 = v57;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v29 + 2), v29);
    }
    if ( v48 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
    if ( v50 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v49 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_38;
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
  v27 = -1073741811;
  v36[3] = -1073741811LL;
  v36[4] = v4;
  v36[5] = v10;
  WdLogEvent5_WdError(v36);
LABEL_38:
  if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
LABEL_41:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v18);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v43);
  return v27;
}
