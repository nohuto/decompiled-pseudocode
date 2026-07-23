/*
 * XREFs of _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E
 * Callers:
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlWakeAllConditionVariable@4 @ 0x4B2EA460 (_RtlWakeAllConditionVariable@4.c)
 *     _EtwpFlushBuffer@12 @ 0x4B2EDE46 (_EtwpFlushBuffer@12.c)
 *     _EtwpWaitForBufferReferenceCount@4 @ 0x4B2EDFCF (_EtwpWaitForBufferReferenceCount@4.c)
 *     _EtwpSendSessionNotification@12 @ 0x4B2F0314 (_EtwpSendSessionNotification@12.c)
 *     _EtwpEnqueueFreeBuffer@8 @ 0x4B2F07E2 (_EtwpEnqueueFreeBuffer@8.c)
 */

int __fastcall EtwpFlushActiveBuffers(int a1, int a2)
{
  int v3; // edi
  int v4; // ebx
  int *v5; // edx
  int v6; // ecx
  _DWORD **v7; // eax
  _DWORD *v8; // ebx
  unsigned __int32 v10; // eax
  int v11; // ecx
  _BOOL2 v12; // ax
  _DWORD *v13; // edi
  int v14; // eax
  BOOL v15; // [esp+Ch] [ebp-Ch]
  _DWORD *v17; // [esp+10h] [ebp-8h]
  unsigned int v18; // [esp+14h] [ebp-4h]
  _BOOL2 v19; // [esp+14h] [ebp-4h]

  v3 = 0;
  v15 = 0;
  v4 = *(_DWORD *)(a1 + 136);
  v18 = *(_DWORD *)(a1 + 140);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  if ( a2 == 1 && v4 )
  {
    v5 = (int *)(a1 + 388);
    do
    {
      v6 = *v5;
      if ( *v5 && *(_DWORD *)(v6 + 8) != 72 )
      {
        *v5 = 0;
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), v18);
        v3 = 0;
        if ( v10 <= v18 )
          *(_DWORD *)(v6 + 4) = v10;
        *(_DWORD *)(v6 + 44) = 3;
        v11 = v6 + 32;
        **(_DWORD **)(a1 + 188) = v11;
        *(_DWORD *)(a1 + 188) = v11;
      }
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  v7 = *(_DWORD ***)(a1 + 184);
  if ( v7 == *(_DWORD ***)(a1 + 188) )
  {
    v8 = 0;
  }
  else
  {
    v8 = *v7;
    *v7 = 0;
    *(_DWORD *)(a1 + 188) = *(_DWORD *)(a1 + 184);
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  if ( v8 )
  {
    v12 = a2 != 0;
    v19 = v12;
    do
    {
      if ( !*v8 )
        v15 = v12;
      v13 = v8;
      v8 = (_DWORD *)*v8;
      v17 = v13 - 8;
      EtwpWaitForBufferReferenceCount(v13 - 8);
      v14 = EtwpFlushBuffer(a1, v13 - 8, v15);
      v3 = v14;
      if ( v14 < 0 && v14 != -2147483614 )
        EtwpSendSessionNotification(v14);
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
      EtwpEnqueueFreeBuffer(a1, v17);
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
      RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 68));
      v12 = v19;
      *(_DWORD *)(a1 + 32) = v3;
    }
    while ( v8 );
  }
  return v3;
}
