/*
 * XREFs of _LdrGetDllFullName@8 @ 0x4B2CCBB0
 * Callers:
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  volatile signed __int32 *v2; // edi
  _RTL_BALANCED_NODE *Root; // eax
  unsigned __int16 *v4; // esi
  unsigned int MaximumLength; // ebx
  PUNICODE_STRING v6; // edx
  NTSTATUS v7; // esi
  _DWORD *SubSystemTib; // eax
  _RTL_BALANCED_NODE *v10; // eax
  _RTL_BALANCED_NODE *v11; // ecx
  unsigned __int16 *v12; // eax
  size_t v13; // [esp-4h] [ebp-1Ch]
  void *Src; // [esp+10h] [ebp-8h]
  wchar_t *Buffer; // [esp+14h] [ebp-4h]

  if ( !DllHandle )
  {
    v2 = (volatile signed __int32 *)LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    v4 = (unsigned __int16 *)(LdrpImageEntry + 36);
    if ( SubSystemTib )
    {
      v12 = (unsigned __int16 *)SubSystemTib[1];
      if ( v12 )
        v4 = v12;
    }
    goto LABEL_10;
  }
  v2 = 0;
  if ( DllHandle == (PVOID)LdrpSystemDllBase )
  {
    v2 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
    goto LABEL_8;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  Root = LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && LdrpModuleBaseAddressIndex.Root )
    Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpModuleBaseAddressIndex ^ (unsigned int)LdrpModuleBaseAddressIndex.Root);
  while ( Root )
  {
    if ( DllHandle < Root[-7].Children[1] )
    {
      v11 = Root->Children[0];
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v11 )
      {
        Root = (_RTL_BALANCED_NODE *)((unsigned int)v11 ^ (unsigned int)Root);
        continue;
      }
    }
    else
    {
      if ( DllHandle <= Root[-7].Children[1] )
      {
        v2 = (volatile signed __int32 *)&Root[-9].Children[1];
        v10 = Root[-2].Children[0];
        if ( v10[1].Children[0] != (_RTL_BALANCED_NODE *)-1 && ((int)v10->Children[0][-3].Right & 0x20) == 0 )
          _InterlockedIncrement(v2 + 39);
        break;
      }
      v11 = Root->Children[1];
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v11 )
      {
        Root = (_RTL_BALANCED_NODE *)((unsigned int)v11 ^ (unsigned int)Root);
        continue;
      }
    }
    Root = v11;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_8:
  if ( !v2 )
    return -1073741515;
  v4 = (unsigned __int16 *)(v2 + 9);
LABEL_10:
  if ( !v2 )
    return 0;
  if ( v4 )
  {
    Src = (void *)*((_DWORD *)v4 + 1);
    MaximumLength = *v4;
    Buffer = FullDllName->Buffer;
    if ( (unsigned __int16)MaximumLength > FullDllName->MaximumLength )
      MaximumLength = FullDllName->MaximumLength;
    LODWORD(v13) = MaximumLength;
    FullDllName->Length = MaximumLength;
    memcpy(Buffer, Src, v13);
    v6 = FullDllName;
    if ( (unsigned int)FullDllName->Length + 2 <= FullDllName->MaximumLength )
      Buffer[MaximumLength >> 1] = 0;
  }
  else
  {
    v6 = FullDllName;
    FullDllName->Length = 0;
  }
  v7 = v6->MaximumLength < *v4 ? 0xC0000023 : 0;
  if ( v2 != (volatile signed __int32 *)LdrpImageEntry )
    LdrpDereferenceModule((PVOID)v2);
  return v7;
}
