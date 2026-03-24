/*
 * XREFs of ?GetVidPnSourceId@CLegacyRenderTarget@@UEBAIXZ @ 0x18016F020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetVidPnSourceId(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  else
    return 0xFFFFFFFFLL;
}
