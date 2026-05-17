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

size_t __stdcall RtlGetCurrentDirectory_U(unsigned int a1, char *a2)
{
  int v2; // eax
  int v3; // esi
  wchar_t *Buffer; // ecx
  unsigned int Length; // edi
  unsigned int v6; // edi
  size_t v7; // ebx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax

  v2 = RtlpReferenceCurrentDirectory(1);
  v3 = v2;
  if ( v2 )
  {
    Buffer = *(wchar_t **)(v2 + 16);
    Length = *(unsigned __int16 *)(v2 + 12);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  v6 = Length >> 1;
  if ( v6 < 2 || Buffer[v6 - 2] == 58 )
  {
    v7 = 2 * v6;
    if ( a1 > 2 * v6 )
      goto LABEL_6;
    if ( v3 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) )
      {
        NtClose(*(HANDLE *)(v3 + 4));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      }
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
    return v7 + 2;
  }
  else
  {
    v7 = 2 * v6;
    if ( a1 >= 2 * v6 )
    {
LABEL_6:
      memcpy(a2, Buffer, v7);
      if ( v3 )
      {
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) )
        {
          NtClose(*(HANDLE *)(v3 + 4));
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
        }
      }
      else
      {
        RtlLeaveCriticalSection(&FastPebLock);
      }
      if ( v6 > 1 && *(_WORD *)&a2[2 * v6 - 4] == 58 )
      {
        *(_WORD *)&a2[v7] = 0;
      }
      else
      {
        --v6;
        *(_WORD *)&a2[v7 - 2] = 0;
      }
      return 2 * v6;
    }
    if ( v3 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) )
      {
        NtClose(*(HANDLE *)(v3 + 4));
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
