/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C0090510
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0016870 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C00907A0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0090828 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // edx
  bool v5; // bl
  int v6; // edx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v11, a2);
    v3 = v11[0];
    if ( !v11[0] )
      return 0LL;
    v2 = *(_QWORD *)(v11[0] + 48LL);
    v12 = v2;
    v5 = 0;
    if ( (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) )
    {
      v4 = *(_DWORD *)(v3 + 36);
      if ( (v4 & 0x200) == 0 || (**(_DWORD **)(v3 + 976) & 1) != 0 || (v4 & 0x8000) != 0 )
        v5 = 1;
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v11);
  }
  else
  {
    v12 = a1;
    v5 = (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) != 0;
  }
  if ( v5 )
  {
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v7);
    if ( ghsemGreLock )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemGreLock", (int)ghsemGreLock, v8);
    if ( ghsemDCVisRgn )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v9);
  }
  else
  {
    GreLockVisRgn(v2, v6, v7);
  }
  return 1LL;
}
