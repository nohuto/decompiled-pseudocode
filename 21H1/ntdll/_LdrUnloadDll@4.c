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

int __stdcall LdrUnloadDll(unsigned int a1)
{
  int v1; // edi
  unsigned int v2; // eax
  int v3; // ebx
  int v4; // esi
  __int16 v6; // si
  _DWORD *v7; // eax
  unsigned int v8; // ecx
  int v9; // ecx
  int v10; // [esp+Ch] [ebp-4h] BYREF

  if ( byte_4B3A5DA8 )
    return 0;
  v1 = 0;
  if ( !a1 )
    return -1073741515;
  if ( a1 != LdrpSystemDllBase )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v2 = LdrpModuleBaseAddressIndex;
    if ( (dword_4B3A67A8 & 1) != 0 && LdrpModuleBaseAddressIndex )
      v2 = (unsigned int)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
    if ( !v2 )
    {
LABEL_8:
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      goto LABEL_9;
    }
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(v2 - 80) )
      {
        v8 = *(_DWORD *)v2;
        if ( (dword_4B3A67A8 & 1) != 0 && v8 )
        {
          v2 ^= v8;
          goto LABEL_29;
        }
      }
      else
      {
        if ( a1 <= *(_DWORD *)(v2 - 80) )
        {
          v1 = v2 - 104;
          v7 = *(_DWORD **)(v2 - 104 + 80);
          if ( v7[3] != -1 && (*(_BYTE *)(*v7 - 32) & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v1 + 156));
          goto LABEL_8;
        }
        v8 = *(_DWORD *)(v2 + 4);
        if ( (dword_4B3A67A8 & 1) != 0 && v8 )
        {
          v2 ^= v8;
          goto LABEL_29;
        }
      }
      v2 = v8;
LABEL_29:
      if ( !v2 )
        goto LABEL_8;
    }
  }
  v1 = LdrpNtDllDataTableEntry;
LABEL_9:
  if ( !v1 )
    return -1073741515;
  if ( *(_DWORD *)(*(_DWORD *)(v1 + 80) + 12) == 1 )
    goto LABEL_17;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_DWORD *)(v1 + 80);
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
  LdrpDereferenceModule(v1);
  return v4;
}
