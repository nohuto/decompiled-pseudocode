/*
 * XREFs of bDeleteDCInternalEx @ 0x1C003A1C0
 * Callers:
 *     bDeleteDCInternal @ 0x1C00205E0 (bDeleteDCInternal.c)
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     GreGetBounds @ 0x1C0043020 (GreGetBounds.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004BA04 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0060C28 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003A250 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0041314 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     UserReleaseDC @ 0x1C009B640 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteDCInternalEx(HDC a1, unsigned int *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  if ( v5 && (unsigned int)bDeleteDCOBJ((struct XDCOBJ *)&v5, a2, &v8) )
  {
    DCOBJ::~DCOBJ((DCOBJ *)&v5);
    if ( !v8 || (unsigned int)UserReleaseDC(a1) )
      return 1LL;
  }
  else
  {
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)&v5);
  }
  return 0LL;
}
