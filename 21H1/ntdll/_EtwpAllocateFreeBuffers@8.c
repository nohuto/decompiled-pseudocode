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
  PVOID v8; // edx
  ULONG_PTR v10; // [esp-10h] [ebp-30h]
  size_t v11; // [esp-4h] [ebp-24h]
  ULONG v12; // [esp+0h] [ebp-20h]
  int v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-4h] BYREF

  v3 = 0;
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 140);
  if ( a2 )
  {
    while ( 1 )
    {
      BaseAddress = 0;
      v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 156));
      if ( v4 > *(_DWORD *)(a1 + 148) )
        break;
      BaseAddress = (PVOID)(*(_DWORD *)(a1 + 304) + v15 * (v4 - 1));
      HIDWORD(v10) = &v15;
      LODWORD(v10) = 0;
      if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v10, (PSIZE_T)0x1000, 4u, v12) < 0 )
        break;
      v5 = BaseAddress;
      LODWORD(v11) = 72;
      memset(BaseAddress, 0, v11);
      v5[2] = 72;
      *v5 = *(_DWORD *)(a1 + 140);
      *((_WORD *)v5 + 21) = *(_WORD *)(a1 + 20) | 0x8000;
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
      v6 = *(_DWORD **)(a1 + 168);
      v7 = (char *)BaseAddress + 56;
      if ( *v6 != a1 + 164 )
        __fastfail(3u);
      *v7 = a1 + 164;
      v7[1] = v6;
      *v6 = v7;
      v8 = BaseAddress;
      *(_DWORD *)(a1 + 168) = v7;
      EtwpEnqueueFreeBuffer(a1, v8);
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
      ++v3;
      if ( ++v14 >= a2 )
        return v3;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 156));
  }
  return v3;
}
