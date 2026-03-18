/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C0134280
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0008728 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0011C70 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0011E48 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0038F54 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01344BC (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C020EEC8 (-GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
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
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // rsi
  char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  unsigned int CddShadowPitch; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  ADAPTER_DISPLAY *v45; // rcx
  void *DoDCddShadowSection; // rax
  unsigned __int64 v47; // rcx
  unsigned int v48; // [rsp+30h] [rbp-D0h] BYREF
  int v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h]
  char v51; // [rsp+48h] [rbp-B8h]
  unsigned int *v52; // [rsp+50h] [rbp-B0h]
  struct _CDDDXGK_INTERFACE *v53; // [rsp+58h] [rbp-A8h]
  _BYTE v54[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v55[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v56[88]; // [rsp+A8h] [rbp-58h] BYREF

  v49 = -1;
  v50 = 0LL;
  v53 = a3;
  v10 = (unsigned int)a1;
  v52 = a8;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3002);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 3002LL);
  if ( (a2 & 0x40000000) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v37 + 24) = 450LL;
    WdLogEvent5_WdAssertion(v37);
    LODWORD(v30) = -1073741637;
    goto LABEL_21;
  }
  Current = DXGPROCESS::GetCurrent(v12, v11);
  v16 = Current;
  if ( !Current )
  {
    LODWORD(v30) = -1073741811;
    v38 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    *(_QWORD *)(v38 + 32) = PsGetCurrentProcess(v40, v39);
    v41 = (_QWORD *)v38;
LABEL_28:
    WdLogEvent5_WdError(v41);
    goto LABEL_21;
  }
  v17 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v18 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *((_DWORD *)v16 + 64) )
  {
    v19 = *((_QWORD *)v16 + 30);
    v20 = *(_DWORD *)(v19 + 16 * v18 + 8);
    if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
      && (v20 & 0x2000) == 0
      && (v20 & 0x1F) != 0 )
    {
      v21 = v20 & 0x1F;
      if ( (_BYTE)v21 == 3 )
      {
        v22 = *(_QWORD *)(v19 + 16LL * (unsigned int)v18);
        goto LABEL_13;
      }
      v23 = WdLogNewEntry5_WdError(((unsigned int)v10 >> 25) & 0x60, v21);
      *(_QWORD *)(v23 + 24) = 267LL;
      WdLogEvent5_WdError(v23);
    }
  }
  v22 = 0LL;
LABEL_13:
  ExReleasePushLockSharedEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( !v22 )
  {
    LODWORD(v30) = -1073741811;
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v41[3] = -1073741811LL;
    v41[4] = v10;
    v41[5] = v16;
    goto LABEL_28;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, v22, 1, v26, 0);
  v27 = COREDEVICEACCESS::AcquireExclusive((__int64)v54, 2LL);
  v30 = v27;
  if ( v27 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v29, v28);
    v42[3] = v30;
    v42[4] = v22;
    v42[5] = v16;
    WdLogEvent5_WdEvent(v42);
  }
  else
  {
    v30 = *(_QWORD *)(v22 + 1848);
    if ( v30 && *(_QWORD *)(v30 + 2672) )
    {
      v31 = *(_QWORD *)(v22 + 1848);
    }
    else
    {
      v43 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v43 + 24) = 486LL;
      WdLogEvent5_WdAssertion(v43);
      v31 = *(_QWORD *)(v22 + 1848);
    }
    if ( v31 != *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) && !*a6 && (*(_BYTE *)(v22 + 1869) & 1) == 0 )
    {
      if ( !a7 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v31, v28);
        *(_QWORD *)(v44 + 24) = 504LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( ADAPTER_DISPLAY::IsIdenticalMode(*(ADAPTER_DISPLAY **)(v30 + 2672), a4) )
      {
        v45 = *(ADAPTER_DISPLAY **)(v30 + 2672);
        v48 = 0;
        DoDCddShadowSection = ADAPTER_DISPLAY::GetDoDCddShadowSection(v45, a4, &v48);
        v47 = v48;
        if ( *a7 > v48 )
        {
          if ( DoDCddShadowSection )
            ObfDereferenceObject(DoDCddShadowSection);
        }
        else
        {
          *a6 = DoDCddShadowSection;
          *a7 = v47;
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v30 + 2672), a4);
    *v52 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v30 + 2672), a4, 1u);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v30 + 2672), a4, v53);
    LODWORD(v30) = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v56);
  COREACCESS::~COREACCESS((COREACCESS *)v55);
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v33);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v49);
  return (unsigned int)v30;
}
