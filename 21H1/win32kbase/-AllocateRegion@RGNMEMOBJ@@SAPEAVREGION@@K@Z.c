/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0076090
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0078690 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0079500 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0092310 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0092B24 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0148A4C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(size_t Size)
{
  unsigned int v1; // edi
  REGION *v2; // rbx
  void *v3; // rdi
  int v4; // eax
  __int64 v5; // rax

  v1 = Size;
  if ( gpTypeIsolation[7] )
    v2 = (REGION *)NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    v2 = 0LL;
  if ( !v2 )
    return v2;
  if ( v1 == 112 )
  {
    v3 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0258C10 )
      v4 = qword_1C0258C10();
    else
      v4 = -1073741637;
    if ( v4 >= 0 && qword_1C0258C18 )
      v5 = qword_1C0258C18(v3);
    else
      v5 = 0LL;
    goto LABEL_10;
  }
  if ( v1 > 0x70 )
  {
    v5 = PALLOCMEM2(v1);
LABEL_10:
    *((_QWORD *)v2 + 11) = v5;
  }
  if ( !*((_QWORD *)v2 + 11) )
  {
    REGION::vDeleteREGION(v2);
    return 0LL;
  }
  return v2;
}
