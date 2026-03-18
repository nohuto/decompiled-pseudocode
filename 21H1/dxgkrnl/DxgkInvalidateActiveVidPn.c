/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C025AA00
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02D8EB4 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v15; // rsi
  _QWORD *v16; // rax
  DXGADAPTER *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int active; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rdx
  struct DXGADAPTER *v28; // r14
  size_t v29; // r12
  char *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  bool v39; // [rsp+28h] [rbp-170h]
  int v40; // [rsp+30h] [rbp-168h] BYREF
  __int64 v41; // [rsp+38h] [rbp-160h]
  char v42; // [rsp+40h] [rbp-158h]
  DXGADAPTER *v43; // [rsp+48h] [rbp-150h] BYREF
  struct DXGADAPTER *v44[3]; // [rsp+58h] [rbp-140h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-128h]
  size_t Size; // [rsp+80h] [rbp-118h]
  _QWORD v47[10]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v48[144]; // [rsp+E0h] [rbp-B8h] BYREF

  memset(v47, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v47[1]);
  v47[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v47[3]) = 44;
  LOBYTE(v47[6]) = -1;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2037);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2037LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v44[1] = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v9);
    goto LABEL_27;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)a1;
  Size = *(_QWORD *)(a1 + 16);
  v44[0] = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v43,
    LODWORD(Src[0]),
    (struct _KTHREAD **)Current,
    v44,
    1);
  v15 = (int *)v44[0];
  if ( !v44[0] )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v16[3] = -1073741811LL;
    v16[4] = Current;
    v16[5] = LODWORD(Src[0]);
    WdLogEvent5_WdError(v16);
    goto LABEL_12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v44[0], 0LL);
  active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48, 0LL);
  if ( active >= 0 )
  {
    if ( v15[643] > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v21, v22) + 24) = v15;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48, v27);
LABEL_12:
      v17 = v43;
      if ( !v43 )
        goto LABEL_27;
      goto LABEL_26;
    }
    v28 = 0LL;
    v29 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v30 = (char *)Src[1];
      if ( !Src[1] )
      {
        v31 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v31 + 24) = 6486LL;
        WdLogEvent5_WdError(v31);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48, v32);
        v17 = v43;
        if ( !v43 )
        {
LABEL_27:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v12);
          if ( v42 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v40);
          }
          return 3221225485LL;
        }
LABEL_26:
        DXGADAPTER::ReleaseReferenceNoTracking(v17);
        goto LABEL_27;
      }
      v28 = (struct DXGADAPTER *)operator new[]((unsigned int)Size, 0x4B677844u, PagedPool);
      v44[2] = v28;
      if ( !v28 )
      {
        v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
        active = -1073741801;
        *(_QWORD *)(v38 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v38);
        goto LABEL_15;
      }
      if ( &v30[v29] < v30 || (unsigned __int64)&v30[v29] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v30, v29);
    }
    active = DmmInvalidateActiveVidPn(
               (DXGADAPTER *)v15,
               DXGK_AVIR_USERMODE,
               v28,
               v29,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v47,
               v39);
    operator delete[](v28);
  }
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48, v18);
  if ( v43 )
    DXGADAPTER::ReleaseReferenceNoTracking(v43);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v23);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v40);
  return (unsigned int)active;
}
