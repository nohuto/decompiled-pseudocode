/*
 * XREFs of VrpJobContextDelete @ 0x14087E400
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x1405CB7F4 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x14087E378 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
