/*
 * XREFs of _EtwpAllocateFreeBuffers@8 @ 0x4B2F06F0
 * Callers:
 *     _EtwpSwitchBuffer@12 @ 0x4B2EFDE8 (_EtwpSwitchBuffer@12.c)
 *     _EtwpAllocateTraceBufferPool@4 @ 0x4B2F0625 (_EtwpAllocateTraceBufferPool@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _EtwpEnqueueFreeBuffer@8 @ 0x4B2F07E2 (_EtwpEnqueueFreeBuffer@8.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall EtwpAllocateFreeBuffers(int a1, unsigned int a2)
{
  int v3; // ebx
  unsigned __int32 v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edx
  _DWORD *v7; // eax
  void *v8; // edx
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h] BYREF
  void *v13; // [esp+1Ch] [ebp-4h] BYREF

  v3 = 0;
  v11 = 0;
  v12 = *(_DWORD *)(a1 + 140);
  if ( a2 )
  {
    while ( 1 )
    {
      v13 = 0;
      v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 156));
      if ( v4 > *(_DWORD *)(a1 + 148) )
        break;
      v13 = (void *)(*(_DWORD *)(a1 + 304) + v12 * (v4 - 1));
      if ( (int)NtAllocateVirtualMemory(-1, &v13, 0, &v12, 4096, 4) < 0 )
        break;
      v5 = v13;
      memset(v13, 0, 0x48u);
      v5[2] = 72;
      *v5 = *(_DWORD *)(a1 + 140);
      *((_WORD *)v5 + 21) = *(_WORD *)(a1 + 20) | 0x8000;
      RtlEnterCriticalSection(a1 + 72);
      v6 = *(_DWORD **)(a1 + 168);
      v7 = (char *)v13 + 56;
      if ( *v6 != a1 + 164 )
        __fastfail(3u);
      *v7 = a1 + 164;
      v7[1] = v6;
      *v6 = v7;
      v8 = v13;
      *(_DWORD *)(a1 + 168) = v7;
      EtwpEnqueueFreeBuffer(a1, v8);
      RtlLeaveCriticalSection(a1 + 72);
      ++v3;
      if ( ++v11 >= a2 )
        return v3;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 156));
  }
  return v3;
}
