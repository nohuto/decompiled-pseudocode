/*
 * XREFs of HalpInitializeErrSrc @ 0x14099D4C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitializeNMI @ 0x1403C2898 (HalpInitializeNMI.c)
 *     HalpInitializeMce @ 0x14099D4FC (HalpInitializeMce.c)
 *     HalpInitializeCmc @ 0x14099D898 (HalpInitializeCmc.c)
 *     HalpInitializeGenericErrorSource @ 0x1409A4F04 (HalpInitializeGenericErrorSource.c)
 */

__int64 __fastcall HalpInitializeErrSrc(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v6; // r8d

  v2 = *(_DWORD *)(a2 + 8);
  if ( !v2 )
    return HalpInitializeMce();
  v3 = v2 - 1;
  if ( !v3 )
    return HalpInitializeCmc();
  v4 = v3 - 2;
  if ( !v4 )
    return HalpInitializeNMI(a1, a2);
  v6 = v4 - 2;
  if ( !v6 || v6 == 7 )
    return HalpInitializeGenericErrorSource();
  else
    return 3221225659LL;
}
