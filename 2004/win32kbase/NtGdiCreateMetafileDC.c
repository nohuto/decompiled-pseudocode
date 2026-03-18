/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C0040D80
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x1C0040DE8 (UserGetDesktopDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0071D3C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreCreateDisplayDC @ 0x1C0091A00 (GreCreateDisplayDC.c)
 */

__int64 __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  __int64 DisplayDC; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(2LL);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v3[0] + 48LL), 2LL, 1LL);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  return DisplayDC;
}
