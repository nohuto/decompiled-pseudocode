/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x1800563A0
 * Callers:
 *     EtwpSwitchBuffer @ 0x180050174 (EtwpSwitchBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x180056294 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // r14d
  unsigned __int32 v6; // eax
  _DWORD *v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  void *v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  v14 = *(unsigned int *)(a1 + 208);
  if ( a2 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      v6 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 224));
      if ( v6 > *(_DWORD *)(a1 + 216) )
        break;
      v13 = (void *)(*(_QWORD *)(a1 + 424) + v14 * (v6 - 1));
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v14, 4096, 4) < 0 )
        break;
      v7 = v13;
      memset(v13, 0, 0x48uLL);
      v7[2] = 72;
      *v7 = *(_DWORD *)(a1 + 208);
      *((_WORD *)v7 + 21) = *(_WORD *)(a1 + 20) | 0x8000;
      RtlEnterCriticalSection(a1 + 88);
      v9 = *(_QWORD **)(a1 + 240);
      v10 = (char *)v13 + 56;
      if ( *v9 != a1 + 232 )
        __fastfail(3u);
      *((_QWORD *)v13 + 8) = v9;
      *v10 = a1 + 232;
      *v9 = v10;
      *(_QWORD *)(a1 + 240) = v10;
      v11 = v13;
      *((_DWORD *)v13 + 11) = 0;
      v11[4] = 0LL;
      v11[3] = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v11 + 4;
      *(_QWORD *)(a1 + 256) = v11 + 4;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      RtlLeaveCriticalSection(a1 + 88, (__int64)(v11 + 4), v8);
      ++v2;
      if ( ++v3 >= a2 )
        return v2;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 224));
  }
  return v2;
}
