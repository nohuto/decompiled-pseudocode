/*
 * XREFs of ??4?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EC100
 * Callers:
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1800EC28C (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ??_GCCheckMPOCache@@QEAAPEAXI@Z @ 0x1800EB7BC (--_GCCheckMPOCache@@QEAAPEAXI@Z.c)
 */

CCheckMPOCache ***__fastcall std::unique_ptr<CCheckMPOCache>::operator=(CCheckMPOCache ***a1, CCheckMPOCache ***a2)
{
  CCheckMPOCache **v3; // rax
  CCheckMPOCache **v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      CCheckMPOCache::`scalar deleting destructor'(v4);
  }
  return a1;
}
