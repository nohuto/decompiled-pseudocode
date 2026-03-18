/*
 * XREFs of ?AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180192D64
 * Callers:
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1801F699C (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x180181A78 (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 */

void __fastcall CComposition::AddProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v4; // rdx
  struct CVisual ***v5; // rcx
  struct CVisual **i; // rax
  struct CVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = (struct CVisual **)*((_QWORD *)this + 136);
  v5 = (struct CVisual ***)((char *)this + 1080);
  for ( i = *v5; i != v4; ++i )
  {
    if ( *i == a2 )
      return;
  }
  if ( v4 == *((struct CVisual ***)this + 137) )
  {
    std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(v5, v4, &v7);
  }
  else
  {
    *v4 = a2;
    ++v5[1];
  }
}
