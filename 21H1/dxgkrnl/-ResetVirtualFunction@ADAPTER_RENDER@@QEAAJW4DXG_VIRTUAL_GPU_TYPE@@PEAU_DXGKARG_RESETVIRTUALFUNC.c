/*
 * XREFs of ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C022C7E8
 * Callers:
 *     DxgkDdiResetVirtualFunction @ 0x1C022DA18 (DxgkDdiResetVirtualFunction.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C003E29C (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C02368C0 (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResetVirtualFunction(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  DXGVIRTUALGPUMANAGER *v8; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  DXGVIRTUALGPUMANAGER *v12; // rcx
  struct DXGK_VIRTUAL_GPU *v13; // rax
  struct DXGK_VIRTUAL_GPU *v14; // rbx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  DXGPROCESS *v20; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v21[8]; // [rsp+28h] [rbp-51h] BYREF
  DXGPUSHLOCK *v22; // [rsp+30h] [rbp-49h]
  int v23; // [rsp+38h] [rbp-41h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v25[64]; // [rsp+70h] [rbp-9h] BYREF

  v20 = 0LL;
  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1640);
  else
    v6 = *(_QWORD *)(a1 + 1632);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(v6 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v7 = *a3;
  v23 = 1;
  if ( a2 == 1 )
    v8 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1640);
  else
    v8 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
  if ( !v8 || (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v8, v7)) == 0LL )
  {
    v19 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v19 + 24) = *a3;
    WdLogEvent5_WdError(v19);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    return 3221225485LL;
  }
  if ( a2 == 1 )
    DXG_VMBUS_CHANNEL_BASE::PauseChannel((struct DXGK_VIRTUAL_GPU *)((char *)VirtualGpuByIndex + 168));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  COREACCESS::COREACCESS((COREACCESS *)v25, *(struct DXGADAPTER *const *)(a1 + 16));
  COREACCESS::AcquireShared((COREACCESS *)v25, 0LL);
  if ( a2 == 1 )
    v10 = *(_QWORD *)(a1 + 1640);
  else
    v10 = *(_QWORD *)(a1 + 1632);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(v10 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v11 = *a3;
  v23 = 1;
  if ( a2 == 1 )
    v12 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1640);
  else
    v12 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
  if ( !v12 || (v13 = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v12, v11), (v14 = v13) == 0LL) )
  {
    v18 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v18 + 24) = *a3;
    WdLogEvent5_WdError(v18);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    return 3221225485LL;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&ApcState, (struct _KTHREAD **)v13 + 7, 0);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)ApcState.ApcListHead[0].Blink);
  LODWORD(ApcState.ApcListHead[1].Flink) = 2;
  v15 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, DXGPROCESS **, _QWORD))(*(_QWORD *)v14 + 16LL))(
          v14,
          &v20,
          0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&ApcState);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  COREACCESS::~COREACCESS((COREACCESS *)v25);
  if ( v20 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)v20 + 7), &ApcState);
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v20 + 13));
    DXGPROCESS::Destroy(v20, 0LL, 1);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v20 + 13), v16);
    KeUnstackDetachProcess(&ApcState);
  }
  return v15;
}
