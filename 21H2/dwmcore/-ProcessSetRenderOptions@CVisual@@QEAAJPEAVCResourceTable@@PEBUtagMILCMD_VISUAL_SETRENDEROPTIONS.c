/*
 * XREFs of ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x1800E25BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRenderOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETRENDEROPTIONS *a3)
{
  char v3; // r9
  int v4; // eax
  char v5; // dl
  int v6; // r10d
  char v7; // r9
  char v8; // r10
  char v9; // dl
  int v11; // edx
  int v12; // r9d
  int v13; // edx
  int v14; // r9d
  int v15; // r10d
  int v16; // r9d
  int v17; // eax

  *((_BYTE *)this + 104) = 0;
  v3 = 0;
  v4 = *((_DWORD *)a3 + 2);
  if ( (v4 & 2) != 0 )
  {
    v11 = *((_DWORD *)a3 + 3);
    if ( v11 != -1 )
    {
      *((_DWORD *)this + 26) &= 0xFFFFC3FF;
      *((_DWORD *)this + 26) |= (v11 & 0xF) << 10;
      *((_BYTE *)this + 104) |= 2u;
      v3 = *((_BYTE *)this + 104);
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  v5 = v3;
  if ( (v4 & 8) != 0 )
  {
    v6 = *((_DWORD *)a3 + 4);
    if ( v6 != -1 )
    {
      v5 = v3 | 8;
      *((_DWORD *)this + 49) = v6;
      *((_BYTE *)this + 104) = v3 | 8;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v16 = *((_DWORD *)a3 + 5);
    if ( v16 != 5 )
    {
      *((_DWORD *)this + 26) &= 0xFFF83FFF;
      *((_DWORD *)this + 26) |= (v16 & 0x1F) << 14;
      *((_BYTE *)this + 104) |= 4u;
      v5 = *((_BYTE *)this + 104);
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v12 = *((_DWORD *)a3 + 6);
    if ( v12 )
    {
      *((_DWORD *)this + 26) &= 0xFFFFFCFF;
      *((_DWORD *)this + 26) |= (v12 & 3) << 8;
      *((_BYTE *)this + 104) |= 1u;
      v5 = *((_BYTE *)this + 104);
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  v7 = v5;
  if ( (v4 & 0x10) != 0 )
  {
    v15 = *((_DWORD *)a3 + 7);
    if ( v15 != 5 )
    {
      v7 = v5 | 0x10;
      *((_DWORD *)this + 50) = v15;
      *((_BYTE *)this + 104) = v5 | 0x10;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  v8 = v7;
  if ( (v4 & 0x20) != 0 )
  {
    v13 = *((_DWORD *)a3 + 8);
    if ( v13 != -1 )
    {
      v8 = v7 | 0x20;
      *((_DWORD *)this + 51) = v13;
      *((_BYTE *)this + 104) = v7 | 0x20;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  v9 = v8;
  if ( (v4 & 0x40) != 0 )
  {
    v14 = *((_DWORD *)a3 + 9);
    if ( v14 != -1 )
    {
      v9 = v8 | 0x40;
      *((_DWORD *)this + 52) = v14;
      *((_BYTE *)this + 104) = v8 | 0x40;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v17 = *((_DWORD *)a3 + 10);
    if ( v17 != -1 )
    {
      *((_DWORD *)this + 53) = v17;
      *((_BYTE *)this + 104) = v9 | 0x80;
    }
  }
  CVisual::PropagateFlags((__int64)this, 5u);
  return 0LL;
}
