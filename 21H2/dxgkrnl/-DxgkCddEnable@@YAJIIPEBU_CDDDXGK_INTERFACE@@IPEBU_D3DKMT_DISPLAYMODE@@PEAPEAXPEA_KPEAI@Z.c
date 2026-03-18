/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C01C7390
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0013A70 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00145E8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0045804 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C7600 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C02C0DCC (-GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  char *v21; // r12
  int v22; // esi
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rbx
  __int64 v27; // r9
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rdi
  __int64 v31; // rcx
  unsigned int CddShadowPitch; // eax
  unsigned int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // r14
  const wchar_t *v38; // r12
  __int64 v39; // r15
  __int64 CurrentProcess; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // r12
  ADAPTER_DISPLAY *v46; // rcx
  void *DoDCddShadowSection; // rax
  unsigned __int64 v48; // rcx
  unsigned int v49[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h]
  char v52; // [rsp+68h] [rbp-98h]
  unsigned int *v53; // [rsp+70h] [rbp-90h]
  struct _CDDDXGK_INTERFACE *v54; // [rsp+78h] [rbp-88h]
  _BYTE v55[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v56[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v57[88]; // [rsp+C8h] [rbp-38h] BYREF

  v50 = -1;
  v51 = 0LL;
  *(_QWORD *)v49 = a6;
  v53 = a8;
  v54 = a3;
  v10 = (unsigned int)a1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v52 = 1;
    v50 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3002);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    v37 = 450LL;
    WdLogSingleEntry1(1LL, 450LL);
    v38 = L"(OLD_MODE_CHANGE & Win32kCommand) == 0";
    v39 = 0LL;
    v33 = -1073741637;
    v22 = 262146;
LABEL_26:
    v20 = 0LL;
LABEL_31:
    DxgkLogInternalTriageEvent(0LL, v22, -1, (__int64)v38, v37, v39, v20, 0LL, 0LL);
    goto LABEL_18;
  }
  Current = DXGPROCESS::GetCurrent(v12, v11, v13, v14);
  v20 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v17, v16, v18, v19);
    v33 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v22 = 0x40000;
    v38 = L"0x%I64x Unexpected process 0x%I64x";
    v37 = -1073741811LL;
    v39 = PsGetCurrentProcess(v42, v41, v43, v44);
    goto LABEL_26;
  }
  v21 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v22 = 0x40000;
  v23 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v23 >= *(_DWORD *)(v20 + 296) )
    goto LABEL_9;
  v24 = *(_QWORD *)(v20 + 280);
  v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
  if ( (((unsigned int)v10 >> 25) & 0x60) != (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
    || (v25 & 0x2000) != 0
    || (v25 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  if ( (v25 & 0x1F) != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v26 = 0LL;
    goto LABEL_10;
  }
  v26 = *(_QWORD *)(v24 + 16LL * (unsigned int)v23);
LABEL_10:
  ExReleasePushLockSharedEx(v21, 0LL);
  KeLeaveCriticalRegion();
  if ( !v26 )
  {
    v33 = -1073741811;
    v39 = v10;
    WdLogSingleEntry3(2LL, -1073741811LL, v10, v20);
    v38 = L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x";
    v37 = -1073741811LL;
    goto LABEL_31;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, v26, 1, v27, 0);
  v28 = COREDEVICEACCESS::AcquireExclusive((__int64)v55, 2u);
  v29 = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry3(4LL, v28, v26, v20);
    v33 = v29;
  }
  else
  {
    v30 = *(_QWORD *)(v26 + 1848);
    if ( v30 && *(_QWORD *)(v30 + 2792) )
    {
      v31 = *(_QWORD *)(v26 + 1848);
    }
    else
    {
      WdLogSingleEntry1(1LL, 486LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
        486LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v31 = *(_QWORD *)(v26 + 1848);
    }
    if ( v31 != *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) )
    {
      v45 = *(_QWORD **)v49;
      if ( !**(_QWORD **)v49 && (*(_BYTE *)(v26 + 1869) & 1) == 0 )
      {
        if ( !a7 )
        {
          WdLogSingleEntry1(1LL, 504LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ppDoDShadowSession != NULL) && (pDoDShadowSize != NULL)",
            504LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( ADAPTER_DISPLAY::IsIdenticalMode(*(ADAPTER_DISPLAY **)(v30 + 2792), a4) )
        {
          v46 = *(ADAPTER_DISPLAY **)(v30 + 2792);
          v49[0] = 0;
          DoDCddShadowSection = ADAPTER_DISPLAY::GetDoDCddShadowSection(v46, a4, v49);
          v48 = v49[0];
          if ( *a7 > v49[0] )
          {
            if ( DoDCddShadowSection )
              ObfDereferenceObject(DoDCddShadowSection);
          }
          else
          {
            *v45 = DoDCddShadowSection;
            *a7 = v48;
          }
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v30 + 2792), a4);
    *v53 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v30 + 2792), a4, 1u);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v30 + 2792), a4, v54);
    v33 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v57);
  COREACCESS::~COREACCESS((COREACCESS *)v56);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v52 )
  {
    LOBYTE(v34) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v50);
  }
  return v33;
}
