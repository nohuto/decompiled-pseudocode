/*
 * XREFs of GreGetWindowResizeTelemetry @ 0x1C026F078
 * Callers:
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C020C0E8 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00970E8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall GreGetWindowResizeTelemetry(HWND a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  v8 = 0;
  v15 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v14, a1);
    v9 = v14;
    if ( v14 )
    {
      v10 = *(_DWORD *)(v14 + 136);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v14 + 132) / v10;
        *(_DWORD *)(v14 + 136) = 0;
        *a2 = v11;
        *a3 = *(_DWORD *)(v9 + 128);
        v12 = *(_DWORD *)(v9 + 152);
        *(_DWORD *)(v9 + 152) = 0;
        *(_QWORD *)(v9 + 128) = 0LL;
        v8 = 1;
        *a4 = v12;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return v8;
}
