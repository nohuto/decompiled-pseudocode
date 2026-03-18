/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QAEHPAVPFF@@@Z @ 0x1D0635
 * Callers:
 *     _NtGdiAddEmbFontToDC@8 @ 0x1D9099 (_NtGdiAddEmbFontToDC@8.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __thiscall PUBLIC_PFTOBJ::VerifyPFF(struct PFT **this, struct PFF *a2)
{
  int v4; // esi
  unsigned int v5; // edx
  int *v6; // ecx
  int i; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  if ( *this != gpPFTPrivate )
    return 0;
  v8 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v4 = 0;
  v5 = 0;
  v6 = (int *)((char *)*this + 24);
  do
  {
    if ( v6 )
    {
      for ( i = *v6; i; i = *(_DWORD *)(i + 4) )
      {
        if ( a2 == (struct PFF *)i )
        {
          v4 = 1;
          goto LABEL_12;
        }
      }
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 0x14 );
LABEL_12:
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  return v4;
}
