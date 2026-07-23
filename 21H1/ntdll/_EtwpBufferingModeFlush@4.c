/*
 * XREFs of _EtwpBufferingModeFlush@4 @ 0x4B38140A
 * Callers:
 *     _EtwpFlushUmLogger@16 @ 0x4B2ED94C (_EtwpFlushUmLogger@16.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _EtwpFlushBuffer@12 @ 0x4B2EDE46 (_EtwpFlushBuffer@12.c)
 *     _EtwpWaitForBufferReferenceCount@4 @ 0x4B2EDFCF (_EtwpWaitForBufferReferenceCount@4.c)
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 *     _EtwpEnqueueFreeBuffer@8 @ 0x4B2F07E2 (_EtwpEnqueueFreeBuffer@8.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _EtwpFindAndLockBufferForFlushing@12 @ 0x4B381711 (_EtwpFindAndLockBufferForFlushing@12.c)
 */

ULONG __thiscall EtwpBufferingModeFlush(unsigned int this)
{
  NTSTATUS v2; // eax
  ULONG v3; // ebx
  unsigned int v4; // ebx
  int *v5; // edi
  int v6; // edx
  unsigned __int32 v7; // ecx
  unsigned int v8; // ebx
  unsigned int i; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // edi
  ULONG v14; // [esp+10h] [ebp-8h]
  unsigned int v15; // [esp+14h] [ebp-4h]
  unsigned int v16; // [esp+14h] [ebp-4h]

  v15 = *(_DWORD *)(this + 140);
  v2 = EtwpAddLogHeaderToLogFile(this, 0, 0LL);
  if ( v2 )
  {
    v3 = RtlNtStatusToDosError(v2);
    v14 = v3;
    if ( v3 )
      return v3;
  }
  else
  {
    v14 = 0;
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(this + 72));
  v4 = 0;
  if ( *(_DWORD *)(this + 136) )
  {
    v5 = (int *)(this + 388);
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        *v5 = 0;
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), v15);
        if ( v7 <= v15 )
          *(_DWORD *)(v6 + 4) = v7;
        EtwpEnqueueFreeBuffer(this, (_DWORD *)v6);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < *(_DWORD *)(this + 136) );
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(this + 72));
  v8 = *(_DWORD *)(this + 296);
  for ( i = *(_DWORD *)(this + 300); ; i = (__PAIR64__(v16, v8--) - 1) >> 32 )
  {
    v16 = i;
    v11 = (_DWORD *)EtwpFindAndLockBufferForFlushing(v8, i);
    v12 = (int)v11;
    if ( !v11 )
      break;
    EtwpWaitForBufferReferenceCount(v11);
    v10 = EtwpFlushBuffer(this, v12, 0);
    _InterlockedExchange((volatile __int32 *)(v12 + 44), 0);
    if ( v10 < 0 && v10 != -2147483614 )
      break;
  }
  EtwpFinalizeLogFileHeader(this, 0);
  NtClose(*(HANDLE *)(this + 104));
  *(_DWORD *)(this + 104) = 0;
  return v14;
}
