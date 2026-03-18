/*
 * XREFs of ?GetOffset@CCompositionAmbientLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x1801B8340
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E34C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3528 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionAmbientLight::GetOffset(
        CCompositionAmbientLight *this)
{
  if ( dword_180348D34 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180348D34);
    if ( dword_180348D34 == -1 )
    {
      dword_180348D38 = 0;
      dword_180348D3C = 0;
      dword_180348D40 = 0;
      Init_thread_footer(&dword_180348D34);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_180348D38;
}
