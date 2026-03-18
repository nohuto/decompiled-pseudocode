/*
 * XREFs of ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18003E304
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetAlphaMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETALPHAMARGINS *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x2F9u, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 205) != v3
      || *((_DWORD *)this + 206) != *((_DWORD *)a3 + 3)
      || *((_DWORD *)this + 207) != *((_DWORD *)a3 + 4)
      || *((_DWORD *)this + 208) != *((_DWORD *)a3 + 5) )
    {
      *(_OWORD *)((char *)this + 820) = *(_OWORD *)((char *)a3 + 8);
      CVisual::PropagateFlags(this, 4LL);
    }
    return 0;
  }
  return v4;
}
