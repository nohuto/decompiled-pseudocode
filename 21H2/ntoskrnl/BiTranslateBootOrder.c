/*
 * XREFs of BiTranslateBootOrder @ 0x140972DFC
 * Callers:
 *     BiBindEfiBootManager @ 0x1409705CC (BiBindEfiBootManager.c)
 * Callees:
 *     BiTranslateBootEntryId @ 0x140972D94 (BiTranslateBootEntryId.c)
 */

__int64 __fastcall BiTranslateBootOrder(__int64 **a1, int *a2, __int64 a3, _DWORD *a4)
{
  int v4; // r11d
  unsigned int v5; // edi
  __int64 v9; // rsi
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  if ( *a4 )
  {
    v9 = (unsigned int)*a4;
    do
    {
      if ( (int)BiTranslateBootEntryId(a1, *a2) >= 0 )
        ++v4;
      else
        v5 = -2147483635;
      ++a2;
      --v9;
    }
    while ( v9 );
  }
  result = v5;
  *a4 = v4;
  return result;
}
