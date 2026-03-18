/*
 * XREFs of bDeleteDCInternal @ 0x1C00A78A0
 * Callers:
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00A7048 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A7838 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreDeleteDC @ 0x1C00A7880 (GreDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C30E0 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1, int a2, int a3, int a4)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (a2 != 0 ? 0x400000 : 0) | (a3 != 0 ? 0x800000 : 0) | (a4 != 0 ? 0x1000000 : 0);
  return bDeleteDCInternalEx(a1, (unsigned int *)&v5);
}
