/*
 * XREFs of VrpJobContextDelete @ 0x14087F6F0
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x1405CCBC4 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x14087F668 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
