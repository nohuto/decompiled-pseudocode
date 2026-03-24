/*
 * XREFs of ?GetOffset@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x18020FA30
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E7910 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E7978 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionEnvironmentLight::GetOffset(
        CCompositionEnvironmentLight *this)
{
  if ( dword_18034BE00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034BE00);
    if ( dword_18034BE00 == -1 )
    {
      dword_18034BE08 = 0;
      dword_18034BE0C = 0;
      dword_18034BE10 = 0;
      Init_thread_footer(&dword_18034BE00);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_18034BE08;
}
