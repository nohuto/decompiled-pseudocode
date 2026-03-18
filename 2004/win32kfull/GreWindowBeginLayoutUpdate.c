/*
 * XREFs of GreWindowBeginLayoutUpdate @ 0x1C0008B80
 * Callers:
 *     NtUserBeginLayoutUpdate @ 0x1C0125960 (NtUserBeginLayoutUpdate.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C001FB78 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall GreWindowBeginLayoutUpdate(HWND a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  v3 = 0;
  v8 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v7, a1);
    v4 = v7;
    if ( v7 )
    {
      if ( *(int *)(v7 + 116) >= 1 )
      {
        v6 = *(_DWORD *)(v7 + 120);
        if ( v6 > 0 )
          *(_DWORD *)(v7 + 120) = v6 + 1;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
      v3 = 1;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  return v3;
}
