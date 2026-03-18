/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C004D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004BA04 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004BB94 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C004D370 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // edx
  bool v5; // bl
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v7, a2);
    v3 = v7[0];
    if ( !v7[0] )
      return 0LL;
    v2 = *(_QWORD *)(v7[0] + 48LL);
    v8 = v2;
    v5 = 0;
    if ( (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8) )
    {
      v4 = *(_DWORD *)(v3 + 36);
      if ( (v4 & 0x200) == 0 || (**(_DWORD **)(v3 + 976) & 1) != 0 || (v4 & 0x8000) != 0 )
        v5 = 1;
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v7);
  }
  else
  {
    v8 = a1;
    v5 = (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8) != 0;
  }
  if ( v5 )
  {
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemGreLock )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    if ( ghsemDCVisRgn )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  }
  else
  {
    GreLockVisRgn(v2);
  }
  return 1LL;
}
