/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CF750
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02D31C0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01D2D48 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C01D2D84 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C03876C0 (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C039A9B4 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // rbx
  __int64 CurrentProcess; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  D3DKMT_HANDLE hAdapter; // edx
  _QWORD *v19; // r13
  struct _KTHREAD **v20; // r8
  __int64 v21; // rdi
  PVOID v22; // rbx
  char *v23; // rsi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v29; // eax
  int v30; // eax
  __int64 v31; // rsi
  int v32; // eax
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v38; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v39; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v40[144]; // [rsp+90h] [rbp-70h] BYREF

  Timeout.QuadPart = (LONGLONG)a3;
  v35 = a2;
  v38 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2, (__int64)a3, a4);
  v10 = Current;
  if ( Current )
  {
    hAdapter = a1->hAdapter;
    P = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v39, hAdapter, Current, (struct DXGADAPTER **)&P, 1);
    v19 = P;
    if ( P )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, (struct DXGADAPTER *const)P, 0LL);
      LODWORD(v21) = COREADAPTERACCESS::AcquireExclusive((__int64)v40);
      if ( (int)v21 >= 0 )
      {
        v22 = (PVOID)v19[27];
        v23 = 0LL;
        P = 0LL;
        Object = v22;
        ObfReferenceObject(v22);
        if ( (*((_DWORD *)a1 + 1) & 2) != 0
          && (v24 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v19, &P), v23 = (char *)P, v21 = v24, v24 < 0) )
        {
          if ( P )
          {
            WdLogSingleEntry1(1LL, 1920LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pMonitorPendingEvent == NULL",
              1920LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          WdLogSingleEntry1(2LL, v21);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in acquiring monitor pending event (Status == 0x%I64x)!",
            v21,
            0LL,
            0LL,
            0LL,
            0LL);
          v22 = Object;
        }
        else if ( (*((_DWORD *)v38 + 1) & 4) != 0 )
        {
          v25 = DmmEnableModeResetOnMonitorEvent(v19, 0);
          v21 = v25;
          if ( v25 < 0 )
          {
            WdLogSingleEntry1(2LL, v25);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!",
              v21,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v40);
        if ( (int)v21 >= 0 )
        {
          LODWORD(v21) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))DpiPollDisplayChildren)(
                           v22,
                           v35,
                           (union _LARGE_INTEGER)Timeout.QuadPart);
          ObfDereferenceObject(v22);
          if ( v23 )
          {
            if ( (int)v21 >= 0 )
            {
              Timeout.QuadPart = -10000000LL;
              PreviousMode = ExGetPreviousMode();
              v29 = KeWaitForSingleObject(v23 + 24, UserRequest, PreviousMode, 0, &Timeout);
              v21 = v29;
              if ( v29 == 258 )
              {
                WdLogSingleEntry1(2LL, 1985LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Monitor pending event wait has been timeouted!",
                  1985LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else if ( v29 < 0 )
              {
                WdLogSingleEntry1(2LL, v29);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
                  v21,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            MonitorReleaseMonitorPendingEvent(v23, v27);
          }
          if ( (*((_DWORD *)v38 + 1) & 4) != 0 )
          {
            v30 = COREADAPTERACCESS::AcquireExclusive((__int64)v40);
            v31 = v30;
            if ( v30 < 0 )
            {
              WdLogSingleEntry1(2LL, v30);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!",
                v31,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            else
            {
              v32 = DmmEnableModeResetOnMonitorEvent(v19, 1u);
              v31 = v32;
              if ( v32 < 0 )
              {
                WdLogSingleEntry1(2LL, v32);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed in re-enabling mode reset on monitor event (Status == 0x%I64x)!",
                  v31,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v40);
            }
            if ( !(_DWORD)v21 )
              LODWORD(v21) = v31;
          }
        }
        else
        {
          ObfDereferenceObject(v22);
          if ( v23 )
            MonitorReleaseMonitorPendingEvent(v23, v26);
        }
      }
      v12 = v21;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
    }
    else
    {
      v20 = v10;
      v12 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, v20, a1->hAdapter);
    }
    if ( v39 )
      DXGADAPTER::ReleaseReference(v39);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v17 = PsGetCurrentProcess(v14, v13, v15, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v17,
      0LL,
      0LL,
      0LL);
  }
  return v12;
}
