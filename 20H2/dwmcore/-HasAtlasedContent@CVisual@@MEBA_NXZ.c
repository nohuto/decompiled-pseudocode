/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x1800B98A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 31);
  return v1 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 56LL))(v1, 127LL);
}
