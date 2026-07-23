/*
 * XREFs of HalpMcaReadErrorCorrectedAMD @ 0x1404BD628
 * Callers:
 *     HalpMcaReadErrorCorrected @ 0x1404BD5B0 (HalpMcaReadErrorCorrected.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMcaReadErrorCorrectedAMD(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  if ( (*a1 & 0x2000000000000000LL) != 0 )
  {
    if ( HalpMcaRecoverySupported && (result & 0x200000000000000LL) == 0 )
      *(_WORD *)a2 = 257;
  }
  else
  {
    if ( *((_BYTE *)a1 + 8) )
    {
      if ( (result & 0x100000000000LL) != 0 )
        *(_BYTE *)(a2 + 1) = 1;
    }
    *(_BYTE *)a2 = 1;
  }
  return result;
}
