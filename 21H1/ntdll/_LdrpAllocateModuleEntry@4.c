/*
 * XREFs of _LdrpAllocateModuleEntry@4 @ 0x4B2D0962
 * Callers:
 *     _LdrpAllocatePlaceHolder@28 @ 0x4B2D0889 (_LdrpAllocatePlaceHolder@28.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlAddRefActivationContext@4 @ 0x4B2B5090 (_RtlAddRefActivationContext@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlIsCriticalSectionLockedByThread@4 @ 0x4B2D2150 (_RtlIsCriticalSectionLockedByThread@4.c)
 *     _RtlGetActiveActivationContext@4 @ 0x4B2E6750 (_RtlGetActiveActivationContext@4.c)
 */

int __thiscall LdrpAllocateModuleEntry(_DWORD *this)
{
  int Heap; // esi
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edi
  volatile signed __int32 *v7; // edi
  char v9; // [esp+Ch] [ebp-4h]

  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 168);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 44);
    v4 = (_DWORD *)v3;
    if ( v3 )
    {
      v9 = 0;
      *(_DWORD *)(Heap + 80) = v3;
      if ( this )
      {
        *(_DWORD *)(Heap + 92) = this;
        *(_DWORD *)(Heap + 152) = *(_DWORD *)(this[2] + 12);
        v5 = this[4];
        this[8] = Heap;
        v6 = this[7];
        v9 = v5;
        if ( v6 )
        {
          v7 = *(volatile signed __int32 **)(v6 + 72);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *(_DWORD *)(Heap + 72) = v7;
          }
        }
        else
        {
          RtlGetActiveActivationContext(Heap + 72);
          *(_DWORD *)(Heap + 148) = 4;
        }
      }
      *(_DWORD *)(Heap + 64) = Heap + 60;
      *(_DWORD *)(Heap + 60) = Heap + 60;
      *(_DWORD *)(Heap + 84) = v4;
      *(_DWORD *)(Heap + 88) = v4;
      *v4 = Heap + 84;
      v4[1] = Heap + 84;
      *(_DWORD *)(Heap + 76) = 0;
      v4[3] = 1;
      *(_DWORD *)(Heap + 156) = 2;
      if ( LdrInitState == 1 && !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
        *(_DWORD *)(Heap + 52) |= 0x20u;
      if ( (v9 & 4) != 0 )
        *(_DWORD *)(Heap + 52) |= 0x10000000u;
      if ( (v9 & 0x40) == 0 )
        *(_DWORD *)(Heap + 52) |= 4u;
      *(_WORD *)(Heap + 56) = 6;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, Heap);
      return 0;
    }
  }
  return Heap;
}
