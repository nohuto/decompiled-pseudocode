/*
 * XREFs of ?GetOffset@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x180211610
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionEnvironmentLight::GetOffset(
        CCompositionEnvironmentLight *this)
{
  if ( dword_18034DDC0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034DDC0);
    if ( dword_18034DDC0 == -1 )
    {
      dword_18034DDC8 = 0;
      dword_18034DDCC = 0;
      dword_18034DDD0 = 0;
      Init_thread_footer(&dword_18034DDC0);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_18034DDC8;
}
