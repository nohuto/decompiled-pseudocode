/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C00A32F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 *     UserGetDesktopDC @ 0x1C00A3358 (UserGetDesktopDC.c)
 */

__int64 __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  __int64 DisplayDC; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(2LL, 1LL, 0LL);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    DisplayDC = GreCreateDisplayDC(*(HDEV *)(v3[0] + 48LL), 2u, 1);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  return DisplayDC;
}
