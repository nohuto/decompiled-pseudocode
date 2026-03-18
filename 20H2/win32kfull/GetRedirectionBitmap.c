/*
 * XREFs of GetRedirectionBitmap @ 0x1C003F430
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C003CC6C (_SetLayeredWindowAttributes.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00407C4 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     UpdateRedirectedDCE @ 0x1C00E75F0 (UpdateRedirectedDCE.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F9728 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01E7454 (ChangeRedirectionBitmapOwner.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E7990 (UserRecreateRedirectionBitmap.c)
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
