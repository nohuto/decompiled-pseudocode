/*
 * XREFs of ?GetOffset@CCompositionEnvironmentLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ @ 0x18020CE10
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x1800E34C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3528 (_Init_thread_header.c)
 */

const struct Windows::Foundation::Numerics::float3 *__fastcall CCompositionEnvironmentLight::GetOffset(
        CCompositionEnvironmentLight *this)
{
  if ( dword_180348D50 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180348D50);
    if ( dword_180348D50 == -1 )
    {
      dword_180348D58 = 0;
      dword_180348D5C = 0;
      dword_180348D60 = 0;
      Init_thread_footer(&dword_180348D50);
    }
  }
  return (const struct Windows::Foundation::Numerics::float3 *)&dword_180348D58;
}
