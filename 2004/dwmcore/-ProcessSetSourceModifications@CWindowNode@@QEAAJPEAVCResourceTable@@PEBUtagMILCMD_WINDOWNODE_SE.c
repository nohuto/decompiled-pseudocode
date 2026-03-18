/*
 * XREFs of ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180097588
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x18001EF58 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 *     ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x180097790 (-IsNonEmpty@CColorKey@@QEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSourceModifications(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS *a3)
{
  unsigned int v3; // edx
  struct _D3DCOLORVALUE *v4; // rbx
  __int128 v5; // xmm0
  __int128 v7; // xmm1
  bool v9; // r10
  bool v10; // zf
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
  __int64 v22; // rcx
  __int64 i; // r14
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // [rsp+28h] [rbp-79h] BYREF
  __int128 v28; // [rsp+38h] [rbp-69h]
  int v29; // [rsp+48h] [rbp-59h]
  __int128 v30; // [rsp+70h] [rbp-31h]

  v3 = *((_DWORD *)this + 209);
  v4 = (struct _D3DCOLORVALUE *)((char *)this + 784);
  v5 = *((_OWORD *)this + 49);
  v7 = *((_OWORD *)this + 50);
  v9 = (v3 & 2) != 0;
  v10 = (*((_BYTE *)a3 + 8) & 2) == 0;
  v29 = *((_DWORD *)this + 204);
  v27 = v5;
  v28 = v7;
  if ( v10 )
  {
    *(_OWORD *)&v4->r = _xmm;
    LOBYTE(v30) = 0;
    v11 = v30;
    *((_OWORD *)this + 50) = 0LL;
    *((_DWORD *)this + 204) = v11;
  }
  else
  {
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), v4);
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 4), (struct _D3DCOLORVALUE *)this + 50);
    if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
      *((_BYTE *)this + 816) = 1;
    v3 = *((_DWORD *)this + 209);
  }
  v12 = *((float *)&v28 + 3);
  v13 = *((float *)&v28 + 2);
  v14 = *((float *)&v28 + 1);
  v15 = *(float *)&v28;
  v16 = *((float *)&v27 + 3);
  v17 = *((float *)&v27 + 2);
  v18 = *((float *)&v27 + 1);
  v19 = *(float *)&v27;
  *((_BYTE *)this + 919) = *((_BYTE *)a3 + 20) != 0;
  if ( v9 != ((v3 & 2) != 0)
    || (CColorKey::IsNonEmpty((CColorKey *)&v27) || CColorKey::IsNonEmpty((CColorKey *)v4))
    && (v19 != v4->r
     || v18 != v4->g
     || v17 != v4->b
     || v16 != v4->a
     || v15 != v4[1].r
     || v14 != v4[1].g
     || v13 != v4[1].b
     || v12 != v4[1].a) )
  {
    v22 = *((_QWORD *)this + 90);
    if ( v22 )
    {
      v24 = v3 >> 1;
      LOBYTE(v24) = v24 & 1;
      (*(void (__fastcall **)(__int64, __int64, struct _D3DCOLORVALUE *))(*(_QWORD *)v22 + 64LL))(v22, v24, v4);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 188); i = (unsigned int)(i + 1) )
    {
      v25 = *((_DWORD *)this + 209) >> 1;
      LOBYTE(v25) = (*((_DWORD *)this + 209) & 2) != 0;
      v26 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * i);
      (*(void (__fastcall **)(__int64, __int64, struct _D3DCOLORVALUE *))(*(_QWORD *)v26 + 64LL))(v26, v25, v4);
    }
  }
  if ( (CColorKey::IsNonEmpty((CColorKey *)v4) || CColorKey::IsNonEmpty((CColorKey *)&v27))
    && (v4->r != v19
     || v4->g != v18
     || v4->b != v17
     || v4->a != v16
     || v4[1].r != v15
     || v4[1].g != v14
     || v4[1].b != v13
     || v4[1].a != v12) )
  {
    v20 = *((_DWORD *)a3 + 2);
    goto LABEL_12;
  }
  v20 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 209) != v20 )
  {
LABEL_12:
    *((_DWORD *)this + 209) = v20;
    CVisual::PropagateFlags(this, 4LL);
  }
  return 0LL;
}
