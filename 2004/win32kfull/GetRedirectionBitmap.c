/*
 * XREFs of GetRedirectionBitmap @ 0x1C0021060
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C001EDB4 (_SetLayeredWindowAttributes.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0020F48 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     UpdateRedirectedDCE @ 0x1C00E8550 (UpdateRedirectedDCE.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01E8114 (ChangeRedirectionBitmapOwner.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E8650 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1)
{
  __int64 v1; // rbx
  __int64 Prop; // rax

  v1 = 0LL;
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(_QWORD *)Prop;
  return v1;
}
