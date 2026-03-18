/*
 * XREFs of ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C0160804
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01606B8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01CEF58 (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C01EDB94 (DxgkAttemptOpmVmBusRedirect.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C030C1C8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGGLOBAL::IsVmConnectedToHost(DXGGLOBAL *this)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al

  v1 = *((_QWORD *)this + 218);
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 68) )
      return 1;
  }
  return result;
}
