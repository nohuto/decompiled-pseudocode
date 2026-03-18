/*
 * XREFs of ?GetOffset@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x18020EC50
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E31B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3218 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionEnvironmentLight::GetOffset(
        CCompositionEnvironmentLight *this)
{
  if ( dword_180349D40 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180349D40);
    if ( dword_180349D40 == -1 )
    {
      dword_180349D48 = 0;
      dword_180349D4C = 0;
      dword_180349D50 = 0;
      Init_thread_footer(&dword_180349D40);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_180349D48;
}
