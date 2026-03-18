/*
 * XREFs of ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x1800E2F40
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x2A7u);
  }
  else
  {
    if ( *((_DWORD *)this + 215) != v3
      || *((_DWORD *)this + 216) != *((_DWORD *)a3 + 3)
      || *((_DWORD *)this + 217) != *((_DWORD *)a3 + 4)
      || *((_DWORD *)this + 218) != *((_DWORD *)a3 + 5) )
    {
      *(_OWORD *)((char *)this + 860) = *(_OWORD *)((char *)a3 + 8);
      CVisual::PropagateFlags((__int64)this, 4u);
    }
    return 0;
  }
  return v4;
}
