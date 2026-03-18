/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C0031DC0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x1C0031E28 (UserGetDesktopDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C006923C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
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
