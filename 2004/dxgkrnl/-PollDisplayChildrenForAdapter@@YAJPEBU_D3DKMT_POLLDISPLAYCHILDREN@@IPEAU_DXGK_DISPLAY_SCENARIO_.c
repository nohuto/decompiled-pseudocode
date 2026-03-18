/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0221D78
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C0225010 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01586F8 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C0158734 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C02C688C (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02DC1D8 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v4; // r12d
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 hAdapter; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGADAPTER *QuadPart; // rsi
  _QWORD *v19; // rax
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rbx
  void *v23; // r15
  union _LARGE_INTEGER v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-99h] BYREF
  DXGADAPTER *v55; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v56[144]; // [rsp+50h] [rbp-79h] BYREF

  v4 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v9 = Current;
  if ( !Current )
  {
    v10 = -1073741811;
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12);
    WdLogEvent5_WdError(v11);
    return v10;
  }
  hAdapter = a1->hAdapter;
  Timeout.QuadPart = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v55,
    hAdapter,
    Current,
    (struct DXGADAPTER **)&Timeout,
    1);
  QuadPart = (DXGADAPTER *)Timeout.QuadPart;
  if ( !Timeout.QuadPart )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v10 = -1073741811;
    v19[3] = -1073741811LL;
    v19[4] = v9;
    v19[5] = a1->hAdapter;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_35;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v56, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
  LODWORD(v22) = COREADAPTERACCESS::AcquireExclusive((__int64)v56, (unsigned int)(v20 + 1));
  if ( (int)v22 >= 0 )
  {
    v23 = (void *)*((_QWORD *)QuadPart + 27);
    v24.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v23);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v27 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout, v25, v26);
      v24 = Timeout;
      v22 = v27;
      if ( v27 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v32 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0);
          v22 = v32;
          if ( v32 < 0 )
          {
            v35 = WdLogNewEntry5_WdError(v34, v33);
            *(_QWORD *)(v35 + 24) = v22;
            WdLogEvent5_WdError(v35);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v56);
        if ( (int)v22 < 0 )
        {
          ObfDereferenceObject(v23);
          if ( v24.QuadPart )
            MonitorReleaseMonitorPendingEvent((PVOID)v24.QuadPart, v21, v36, v37);
          goto LABEL_34;
        }
        LODWORD(v22) = DpiPollDisplayChildren(v23, v4, a3);
        ObfDereferenceObject(v23);
        if ( !v24.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v44 = COREADAPTERACCESS::AcquireExclusive((__int64)v56, 1LL);
            v47 = v44;
            if ( v44 < 0 )
            {
              v52 = WdLogNewEntry5_WdError(v46, v45);
              *(_QWORD *)(v52 + 24) = v47;
              WdLogEvent5_WdError(v52);
            }
            else
            {
              v48 = DmmEnableModeResetOnMonitorEvent(QuadPart, 1u);
              v47 = v48;
              if ( v48 < 0 )
              {
                v51 = WdLogNewEntry5_WdError(v50, v49);
                *(_QWORD *)(v51 + 24) = v47;
                WdLogEvent5_WdError(v51);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v56);
            }
            if ( !(_DWORD)v22 )
              LODWORD(v22) = v47;
          }
          goto LABEL_34;
        }
        if ( (int)v22 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v41 = KeWaitForSingleObject((PVOID)(v24.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v22 = v41;
          if ( v41 == 258 )
          {
            v43 = WdLogNewEntry5_WdError(v42, v21);
            *(_QWORD *)(v43 + 24) = 1958LL;
LABEL_24:
            WdLogEvent5_WdError(v43);
            goto LABEL_25;
          }
          if ( v41 < 0 )
          {
            v43 = WdLogNewEntry5_WdError(v42, v21);
            *(_QWORD *)(v43 + 24) = v22;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((PVOID)v24.QuadPart, v21, v38, v39);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v30 = WdLogNewEntry5_WdAssertion(v29, v28);
        *(_QWORD *)(v30 + 24) = 1893LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v31 + 24) = v22;
      WdLogEvent5_WdError(v31);
    }
    if ( (int)v22 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_34:
  v10 = v22;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56, v21);
LABEL_35:
  if ( v55 )
    DXGADAPTER::ReleaseReference(v55);
  return v10;
}
