/*
 * XREFs of TpAllocCleanupGroup @ 0x18007E8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocCleanupGroup(__int64 *a1, _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  __int64 Heap; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h]

  if ( !a1 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag | 8u, 80LL);
    v6 = Heap;
    v10 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_DWORD *)(Heap + 4) = 0;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 56) = 0LL;
      v7 = (_QWORD *)(Heap + 16);
      v7[1] = v7;
      *v7 = v7;
      *(_QWORD *)(v6 + 72) = v6 + 64;
      *(_QWORD *)(v6 + 64) = v6 + 64;
      result = 0LL;
      *(_OWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 48) = 0LL;
      v9 = 0;
      *a1 = v6;
    }
    else
    {
      result = 3221225495LL;
      v9 = -1073741801;
    }
    if ( (int)result < 0 )
    {
      if ( v6 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag, v10);
        return v9;
      }
    }
  }
  return result;
}
