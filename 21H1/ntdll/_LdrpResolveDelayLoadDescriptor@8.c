/*
 * XREFs of _LdrpResolveDelayLoadDescriptor@8 @ 0x4B2CE4C8
 * Callers:
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _LdrResolveDelayLoadsFromDll@12 @ 0x4B32F670 (_LdrResolveDelayLoadsFromDll@12.c)
 * Callees:
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 */

int __fastcall LdrpResolveDelayLoadDescriptor(char *ParentModuleBase, PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor)
{
  char *v2; // ebx
  int v3; // esi
  int v4; // edi
  IMAGE_THUNK_DATA64 *v5; // eax
  char *v7; // [esp+10h] [ebp-8h]
  const IMAGE_DELAYLOAD_DESCRIPTOR *v8; // [esp+14h] [ebp-4h]

  v2 = &ParentModuleBase[DelayloadDescriptor->ImportAddressTableRVA];
  v8 = DelayloadDescriptor;
  v3 = 0;
  v7 = ParentModuleBase;
  v4 = 0;
  if ( *(_DWORD *)v2 )
  {
    v5 = (IMAGE_THUNK_DATA64 *)&ParentModuleBase[DelayloadDescriptor->ImportAddressTableRVA];
    do
    {
      if ( !LdrResolveDelayLoadedAPI(ParentModuleBase, DelayloadDescriptor, 0, 0, v5, 0) )
        v4 = -1073740782;
      DelayloadDescriptor = v8;
      ++v3;
      ParentModuleBase = v7;
      v5 = (IMAGE_THUNK_DATA64 *)&v2[4 * v3];
    }
    while ( LODWORD(v5->u1.ForwarderString) );
  }
  return v4;
}
