/*
 * XREFs of _GetJournallingQueue@4 @ 0x6F3E4
 * Callers:
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 * Callees:
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 */

int __stdcall GetJournallingQueue(int a1)
{
  int v1; // edi
  int GlobalValid; // eax

  if ( *(char *)(a1 + 264) < 0 )
    return 0;
  v1 = 0;
  if ( !*(_DWORD *)(a1 + 248) )
    return 0;
  GlobalValid = PhkFirstGlobalValid(a1);
  if ( GlobalValid )
    return *(_DWORD *)(*(_DWORD *)(GlobalValid + 8) + 236);
  GlobalValid = PhkFirstGlobalValid(a1);
  if ( GlobalValid )
    return *(_DWORD *)(*(_DWORD *)(GlobalValid + 8) + 236);
  return v1;
}
