/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1C016EEC4
 * Callers:
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C001D318 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C001D444 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C006621C (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C001D518 (-GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C001D544 (-GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r14d
  __int64 v23; // rdx
  int v24; // r12d
  unsigned int v25; // edi
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v30; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // r11
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+5Ch] [rbp-A4h]
  __int64 v52; // [rsp+68h] [rbp-98h]
  int v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  _DWORD *v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  int v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  char v61; // [rsp+B0h] [rbp-50h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v63[144]; // [rsp+C0h] [rbp-40h] BYREF

  v59 = -1;
  v60 = 0LL;
  *a8 = 0;
  v54 = a7;
  v53 = a4;
  v57 = a3;
  v58 = a2;
  v56 = a8;
  v55 = a9;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2094;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a9, &EventProfilerEnter, a3, 2094);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 2094LL);
  HandleInformation = 0LL;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v14 = v10;
  if ( v10 == -1073741788 )
  {
    v42 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v42 + 32) = -1073741788LL;
LABEL_30:
    *(_QWORD *)(v42 + 24) = Handle;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_21;
  }
  if ( v10 < 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v42 + 32) = v14;
    goto LABEL_30;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 80LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, (struct DXGADAPTER *const)v15, 0LL);
  if ( *(_QWORD *)(v15 + 2696) == v17 )
  {
    LODWORD(v14) = -1073741823;
  }
  else
  {
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
    v14 = v18;
    if ( v18 < 0 )
    {
      v43 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v43 + 24) = v15;
      *(_QWORD *)(v43 + 32) = v14;
      WdLogEvent5_WdWarning(v43);
    }
    else
    {
      v22 = 0;
      v23 = v54;
      v24 = 0;
      v50 = a6;
      v25 = a6;
      v52 = v54;
      v51 = 0LL;
      if ( a6 )
      {
        do
        {
          if ( (v25 & 1) != 0 )
            break;
          ++v22;
          v25 >>= 1;
        }
        while ( v25 );
        v50 = v25;
        LODWORD(v51) = v22;
      }
      while ( v25 )
      {
        v26 = *(_DWORD *)(*(_QWORD *)(v15 + 2696) + 80LL);
        if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
                             (DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v50,
                             v23) >= v26 )
        {
          LODWORD(v14) = -1073741811;
          v48 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
          v48[3] = -1073741811LL;
LABEL_39:
          v47 = v48;
          goto LABEL_40;
        }
        v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 80LL) + 16LL) + 2536LL);
        if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex(
                             (DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v50,
                             v27) >= v29 )
        {
          LODWORD(v14) = -1073741811;
          v44 = (_QWORD *)WdLogNewEntry5_WdError(v30, v23);
          v44[3] = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex(
                                   (DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v50,
                                   v45);
          v44[4] = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
                                   (DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v50,
                                   v46);
          v47 = v44;
          v44[5] = a6;
          v44[6] = -1073741811LL;
LABEL_40:
          WdLogEvent5_WdError(v47);
          goto LABEL_20;
        }
        v25 >>= 1;
        v50 = v25;
        if ( v25 )
        {
          do
          {
            if ( (v25 & 1) != 0 )
              break;
            ++v22;
            v25 >>= 1;
          }
          while ( v25 );
          v50 = v25;
          LODWORD(v51) = v22;
        }
        HIDWORD(v51) = ++v24;
      }
      v31 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
          + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
      v32 = (v31 & 0xF0F0F0F) + ((v31 >> 4) & 0xF0F0F0F);
      v33 = v32 & 0xFF00FF;
      v34 = (unsigned __int16)((unsigned __int8)v32 + BYTE1(v32))
          + (((unsigned int)v33 + ((v32 >> 8) & 0xFF00FF)) >> 16);
      if ( v34 > 1 && *(int *)(v15 + 2596) < 2400 )
      {
        LODWORD(v14) = -1073741811;
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v33, 16711935LL);
        v48[3] = v34;
        v48[4] = a6;
        v48[5] = -1073741811LL;
        goto LABEL_39;
      }
      v35 = *(_QWORD *)(v15 + 2704);
      v36 = *(_QWORD *)(v35 + 624);
      v37 = *(_QWORD *)(*(_QWORD *)(v35 + 616) + 8LL);
      if ( v53 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, int, _DWORD *, __int64))(v37 + 392))(
          v36,
          a6,
          v58,
          v57,
          v54,
          a5,
          v56,
          v55);
      else
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, int, char, _DWORD *, __int64))(v37 + 400))(
          v36,
          a6,
          v58,
          v57,
          v54,
          a5,
          1,
          v56,
          v55);
    }
  }
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, v16);
LABEL_21:
  if ( Object )
    ObfDereferenceObject(Object);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v38);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v59);
  return (unsigned int)v14;
}
