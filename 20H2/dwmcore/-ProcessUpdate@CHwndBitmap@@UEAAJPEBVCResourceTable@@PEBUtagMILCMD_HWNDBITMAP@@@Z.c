/*
 * XREFs of ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_HWNDBITMAP@@@Z @ 0x1801C3FA0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180178E00 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::ProcessUpdate(
        CHwndBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_HWNDBITMAP *a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v3 = *((_QWORD *)a3 + 1);
  if ( v3 == *((_QWORD *)this + 10) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x139u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 10) = v3;
    v4 = CWindowManager::AddHwndBitmap(*(CWindowManager **)(*((_QWORD *)this + 2) + 1192LL), this);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x135u, 0LL);
  }
  return v6;
}
