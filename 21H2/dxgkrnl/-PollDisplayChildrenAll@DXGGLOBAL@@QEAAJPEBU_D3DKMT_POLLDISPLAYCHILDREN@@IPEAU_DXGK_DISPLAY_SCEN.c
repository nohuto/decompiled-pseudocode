/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026A4BC
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C0224D30 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007D38 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C015D6A8 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C015D6E4 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C02C6C3C (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02DC518 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  _BYTE *v4; // r12
  unsigned __int64 *v5; // r13
  __int64 v6; // r15
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r13d
  SIZE_T v12; // rdi
  _BYTE *PoolWithTag; // rax
  SIZE_T v14; // rdi
  _BYTE *v15; // rax
  SIZE_T v16; // rdi
  _BYTE *v17; // rax
  PVOID *v18; // rdi
  SIZE_T v19; // r14
  SIZE_T v20; // rbx
  _BYTE *v21; // rax
  PVOID v22; // rcx
  unsigned __int64 *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 *v25; // r14
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  char *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rbx
  void *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  PVOID *__attribute__((__org_arrdim(0,0))) v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  PVOID *__attribute__((__org_arrdim(0,0))) v50; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v51; // r14
  __int64 v52; // rbx
  PVOID *v53; // r15
  int v54; // eax
  KPROCESSOR_MODE WaitMode; // al
  PVOID *__attribute__((__org_arrdim(0,0))) v56; // r14
  NTSTATUS v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rbx
  __int64 v62; // rax
  signed __int64 v63; // r14
  __int64 v64; // rbx
  unsigned __int64 *v65; // rsi
  unsigned __int64 *v66; // rdi
  unsigned __int64 *v67; // rbx
  signed __int64 v68; // rax
  signed __int64 v69; // rtt
  __int64 v70; // rdx
  unsigned int v71; // ecx
  unsigned __int64 **v72; // rax
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned int v80; // [rsp+40h] [rbp-C0h]
  unsigned int v81; // [rsp+44h] [rbp-BCh]
  char *v84; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v85; // [rsp+60h] [rbp-A0h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v87; // [rsp+70h] [rbp-90h]
  _BYTE v88[16]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v89; // [rsp+88h] [rbp-78h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v90; // [rsp+90h] [rbp-70h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v93; // [rsp+B0h] [rbp-50h]
  _BYTE v94[64]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v95; // [rsp+F8h] [rbp-8h]
  PVOID v96; // [rsp+100h] [rbp+0h]
  _BYTE v97[64]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v98; // [rsp+148h] [rbp+48h]
  PVOID v99; // [rsp+150h] [rbp+50h]
  _BYTE v100[64]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v101; // [rsp+198h] [rbp+98h]
  PVOID P; // [rsp+1A0h] [rbp+A0h]
  _BYTE v103[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v104; // [rsp+1E8h] [rbp+E8h]
  _BYTE v105[144]; // [rsp+1F0h] [rbp+F0h] BYREF
  PVOID v106; // [rsp+280h] [rbp+180h]
  _BYTE v107[384]; // [rsp+288h] [rbp+188h] BYREF
  unsigned int v108; // [rsp+408h] [rbp+308h]
  _BYTE v109[144]; // [rsp+410h] [rbp+310h] BYREF

  v4 = 0LL;
  v5 = (unsigned __int64 *)((char *)this + 664);
  v6 = 0LL;
  v80 = 0;
  v90 = a4;
  v81 = 0;
  v7 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v88, (DXGGLOBAL *)((char *)this + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v88);
  v8 = *v5;
  v87 = v5;
  while ( (unsigned __int64 *)v8 != v5 && v8 )
  {
    v9 = *(_QWORD *)(v8 + 2696);
    v10 = v7 + 1;
    v8 = *(_QWORD *)v8;
    if ( !v9 )
      v10 = v7;
    v7 = v10;
  }
  if ( !v7 )
  {
    v11 = 0;
    goto LABEL_128;
  }
  v99 = 0LL;
  v101 = 0;
  if ( v7 <= 8 )
  {
    PoolWithTag = v100;
    v12 = 8LL * v7;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_15;
    v12 = 8LL * v7;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x4B677844u);
  }
  v99 = PoolWithTag;
  v101 = v7;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v12);
LABEL_15:
  v106 = 0LL;
  v108 = 0;
  if ( v7 <= 8 )
  {
    v14 = 48LL * v7;
    v15 = v107;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x30 )
      goto LABEL_21;
    v14 = 48LL * v7;
    v15 = ExAllocatePoolWithTag((POOL_TYPE)512, v14, 0x4B677844u);
  }
  v106 = v15;
  v108 = v7;
  if ( v15 )
    memset(v15, 0, v14);
LABEL_21:
  v96 = 0LL;
  v98 = 0;
  if ( v7 <= 8 )
  {
    v17 = v97;
    v16 = 8LL * v7;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_27;
    v16 = 8LL * v7;
    v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x4B677844u);
  }
  v96 = v17;
  v98 = v7;
  if ( v17 )
    memset(v17, 0, v16);
LABEL_27:
  v93 = 0LL;
  v18 = 0LL;
  v95 = 0;
  if ( v7 <= 8 )
  {
    v18 = (PVOID *)v94;
    v93 = v94;
    v19 = 8LL * v7;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_33;
    v19 = 8LL * v7;
    v18 = (PVOID *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B677844u);
    v93 = v18;
  }
  v95 = v7;
  if ( v18 )
  {
    memset(v18, 0, v19);
    v18 = (PVOID *)v93;
  }
LABEL_33:
  v104 = 0;
  P = 0LL;
  if ( v7 <= 8 )
  {
    v4 = v103;
    v20 = 8LL * v7;
    P = v103;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_39;
    v20 = 8LL * v7;
    v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x4B677844u);
    v18 = (PVOID *)v93;
    v4 = v21;
    P = v21;
  }
  v104 = v7;
  if ( v4 )
  {
    memset(v4, 0, v20);
    v18 = (PVOID *)v93;
    v4 = P;
  }
LABEL_39:
  v22 = v106;
  Object = (PVOID *)v99;
  WaitBlockArray = (PKWAIT_BLOCK)v106;
  v85 = v96;
  if ( v96 && v18 && v99 && v106 && v4 )
  {
    v23 = (unsigned __int64 *)*v5;
    while ( v23 != v5 && v23 )
    {
      if ( (unsigned int)v6 >= v7 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22, v8);
        *(_QWORD *)(v24 + 24) = 3510LL;
        WdLogEvent5_WdAssertion(v24);
      }
      v25 = v23;
      v23 = (unsigned __int64 *)*v23;
      v89 = v23;
      _m_prefetchw(v25 + 3);
      v26 = v25[3];
      while ( v26 )
      {
        v22 = (PVOID)(v26 + 1);
        v27 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 3, v26 + 1, v26);
        if ( v27 == v26 )
        {
          LOBYTE(v26) = 1;
          break;
        }
      }
      if ( (_BYTE)v26 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v105, (struct DXGADAPTER *const)v25, 0LL);
        v28 = 0LL;
        v84 = 0LL;
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v25);
        if ( v25[337] )
        {
          LODWORD(v31) = COREADAPTERACCESS::AcquireExclusive((__int64)v105, 1LL);
          if ( (int)v31 >= 0 )
          {
            v32 = (void *)v25[27];
            v85[v6] = v32;
            ObfReferenceObject(v32);
            v35 = a2;
            if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
            {
              v36 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v25, &v84, v33, v34);
              v28 = v84;
              v31 = v36;
              if ( v36 < 0 )
              {
                if ( v84 )
                {
                  v40 = WdLogNewEntry5_WdAssertion(v38, v37);
                  *(_QWORD *)(v40 + 24) = 3567LL;
                  WdLogEvent5_WdAssertion(v40);
                }
                v41 = WdLogNewEntry5_WdError(v38, v37);
                *(_QWORD *)(v41 + 24) = v31;
                WdLogEvent5_WdError(v41);
              }
              else
              {
                v39 = Object;
                v18[v6] = v84;
                v39[v6] = v28 + 24;
              }
              v35 = a2;
            }
            if ( (int)v31 < 0 )
              goto LABEL_72;
            if ( (*((_DWORD *)v35 + 1) & 4) != 0 )
            {
              v42 = DmmEnableModeResetOnMonitorEvent(v25, 0);
              v31 = v42;
              if ( v42 < 0 )
              {
                v45 = WdLogNewEntry5_WdError(v44, v43);
                *(_QWORD *)(v45 + 24) = v31;
                WdLogEvent5_WdError(v45);
              }
              else
              {
                *(_QWORD *)&v4[8 * v6] = v25;
              }
            }
            if ( (int)v31 < 0 )
            {
LABEL_72:
              v81 = v31;
              v46 = v85;
              ObfDereferenceObject((PVOID)v85[v6]);
              v46[v6] = 0LL;
              if ( v28 )
              {
                MonitorReleaseMonitorPendingEvent(v28, v47, v48, v49);
                v50 = Object;
                v18[v6] = 0LL;
                v50[v6] = 0LL;
              }
              v6 = v80;
            }
            else
            {
              v6 = ++v80;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v105);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v105, v30);
          v23 = v89;
        }
        else
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v105, v29);
        }
        v5 = v87;
      }
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88, v8);
    v11 = v81;
    if ( (_DWORD)v6 )
    {
      v51 = v90;
      v52 = (unsigned int)v6;
      v53 = (PVOID *)v85;
      do
      {
        v54 = DpiPollDisplayChildren(*v53, a3, v51);
        if ( v54 < 0 )
          v11 = v54;
        ObfDereferenceObject(*v53);
        *v53++ = 0LL;
        --v52;
      }
      while ( v52 );
      LODWORD(v6) = v80;
    }
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 || !(_DWORD)v6 )
    {
LABEL_92:
      if ( (*((_DWORD *)a2 + 1) & 4) != 0 && (_DWORD)v6 )
      {
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v88);
        v65 = v87;
        v66 = (unsigned __int64 *)*v87;
        while ( v66 != v65 && v66 )
        {
          v67 = v66;
          v66 = (unsigned __int64 *)*v66;
          _m_prefetchw(v67 + 3);
          v68 = v67[3];
          while ( v68 )
          {
            v69 = v68;
            v68 = _InterlockedCompareExchange64((volatile signed __int64 *)v67 + 3, v68 + 1, v68);
            if ( v69 == v68 )
            {
              LOBYTE(v68) = 1;
              break;
            }
          }
          if ( (_BYTE)v68 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v109, (struct DXGADAPTER *const)v67, 0LL);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v67);
            v71 = 0;
            v72 = (unsigned __int64 **)v4;
            while ( *v72 != v67 )
            {
              ++v71;
              ++v72;
              if ( v71 >= (unsigned int)v6 )
                goto LABEL_110;
            }
            if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v109, 1LL) >= 0 )
            {
              v73 = DmmEnableModeResetOnMonitorEvent(v67, 1u);
              v76 = v73;
              if ( v73 < 0 )
              {
                v77 = WdLogNewEntry5_WdError(v75, v74);
                *(_QWORD *)(v77 + 24) = v76;
                WdLogEvent5_WdError(v77);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v109);
            }
LABEL_110:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v109, v70);
          }
        }
      }
      goto LABEL_112;
    }
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v56 = Object;
    v57 = KeWaitForMultipleObjects(v6, Object, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v61 = v57;
    if ( v57 == 258 )
    {
      v11 = 258;
      v62 = WdLogNewEntry5_WdError(v58, v8);
      *(_QWORD *)(v62 + 24) = 3656LL;
    }
    else
    {
      if ( v57 >= 0 )
        goto LABEL_90;
      v11 = v57;
      v62 = WdLogNewEntry5_WdError(v58, v8);
      *(_QWORD *)(v62 + 24) = v61;
    }
    WdLogEvent5_WdError(v62);
LABEL_90:
    v63 = (char *)v56 - (char *)v18;
    v64 = (unsigned int)v6;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v18, v8, v59, v60);
      *v18 = 0LL;
      *(PVOID *)((char *)v18++ + v63) = 0LL;
      --v64;
    }
    while ( v64 );
    goto LABEL_92;
  }
  v78 = WdLogNewEntry5_WdError(v106, v8);
  *(_QWORD *)(v78 + 24) = 3499LL;
  WdLogEvent5_WdError(v78);
  v11 = -1073741801;
LABEL_112:
  if ( P != v103 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v104 = 0;
  if ( v93 != v94 && v93 )
    ExFreePoolWithTag(v93, 0);
  v93 = 0LL;
  v95 = 0;
  if ( v96 != v97 && v96 )
    ExFreePoolWithTag(v96, 0);
  v96 = 0LL;
  v98 = 0;
  if ( v106 != v107 && v106 )
    ExFreePoolWithTag(v106, 0);
  v106 = 0LL;
  v108 = 0;
  if ( v99 != v100 && v99 )
    ExFreePoolWithTag(v99, 0);
  v99 = 0LL;
  v101 = 0;
LABEL_128:
  if ( v88[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88, v8);
  return v11;
}
