/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x1405DF844
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1405DF664 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x1406E1C10 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x1406E3308 (ExpWnfDeletePermanentName.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14072EFB8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407C58A8 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F8510 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 v3; // rdi
  volatile signed __int64 *v4; // rbx
  NTSTATUS result; // eax
  __int64 *v6; // rax
  bool v7; // zf
  ACCESS_MASK v8; // edx
  __int64 v9; // rcx
  int v10; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+40h] BYREF

  Disposition = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v3 = 6LL * a1;
  if ( a1 )
  {
    if ( a1 == 1 )
      v4 = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 920);
    else
      v4 = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 928);
  }
  else
  {
    v4 = (volatile signed __int64 *)&ExpWnfWellKnownNameStoreRootKey;
  }
  if ( *v4 )
  {
LABEL_4:
    *a2 = *v4;
    return 0;
  }
  v6 = &ExpWnfNameStoreDescriptors[3];
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  if ( !CmStateSeparationEnabled )
    v6 = &ExpWnfNameStoreDescriptors[1];
  v7 = HIDWORD(ExpWnfNameStoreDescriptors[v3 + 5]) == 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6[v3];
  v8 = LODWORD(ExpWnfNameStoreDescriptors[v3 + 5]) != 0 ? 131097 : 983103;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v8, &ObjectAttributes, 0, 0LL, !v7, &Disposition);
  if ( result >= 0 )
  {
    if ( Disposition == 1 )
    {
      LOBYTE(v9) = CmStateSeparationEnabled != 0;
      v10 = ExpInitializeStateSeparationPhase2(
              v9,
              &ExpWnfNameStoreDescriptors[v3 + 1],
              &ExpWnfNameStoreDescriptors[v3 + 3]);
      if ( v10 == -1073741637 )
        v10 = 0;
      if ( v10 < 0 )
      {
        ZwClose(KeyHandle);
        return v10;
      }
    }
    if ( _InterlockedCompareExchange64(v4, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    goto LABEL_4;
  }
  return result;
}
