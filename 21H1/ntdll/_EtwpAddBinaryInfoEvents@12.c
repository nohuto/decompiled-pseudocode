/*
 * XREFs of _EtwpAddBinaryInfoEvents@12 @ 0x4B38281F
 * Callers:
 *     _EtwpAddProviderTrackingInfo@12 @ 0x4B2F0E96 (_EtwpAddProviderTrackingInfo@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _EtwpAddEventToBuffer@28 @ 0x4B2EE106 (_EtwpAddEventToBuffer@28.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall EtwpAddBinaryInfoEvents(int a1, int a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // edx
  unsigned int v6; // edi
  int v7; // ecx
  _DWORD *Heap; // edi
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  _DWORD *v14; // ebx
  _DWORD *v15; // edi
  size_t v16; // [esp-Ch] [ebp-34h]
  SIZE_T v17; // [esp-4h] [ebp-2Ch]
  size_t v18; // [esp-4h] [ebp-2Ch]
  int v19; // [esp+Ch] [ebp-1Ch] BYREF
  int v20; // [esp+10h] [ebp-18h]
  _DWORD *v21; // [esp+14h] [ebp-14h]
  _DWORD *v22; // [esp+18h] [ebp-10h]
  _DWORD *v23; // [esp+1Ch] [ebp-Ch]
  int v24; // [esp+20h] [ebp-8h]
  int v25; // [esp+24h] [ebp-4h]
  int v26; // [esp+30h] [ebp+8h]

  v3 = a3 - *(_DWORD *)(a2 + 48);
  v25 = 0;
  v4 = (_DWORD *)(a1 + 340);
  v24 = a2;
  v5 = *(_DWORD **)(a1 + 340);
  v26 = v3;
  v6 = 0;
  v22 = (_DWORD *)(a1 + 340);
  while ( v5 != v4 )
  {
    v7 = 16 * v5[2];
    if ( v6 <= v7 + v5[5] + 4 )
      v6 = v7 + v5[5] + 4;
    v5 = (_DWORD *)*v5;
  }
  LODWORD(v17) = v6;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
  v21 = Heap;
  if ( !Heap )
    return -1073741801;
  v10 = (_DWORD *)*v4;
  v23 = v10;
  if ( v10 != v4 )
  {
    v20 = v24 + 88;
    do
    {
      *Heap = v10[2];
      v11 = v10 + 3;
      v12 = (_DWORD *)v10[3];
      v13 = 1;
      v25 = 4;
      if ( v12 != v10 + 3 )
      {
        v14 = Heap + 1;
        do
        {
          v15 = v14;
          v13 += 4;
          v14 += 4;
          *v15++ = v12[2];
          *v15++ = v12[3];
          *v15 = v12[4];
          v15[1] = v12[5];
          v12 = (_DWORD *)*v12;
        }
        while ( v12 != v11 );
        v10 = v23;
        v4 = v22;
        Heap = v21;
        v25 = v13 * 4;
      }
      LODWORD(v18) = v10[5];
      memcpy(&Heap[v13], v10 + 6, v18);
      HIDWORD(v16) = v26;
      LODWORD(v16) = v25 + v10[5];
      v25 = EtwpAddEventToBuffer(v24, 67, (_DWORD *)v20, Heap, v16, &v19);
      if ( v25 < 0 )
        break;
      v10 = (_DWORD *)*v10;
      v23 = v10;
      v26 -= (v19 + 7) & 0xFFFFFFF8;
    }
    while ( v10 != v4 );
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v25;
}
