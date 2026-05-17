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

int __thiscall EtwpFreeLoggerContext(void *this)
{
  int v1; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // edi
  _DWORD *v5; // ebx
  int v6; // [esp-4h] [ebp-2Ch]
  int v7; // [esp-4h] [ebp-2Ch]
  _DWORD v8[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v9; // [esp+1Ch] [ebp-Ch]
  int v10; // [esp+20h] [ebp-8h]
  int v11; // [esp+24h] [ebp-4h] BYREF

  v8[1] = -1;
  v1 = (int)this;
  v8[0] = -3000000;
  v10 = (int)this;
  while ( *(int *)(EtwpLoggerArray + 8 * *(_DWORD *)(v1 + 20) + 4) > 1 )
    ZwDelayExecution(0, v8);
  if ( (*(_DWORD *)(v1 + 212) & 0x4000000) != 0 )
    EtwpShutdownCompression(v1);
  if ( *(_DWORD *)(v1 + 304) )
  {
    v11 = 0;
    NtFreeVirtualMemory(-1, v1 + 304, &v11, 0x8000);
  }
  NtClose(*(HANDLE *)(v1 + 100));
  NtClose(*(HANDLE *)(v1 + 96));
  RtlDeleteCriticalSection((int *)(v1 + 72));
  if ( *(_DWORD *)(v1 + 112) )
    RtlFreeAnsiString((PUNICODE_STRING)(v1 + 108));
  if ( *(_DWORD *)(v1 + 120) )
    RtlFreeAnsiString((PUNICODE_STRING)(v1 + 116));
  if ( *(_DWORD *)(v1 + 128) )
    RtlFreeAnsiString((PUNICODE_STRING)(v1 + 124));
  v2 = *(_DWORD **)(v1 + 332);
  while ( v2 != (_DWORD *)(v1 + 332) )
  {
    v6 = (int)v2;
    v2 = (_DWORD *)*v2;
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  v3 = *(_DWORD **)(v1 + 340);
  while ( v3 != (_DWORD *)(v1 + 340) )
  {
    v9 = v3;
    v5 = (_DWORD *)v3[3];
    if ( v5 != v3 + 3 )
    {
      do
      {
        v7 = (int)v5;
        v5 = (_DWORD *)*v5;
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
      }
      while ( v5 != v3 + 3 );
      v1 = v10;
    }
    v3 = (_DWORD *)*v3;
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v9);
  }
  if ( *(_DWORD *)(v1 + 356) )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v1 + 356));
  if ( *(_DWORD *)(v1 + 360) )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v1 + 360));
  if ( *(_DWORD *)(v1 + 368) )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v1 + 368));
  if ( *(_DWORD *)(v1 + 376) )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v1 + 376));
  EtwpFreeStreamIndexMap(v1);
  _InterlockedExchange((volatile __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v1 + 20)), 1);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v1 + 20) + 4));
  return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v1);
}
