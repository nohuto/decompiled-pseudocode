/*
 * XREFs of bDeleteDCInternalEx @ 0x1C006D2D0
 * Callers:
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bDeleteDCInternal @ 0x1C00A78A0 (bDeleteDCInternal.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C006D360 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     UserReleaseDC @ 0x1C006D8A0 (UserReleaseDC.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
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
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v5);
    if ( !v8 || (unsigned int)UserReleaseDC(a1) )
      return 1LL;
  }
  else
  {
    EngSetLastError(0xAAu);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v5);
  }
  return 0LL;
}
