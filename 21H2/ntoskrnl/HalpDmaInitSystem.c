/*
 * XREFs of HalpDmaInitSystem @ 0x1409A1270
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaInitPowerManagement @ 0x1403BB250 (HalpDmaInitPowerManagement.c)
 *     HalpDmaFinalizeDoubleBufferingDisposition @ 0x140A649A4 (HalpDmaFinalizeDoubleBufferingDisposition.c)
 *     HalpDmaInitDiscard @ 0x140A64AC0 (HalpDmaInitDiscard.c)
 *     HalpDmaInit @ 0x140A669C8 (HalpDmaInit.c)
 */

__int64 __fastcall HalpDmaInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v3 = 0;
  v4 = a1 - 4;
  if ( !v4 )
    return v3;
  v5 = v4 - 3;
  if ( !v5 )
  {
    HalpDmaPdoListLock = 0LL;
    qword_140C49DB8 = (__int64)&HalpDmaControllers;
    HalpDmaControllers = (__int64)&HalpDmaControllers;
    qword_140C4BF58 = (__int64)&HalpDmaHibernateAdapters;
    HalpDmaHibernateAdapters = (__int64)&HalpDmaHibernateAdapters;
    qword_140C4BF28 = (__int64)&HalpDmaPdoList;
    HalpDmaPdoList = (__int64)&HalpDmaPdoList;
    return v3;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return (unsigned int)HalpDmaInitDiscard(a3);
  v7 = v6 - 1;
  if ( !v7 )
    return v3;
  v8 = v7 - 16;
  if ( !v8 )
    return (unsigned int)HalpDmaInit();
  v9 = v8 - 2;
  if ( !v9 )
  {
    HalpDmaFinalizeDoubleBufferingDisposition();
    return v3;
  }
  if ( v9 == 2 )
    return (unsigned int)HalpDmaInitPowerManagement();
  return v3;
}
