/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0166968
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C0166840 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C0166B80 (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(__int64 a1, unsigned int a2, __int64 a3, struct _KEVENT **a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rdi
  struct DXGDEVICE *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KTHREAD **v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // rsi
  struct DXGDEVICE *v19; // rdi
  int PairingAdapters; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  struct DXGADAPTER *v25; // r15
  ADAPTER_DISPLAY **v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  struct DXGDEVICE *v46; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v47; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGDEVICE *v48; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v49; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v50; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT **v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h]
  char v54; // [rsp+80h] [rbp-80h]
  unsigned __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  DXGADAPTER *v57; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v58[144]; // [rsp+B0h] [rbp-50h] BYREF

  v52 = -1;
  v51 = a4;
  v4 = (unsigned int)a3;
  v5 = a2;
  v6 = (unsigned int)a1;
  v53 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2192;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2192);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2192LL);
  v47 = 0LL;
  v7 = 0LL;
  v46 = 0LL;
  Current = DXGPROCESS::GetCurrent(v9, v8);
  v14 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v34 = WdLogNewEntry5_WdError(v12, v11);
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    goto LABEL_23;
  }
  if ( !*((_BYTE *)Current + 346) )
  {
    v35 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    LODWORD(v24) = -1073741790;
    *(_QWORD *)(v35 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v35);
    goto LABEL_23;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v57,
    (unsigned int)v6,
    (struct _KTHREAD **)Current,
    &v47,
    1);
  v18 = v47;
  if ( v47 )
  {
    v19 = 0LL;
    if ( (_DWORD)v5 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, (unsigned int)v5, v14, &v46);
      if ( !v46 )
      {
        v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        *(_QWORD *)(v40 + 24) = v18;
        *(_QWORD *)(v40 + 32) = v5;
        WdLogEvent5_WdWarning(v40);
        if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
        LODWORD(v24) = -1073741811;
        goto LABEL_21;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v46 + 8);
      v7 = v46;
      v19 = v46;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
        v7 = v46;
      }
      v18 = v47;
    }
    v49 = 0LL;
    v50 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v18, (unsigned int)v4, &v49, &v55, &v50, &v56, 0);
    v24 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v41[3] = v18;
      v41[4] = v4;
      v41[5] = v24;
    }
    else
    {
      v25 = v49;
      v26 = (ADAPTER_DISPLAY **)v50;
      if ( !v49 || !v50 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v22, v21);
        *(_QWORD *)(v42 + 24) = 6329LL;
        WdLogEvent5_WdAssertion(v42);
      }
      if ( (unsigned int)v4 < *((_DWORD *)v26[337] + 20) )
      {
        if ( !v19
          || v25 == *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL) && v26 == *((ADAPTER_DISPLAY ***)v7 + 231) )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v58, v25, (struct DXGADAPTER *const)v26);
          DXGADAPTER::ReleaseReference(v25);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v26);
          v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v58, 0LL);
          if ( v29 >= 0 )
          {
            if ( !*((_QWORD *)v25 + 338) )
            {
              v44 = WdLogNewEntry5_WdAssertion(v28, v27);
              *(_QWORD *)(v44 + 24) = 6364LL;
              WdLogEvent5_WdAssertion(v44);
            }
            if ( !v26[337] )
            {
              v45 = WdLogNewEntry5_WdAssertion(v28, v27);
              *(_QWORD *)(v45 + 24) = 6365LL;
              WdLogEvent5_WdAssertion(v45);
            }
            if ( !(_DWORD)v5 || *((_DWORD *)v7 + 144) == 1 )
            {
              ADAPTER_DISPLAY::GetVBlankEvent(v26[337], v4, v51);
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v58);
            }
            else
            {
              v29 = -1073741130;
            }
          }
          LODWORD(v24) = v29;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58, v27);
        }
        else
        {
          v43 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v43 + 24) = v18;
          *(_QWORD *)(v43 + 32) = v5;
          WdLogEvent5_WdWarning(v43);
          LODWORD(v24) = -1073741811;
        }
        goto LABEL_20;
      }
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      LODWORD(v24) = -1073741811;
      v41[3] = v4;
      v41[4] = -1073741811LL;
    }
    WdLogEvent5_WdError(v41);
LABEL_20:
    if ( v19 && _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v19 + 2), v19);
    goto LABEL_21;
  }
  v36 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  LODWORD(v24) = -1073741811;
  *(_QWORD *)(v36 + 24) = v6;
  *(_QWORD *)(v36 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v36);
LABEL_21:
  if ( v57 )
    DXGADAPTER::ReleaseReference(v57);
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v30);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v52);
  return (unsigned int)v24;
}
