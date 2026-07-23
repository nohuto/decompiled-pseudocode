/*
 * XREFs of _EtwpCreateRegGuidsContext@20 @ 0x4B2E4478
 * Callers:
 *     _EtwRegisterTraceGuidsW@32 @ 0x4B2E43A0 (_EtwRegisterTraceGuidsW@32.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ULongAdd@12 @ 0x4B2E454E (_ULongAdd@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

_DWORD *__fastcall EtwpCreateRegGuidsContext(int a1, int a2, _DWORD *a3, unsigned int a4, int a5)
{
  _DWORD *Heap; // eax
  _DWORD *v7; // ebx
  unsigned int v8; // ecx
  _DWORD *v9; // ebx
  _DWORD *v10; // esi
  struct _TEB *v11; // eax
  SIZE_T v13; // [esp-4h] [ebp-1Ch]
  size_t v14; // [esp-4h] [ebp-1Ch]
  ULONG v15; // [esp+0h] [ebp-18h]
  ULONG v16; // [esp+0h] [ebp-18h]
  ULONG *v17; // [esp+4h] [ebp-14h]
  ULONG *v18; // [esp+4h] [ebp-14h]
  _DWORD *v19; // [esp+Ch] [ebp-Ch]
  ULONG ulAugend; // [esp+14h] [ebp-4h] BYREF

  if ( !is_mul_ok(0x18u, a4) )
    return 0;
  ulAugend = 24 * a4;
  if ( ULongAdd((ULONG)&ulAugend, v15, v17) < 0 )
    return 0;
  if ( ULongAdd((ULONG)&ulAugend, v16, v18) < 0 )
    return 0;
  LODWORD(v13) = ulAugend;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
  v7 = Heap;
  v19 = Heap;
  if ( !Heap )
    return 0;
  LODWORD(v14) = ulAugend;
  memset(Heap, 0, v14);
  v7[1] = a2;
  *v7 = a1;
  v7[4] = *a3;
  v7[5] = a3[1];
  v7[6] = a3[2];
  v7[7] = a3[3];
  if ( a4 )
  {
    v8 = 0;
    v9 = v7 + 8;
    do
    {
      v10 = *(_DWORD **)(a5 + 8 * v8);
      v11 = NtCurrentTeb();
      *(_DWORD *)(a5 + 8 * v8 + 4) = v9;
      v9[2] = *v10++;
      v9[3] = *v10++;
      v9[4] = *v10;
      v9[5] = v10[1];
      v9[1] = v11->ClientId.UniqueProcess;
      v9 += 6;
      ++v8;
    }
    while ( v8 < a4 );
    return v19;
  }
  return v7;
}
