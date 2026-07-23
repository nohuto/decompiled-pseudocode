/*
 * XREFs of LdrQueryModuleServiceTags @ 0x1800CE210
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

NTSTATUS __cdecl LdrQueryModuleServiceTags(PVOID DllHandle, PULONG ServiceTagBuffer, PULONG BufferSize)
{
  NTSTATUS result; // eax
  char *v6; // rsi
  __int64 v7; // rbx
  ULONG v8; // edi
  __int64 *v9; // r8
  PVOID BaseAddress; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  result = LdrpFindLoadedDllByHandle((unsigned __int64)DllHandle, (volatile signed __int32 **)&BaseAddress, &v11);
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v6 = (char *)BaseAddress;
    v7 = 0LL;
    v8 = *BufferSize;
    v9 = *(__int64 **)(*((_QWORD *)BaseAddress + 19) + 16LL);
    while ( v9 )
    {
      if ( (unsigned int)v7 < v8 )
        ServiceTagBuffer[v7] = *((_DWORD *)v9 + 2);
      v9 = (__int64 *)*v9;
      v7 = (unsigned int)(v7 + 1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    *BufferSize = v7;
    LdrpDereferenceModule(v6);
    return v8 < (unsigned int)v7 ? 0xC0000023 : 0;
  }
  return result;
}
