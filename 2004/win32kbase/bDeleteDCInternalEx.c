/*
 * XREFs of bDeleteDCInternalEx @ 0x1C0093960
 * Callers:
 *     bDeleteDCInternal @ 0x1C0013120 (bDeleteDCInternal.c)
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreGetBounds @ 0x1C00882C0 (GreGetBounds.c)
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C009249C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0092CA0 (NtGdiDeleteObjectApp.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     UserReleaseDC @ 0x1C0078DA0 (UserReleaseDC.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00939F0 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
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
    if ( !v8 || (unsigned int)UserReleaseDC((__int64)a1) )
      return 1LL;
  }
  else
  {
    EngSetLastError(0xAAu);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v5);
  }
  return 0LL;
}
