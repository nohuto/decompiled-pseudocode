/*
 * XREFs of _LdrQueryOptionalDelayLoadedAPI@16 @ 0x4B32F5D0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 *     _LdrpFindDelayloadedMethod@12 @ 0x4B32F6A6 (_LdrpFindDelayloadedMethod@12.c)
 *     _LdrpFindDelayloadedMethodInDescriptor@12 @ 0x4B32F710 (_LdrpFindDelayloadedMethodInDescriptor@12.c)
 *     _LdrpGetDelayloadDescriptor@8 @ 0x4B32F7C7 (_LdrpGetDelayloadDescriptor@8.c)
 */

NTSTATUS __cdecl LdrQueryOptionalDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCSTR DllName,
        PCSTR ProcedureName,
        ULONG Flags)
{
  int v5; // ecx
  unsigned __int8 v6; // al
  int v7; // eax
  IMAGE_THUNK_DATA64 *DelayloadedMethodInDescriptor; // eax
  const IMAGE_DELAYLOAD_DESCRIPTOR *v9; // edi
  PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor; // [esp+0h] [ebp-4h] BYREF

  if ( Flags )
    return -1073741811;
  v5 = 0;
  while ( 1 )
  {
    v6 = DllName[v5];
    if ( v6 != asc_4B291AA4[v5] )
      break;
    if ( ++v5 == 2 )
    {
      v7 = 0;
      goto LABEL_8;
    }
  }
  v7 = v6 < (unsigned __int8)asc_4B291AA4[v5] ? -1 : 1;
LABEL_8:
  if ( v7 )
  {
    v9 = (const IMAGE_DELAYLOAD_DESCRIPTOR *)LdrpGetDelayloadDescriptor(ParentModuleBase);
    if ( !v9 )
      return -1073741515;
    DelayloadedMethodInDescriptor = (IMAGE_THUNK_DATA64 *)LdrpFindDelayloadedMethodInDescriptor(ProcedureName);
  }
  else
  {
    DelayloadedMethodInDescriptor = (IMAGE_THUNK_DATA64 *)LdrpFindDelayloadedMethod(
                                                            ParentModuleBase,
                                                            (int)&DelayloadDescriptor);
    v9 = DelayloadDescriptor;
  }
  if ( DelayloadedMethodInDescriptor )
    return LdrResolveDelayLoadedAPI(ParentModuleBase, v9, 0, 0, DelayloadedMethodInDescriptor, 0) != 0 ? 0 : -1073741511;
  return -1073741515;
}
