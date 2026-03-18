/*
 * XREFs of ?AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180013544
 * Callers:
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18001186C (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x18005C114 (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 */

void __fastcall CComposition::AddProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v2; // r8
  char *v4; // rcx
  struct CVisual **i; // rax
  _QWORD *v6; // rdx
  struct CVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (struct CVisual **)*((_QWORD *)this + 117);
  v4 = (char *)this + 928;
  for ( i = *(struct CVisual ***)v4; i != v2 && *i != a2; ++i )
    ;
  if ( i == v2 )
  {
    v6 = (_QWORD *)*((_QWORD *)v4 + 1);
    if ( *((_QWORD **)v4 + 2) == v6 )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(v4, v6, &v7, a2);
    }
    else
    {
      *v6 = a2;
      *((_QWORD *)v4 + 1) += 8LL;
    }
  }
}
