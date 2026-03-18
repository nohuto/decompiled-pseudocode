/*
 * XREFs of _FreeInputContext@4 @ 0xA13EC
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QAEPAU1@PAU1@@Z @ 0x14EEDA (--4-$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QAEPAU1@PAU1@@Z.c)
 */

int __stdcall FreeInputContext(int a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // eax

  result = HMMarkObjectDestroy(a1);
  if ( result )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 440);
    if ( v2 )
    {
      do
      {
        v3 = *(_DWORD *)(v2 + 28);
        if ( v3 == a1 )
          break;
        v2 = *(_DWORD *)(v2 + 28);
      }
      while ( v3 );
      if ( v2 )
        tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(*(_DWORD *)(a1 + 28));
    }
    return HMFreeObject(a1);
  }
  return result;
}
