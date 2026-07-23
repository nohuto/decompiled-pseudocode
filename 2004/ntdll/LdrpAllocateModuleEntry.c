/*
 * XREFs of LdrpAllocateModuleEntry @ 0x18006B340
 * Callers:
 *     LdrpAllocatePlaceHolder @ 0x18006B21C (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x1800134C0 (RtlAddRefActivationContext.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x180014890 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlGetActiveActivationContext @ 0x18006B4C0 (RtlGetActiveActivationContext.c)
 */

char *__fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  char *Heap; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  int v5; // ebp
  __int64 v6; // rsi
  _ACTIVATION_CONTEXT *v7; // rsi
  bool v8; // zf

  Heap = (char *)RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x120uLL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x50uLL);
    v4 = v3;
    if ( v3 )
    {
      LOBYTE(v5) = 0;
      *((_QWORD *)Heap + 19) = v3;
      if ( a1 )
      {
        *((_QWORD *)Heap + 22) = a1;
        *((_DWORD *)Heap + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = Heap;
        v6 = *(_QWORD *)(a1 + 48);
        if ( v6 )
        {
          v7 = *(_ACTIVATION_CONTEXT **)(v6 + 136);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *((_QWORD *)Heap + 17) = v7;
          }
        }
        else
        {
          RtlGetActiveActivationContext((PACTIVATION_CONTEXT)(Heap + 136));
          *((_DWORD *)Heap + 67) = 4;
        }
      }
      *((_QWORD *)Heap + 15) = Heap + 112;
      *((_QWORD *)Heap + 14) = Heap + 112;
      *((_QWORD *)Heap + 20) = v4;
      *((_QWORD *)Heap + 21) = v4;
      *v4 = Heap + 160;
      v4[1] = Heap + 160;
      *((_QWORD *)Heap + 18) = 0LL;
      v8 = LdrInitState == 1;
      *((_DWORD *)v4 + 6) = 1;
      *((_DWORD *)Heap + 69) = 2;
      if ( v8 && !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
        *((_DWORD *)Heap + 26) |= 0x20u;
      if ( (v5 & 4) != 0 )
        *((_DWORD *)Heap + 26) |= 0x10000000u;
      if ( (v5 & 0x40) == 0 )
        *((_DWORD *)Heap + 26) |= 4u;
      *((_WORD *)Heap + 54) = 6;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, Heap);
      return 0LL;
    }
  }
  return Heap;
}
