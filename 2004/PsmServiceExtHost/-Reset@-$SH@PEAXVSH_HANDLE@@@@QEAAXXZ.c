/*
 * XREFs of ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x180085A64
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x18003CC48 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall SH<void *,SH_HANDLE>::Reset(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CloseHandle(v2);
    *a1 = 0LL;
  }
  return result;
}
