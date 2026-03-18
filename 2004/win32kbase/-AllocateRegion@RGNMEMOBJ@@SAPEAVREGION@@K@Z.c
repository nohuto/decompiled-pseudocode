/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0080CC0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C009A120 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C009A8CC (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01426FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(size_t Size)
{
  unsigned int v1; // edi
  REGION *v2; // rbx
  __int64 v3; // rax
  void *v5; // rdi
  int v6; // eax

  v1 = Size;
  if ( gpTypeIsolation[7] )
    v2 = (REGION *)NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    v2 = 0LL;
  if ( !v2 )
    return v2;
  if ( v1 == 112 )
  {
    v5 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0252C50 )
      v6 = qword_1C0252C50();
    else
      v6 = -1073741637;
    if ( v6 >= 0 && qword_1C0252C58 )
      v3 = qword_1C0252C58(v5);
    else
      v3 = 0LL;
  }
  else
  {
    if ( v1 <= 0x70 )
      goto LABEL_8;
    v3 = PALLOCMEM2(v1);
  }
  *((_QWORD *)v2 + 11) = v3;
LABEL_8:
  if ( !*((_QWORD *)v2 + 11) )
  {
    REGION::vDeleteREGION(v2);
    return 0LL;
  }
  return v2;
}
