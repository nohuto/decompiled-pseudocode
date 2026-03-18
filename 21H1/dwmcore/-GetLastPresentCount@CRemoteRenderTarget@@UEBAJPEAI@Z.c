/*
 * XREFs of ?GetLastPresentCount@CRemoteRenderTarget@@UEBAJPEAI@Z @ 0x1800DFE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::GetLastPresentCount(CRemoteRenderTarget *this, unsigned int *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // eax

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *a2 = v3;
  return 0LL;
}
