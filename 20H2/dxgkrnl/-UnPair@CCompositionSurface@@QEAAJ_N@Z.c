/*
 * XREFs of ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C00656C4
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B7C20 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001268C (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C00652E0 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UnPair(CCompositionSurface *this)
{
  __int64 v2; // rcx
  CCompositionSurface *v3; // rbx
  CFlipExBuffer *v4; // rax

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    v3 = (CCompositionSurface *)*((_QWORD *)this + 8);
    if ( v3 != (CCompositionSurface *)((char *)this + 64) )
    {
      do
      {
        v4 = CFlipExBuffer::FromBuffer((CCompositionSurface *)((char *)v3 - 24));
        CFlipExBuffer::DisableCascadedSignaling(v4);
        v3 = *(CCompositionSurface **)v3;
      }
      while ( v3 != (CCompositionSurface *)((char *)this + 64) );
      v2 = *((_QWORD *)this + 12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 8LL))(*((_QWORD *)this + 12), 0LL);
    *((_QWORD *)this + 12) = 0LL;
  }
  return 0LL;
}
