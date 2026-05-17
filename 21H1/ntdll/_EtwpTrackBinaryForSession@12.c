/*
 * XREFs of _EtwpTrackBinaryForSession@12 @ 0x4B382FA7
 * Callers:
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

int __fastcall EtwpTrackBinaryForSession(int a1, const void **a2, _DWORD *Buf1)
{
  size_t v3; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  size_t v6; // eax
  int Heap; // eax
  _DWORD *v8; // ebx
  struct _PEB *v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // edx
  _DWORD *i; // edi
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  int v20; // edx
  const void **v22; // [esp+10h] [ebp-4h]

  v22 = a2;
  v3 = *(unsigned __int16 *)a2;
  v4 = (_DWORD *)(a1 + 340);
  v5 = *(_DWORD **)(a1 + 340);
  v6 = v3 + 2;
  while ( 1 )
  {
    if ( v5 == v4 )
    {
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v3 + 26);
      v8 = (_DWORD *)Heap;
      if ( !Heap )
        return 14;
      *(_DWORD *)(Heap + 20) = v3 + 2;
      memcpy((void *)(Heap + 24), v22[1], v3);
      *(_WORD *)((char *)v8 + v3 + 24) = 0;
      v8[4] = v8 + 3;
      v8[3] = v8 + 3;
      v9 = NtCurrentPeb();
      v8[2] = 0;
      v10 = (_DWORD *)RtlAllocateHeap((int)v9->ProcessHeap, 8, 24);
      if ( !v10 )
        return 14;
      v11 = v8 + 3;
      v10[2] = *Buf1;
      v10[3] = Buf1[1];
      v10[4] = Buf1[2];
      v10[5] = Buf1[3];
      v12 = v8[3];
      if ( *(_DWORD **)(v12 + 4) == v8 + 3 )
      {
        v10[1] = v11;
        *v10 = v12;
        *(_DWORD *)(v12 + 4) = v10;
        *v11 = v10;
        v13 = a1;
        v8[2] = 1;
        *(_DWORD *)(a1 + 220) |= 0x10u;
        v14 = (_DWORD *)(a1 + 340);
        v15 = *(_DWORD *)(a1 + 340);
        if ( *(_DWORD *)(v15 + 4) == a1 + 340 )
        {
          *v8 = v15;
          v8[1] = v14;
          *(_DWORD *)(v15 + 4) = v8;
          *v14 = v8;
          goto LABEL_12;
        }
      }
LABEL_22:
      __fastfail(3u);
    }
    if ( v5[5] == v6 )
      break;
LABEL_5:
    v5 = (_DWORD *)*v5;
  }
  if ( RtlCompareMemory(v5 + 6, a2[1], v3) != v3 )
  {
    a2 = v22;
    v6 = v3 + 2;
    goto LABEL_5;
  }
  for ( i = (_DWORD *)v5[3]; i != v5 + 3; i = (_DWORD *)*i )
  {
    if ( !memcmp(Buf1, i + 2, 0x10u) )
      return 0;
  }
  v18 = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 24);
  if ( !v18 )
    return 14;
  v19 = v5 + 3;
  v18[2] = *Buf1;
  v18[3] = Buf1[1];
  v18[4] = Buf1[2];
  v18[5] = Buf1[3];
  v20 = v5[3];
  if ( *(_DWORD **)(v20 + 4) != v5 + 3 )
    goto LABEL_22;
  v18[1] = v19;
  *v18 = v20;
  *(_DWORD *)(v20 + 4) = v18;
  *v19 = v18;
  ++v5[2];
  v13 = a1;
LABEL_12:
  *(_DWORD *)(v13 + 220) |= 0x10u;
  return 0;
}
