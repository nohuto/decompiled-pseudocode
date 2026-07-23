/*
 * XREFs of _LdrQueryModuleServiceTags@12 @ 0x4B32EA10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

NTSTATUS __cdecl LdrQueryModuleServiceTags(PVOID DllHandle, PULONG ServiceTagBuffer, PULONG BufferSize)
{
  NTSTATUS result; // eax
  ULONG v4; // esi
  ULONG v5; // edi
  _DWORD *i; // ecx
  char *v7; // ecx
  int v8; // [esp+0h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+4h] [ebp-4h] BYREF

  result = LdrpFindLoadedDllByHandle((_RTL_BALANCED_NODE *)DllHandle, (volatile signed __int32 **)&BaseAddress, &v8);
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v4 = 0;
    v5 = *BufferSize;
    for ( i = *(_DWORD **)(*((_DWORD *)BaseAddress + 20) + 8); i; ++v4 )
    {
      if ( v4 < v5 )
        ServiceTagBuffer[v4] = i[1];
      i = (_DWORD *)*i;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    v7 = (char *)BaseAddress;
    *BufferSize = v4;
    LdrpDereferenceModule(v7);
    return v5 < v4 ? 0xC0000023 : 0;
  }
  return result;
}
