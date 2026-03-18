/*
 * XREFs of ?SkipScanLine@@YGKPAEKKKK@Z @ 0x1F1B73
 * Callers:
 *     ?vTransparentScan@@YGXPAU_SURFOBJ@@0KKPAU_XLATEOBJ@@PAU_RECTL@@K@Z @ 0x1F2EDF (-vTransparentScan@@YGXPAU_SURFOBJ@@0KKPAU_XLATEOBJ@@PAU_RECTL@@K@Z.c)
 * Callees:
 *     ?StartPixel@@YGPAEPAEKK@Z @ 0x1F1C2A (-StartPixel@@YGPAEPAEKK@Z.c)
 */

unsigned int __userpurge SkipScanLine@<eax>(
        unsigned int a1@<edx>,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // esi
  unsigned __int8 *started; // ecx
  int v9; // edx
  unsigned int v10; // edx
  unsigned int v12; // [esp+0h] [ebp-8h]
  unsigned int v13; // [esp+4h] [ebp-4h]

  v7 = 0;
  started = StartPixel(a3, v12, v13);
  while ( 1 )
  {
    if ( a1 >= (unsigned int)a2 || v7 )
      return a1;
    if ( a3 == (unsigned __int8 *)1 )
    {
      v9 = *started & 1;
      *started >>= 1;
      if ( (a1 & 7) != 7 )
        goto LABEL_18;
      goto LABEL_17;
    }
    if ( a3 == (unsigned __int8 *)2 )
    {
      v10 = *started;
      if ( (a1 & 1) == 0 )
      {
        v9 = v10 >> 4;
        goto LABEL_18;
      }
      v9 = v10 & 0xF;
      goto LABEL_17;
    }
    if ( a3 != (unsigned __int8 *)3 )
      break;
    v9 = *started;
LABEL_17:
    ++started;
LABEL_18:
    if ( v9 != a4 )
      v7 = 1;
    ++a1;
  }
  if ( a3 == (unsigned __int8 *)4 )
  {
    v9 = *(unsigned __int16 *)started;
    started += 2;
    goto LABEL_18;
  }
  if ( a3 == (unsigned __int8 *)5 )
  {
    v9 = *started | (*(unsigned __int16 *)(started + 1) << 8);
    started += 3;
    goto LABEL_18;
  }
  if ( a3 == (unsigned __int8 *)6 )
  {
    v9 = *(_DWORD *)started;
    started += 4;
    goto LABEL_18;
  }
  return 0;
}
