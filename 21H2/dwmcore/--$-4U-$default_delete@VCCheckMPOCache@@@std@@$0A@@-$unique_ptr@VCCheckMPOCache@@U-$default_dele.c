/*
 * XREFs of ??$?4U?$default_delete@VCCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180012218
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     ??_GCCheckMPOCache@@QEAAPEAXI@Z @ 0x180012250 (--_GCCheckMPOCache@@QEAAPEAXI@Z.c)
 */

CCheckMPOCache **__fastcall std::unique_ptr<CCheckMPOCache>::operator=<std::default_delete<CCheckMPOCache>,0>(
        CCheckMPOCache **a1,
        CCheckMPOCache **a2)
{
  CCheckMPOCache *v3; // rax
  CCheckMPOCache *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      CCheckMPOCache::`scalar deleting destructor'(v4, (unsigned int)a2);
  }
  return a1;
}
