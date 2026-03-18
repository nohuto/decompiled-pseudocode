/*
 * XREFs of HalpInitializeNMI @ 0x1403C5008
 * Callers:
 *     HalpInitializeErrSrc @ 0x1409A35C0 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C507D4 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C507D8 = 0;
  }
  return 0LL;
}
