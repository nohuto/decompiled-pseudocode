/*
 * XREFs of ?UMPD_ldevFillTable@@YGHPAU_LDEV@@PBH@Z @ 0x21101C
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YGPAU_LDEV@@PAGW4_LDEVTYPE@@@Z @ 0x21107D (-UMPD_ldevLoadDriver@@YGPAU_LDEV@@PAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall UMPD_ldevFillTable(int a1, int a2)
{
  int v2; // esi
  unsigned int i; // ecx
  char *v5; // ecx

  v2 = a1 + 40;
  memset((void *)(a1 + 40), 0, 0x1A0u);
  for ( i = 0; i < 104; ++i )
  {
    if ( *(_DWORD *)(a2 + i * 4) )
      *(_DWORD *)(v2 + i * 4) = (&gpUMDriverFunc)[i];
  }
  v5 = &byte_25D618;
  while ( 1 )
  {
    v5 -= 4;
    if ( !*(_DWORD *)(v2 + 4 * *(_DWORD *)v5) )
      break;
    if ( v5 == (char *)&unk_25D60C )
    {
      *(_DWORD *)(v2 + 168) = UMPDDrvFree;
      return 1;
    }
  }
  return 0;
}
