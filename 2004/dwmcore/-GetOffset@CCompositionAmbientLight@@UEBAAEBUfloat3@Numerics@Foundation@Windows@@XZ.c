/*
 * XREFs of ?GetOffset@CCompositionAmbientLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x1801BA230
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E31B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3218 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionAmbientLight::GetOffset(
        CCompositionAmbientLight *this)
{
  if ( dword_180349D24 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180349D24);
    if ( dword_180349D24 == -1 )
    {
      dword_180349D28 = 0;
      dword_180349D2C = 0;
      dword_180349D30 = 0;
      Init_thread_footer(&dword_180349D24);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_180349D28;
}
