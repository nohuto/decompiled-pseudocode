/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C0161CE4
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0053910 (DxgkMiracastStartMiracastSession.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EE230 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C01618B0 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     DpiFdoHandleStopDevice @ 0x1C02C5CF0 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02C9544 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C001F7E4 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C0161BB0 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0161EE4 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C0161FEC (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C0162044 (DpiMiracastGetForcedMode.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // bl
  int ForcedMode; // eax
  int v4; // r14d
  struct _COMMON_PNP_CONTEXT *RenderAdapterForSession; // rax
  struct _COMMON_PNP_CONTEXT *v6; // r15
  int MiracastSupportForFDO; // edi
  __int64 v8; // rdi
  PVOID v9; // r14
  PVOID Tag; // [rsp+28h] [rbp-8h] BYREF

  v2 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v2 = 1;
  }
  ForcedMode = DpiMiracastGetForcedMode();
  v4 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_22;
  if ( ForcedMode == 1 )
    goto LABEL_8;
  RenderAdapterForSession = (struct _COMMON_PNP_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
  v6 = RenderAdapterForSession;
  if ( !RenderAdapterForSession )
    goto LABEL_8;
  MiracastSupportForFDO = DpiMiracastQueryMiracastSupportForFDO(RenderAdapterForSession);
  if ( MiracastSupportForFDO < 0 )
    goto LABEL_16;
  v8 = *((_QWORD *)v6 + 334);
  if ( v4 != 2 )
  {
LABEL_8:
    Tag = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv((__int64 *)&Tag) >= 0 )
    {
      v9 = Tag;
      if ( Tag )
      {
        DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)Tag);
        if ( *((_BYTE *)v9 + 484) )
          DpiEnableD3Requests(*((_QWORD *)v9 + 3));
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v9 + 2, v9, 0x20u);
      }
    }
    xmmword_1C00AFEE0 = 0LL;
    dword_1C00AFEF0 = 0;
LABEL_22:
    MiracastSupportForFDO = -1073741637;
    goto LABEL_16;
  }
  DWORD1(xmmword_1C00AFEE0) = dword_1C00AFE3C;
  LOBYTE(xmmword_1C00AFEE0) = 0;
  BYTE8(xmmword_1C00AFEE0) = 0;
  *(_QWORD *)((char *)&xmmword_1C00AFEE0 + 12) = v8;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C00AFEE0;
    *(_DWORD *)(a1 + 16) = dword_1C00AFEF0;
  }
  MiracastSupportForFDO = 0;
LABEL_16:
  if ( v2 )
  {
    _InterlockedExchange64(&qword_1C00AFA50, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportForFDO;
}
