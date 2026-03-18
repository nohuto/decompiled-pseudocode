/*
 * XREFs of ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801AEBF0
 * Callers:
 *     ?DebugDump@CCursorVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801BFEE0 (-DebugDump@CCursorVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSpriteVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801EF070 (-DebugDump@CSpriteVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801F48E0 (-DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180040320 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800875B4 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A1AD0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD6C0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C1710 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E228C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E22C8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180155F8C (--$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??$AddChildLink@VCVisual@@@CVisualTreeDumpContext@@QEAAXPEAVCVisual@@@Z @ 0x1801ADD34 (--$AddChildLink@VCVisual@@@CVisualTreeDumpContext@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCContent@@_N@Z @ 0x1801ADD90 (--$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ??$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x1801ADE9C (--$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 */

void __fastcall CVisual::DebugDump(CVisual *this, void **a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rbx
  const struct CVisualTree *v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 Count; // rbx
  unsigned __int64 v9; // rax
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v12; // [rsp+88h] [rbp-80h]
  _QWORD v13[4]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v14; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v15[4]; // [rsp+D8h] [rbp-30h] BYREF

  std::string::string(v15, (__int64)"CVisual");
  if ( a2 != v15 )
  {
    v4 = v15;
    if ( v15[3] >= 0x10uLL )
      v4 = (_QWORD *)v15[0];
    std::string::assign(a2, v4, v15[2]);
  }
  std::string::_Tidy_deallocate(v15);
  v5 = *((_QWORD *)this + 31);
  std::string::string(&v14, (__int64)"content");
  CVisualTreeDumpContext::AddLinkInternal<CContent>((__int64 *)a2, (__int64)&v14, v5);
  std::string::_Tidy_deallocate(&v14);
  CVisual::GetOpacityInternal(this);
  std::string::string(v13, (__int64)"opacity");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v13);
  std::string::_Tidy_deallocate(v13);
  LOBYTE(v5) = (*((_BYTE *)this + 95) & 2) != 0;
  std::string::string(v13, (__int64)"visible");
  CVisualTreeDumpContext::AddProperty<bool>((__int64)a2, v13, v5);
  std::string::_Tidy_deallocate(v13);
  v6 = (const struct CVisualTree *)a2[15];
  v7 = 0LL;
  v11[0] = _xmm;
  v11[1] = _xmm;
  v11[2] = _xmm;
  v11[3] = _xmm;
  v12 = 32085;
  CVisual::GetWorldTransform(this, v6, 0, (__int64)v11, &v10, 0LL);
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v11, (__int64)this + 164, (float *)&v14);
  std::string::string(v13, (__int64)"boundsLeft");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v13);
  std::string::_Tidy_deallocate(v13);
  std::string::string(v13, (__int64)"boundsRight");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v13);
  std::string::_Tidy_deallocate(v13);
  std::string::string(v13, (__int64)"boundsTop");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v13);
  std::string::_Tidy_deallocate(v13);
  std::string::string(v13, (__int64)"boundsBottom");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v13);
  std::string::_Tidy_deallocate(v13);
  CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)v11);
  std::string::string(v13, (__int64)"scaleX");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v13);
  std::string::_Tidy_deallocate(v13);
  std::string::string(v13, (__int64)"scaleY");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v13);
  std::string::_Tidy_deallocate(v13);
  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 72));
  if ( Count )
  {
    do
    {
      v9 = CPtrArrayBase::operator[]((CVisual *)((char *)this + 72));
      CVisualTreeDumpContext::AddChildLink<CVisual>((__int64)a2, v9);
      ++v7;
    }
    while ( v7 < Count );
  }
}
