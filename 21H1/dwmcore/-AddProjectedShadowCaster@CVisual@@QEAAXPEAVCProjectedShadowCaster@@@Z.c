/*
 * XREFs of ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1800037E8
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180003778 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180005DE4 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180005EF8 (-AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x180005F50 (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001C698 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 */

void __fastcall CVisual::AddProjectedShadowCaster(CComposition **this, struct CProjectedShadowCaster *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowCasters; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  struct CProjectedShadowCaster *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( (*(_DWORD *)this[28] & 0x40000) == 0 )
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
  ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
  v6 = (_QWORD *)ProjectedShadowCasters;
  v7 = *(_QWORD **)(ProjectedShadowCasters + 8);
  if ( *(_QWORD **)(ProjectedShadowCasters + 16) == v7 )
  {
    std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
      ProjectedShadowCasters,
      v7,
      &v9);
    v8 = v6[1];
  }
  else
  {
    *v7 = a2;
    *(_QWORD *)(ProjectedShadowCasters + 8) += 8LL;
    v8 = *(_QWORD *)(ProjectedShadowCasters + 8);
  }
  if ( ((v8 - *v6) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
    CComposition::AddProjectedShadowCasterVisual(this[2], (struct CVisual *)this);
}
