/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003C4D0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0039050 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A380 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C005A410 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C005ABAC (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     Win32AllocateFromPagedLookasideList @ 0x1C003C550 (Win32AllocateFromPagedLookasideList.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014021C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(size_t Size)
{
  unsigned int v1; // edi
  REGION *v2; // rbx
  __int64 v3; // rax

  v1 = Size;
  if ( gpTypeIsolation[7] )
    v2 = (REGION *)NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    v2 = 0LL;
  if ( !v2 )
    return v2;
  if ( v1 == 112 )
  {
    v3 = Win32AllocateFromPagedLookasideList(RGNMEMOBJ::s_pSCANLookAsideList);
LABEL_6:
    *((_QWORD *)v2 + 11) = v3;
    goto LABEL_7;
  }
  if ( v1 > 0x70 )
  {
    v3 = PALLOCMEM2(v1);
    goto LABEL_6;
  }
LABEL_7:
  if ( !*((_QWORD *)v2 + 11) )
  {
    REGION::vDeleteREGION(v2);
    return 0LL;
  }
  return v2;
}
