/*
 * XREFs of ?Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z @ 0x156AE
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _FindOldMonitor@12 @ 0x153AA (_FindOldMonitor@12.c)
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     ??4RedirectedRecttagMONITORrcWorkReal@tagMONITOR@@QAEABUtagRECT@@ABU2@@Z @ 0x15706 (--4RedirectedRecttagMONITORrcWorkReal@tagMONITOR@@QAEABUtagRECT@@ABU2@@Z.c)
 */

void __thiscall PlaceHolderMonitor::Reset(PlaceHolderMonitor *this, struct tagMONITORPOS *a2)
{
  *(_DWORD *)(*((_DWORD *)this + 24) + 16) = *(_DWORD *)a2;
  *(_DWORD *)(*((_DWORD *)this + 24) + 20) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(*((_DWORD *)this + 24) + 24) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(*((_DWORD *)this + 24) + 28) = *((_DWORD *)a2 + 3);
  tagMONITOR::RedirectedRecttagMONITORrcWorkReal::operator=((char *)a2 + 16);
  *(_WORD *)(*((_DWORD *)this + 24) + 52) = *((_WORD *)a2 + 16);
  *(_WORD *)(*((_DWORD *)this + 24) + 54) = *((_WORD *)a2 + 17);
}
