/*
 * XREFs of _LdrpShouldModuleImportBeRedirected@4 @ 0x4B2E8DE5
 * Callers:
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

char __thiscall LdrpShouldModuleImportBeRedirected(int this)
{
  if ( !this || !LdrpRedirectionModule || LdrpRedirectionModule == this )
    return 0;
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
    return *(_BYTE *)(this + 52) & 1;
  if ( LdrpRedirectionCalloutFunc )
    return LdrpRedirectionCalloutFunc(LdrpRedirectionCalloutFunc, *(_DWORD *)(this + 40));
  return 1;
}
