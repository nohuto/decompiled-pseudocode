/*
 * XREFs of ?GetPresentCount@CRemoteRenderTarget@@UEBAIXZ @ 0x1800FF430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::GetPresentCount(CRemoteRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  else
    return 0LL;
}
