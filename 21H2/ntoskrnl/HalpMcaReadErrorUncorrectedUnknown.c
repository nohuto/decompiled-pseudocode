/*
 * XREFs of HalpMcaReadErrorUncorrectedUnknown @ 0x1404BD6DC
 * Callers:
 *     HalpMcaReadError @ 0x1404BAA50 (HalpMcaReadError.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x1403A0FC0 (HalpWheaWriteMsrStatus.c)
 */

__int64 __fastcall HalpMcaReadErrorUncorrectedUnknown(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x2000000000000000LL) != 0 )
  {
    if ( (result & 0x1000000000000000LL) != 0 )
    {
      if ( (result & 0x200000000000000LL) != 0 || !*(_BYTE *)(a1 + 8) )
      {
        *a2 = 1;
      }
      else if ( (result & 0x100000000000000LL) != 0 )
      {
        *(_WORD *)a2 = 257;
      }
    }
    else
    {
      return HalpWheaWriteMsrStatus(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 12));
    }
  }
  return result;
}
