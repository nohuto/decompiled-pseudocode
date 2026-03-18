/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C02F9600
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C039BE90 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGADAPTER *Current; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int *v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int active; // ebx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // sf
  struct DXGADAPTER *v29; // rsi
  size_t v30; // r12
  char *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  bool v34; // [rsp+28h] [rbp-190h]
  int v35; // [rsp+50h] [rbp-168h] BYREF
  __int64 v36; // [rsp+58h] [rbp-160h]
  char v37; // [rsp+60h] [rbp-158h]
  DXGADAPTER *v38; // [rsp+68h] [rbp-150h] BYREF
  struct DXGADAPTER *v39[3]; // [rsp+78h] [rbp-140h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-128h]
  size_t Size; // [rsp+A0h] [rbp-118h]
  _QWORD v42[10]; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v43[144]; // [rsp+100h] [rbp-B8h] BYREF

  memset(v42, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v42[1]);
  v42[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v42[3]) = 44;
  LOBYTE(v42[6]) = -1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2037);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2037);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v39[1] = Current;
  if ( Current )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)a1;
    Size = *(_QWORD *)(a1 + 16);
    v39[0] = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)&v38,
      (unsigned int)Src[0],
      (struct _KTHREAD **)Current,
      v39,
      1);
    v19 = (int *)v39[0];
    if ( !v39[0] )
    {
      v20 = LODWORD(Src[0]);
      WdLogSingleEntry3(2LL, -1073741811LL, Current, LODWORD(Src[0]));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Status=0x%I64x DXGPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
        -1073741811LL,
        (__int64)Current,
        v20,
        0LL,
        0LL);
      goto LABEL_25;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v39[0], 0LL);
    active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43, 0LL);
    if ( (active & 0x80000000) != 0 )
      goto LABEL_12;
    if ( v19[673] > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21) + 24) = v19;
LABEL_24:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
LABEL_25:
      if ( v38 )
        DXGADAPTER::ReleaseReference(v38);
      goto LABEL_27;
    }
    v29 = 0LL;
    v30 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v31 = (char *)Src[1];
      if ( !Src[1] )
      {
        WdLogSingleEntry1(2LL, 6704LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver data size is not zero for a NULL driver data buffer.",
          6704LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_24;
      }
      v29 = (struct DXGADAPTER *)operator new[]((unsigned int)Size, 0x4B677844u, 256LL, v24);
      v39[2] = v29;
      if ( !v29 )
      {
        active = -1073741801;
        WdLogSingleEntry1(3LL, -1073741801LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
        if ( v38 )
          DXGADAPTER::ReleaseReference(v38);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( !v37 )
          return active;
        LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v27 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        goto LABEL_16;
      }
      if ( &v31[v30] < v31 || (unsigned __int64)&v31[v30] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v29, v31, v30);
    }
    active = DmmInvalidateActiveVidPn(
               (DXGADAPTER *)v19,
               DXGK_AVIR_USERMODE,
               v29,
               v30,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v42,
               v34);
    operator delete[](v29);
LABEL_12:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    if ( v38 )
      DXGADAPTER::ReleaseReference(v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( !v37 )
      return active;
    v27 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_16:
    if ( v27 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v35);
    return active;
  }
  CurrentProcess = PsGetCurrentProcess(v9, v8, v11, v12);
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  v18 = PsGetCurrentProcess(v15, v14, v16, v17);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x 0x%I64x encountered exception",
    -1073741811LL,
    v18,
    0LL,
    0LL,
    0LL);
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v35);
  }
  return 3221225485LL;
}
