/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C011FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01187B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12,
        _QWORD *a13,
        _DWORD *a14)
{
  char v14; // bl
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD **v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGDEVICE *v25; // r14
  char *v26; // rdi
  struct _KEVENT *v27; // rsi
  struct _ERESOURCE *v28; // rcx
  __int64 v29; // rax
  volatile signed __int64 *v30; // rcx
  volatile signed __int64 *v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r8
  _QWORD *v38; // rcx
  int v39; // eax
  int v40; // ebx
  int v41; // ebx
  int v42; // eax
  unsigned int v43; // ebx
  unsigned int v44; // edi
  struct DXGADAPTER *v45; // rcx
  struct DXGADAPTER *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v51; // eax
  __int64 v52; // rcx
  unsigned __int8 v53; // si
  __int64 v54; // r8
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  int v60; // eax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  struct DXGDEVICE *v69; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v70; // [rsp+40h] [rbp-C0h]
  PERESOURCE *v71; // [rsp+48h] [rbp-B8h]
  struct DXGDEVICE *v72; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+60h] [rbp-A0h]
  char v75; // [rsp+68h] [rbp-98h]
  __int64 v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  __int64 v78; // [rsp+80h] [rbp-80h]
  _QWORD *v79; // [rsp+88h] [rbp-78h]
  _DWORD *v80; // [rsp+90h] [rbp-70h]
  _BYTE v81[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-60h]
  char v83; // [rsp+A8h] [rbp-58h]
  _QWORD v84[54]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v85[3]; // [rsp+260h] [rbp+160h] BYREF
  int v86; // [rsp+26Ch] [rbp+16Ch]
  _DWORD v87[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v88; // [rsp+280h] [rbp+180h]
  _DWORD v89[6]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v90[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v91[8]; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v92; // [rsp+2B0h] [rbp+1B0h]
  struct DXGADAPTER *v93; // [rsp+2B8h] [rbp+1B8h]
  char v94; // [rsp+2C0h] [rbp+1C0h]
  __int64 v95; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v96[8]; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v97; // [rsp+2F0h] [rbp+1F0h]
  struct DXGADAPTER *v98; // [rsp+2F8h] [rbp+1F8h]
  char v99; // [rsp+300h] [rbp+200h]
  __int64 v100; // [rsp+308h] [rbp+208h]
  struct DXGDEVICE *v101; // [rsp+328h] [rbp+228h]
  char v102; // [rsp+330h] [rbp+230h]

  v14 = a3;
  v73 = -1;
  v74 = 0LL;
  v77 = a7;
  v78 = a8;
  v76 = a9;
  v70 = a11;
  v80 = a12;
  v79 = a13;
  v16 = (unsigned int)a1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v75 = 1;
    v73 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3017);
  }
  else
  {
    v75 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v73, 3017LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v18, v17);
  v22 = Current;
  if ( !Current )
  {
    v44 = -1073741811;
    v55 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v55 + 24) = -1073741811LL;
    *(_QWORD *)(v55 + 32) = PsGetCurrentProcess(v57, v56);
    WdLogEvent5_WdError(v55);
    goto LABEL_43;
  }
  v69 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v72, (unsigned int)v16, Current, &v69);
  v25 = v69;
  if ( v69 )
  {
    v26 = (char *)v69 + 16;
    v27 = (struct _KEVENT *)*((_QWORD *)v69 + 2);
    if ( !KeReadStateEvent(v27 + 5) )
      KeWaitForSingleObject(&v27[5], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    v28 = (struct _ERESOURCE *)*((_QWORD *)v25 + 17);
    v71 = (PERESOURCE *)((char *)v25 + 136);
    if ( !ExAcquireResourceExclusiveLite(v28, 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)v26 + 16LL) + 104LL));
      v53 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v26 + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v52, &EventBlockThread, v54, 40);
      ExAcquireResourceExclusiveLite(*v71, 1u);
      if ( v53 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v26 + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)v26 + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v29 = *(_QWORD *)v26;
    v83 = 0;
    v82 = *(_QWORD *)(v29 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    v30 = *(volatile signed __int64 **)(*(_QWORD *)v26 + 16LL);
    v93 = (struct DXGADAPTER *)v30;
    v94 = 0;
    v95 = 0LL;
    if ( v30 )
    {
      _InterlockedIncrement64(v30 + 3);
      v92 = -1LL;
      v25 = v69;
    }
    v31 = *(volatile signed __int64 **)(*(_QWORD *)v26 + 16LL);
    v98 = (struct DXGADAPTER *)v31;
    v99 = 0;
    v100 = 0LL;
    if ( v31 )
    {
      _InterlockedIncrement64(v31 + 3);
      v97 = -1LL;
      v25 = v69;
    }
    v101 = v25;
    v102 = 0;
    v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v90, 0LL);
    v35 = v32;
    if ( v32 < 0 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v34, v33);
      v59[3] = v35;
      v59[4] = v25;
      v59[5] = v22;
      WdLogEvent5_WdEvent(v59);
LABEL_90:
      v44 = v35;
LABEL_27:
      v45 = v98;
      if ( v98 )
      {
        if ( v99 )
        {
          COREACCESS::Release((COREACCESS *)v96);
          v45 = v98;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v45 + 2), v45);
      }
      v46 = v93;
      if ( v93 )
      {
        if ( v94 )
        {
          COREACCESS::Release((COREACCESS *)v91);
          v46 = v93;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v46 + 2), v46);
      }
      if ( v83 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
      ExReleaseResourceLite(*v71);
      KeLeaveCriticalRegion();
      goto LABEL_40;
    }
    memset(v84, 0, 0x1A8uLL);
    v84[39] = v76;
    LODWORD(v84[40]) = a10;
    v38 = *(_QWORD **)(*(_QWORD *)v26 + 16LL);
    v39 = *((_DWORD *)v38 + 505);
    if ( (v39 & 4) == 0 && ((v39 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_77:
        v89[3] = 0;
        v43 = a4;
        v84[3] = v89;
        v89[0] = a4;
        v89[1] = a5;
        v89[2] = a2;
        LODWORD(v84[2]) = 2;
        LODWORD(v35) = DXGDEVICE::CreateStandardAllocation(
                         v25,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v84,
                         (struct COREDEVICEACCESS *)v90);
        goto LABEL_23;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_77;
LABEL_22:
        v43 = a4;
        goto LABEL_23;
      }
      v43 = a4;
      v86 = 0;
      LODWORD(v84[0]) |= 2u;
      v84[3] = v85;
      v85[0] = a4;
      v85[1] = a5;
      v85[2] = a2;
      LODWORD(v84[2]) = 2;
      LODWORD(v35) = DXGDEVICE::CreateStandardAllocation(
                       v25,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v84,
                       (struct COREDEVICEACCESS *)v90);
      if ( (int)v35 >= 0 )
      {
        v60 = v86;
        if ( !v86 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v38, v36);
          *(_QWORD *)(v61 + 24) = 1097LL;
          WdLogEvent5_WdAssertion(v61);
          v60 = v86;
        }
        *a14 = v60;
LABEL_23:
        if ( (int)v35 >= 0 )
        {
          if ( !LODWORD(v84[1]) )
          {
            v66 = WdLogNewEntry5_WdAssertion(v38, v36);
            *(_QWORD *)(v66 + 24) = 1114LL;
            WdLogEvent5_WdAssertion(v66);
          }
          v44 = 0;
          *v70 = HIDWORD(v84[6]);
          goto LABEL_27;
        }
      }
LABEL_89:
      v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v36, v37);
      v67[3] = (int)v35;
      v67[5] = v43;
      v67[4] = v25;
      v67[6] = a5;
      WdLogEvent5_WdWarning(v67);
      goto LABEL_90;
    }
    v88 = 0LL;
    v87[0] = a4;
    v40 = LODWORD(v84[0]) ^ (LOBYTE(v84[0]) ^ (unsigned __int8)(8 * v14)) & 0x18;
    v87[1] = a5;
    v87[2] = a2;
    v87[3] = a6;
    LODWORD(v84[2]) = 4;
    v84[3] = v87;
    LODWORD(v84[0]) = v40;
    switch ( a6 )
    {
      case 1:
        goto LABEL_15;
      case 2:
        v41 = v40 | 2;
        break;
      case 5:
        v41 = v40 | 4;
        v84[4] = v77;
        v84[5] = v78;
        break;
      case 6:
LABEL_15:
        v41 = v40 | 1;
        break;
      default:
        if ( a6 <= 6 || a6 > 8 )
        {
LABEL_17:
          LODWORD(v35) = DXGDEVICE::CreateStandardAllocation(
                           v25,
                           (struct _D3DKM_CREATESTANDARDALLOCATION *)v84,
                           (struct COREDEVICEACCESS *)v90);
          if ( (int)v35 < 0 )
          {
            v43 = a4;
            goto LABEL_89;
          }
          if ( a6 == 1 )
          {
LABEL_19:
            v42 = HIDWORD(v84[1]);
            if ( !HIDWORD(v84[1]) )
            {
              v65 = WdLogNewEntry5_WdAssertion(v38, v36);
              *(_QWORD *)(v65 + 24) = 1052LL;
              WdLogEvent5_WdAssertion(v65);
              v42 = HIDWORD(v84[1]);
            }
            v38 = v80;
            *v80 = v42;
            goto LABEL_22;
          }
          if ( a6 == 2 || a6 == 5 )
          {
            v51 = HIDWORD(v88);
            if ( !HIDWORD(v88) )
            {
              v64 = WdLogNewEntry5_WdAssertion(v38, v36);
              *(_QWORD *)(v64 + 24) = 1057LL;
              WdLogEvent5_WdAssertion(v64);
              v51 = HIDWORD(v88);
            }
            *a14 = v51;
            goto LABEL_22;
          }
          if ( a6 != 6 )
          {
            if ( a6 == 7 )
              goto LABEL_19;
            if ( a6 != 8 )
              goto LABEL_22;
          }
          v38 = v79;
          *v79 = v84[41];
          v62 = HIDWORD(v88);
          if ( !HIDWORD(v88) )
          {
            v63 = WdLogNewEntry5_WdAssertion(v38, v36);
            *(_QWORD *)(v63 + 24) = 1045LL;
            WdLogEvent5_WdAssertion(v63);
            v62 = HIDWORD(v88);
          }
          *a14 = v62;
          goto LABEL_19;
        }
        v41 = v40 | 0x21;
        break;
    }
    LODWORD(v84[0]) = v41;
    goto LABEL_17;
  }
  v58 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
  v44 = -1073741811;
  v58[3] = -1073741811LL;
  v58[4] = v16;
  v58[5] = v22;
  WdLogEvent5_WdError(v58);
LABEL_40:
  if ( v72 && _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73, v47);
  if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v73);
  return v44;
}
