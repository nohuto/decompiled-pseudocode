/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C01EECBC
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0063340 (DxgkMiracastStartMiracastSession.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C01EE9B0 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiFdoHandleStopDevice @ 0x1C0389B60 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C038CF44 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C0021CB8 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C01EEB90 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C01EEE34 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C01EEE84 (DpiMiracastGetForcedMode.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C01EEF98 (DpiMiracastQueryMiracastSupportForFDO.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // di
  int ForcedMode; // eax
  int v4; // ebp
  struct _COMMON_PNP_CONTEXT *RenderAdapterForSession; // rax
  struct _COMMON_PNP_CONTEXT *v6; // r14
  int MiracastSupportForFDO; // ebx
  __int64 v8; // rbx
  PVOID v10; // rbp
  PVOID Tag[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v2 = 1;
  }
  ForcedMode = DpiMiracastGetForcedMode();
  v4 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_17;
  if ( ForcedMode == 1 )
    goto LABEL_15;
  RenderAdapterForSession = (struct _COMMON_PNP_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
  v6 = RenderAdapterForSession;
  if ( !RenderAdapterForSession )
    goto LABEL_15;
  MiracastSupportForFDO = DpiMiracastQueryMiracastSupportForFDO(RenderAdapterForSession);
  if ( MiracastSupportForFDO < 0 )
    goto LABEL_11;
  v8 = *((_QWORD *)v6 + 334);
  if ( v4 != 2 )
  {
LABEL_15:
    Tag[0] = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv((__int64 *)Tag) >= 0 )
    {
      v10 = Tag[0];
      if ( Tag[0] )
      {
        DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)Tag[0]);
        if ( *((_BYTE *)v10 + 484) )
          DpiEnableD3Requests(*((_QWORD *)v10 + 3));
        ExReleaseResourceLite(*((PERESOURCE *)v10 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v10 + 2, v10, 0x20u);
      }
    }
    xmmword_1C0130968 = 0LL;
    dword_1C0130978 = 0;
LABEL_17:
    MiracastSupportForFDO = -1073741637;
    goto LABEL_11;
  }
  DWORD1(xmmword_1C0130968) = dword_1C01308C4;
  LOBYTE(xmmword_1C0130968) = 0;
  BYTE8(xmmword_1C0130968) = 0;
  *(_QWORD *)((char *)&xmmword_1C0130968 + 12) = v8;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C0130968;
    *(_DWORD *)(a1 + 16) = dword_1C0130978;
  }
  MiracastSupportForFDO = 0;
LABEL_11:
  if ( v2 )
  {
    _InterlockedExchange64(&qword_1C01304D8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportForFDO;
}
