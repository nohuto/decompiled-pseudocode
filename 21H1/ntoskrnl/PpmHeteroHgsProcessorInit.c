/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x1403CA7FC
 * Callers:
 *     PpmCheckProcessorInit @ 0x1403CA7D0 (PpmCheckProcessorInit.c)
 *     PpmHeteroHgsBackupProcessorInit @ 0x1405720D0 (PpmHeteroHgsBackupProcessorInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall PpmHeteroHgsProcessorInit(__int64 a1)
{
  unsigned int v7; // r9d

  if ( PpmHeteroHgsEnabled )
  {
    _RAX = 0LL;
    __asm { cpuid }
    v7 = _RAX;
    _RAX = 6LL;
    __asm { cpuid }
    _RAX = 7LL;
    *(_WORD *)(a1 + 33274) = WORD1(_RDX);
    if ( v7 >= 7 )
    {
      __asm { cpuid }
      if ( (_RDX & 0x8000) != 0 )
      {
        _RAX = 26LL;
        PpmHeteroHgsHeteroCoreTypes = 1;
        if ( v7 >= 0x1A )
        {
          __asm { cpuid }
          *(_BYTE *)(a1 + 33279) = BYTE3(_RAX);
        }
      }
    }
  }
}
