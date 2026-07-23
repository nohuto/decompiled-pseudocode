/*
 * XREFs of _EtwpFreeLoggerContext@4 @ 0x4B2EE335
 * Callers:
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 * Callees:
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _EtwpFreeStreamIndexMap@4 @ 0x4B2EE48E (_EtwpFreeStreamIndexMap@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 *     _EtwpShutdownCompression@4 @ 0x4B383186 (_EtwpShutdownCompression@4.c)
 */

LOGICAL __thiscall EtwpFreeLoggerContext(char *BaseAddress)
{
  char *v1; // esi
  char *v2; // edi
  char *v3; // edi
  char *v5; // ebx
  char *v6; // [esp-4h] [ebp-2Ch]
  char *v7; // [esp-4h] [ebp-2Ch]
  LARGE_INTEGER DelayInterval; // [esp+10h] [ebp-18h] BYREF
  PVOID BaseAddressa; // [esp+1Ch] [ebp-Ch]
  char *v10; // [esp+20h] [ebp-8h]
  ULONG_PTR RegionSize; // [esp+24h] [ebp-4h] BYREF

  v1 = BaseAddress;
  DelayInterval.QuadPart = -3000000LL;
  v10 = BaseAddress;
  while ( *(int *)(EtwpLoggerArray + 8 * *((_DWORD *)v1 + 5) + 4) > 1 )
    ZwDelayExecution(0, &DelayInterval);
  if ( (*((_DWORD *)v1 + 53) & 0x4000000) != 0 )
    EtwpShutdownCompression(v1);
  if ( *((_DWORD *)v1 + 76) )
  {
    LODWORD(RegionSize) = 0;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v1 + 76, &RegionSize, 0x8000u);
  }
  NtClose(*((HANDLE *)v1 + 25));
  NtClose(*((HANDLE *)v1 + 24));
  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)v1 + 3);
  if ( *((_DWORD *)v1 + 28) )
    RtlFreeAnsiString((PUNICODE_STRING)(v1 + 108));
  if ( *((_DWORD *)v1 + 30) )
    RtlFreeAnsiString((PUNICODE_STRING)(v1 + 116));
  if ( *((_DWORD *)v1 + 32) )
    RtlFreeAnsiString((PUNICODE_STRING)(v1 + 124));
  v2 = (char *)*((_DWORD *)v1 + 83);
  while ( v2 != v1 + 332 )
  {
    v6 = v2;
    v2 = *(char **)v2;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  v3 = (char *)*((_DWORD *)v1 + 85);
  while ( v3 != v1 + 340 )
  {
    BaseAddressa = v3;
    v5 = (char *)*((_DWORD *)v3 + 3);
    if ( v5 != v3 + 12 )
    {
      do
      {
        v7 = v5;
        v5 = *(char **)v5;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      }
      while ( v5 != v3 + 12 );
      v1 = v10;
    }
    v3 = *(char **)v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddressa);
  }
  if ( *((_DWORD *)v1 + 89) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v1 + 89));
  if ( *((_DWORD *)v1 + 90) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v1 + 90));
  if ( *((_DWORD *)v1 + 92) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v1 + 92));
  if ( *((_DWORD *)v1 + 94) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v1 + 94));
  EtwpFreeStreamIndexMap(v1);
  _InterlockedExchange((volatile __int32 *)(EtwpLoggerArray + 8 * *((_DWORD *)v1 + 5)), 1);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *((_DWORD *)v1 + 5) + 4));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
