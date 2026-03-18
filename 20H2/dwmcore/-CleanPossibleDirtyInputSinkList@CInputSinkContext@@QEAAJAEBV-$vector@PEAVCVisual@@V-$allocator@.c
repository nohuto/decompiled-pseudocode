/*
 * XREFs of ?CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800C5B84
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007CE20 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18006563C (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSinkContext::CleanPossibleDirtyInputSinkList(
        CInputSinkContext *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  unsigned int v4; // ebx
  _BYTE **v6; // rsi
  _BYTE **v7; // rbp
  _BYTE *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  v6 = *(_BYTE ***)a2;
  v7 = *(_BYTE ***)(a2 + 8);
  while ( v6 != v7 )
  {
    v8 = *v6;
    *((_QWORD *)a1 + 2) = *v6;
    if ( (v8[88] & 0x20) != 0 )
    {
      *((_QWORD *)a1 + 11) = 0LL;
      v9 = CVisualTreeIterator::WalkSubtree<CInputSinkContext>((__int64)a1 + 24, (__int64)v8, a1, a4);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x56u, 0LL);
        return v4;
      }
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v8 + 16LL))(v8);
    ++v6;
  }
  return v4;
}
