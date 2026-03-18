/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800C5EBC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800C5F7C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
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
  unsigned int v8; // edx
  char v9; // r8
  char v11; // r8
  char v12; // dl

  v3 = this;
  v4 = *((_BYTE *)a3 + 9);
  v5 = 0;
  v7 = *((_BYTE *)v3 + 94);
  if ( ((v7 >> 1) & 1) != (v4 != 0) )
  {
    v5 = 5;
    *((_BYTE *)v3 + 94) = v7 & 0xFD | (v4 != 0 ? 2 : 0);
    CVisual::OnInnerTransformChanged(v3);
    v7 = *((_BYTE *)v3 + 94);
  }
  *((_BYTE *)v3 + 93) = *((_BYTE *)v3 + 93) & 0x7F | (*((_BYTE *)a3 + 8) != 0 ? 0x80 : 0);
  v8 = v7 & 0xDF | (*((_BYTE *)a3 + 10) != 0 ? 0x20 : 0);
  *((_BYTE *)v3 + 94) = v8;
  v9 = *((_BYTE *)a3 + 11);
  if ( ((v8 >> 6) & 1) != (v9 != 0) )
  {
    v11 = -v9;
    v12 = v8 & 0xBF;
    *((_BYTE *)v3 + 94) = v12 | (v11 != 0 ? 0x40 : 0);
    if ( v12 & 0x40 | (v11 != 0 ? 0x40 : 0) )
    {
      *((_QWORD *)v3 + 55) = 0LL;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v3 + 27) + 4LL) &= ~0x1000000u;
      *(_DWORD *)(*((_QWORD *)v3 + 27) + 4LL) &= ~0x800000u;
      *(_DWORD *)(*((_QWORD *)v3 + 27) + 4LL) &= ~0x400000u;
      *(_DWORD *)(*((_QWORD *)v3 + 27) + 4LL) &= ~0x200000u;
    }
    v5 |= 0x10u;
  }
  if ( v5 )
    CVisual::PropagateFlags((__int64)v3, v5);
  return 0LL;
}
