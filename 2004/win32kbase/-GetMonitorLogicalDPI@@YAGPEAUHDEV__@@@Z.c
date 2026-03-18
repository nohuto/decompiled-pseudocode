/*
 * XREFs of ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00132A8
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0012894 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C003E070 (DrvGetCurrentDpiInfoFromHDev.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall GetMonitorLogicalDPI(HDEV a1)
{
  int CurrentDpiInfoFromHDev; // eax
  int v3; // ecx
  _DWORD v5[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(a1, v5);
  v3 = v5[2];
  if ( CurrentDpiInfoFromHDev < 0 )
    v3 = 100;
  return (unsigned __int16)((96 * v3 + 50) / 0x64u);
}
