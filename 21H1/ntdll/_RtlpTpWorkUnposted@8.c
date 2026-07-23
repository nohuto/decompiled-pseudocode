/*
 * XREFs of _RtlpTpWorkUnposted@8 @ 0x4B2E9550
 * Callers:
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 * Callees:
 *     _TppPoolpFree@4 @ 0x4B2AB6C5 (_TppPoolpFree@4.c)
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _RtlTpETWCallbackDequeue@20 @ 0x4B385BB5 (_RtlTpETWCallbackDequeue@20.c)
 */

LOGICAL __stdcall RtlpTpWorkUnposted(PVOID BaseAddress, int a2)
{
  int v2; // eax
  int v3; // eax
  volatile signed __int32 *v4; // ecx
  _RTL_SRWLOCK *v5; // edx
  int *v6; // ecx

  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478;
  if ( *(_BYTE *)v2 )
    RtlTpETWCallbackDequeue(*((_DWORD *)BaseAddress + 8), *((_DWORD *)BaseAddress + 9), *((_DWORD *)BaseAddress + 13));
  v3 = 0;
  if ( !a2 && (*((_BYTE *)BaseAddress + 28) & 0xC0) != 0 )
    v3 = 2;
  v4 = (volatile signed __int32 *)*((_DWORD *)BaseAddress + 5);
  if ( !v4 )
  {
    v4 = (volatile signed __int32 *)TppPoolpSerializedPool;
    if ( !v3 )
      v4 = (volatile signed __int32 *)TppPoolpGlobalPool;
  }
  if ( v4 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v5 = &TppPoolpGlobalPoolLock;
    v6 = &TppPoolpGlobalPool;
LABEL_13:
    TppPoolpDereferenceGlobalPool((signed __int32 **)v6, v5);
    goto LABEL_14;
  }
  if ( v4 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v5 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
    v6 = &TppPoolpSerializedPool;
    goto LABEL_13;
  }
  if ( !_InterlockedExchangeAdd(v4, 0xFFFFFFFF) )
    TppPoolpFree((int)v4);
LABEL_14:
  if ( *((_DWORD *)BaseAddress + 6) )
    NtClose(*((HANDLE *)BaseAddress + 6));
  if ( *((_DWORD *)BaseAddress + 10) != -1 )
    RtlReleaseActivationContext(*((PACTIVATION_CONTEXT *)BaseAddress + 10));
  if ( *((_DWORD *)BaseAddress + 11) )
    LdrUnloadDll(*((PVOID *)BaseAddress + 11));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
