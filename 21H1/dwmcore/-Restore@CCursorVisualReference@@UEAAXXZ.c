/*
 * XREFs of ?Restore@CCursorVisualReference@@UEAAXXZ @ 0x1801787E0
 * Callers:
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DF37C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x180178720 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 */

void __fastcall CCursorVisualReference::Restore(CRenderTargetBitmap **this)
{
  CRenderTargetBitmap *v2; // rcx
  __int64 v3; // rax
  CRenderTargetBitmap *v4; // rcx

  CExcludeVisualReference::Restore((CExcludeVisualReference *)this);
  v2 = this[3];
  if ( v2 )
  {
    if ( *((float *)v2 + 18) != 0.0 )
    {
      v3 = *(_QWORD *)v2;
      *((_DWORD *)v2 + 18) = 0;
      (*(void (__fastcall **)(CRenderTargetBitmap *, _QWORD, _QWORD))(v3 + 72))(v2, 0LL, 0LL);
    }
    v4 = this[3];
    this[3] = 0LL;
    if ( v4 )
      CRenderTargetBitmap::Release(v4);
  }
}
