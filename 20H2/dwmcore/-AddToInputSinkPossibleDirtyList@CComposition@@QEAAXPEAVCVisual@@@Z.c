/*
 * XREFs of ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1800A9B88
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A9C00 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800AA250 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x18005C114 (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComposition::AddToInputSinkPossibleDirtyList(CComposition *this, struct CVisual *a2)
{
  struct CVisual *v2; // rbx
  _BYTE *v4; // rdx
  struct CVisual *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a2;
  if ( (*((_DWORD *)a2 + 22) & 0x2000) != 0 || (*((_BYTE *)a2 + 88) & 0x10) != 0 )
  {
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = (_BYTE *)*((_QWORD *)this + 147);
    if ( *((_BYTE **)this + 148) == v4 )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>((__int64 *)this + 146, v4, &v5);
      v2 = v5;
    }
    else
    {
      *(_QWORD *)v4 = v2;
      *((_QWORD *)this + 147) += 8LL;
    }
    *((_BYTE *)v2 + 88) |= 0x20u;
  }
}
