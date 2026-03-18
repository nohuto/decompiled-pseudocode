/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800DEA38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800DEB38 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOPTIONS *a3)
{
  CVisual *v3; // r11
  char v4; // cl
  unsigned int v5; // ebx
  unsigned __int8 v7; // r9
  char v8; // dl
  char v9; // dl
  char v11; // dl
  char v12; // r9

  v3 = this;
  v4 = *((_BYTE *)a3 + 9);
  v5 = 0;
  v7 = *((_BYTE *)v3 + 102);
  if ( (v7 & 1) != (v4 != 0) )
  {
    v5 = 5;
    *((_BYTE *)v3 + 102) = v7 & 0xFE | (v4 != 0);
    CVisual::OnInnerTransformChanged(v3);
    v7 = *((_BYTE *)v3 + 102);
  }
  v8 = *((_BYTE *)a3 + 11);
  if ( ((v7 >> 1) & 1) != (v8 != 0) )
  {
    *((_BYTE *)v3 + 102) = v7 & 0xFD | (v8 != 0 ? 2 : 0);
    v5 |= 1u;
    v7 = v7 & 0xFD | (v8 != 0 ? 2 : 0);
  }
  *((_BYTE *)v3 + 101) = *((_BYTE *)v3 + 101) & 0xBF | (*((_BYTE *)a3 + 8) != 0 ? 0x40 : 0);
  v9 = *((_BYTE *)a3 + 10);
  if ( ((v7 >> 5) & 1) != (v9 != 0) )
  {
    v11 = -v9;
    v12 = v7 & 0xDF;
    *((_BYTE *)v3 + 102) = v12 | (v11 != 0 ? 0x20 : 0);
    if ( v12 & 0x20 | (v11 != 0 ? 0x20 : 0) )
    {
      *((_QWORD *)v3 + 76) = 0LL;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x1000000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x800000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x400000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x200000u;
    }
    v5 |= 0x10u;
  }
  if ( v5 )
    CVisual::PropagateFlags((__int64)v3, v5);
  return 0LL;
}
