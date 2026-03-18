/*
 * XREFs of GreIsWindowResizeInProgress @ 0x1C026F47C
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C02103FC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00970E8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall GreIsWindowResizeInProgress(HWND a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  v3 = 0;
  v6 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v5, a1);
    if ( v5 )
    {
      if ( *(int *)(v5 + 116) >= 1 || *(_DWORD *)(v5 + 124) )
        v3 = 1;
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v3;
}
