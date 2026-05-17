/*
 * XREFs of RtlSetFeatureConfigurations @ 0x180101960
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ZwSetSystemInformation @ 0x1800A0340 (ZwSetSystemInformation.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall RtlSetFeatureConfigurations(_QWORD *a1, int a2, const void *a3, unsigned __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rbx
  int v9; // ebp
  __int64 Heap; // rax
  __int64 v11; // rdi

  if ( a4 <= 0xFFFFFFFF )
  {
    v8 = 32LL * (unsigned int)a4;
    v9 = a4;
    if ( v8 > 0xFFFFFFFF )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v8 + 16));
      v11 = Heap;
      if ( Heap )
      {
        *(_DWORD *)(Heap + 8) = a2;
        if ( a1 )
          *(_QWORD *)Heap = *a1;
        *(_DWORD *)(Heap + 12) = v9;
        memmove((void *)(Heap + 16), a3, (unsigned int)v8);
        v7 = ZwSetSystemInformation();
        if ( v7 >= 0 )
          v7 = 0;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
