/*
 * XREFs of _LdrpEventAddAnsiString@16 @ 0x4B32FC10
 * Callers:
 *     _LdrpLogDelayLoadTrigger@16 @ 0x4B2C02B9 (_LdrpLogDelayLoadTrigger@16.c)
 * Callees:
 *     <none>
 */

int __fastcall LdrpEventAddAnsiString(unsigned __int16 *a1, int a2, unsigned int a3, unsigned int *a4)
{
  int result; // eax
  unsigned int v5; // edi
  unsigned int v6; // esi

  result = *a1;
  v5 = 2 * result + 2;
  v6 = 0;
  *a4 = 0;
  if ( v5 <= a3 )
  {
    if ( result )
    {
      do
      {
        *(_WORD *)(a2 + 2 * v6) = *(char *)(v6 + *((_DWORD *)a1 + 1));
        ++v6;
      }
      while ( v6 < *a1 );
    }
    result = 0;
    *a4 = v5;
    *(_WORD *)(a2 + 2 * v6) = 0;
  }
  return result;
}
