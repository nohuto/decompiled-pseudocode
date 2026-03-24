/*
 * XREFs of ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C016E04C
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C016DF18 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C0173BE8 (DxgkAttemptOpmVmBusRedirect.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C026B2DC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
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
