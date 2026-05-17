/*
 * XREFs of _RtlpInitializeActivationContextStack@4 @ 0x4B2E4963
 * Callers:
 *     _RtlAllocateActivationContextStack@4 @ 0x4B2E48C0 (_RtlAllocateActivationContextStack@4.c)
 *     _RtlpInitializeThreadActivationContextStack@4 @ 0x4B2E4934 (_RtlpInitializeThreadActivationContextStack@4.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpInitializeActivationContextStack(_DWORD *this)
{
  int result; // eax

  this[3] = 0;
  *this = 0;
  this[2] = this + 1;
  this[1] = this + 1;
  this[4] = 1;
  if ( MEMORY[0x7FFE0004] < 0x1000000u )
  {
    while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
      _mm_pause();
    result = MEMORY[0x7FFE0004] * (MEMORY[0x7FFE0324] << 8)
           + ((MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
  }
  else
  {
    result = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
  }
  this[5] = result;
  return result;
}
