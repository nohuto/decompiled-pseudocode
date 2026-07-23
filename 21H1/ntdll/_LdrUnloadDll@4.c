/*
 * XREFs of _LdrUnloadDll@4 @ 0x4B2CCD40
 * Callers:
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 *     _RtlWnfDllUnloadCallback@4 @ 0x4B2AC180 (_RtlWnfDllUnloadCallback@4.c)
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlpTpWorkUnposted@8 @ 0x4B2E9550 (_RtlpTpWorkUnposted@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlWow64LogMessageInEventLogger@12 @ 0x4B335A80 (_RtlWow64LogMessageInEventLogger@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpDecrementNodeLoadCountLockHeld@12 @ 0x4B2CD933 (_LdrpDecrementNodeLoadCountLockHeld@12.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697 (_LdrpDecrementModuleLoadCountEx@8.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  volatile signed __int32 *v1; // edi
  _RTL_BALANCED_NODE *Root; // eax
  int v3; // ebx
  NTSTATUS v4; // esi
  __int16 v6; // si
  _RTL_BALANCED_NODE *v7; // eax
  _RTL_BALANCED_NODE *v8; // ecx
  int v9; // ecx
  int v10; // [esp+Ch] [ebp-4h] BYREF

  if ( byte_4B3A5DA8 )
    return 0;
  v1 = 0;
  if ( !DllHandle )
    return -1073741515;
  if ( DllHandle != (PVOID)LdrpSystemDllBase )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    Root = LdrpModuleBaseAddressIndex.Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && LdrpModuleBaseAddressIndex.Root )
      Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpModuleBaseAddressIndex ^ (unsigned int)LdrpModuleBaseAddressIndex.Root);
    if ( !Root )
    {
LABEL_8:
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      goto LABEL_9;
    }
    while ( 1 )
    {
      if ( DllHandle < Root[-7].Children[1] )
      {
        v8 = Root->Children[0];
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v8 )
        {
          Root = (_RTL_BALANCED_NODE *)((unsigned int)v8 ^ (unsigned int)Root);
          goto LABEL_29;
        }
      }
      else
      {
        if ( DllHandle <= Root[-7].Children[1] )
        {
          v1 = (volatile signed __int32 *)&Root[-9].Children[1];
          v7 = Root[-2].Children[0];
          if ( v7[1].Children[0] != (_RTL_BALANCED_NODE *)-1 && ((int)v7->Children[0][-3].Right & 0x20) == 0 )
            _InterlockedIncrement(v1 + 39);
          goto LABEL_8;
        }
        v8 = Root->Children[1];
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v8 )
        {
          Root = (_RTL_BALANCED_NODE *)((unsigned int)v8 ^ (unsigned int)Root);
          goto LABEL_29;
        }
      }
      Root = v8;
LABEL_29:
      if ( !Root )
        goto LABEL_8;
    }
  }
  v1 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
LABEL_9:
  if ( !v1 )
    return -1073741515;
  if ( *(_DWORD *)(*((_DWORD *)v1 + 20) + 12) == 1 )
    goto LABEL_17;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *((_DWORD *)v1 + 20);
  v4 = LdrpDecrementNodeLoadCountLockHeld(&v10);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v10 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v3);
    LdrpReleaseLoaderLock(0, v9);
  }
  if ( v4 == -1073741267 )
  {
LABEL_17:
    v6 = NtCurrentTeb()->SameTebFlags & 0x1000;
    if ( !v6 )
      LdrpDrainWorkQueue(0);
    LdrpDecrementModuleLoadCountEx(v1, 0);
    if ( !v6 )
      LdrpDropLastInProgressCount();
    v4 = 0;
  }
  LdrpDereferenceModule((PVOID)v1);
  return v4;
}
