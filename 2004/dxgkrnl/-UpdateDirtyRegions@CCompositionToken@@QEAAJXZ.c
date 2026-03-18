/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0063764
 * Callers:
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0016FA0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010BD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C0065878 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int v1; // ebx
  unsigned int i; // edi
  _QWORD *v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r13
  int updated; // ebp

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 9) + 32LL * i);
    v5 = v4[3];
    v6 = v4[1];
    if ( v5 )
    {
      v7 = v4[2];
      updated = CPushLock::AcquireLockExclusive((CPushLock *)(v6 + 48));
      if ( updated >= 0 )
      {
        updated = CCompositionSurface::UpdateBufferDirtyRegion(v6 + 40, v7, v5);
        CPushLock::ReleaseLock((CPushLock *)(v6 + 48));
      }
      if ( v1 >= 0 && updated < 0 )
        v1 = updated;
    }
  }
  return (unsigned int)v1;
}
