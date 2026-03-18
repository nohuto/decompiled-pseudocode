/*
 * XREFs of bDeleteDCInternal @ 0x1C0013120
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0012894 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00130B0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreDeleteDC @ 0x1C0013100 (GreDeleteDC.c)
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C3B20 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1)
{
  return bDeleteDCInternalEx(a1);
}
