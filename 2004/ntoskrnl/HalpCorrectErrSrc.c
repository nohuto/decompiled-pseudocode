/*
 * XREFs of HalpCorrectErrSrc @ 0x14099DE90
 * Callers:
 *     <none>
 * Callees:
 *     HalpCorrectGenericErrSrc @ 0x1403C9684 (HalpCorrectGenericErrSrc.c)
 *     HalpCorrectNMIErrSrc @ 0x1403C96A8 (HalpCorrectNMIErrSrc.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x14099DED4 (HalpCorrectMachineCheckErrSrc.c)
 */

__int64 __fastcall HalpCorrectErrSrc(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 >= 0 )
  {
    if ( v2 <= 1 )
      return HalpCorrectMachineCheckErrSrc();
    switch ( v2 )
    {
      case 5:
        return HalpCorrectGenericErrSrc(a1, a2);
      case 3:
        return HalpCorrectNMIErrSrc(a1, a2);
      case 12:
        return HalpCorrectGenericErrSrc(a1, a2);
    }
  }
  return 3221225659LL;
}
