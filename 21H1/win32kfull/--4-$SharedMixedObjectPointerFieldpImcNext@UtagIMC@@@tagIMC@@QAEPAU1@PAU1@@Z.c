/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QAEPAU1@PAU1@@Z @ 0x14EEDA
 * Callers:
 *     _CreateInputContext@4 @ 0x9A7CC (_CreateInputContext@4.c)
 *     _FreeInputContext@4 @ 0xA13EC (_FreeInputContext@4.c)
 * Callees:
 *     <none>
 */

int __thiscall tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax

  if ( a2 )
    v2 = *(_DWORD *)(a2 + 24);
  else
    v2 = 0;
  *(_DWORD *)(*(this - 2) + 8) = v2;
  result = a2;
  *this = a2;
  return result;
}
