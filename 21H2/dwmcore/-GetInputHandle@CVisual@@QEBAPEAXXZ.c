/*
 * XREFs of ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004933C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18002AE94 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x180046190 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1800492AC (-AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800C9390 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetInputHandle(CVisual *this)
{
  _DWORD *v1; // r9
  __int64 v2; // r8
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  unsigned int v5; // eax
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  v2 = 0LL;
  if ( (*v1 & 0x800000) == 0 )
    return v2;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 9 )
    {
      ++v5;
      ++v4;
      if ( v5 >= (unsigned int)v3 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( v5 >= (unsigned int)v3 )
    {
      v6 = 0LL;
      goto LABEL_5;
    }
  }
  v6 = (__int64 *)((char *)v1 + 8LL * v5 - (((_BYTE)v3 + 15) & 7) + v3 + 15);
LABEL_5:
  v7 = *v6;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 104);
    if ( v8 )
      return *(_QWORD *)(v8 + 64);
  }
  return v2;
}
