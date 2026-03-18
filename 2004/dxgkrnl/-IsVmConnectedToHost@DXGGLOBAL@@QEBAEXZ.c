/*
 * XREFs of ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C0168EBC
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C0168D88 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C016F450 (DxgkAttemptOpmVmBusRedirect.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C026B02C (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGGLOBAL::IsVmConnectedToHost(DXGGLOBAL *this)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al

  v1 = *((_QWORD *)this + 197);
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 56) )
      return 1;
  }
  return result;
}
