/*
 * XREFs of HalpIommuGetDmarptRootAddress @ 0x1404DBE78
 * Callers:
 *     HalpIommuGetHardwareDomain @ 0x1404C9834 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuConstructReservedPageTable @ 0x1409A83D8 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HalpIommuGetDmarptRootAddress(__int64 a1, unsigned int a2, PHYSICAL_ADDRESS *a3)
{
  unsigned int v3; // eax
  char *v6; // r8
  unsigned int v7; // eax
  _DWORD *v8; // rdx
  __int64 v9; // r9
  int v10; // eax

  v3 = *(_DWORD *)(a1 + 24);
  if ( a2 > v3 )
    return 3221225485LL;
  v6 = *(char **)(a1 + 16);
  v7 = v3 - a2;
  if ( v7 )
  {
    v8 = (_DWORD *)(a1 + 36);
    v9 = v7;
    do
    {
      v10 = 1 << *v8++;
      v6 = *(char **)&v6[v10 << *(_DWORD *)(a1 + 28)];
      --v9;
    }
    while ( v9 );
  }
  *a3 = MmGetPhysicalAddress(v6);
  return 0LL;
}
