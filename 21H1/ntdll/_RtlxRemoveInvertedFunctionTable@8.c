/*
 * XREFs of _RtlxRemoveInvertedFunctionTable@8 @ 0x4B2E6831
 * Callers:
 *     _RtlRemoveInvertedFunctionTable@4 @ 0x4B2E680E (_RtlRemoveInvertedFunctionTable@4.c)
 * Callees:
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlpRemoveInvertedFunctionTableEntry@8 @ 0x4B2E6870 (_RtlpRemoveInvertedFunctionTableEntry@8.c)
 */

void __fastcall RtlxRemoveInvertedFunctionTable(int a1, int a2)
{
  int v2; // esi
  int *v3; // eax

  v2 = LdrpInvertedFunctionTable - 1;
  if ( LdrpInvertedFunctionTable != 1 )
  {
    v3 = &dword_4B3A9374[4 * v2];
    do
    {
      if ( a2 == *v3 )
        break;
      v3 -= 4;
      --v2;
    }
    while ( v2 );
  }
  if ( v2 )
  {
    LdrProtectMrdata(0);
    RtlpRemoveInvertedFunctionTableEntry();
    LdrProtectMrdata(1);
  }
}
