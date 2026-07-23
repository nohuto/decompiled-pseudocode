/*
 * XREFs of EtwpIsValidImageAddress @ 0x1405D193C
 * Callers:
 *     EtwpFindDebugId @ 0x1406099F0 (EtwpFindDebugId.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 */

char __fastcall EtwpIsValidImageAddress(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  int v3; // edi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx

  v3 = 0;
  v5 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v5 )
    return 1;
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    v7 = v6 + (unsigned int)(v3 << 12);
    if ( *a3 != v7 )
      break;
LABEL_6:
    if ( (unsigned int)++v3 >= v5 )
      return 1;
  }
  if ( MmIsAddressValidEx(v6 + (unsigned int)(v3 << 12)) )
  {
    *a3 = v7;
    goto LABEL_6;
  }
  return 0;
}
