/*
 * XREFs of VrpJobContextDelete @ 0x140885240
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x1405D3224 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x1408851BC (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
