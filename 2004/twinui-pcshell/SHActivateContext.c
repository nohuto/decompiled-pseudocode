/*
 * XREFs of SHActivateContext @ 0x18013EF2C
 * Callers:
 *     SHFusionLoadLibrary @ 0x18013F0BC (SHFusionLoadLibrary.c)
 * Callees:
 *     SHFusionInitializeFromModuleID @ 0x18013EF9C (SHFusionInitializeFromModuleID.c)
 */

BOOL __fastcall SHActivateContext(ULONG_PTR *a1)
{
  HANDLE v2; // rcx

  *a1 = 0LL;
  v2 = g_hActCtx;
  if ( g_hActCtx != (HANDLE)-1LL )
    goto LABEL_7;
  if ( !hModule )
    return 1;
  if ( hModule == g_hActCtx )
    return 0;
  SHFusionInitializeFromModuleID();
  v2 = g_hActCtx;
  if ( g_hActCtx == (HANDLE)-1LL )
    return 1;
LABEL_7:
  *a1 = 0LL;
  return ActivateActCtx(v2, a1);
}
