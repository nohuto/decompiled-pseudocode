/*
 * XREFs of ?GetOffset@CCompositionAmbientLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x1801B8D00
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E7910 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E7978 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionAmbientLight::GetOffset(
        CCompositionAmbientLight *this)
{
  if ( dword_18034BDE4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034BDE4);
    if ( dword_18034BDE4 == -1 )
    {
      dword_18034BDE8 = 0;
      dword_18034BDEC = 0;
      dword_18034BDF0 = 0;
      Init_thread_footer(&dword_18034BDE4);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_18034BDE8;
}
