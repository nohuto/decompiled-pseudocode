/*
 * XREFs of _RtlpInitializeThreadActivationContextStack@4 @ 0x4B2E4934
 * Callers:
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _RtlFreeThreadActivationContextStack@0 @ 0x4B2E4910 (_RtlFreeThreadActivationContextStack@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlpInitializeActivationContextStack@4 @ 0x4B2E4963 (_RtlpInitializeActivationContextStack@4.c)
 */

int __thiscall RtlpInitializeThreadActivationContextStack(_DWORD *this)
{
  _DWORD *v2; // esi
  int result; // eax

  if ( !this[106] )
  {
    v2 = this + 97;
    result = RtlpInitializeActivationContextStack(this + 97);
    this[106] = v2;
    this[100] = 2;
  }
  return result;
}
