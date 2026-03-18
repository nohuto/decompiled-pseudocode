/*
 * XREFs of ?GetOffset@CCompositionAmbientLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x1801BCBA0
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionAmbientLight::GetOffset(
        CCompositionAmbientLight *this)
{
  if ( dword_18034DDA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034DDA0);
    if ( dword_18034DDA0 == -1 )
    {
      dword_18034DDA8 = 0;
      dword_18034DDAC = 0;
      dword_18034DDB0 = 0;
      Init_thread_footer(&dword_18034DDA0);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_18034DDA8;
}
