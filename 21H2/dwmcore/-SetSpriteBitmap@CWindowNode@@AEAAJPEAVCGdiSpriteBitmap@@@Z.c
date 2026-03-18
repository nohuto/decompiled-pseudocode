/*
 * XREFs of ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144
 * Callers:
 *     ?ProcessSetSpriteBitmap@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEBITMAP@@@Z @ 0x1800620F4 (-ProcessSetSpriteBitmap@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITE.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180046F60 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800615E8 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x180061610 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180062330 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?Contains@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800623D0 (-Contains@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x180062490 (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x180062568 (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800EB74C (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1800F18AC (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CComposeTop@@QEAA@XZ @ 0x18019DB30 (--1CComposeTop@@QEAA@XZ.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x180244868 (McTemplateU0xxx_EventWriteTransfer.c)
 */

__int64 __fastcall CWindowNode::SetSpriteBitmap(CWindowNode *this, struct CGdiSpriteBitmap *a2)
{
  unsigned int v4; // edi
  char v5; // r14
  int v6; // ecx
  char HasNonEmptyContent; // r15
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  char v15; // al
  bool v16; // bp
  unsigned int v17; // edx
  int v19; // eax
  struct CDesktopTree *DesktopTree; // rax
  CComposeTop *v21; // rsi
  struct CResource *v22; // rax

  v4 = 0;
  v5 = 0;
  HasNonEmptyContent = CWindowNode::HasNonEmptyContent(this);
  if ( a2 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxx_EventWriteTransfer(
        v6,
        (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
        *((_QWORD *)this + 91),
        *((_QWORD *)this + 92),
        (char)a2);
    if ( !CPtrArrayBase::Contains((CWindowNode *)((char *)this + 800), (unsigned __int64)a2) )
    {
      if ( *((_BYTE *)this + 914) || *((_BYTE *)a2 + 140) )
      {
        CWindowNode::DiscardGdiSpriteBitmaps(this);
        *((_BYTE *)this + 919) = 1;
        v5 = 1;
      }
      else if ( CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 800)) == 16 )
      {
        if ( *((_BYTE *)this + 919) )
        {
          v22 = (struct CResource *)CPtrArrayBase::operator[](v8, 1LL);
          CResource::UnRegisterNotifierInternal(this, v22);
          CPtrArrayBase::RemoveAt((CWindowNode *)((char *)this + 800), 1uLL, 1uLL);
        }
        else
        {
          CWindowNode::DiscardOldestGdiSpriteBitmaps(this, 1uLL);
        }
      }
      *((_BYTE *)a2 + 143) = *((_BYTE *)this + 913);
      CGdiSpriteBitmap::SetColorKey(a2, (*((_DWORD *)this + 219) & 2) != 0, (CWindowNode *)((char *)this + 824));
      v9 = CResource::RegisterNotifier(this, a2);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1B4u, 0LL);
        return v4;
      }
      Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 800));
      v13 = CPtrArrayBase::InsertAt(v12, (__int64)a2, Count);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1B5u, 0LL);
        return v4;
      }
    }
  }
  else if ( CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 800)) )
  {
    CWindowNode::DiscardGdiSpriteBitmaps(this);
    v5 = *((_BYTE *)this + 919);
    *((_BYTE *)this + 919) = 0;
  }
  v15 = CWindowNode::HasNonEmptyContent(this);
  v16 = HasNonEmptyContent != v15;
  if ( v5 )
  {
    if ( *((_BYTE *)this + 914) )
    {
      DesktopTree = CVisual::GetDesktopTree(this);
      if ( DesktopTree )
      {
        v21 = (CComposeTop *)*((_QWORD *)DesktopTree + 593);
        *((_QWORD *)DesktopTree + 593) = 0LL;
        if ( v21 )
        {
          CComposeTop::~CComposeTop(v21);
          operator delete(v21, 0xA8uLL);
        }
      }
    }
    v19 = 4;
    if ( *((_BYTE *)this + 913) )
    {
      SAFE_DELETE<CShape>((char *)this + 904);
      v17 = 5;
    }
    else
    {
      if ( v16 )
        v19 = 5;
      v17 = v19;
    }
    goto LABEL_13;
  }
  if ( HasNonEmptyContent != v15 )
  {
    v17 = 1;
LABEL_13:
    CVisual::PropagateFlags((__int64)this, v17);
  }
  return v4;
}
