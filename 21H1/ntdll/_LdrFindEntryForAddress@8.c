/*
 * XREFs of _LdrFindEntryForAddress@8 @ 0x4B2CF200
 * Callers:
 *     _LdrpIsReparsePoint@4 @ 0x4B2A87A0 (_LdrpIsReparsePoint@4.c)
 *     _LdrpGetDataModulePath@28 @ 0x4B2B8EDE (_LdrpGetDataModulePath@28.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS v2; // ebx
  _RTL_BALANCED_NODE *Root; // esi
  _RTL_BALANCED_NODE *v4; // eax
  _LDR_DATA_TABLE_ENTRY *p_Right; // edi
  _RTL_BALANCED_NODE *v7; // eax
  _LDR_DATA_TABLE_ENTRY *BaseAddress; // [esp+Ch] [ebp-4h]

  if ( !DllHandle )
    return -1073741515;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v2 = 0;
  Root = LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex.Root )
      Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpModuleBaseAddressIndex ^ (unsigned int)LdrpModuleBaseAddressIndex.Root);
    else
      Root = 0;
  }
  while ( 1 )
  {
    if ( !Root )
    {
      p_Right = BaseAddress;
      goto LABEL_17;
    }
    if ( DllHandle < Root[-7].Children[1] )
    {
      v4 = Root->Children[0];
      goto LABEL_11;
    }
    if ( DllHandle < (char *)Root[-7].Children[1] + (unsigned int)Root[-6].Children[0] )
      break;
    v4 = Root->Children[1];
LABEL_11:
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v4 )
      Root = (_RTL_BALANCED_NODE *)((unsigned int)v4 ^ (unsigned int)Root);
    else
      Root = v4;
  }
  p_Right = (_LDR_DATA_TABLE_ENTRY *)&Root[-9].Right;
  v7 = Root[-2].Children[0];
  if ( v7[1].Children[0] != (_RTL_BALANCED_NODE *)-1 && ((int)v7->Children[0][-3].Right & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)&p_Right->ReferenceCount);
LABEL_17:
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( !Root )
    return -1073741515;
  *Entry = p_Right;
  LdrpDereferenceModule((char *)p_Right);
  return v2;
}
