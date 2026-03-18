/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0055CC0 (TransformMessageBetweenCoordinateSpaces.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00571B0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0057880 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     NtUserGetTitleBarInfo @ 0x1C0057F10 (NtUserGetTitleBarInfo.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0058E18 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     NtUserGetScrollBarInfo @ 0x1C005E200 (NtUserGetScrollBarInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C0109960 (IsValidKernelDpiAwarenessContext.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  unsigned int *v2; // rbx
  unsigned int v3; // esi
  unsigned int valid; // eax

  v2 = *(unsigned int **)(a1 + 360);
  if ( v2[1] )
  {
    v3 = *v2;
    if ( !*v2 || (valid = IsValidKernelDpiAwarenessContext(v3)) != 0 )
    {
      *(_DWORD *)(a1 + 340) = v3;
      valid = 0;
    }
    else
    {
      *v2 = 0;
    }
    v2[1] = valid;
  }
}
