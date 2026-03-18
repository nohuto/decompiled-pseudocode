/*
 * XREFs of ??1CCursorVisual@@MEAA@XZ @ 0x180211AB4
 * Callers:
 *     ??_GCCursorVisual@@MEAAPEAXI@Z @ 0x180211B30 (--_GCCursorVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x180269518 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 */

void __fastcall CCursorVisual::~CCursorVisual(CCursorVisual *this)
{
  CCursorState *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CCursorVisual::`vftable';
  v2 = (CCursorState *)*((_QWORD *)this + 93);
  if ( v2 )
  {
    CCursorState::ClearVisual(v2);
    (*(void (__fastcall **)(_QWORD, CCursorVisual *))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2), this);
    v3 = *((_QWORD *)this + 93);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  CVisual::~CVisual(this);
}
