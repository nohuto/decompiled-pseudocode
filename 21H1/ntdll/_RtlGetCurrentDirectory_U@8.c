/*
 * XREFs of _RtlGetCurrentDirectory_U@8 @ 0x4B2A7BB0
 * Callers:
 *     _LdrpMakeUnicodeStringFromPathElement@12 @ 0x4B330CBB (_LdrpMakeUnicodeStringFromPathElement@12.c)
 * Callees:
 *     _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45 (_RtlpReferenceCurrentDirectory@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

ULONG __cdecl RtlGetCurrentDirectory_U(ULONG BufferLength, PWSTR Buffer)
{
  int v2; // eax
  HANDLE *v3; // esi
  wchar_t *v4; // ecx
  unsigned int Length; // edi
  unsigned int v6; // edi
  unsigned int v7; // ebx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  size_t v10; // [esp-4h] [ebp-14h]

  v2 = RtlpReferenceCurrentDirectory(1);
  v3 = (HANDLE *)v2;
  if ( v2 )
  {
    v4 = *(wchar_t **)(v2 + 16);
    Length = *(unsigned __int16 *)(v2 + 12);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    v4 = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  v6 = Length >> 1;
  if ( v6 < 2 || v4[v6 - 2] == 58 )
  {
    v7 = v6;
    if ( BufferLength > 2 * v6 )
      goto LABEL_6;
    if ( v3 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) )
      {
        NtClose(v3[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      }
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
    return v7 * 2 + 2;
  }
  else
  {
    v7 = v6;
    if ( BufferLength >= 2 * v6 )
    {
LABEL_6:
      LODWORD(v10) = v7 * 2;
      memcpy(Buffer, v4, v10);
      if ( v3 )
      {
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) )
        {
          NtClose(v3[1]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
        }
      }
      else
      {
        RtlLeaveCriticalSection(&FastPebLock);
      }
      if ( v6 > 1 && Buffer[v6 - 2] == 58 )
      {
        Buffer[v7] = 0;
      }
      else
      {
        --v6;
        Buffer[v7 - 1] = 0;
      }
      return 2 * v6;
    }
    if ( v3 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) )
      {
        NtClose(v3[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      }
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
    return 2 * v6;
  }
}
