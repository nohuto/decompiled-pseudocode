/*
 * XREFs of _LdrpReleaseDllPath@4 @ 0x4B2DDF8A
 * Callers:
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 * Callees:
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 */

int __thiscall LdrpReleaseDllPath(_BYTE *this)
{
  int result; // eax

  if ( this[76] )
    return RtlReleasePath(*(_DWORD *)this);
  return result;
}
