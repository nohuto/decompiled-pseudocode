/*
 * XREFs of ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180064954
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x1800187CC (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x180062568 (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x180064B6C (-IsNonEmpty@CColorKey@@QEBA_NXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSourceModifications(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS *a3)
{
  int v4; // ecx
  float *v6; // rbx
  __int128 v7; // xmm1
  bool v8; // r10
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  float v12; // xmm13_4
  float v13; // xmm12_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  int v20; // eax
  unsigned __int64 i; // r14
  __int64 v23; // rcx
  CGdiSpriteBitmap *v24; // rax
  __int128 v25; // [rsp+28h] [rbp-89h] BYREF
  __int128 v26; // [rsp+38h] [rbp-79h]
  int v27; // [rsp+48h] [rbp-69h]
  __int128 v28; // [rsp+70h] [rbp-41h]

  v4 = *((_DWORD *)this + 219);
  v6 = (float *)((char *)this + 824);
  v7 = *(_OWORD *)((char *)this + 840);
  v8 = (v4 & 2) != 0;
  v9 = (*((_BYTE *)a3 + 8) & 2) == 0;
  v10 = *((_DWORD *)this + 214);
  v25 = *(_OWORD *)((char *)this + 824);
  v27 = v10;
  v26 = v7;
  if ( v9 )
  {
    *(_OWORD *)v6 = _xmm;
    LOBYTE(v28) = 0;
    v11 = v28;
    *(_OWORD *)((char *)this + 840) = 0LL;
    *((_DWORD *)this + 214) = v11;
  }
  else
  {
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), (struct _D3DCOLORVALUE *)((char *)this + 824));
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 4), (struct _D3DCOLORVALUE *)((char *)this + 840));
    if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
      *((_BYTE *)this + 856) = 1;
    v4 = *((_DWORD *)this + 219);
  }
  v12 = *((float *)&v26 + 3);
  v13 = *((float *)&v26 + 2);
  v14 = *((float *)&v26 + 1);
  v15 = *(float *)&v26;
  v16 = *((float *)&v25 + 3);
  v17 = *((float *)&v25 + 2);
  v18 = *((float *)&v25 + 1);
  v19 = *(float *)&v25;
  *((_BYTE *)this + 917) = *((_BYTE *)a3 + 20) != 0;
  if ( v8 != ((v4 & 2) != 0)
    || (CColorKey::IsNonEmpty((CColorKey *)&v25) || CColorKey::IsNonEmpty((CWindowNode *)((char *)this + 824)))
    && (v19 != *v6
     || v18 != *((float *)this + 207)
     || v17 != *((float *)this + 208)
     || v16 != *((float *)this + 209)
     || v15 != *((float *)this + 210)
     || v14 != *((float *)this + 211)
     || v13 != *((float *)this + 212)
     || v12 != *((float *)this + 213)) )
  {
    for ( i = 0LL; i < CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 800)); ++i )
    {
      v24 = (CGdiSpriteBitmap *)CPtrArrayBase::operator[](v23, i);
      CGdiSpriteBitmap::SetColorKey(v24, (*((_DWORD *)this + 219) & 2) != 0, (CWindowNode *)((char *)this + 824));
    }
  }
  if ( (CColorKey::IsNonEmpty((CWindowNode *)((char *)this + 824)) || CColorKey::IsNonEmpty((CColorKey *)&v25))
    && (*v6 != v19
     || *((float *)this + 207) != v18
     || *((float *)this + 208) != v17
     || *((float *)this + 209) != v16
     || *((float *)this + 210) != v15
     || *((float *)this + 211) != v14
     || *((float *)this + 212) != v13
     || *((float *)this + 213) != v12) )
  {
    v20 = *((_DWORD *)a3 + 2);
    goto LABEL_9;
  }
  v20 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 219) != v20 )
  {
LABEL_9:
    *((_DWORD *)this + 219) = v20;
    CVisual::PropagateFlags((__int64)this, 4u);
  }
  return 0LL;
}
