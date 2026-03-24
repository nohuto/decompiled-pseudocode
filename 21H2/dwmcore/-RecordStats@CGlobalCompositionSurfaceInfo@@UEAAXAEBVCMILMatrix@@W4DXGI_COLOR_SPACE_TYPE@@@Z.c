/*
 * XREFs of ?RecordStats@CGlobalCompositionSurfaceInfo@@UEAAXAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C23A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::RecordStats(
        CGlobalCompositionSurfaceInfo *this,
        const struct CMILMatrix *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  CComposition *v5; // rcx

  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct CMILMatrix *, __int64))(*(_QWORD *)v4 + 40LL))(
           v4,
           a2,
           a3) )
    {
      CComposition::AddCompSurfInfoUpdate(v5, this);
    }
  }
}
