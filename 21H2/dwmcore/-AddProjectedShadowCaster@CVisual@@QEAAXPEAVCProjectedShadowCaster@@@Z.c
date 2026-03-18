/*
 * XREFs of ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1801F699C
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180201D40 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180192D64 (-AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801940B8 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ??$_Emplace_reallocate@AEBQEAVCProjectedShadowCaster@@@?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@QEAAPEAPEAVCProjectedShadowCaster@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801F65D4 (--$_Emplace_reallocate@AEBQEAVCProjectedShadowCaster@@@-$vector@PEAVCProjectedShadowCaster@@V-$a.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x1801F867C (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 */

void __fastcall CVisual::AddProjectedShadowCaster(CComposition **this, struct CProjectedShadowCaster *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowCasters; // rax
  _QWORD *v6; // rdi
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  struct CProjectedShadowCaster *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( (*(_DWORD *)this[29] & 0x40000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    CVisual::SetProjectedShadowCasters(this, v4);
  }
  ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
  v6 = (_QWORD *)ProjectedShadowCasters;
  v7 = *(_BYTE **)(ProjectedShadowCasters + 8);
  if ( v7 == *(_BYTE **)(ProjectedShadowCasters + 16) )
  {
    std::vector<CProjectedShadowCaster *>::_Emplace_reallocate<CProjectedShadowCaster * const &>(
      (const void **)ProjectedShadowCasters,
      v7,
      &v9);
    v8 = v6[1];
  }
  else
  {
    *(_QWORD *)v7 = a2;
    *(_QWORD *)(ProjectedShadowCasters + 8) += 8LL;
    v8 = *(_QWORD *)(ProjectedShadowCasters + 8);
  }
  if ( ((v8 - *v6) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
    CComposition::AddProjectedShadowCasterVisual(this[2], (struct CVisual *)this);
}
