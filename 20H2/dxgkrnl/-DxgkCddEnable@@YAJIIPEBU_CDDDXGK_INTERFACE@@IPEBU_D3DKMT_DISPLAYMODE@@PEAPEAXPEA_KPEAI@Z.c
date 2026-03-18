/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00DEDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0001D04 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0001D88 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000B94C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0039D24 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00DECC4 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C0211F68 (-GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
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
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  ADAPTER_DISPLAY *v43; // rcx
  void *DoDCddShadowSection; // rax
  unsigned __int64 v45; // rcx
  unsigned int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h]
  char v49; // [rsp+48h] [rbp-B8h]
  unsigned int *v50; // [rsp+50h] [rbp-B0h]
  struct _CDDDXGK_INTERFACE *v51; // [rsp+58h] [rbp-A8h]
  _BYTE v52[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v53[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v54[88]; // [rsp+A8h] [rbp-58h] BYREF

  v47 = -1;
  v48 = 0LL;
  v51 = a3;
  v10 = (unsigned int)a1;
  v50 = a8;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3002);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 3002LL);
  if ( (a2 & 0x40000000) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v37 + 24) = 450LL;
    WdLogEvent5_WdAssertion(v37);
    LODWORD(v30) = -1073741637;
    goto LABEL_21;
  }
  Current = DXGPROCESS::GetCurrent();
  v16 = Current;
  if ( !Current )
  {
    LODWORD(v30) = -1073741811;
    v38 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    *(_QWORD *)(v38 + 32) = PsGetCurrentProcess();
    v39 = (_QWORD *)v38;
LABEL_28:
    WdLogEvent5_WdError(v39);
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
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v39[3] = -1073741811LL;
    v39[4] = v10;
    v39[5] = v16;
    goto LABEL_28;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, v22, 1, v26, 0);
  v27 = COREDEVICEACCESS::AcquireExclusive((__int64)v52, 2u);
  v30 = v27;
  if ( v27 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v40[3] = v30;
    v40[4] = v22;
    v40[5] = v16;
    WdLogEvent5_WdEvent(v40);
  }
  else
  {
    v30 = *(_QWORD *)(v22 + 1848);
    if ( v30 && *(_QWORD *)(v30 + 2696) )
    {
      v31 = *(_QWORD *)(v22 + 1848);
    }
    else
    {
      v41 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v41 + 24) = 486LL;
      WdLogEvent5_WdAssertion(v41);
      v31 = *(_QWORD *)(v22 + 1848);
    }
    if ( v31 != *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) && !*a6 && (*(_BYTE *)(v22 + 1869) & 1) == 0 )
    {
      if ( !a7 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v31, v28);
        *(_QWORD *)(v42 + 24) = 504LL;
        WdLogEvent5_WdAssertion(v42);
      }
      if ( ADAPTER_DISPLAY::IsIdenticalMode(*(ADAPTER_DISPLAY **)(v30 + 2696), a4) )
      {
        v43 = *(ADAPTER_DISPLAY **)(v30 + 2696);
        v46 = 0;
        DoDCddShadowSection = ADAPTER_DISPLAY::GetDoDCddShadowSection(v43, a4, &v46);
        v45 = v46;
        if ( *a7 > v46 )
        {
          if ( DoDCddShadowSection )
            ObfDereferenceObject(DoDCddShadowSection);
        }
        else
        {
          *a6 = DoDCddShadowSection;
          *a7 = v45;
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v30 + 2696), a4);
    *v50 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v30 + 2696), a4, 1);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v30 + 2696), a4, v51);
    LODWORD(v30) = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v54);
  COREACCESS::~COREACCESS((COREACCESS *)v53);
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v33);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v47);
  return (unsigned int)v30;
}
