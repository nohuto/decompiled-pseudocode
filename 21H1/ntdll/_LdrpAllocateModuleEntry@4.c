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

char *__thiscall LdrpAllocateModuleEntry(_DWORD *this)
{
  char *Heap; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edi
  _ACTIVATION_CONTEXT *v7; // edi
  SIZE_T v9; // [esp-4h] [ebp-14h]
  SIZE_T v10; // [esp-4h] [ebp-14h]
  char v11; // [esp+Ch] [ebp-4h]

  LODWORD(v9) = 168;
  Heap = (char *)RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, v9);
  if ( Heap )
  {
    LODWORD(v10) = 44;
    v3 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, v10);
    v4 = v3;
    if ( v3 )
    {
      v11 = 0;
      *((_DWORD *)Heap + 20) = v3;
      if ( this )
      {
        *((_DWORD *)Heap + 23) = this;
        *((_DWORD *)Heap + 38) = *(_DWORD *)(this[2] + 12);
        v5 = this[4];
        this[8] = Heap;
        v6 = this[7];
        v11 = v5;
        if ( v6 )
        {
          v7 = *(_ACTIVATION_CONTEXT **)(v6 + 72);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *((_DWORD *)Heap + 18) = v7;
          }
        }
        else
        {
          RtlGetActiveActivationContext((PACTIVATION_CONTEXT)(Heap + 72));
          *((_DWORD *)Heap + 37) = 4;
        }
      }
      *((_DWORD *)Heap + 16) = Heap + 60;
      *((_DWORD *)Heap + 15) = Heap + 60;
      *((_DWORD *)Heap + 21) = v4;
      *((_DWORD *)Heap + 22) = v4;
      *v4 = Heap + 84;
      v4[1] = Heap + 84;
      *((_DWORD *)Heap + 19) = 0;
      v4[3] = 1;
      *((_DWORD *)Heap + 39) = 2;
      if ( LdrInitState == 1 && !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
        *((_DWORD *)Heap + 13) |= 0x20u;
      if ( (v11 & 4) != 0 )
        *((_DWORD *)Heap + 13) |= 0x10000000u;
      if ( (v11 & 0x40) == 0 )
        *((_DWORD *)Heap + 13) |= 4u;
      *((_WORD *)Heap + 28) = 6;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, Heap);
      return 0;
    }
  }
  return Heap;
}
