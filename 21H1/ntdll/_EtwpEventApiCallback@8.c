/*
 * XREFs of _EtwpEventApiCallback@8 @ 0x4B2B1011
 * Callers:
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall EtwpEventApiCallback(unsigned int a1, int a2)
{
  unsigned int v3; // edx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // edx
  int v13; // ecx
  int *v14; // ecx
  int v15; // ecx
  unsigned int v16; // kr00_4
  _DWORD *v17; // kr08_4
  int v18; // eax
  bool v19; // sf
  unsigned int v20; // ecx
  unsigned __int8 *v21; // eax
  int v22; // ebx
  int v23; // edi
  int Heap; // eax
  _DWORD *v25; // ecx
  char v26; // [esp+13h] [ebp-65h]
  int v27; // [esp+14h] [ebp-64h]
  int v28; // [esp+18h] [ebp-60h]
  int *v29; // [esp+20h] [ebp-58h]
  unsigned int v30; // [esp+20h] [ebp-58h]
  unsigned __int8 *v31; // [esp+24h] [ebp-54h]
  _BYTE v32[25]; // [esp+28h] [ebp-50h] BYREF
  int v33; // [esp+48h] [ebp-30h]
  unsigned int v34; // [esp+4Ch] [ebp-2Ch]
  unsigned int v35; // [esp+50h] [ebp-28h]
  int v36; // [esp+54h] [ebp-24h]
  unsigned __int64 *p_Src; // [esp+58h] [ebp-20h]
  int v38; // [esp+5Ch] [ebp-1Ch]
  unsigned __int64 Src; // [esp+60h] [ebp-18h] BYREF
  size_t Size; // [esp+68h] [ebp-10h]
  int v41; // [esp+6Ch] [ebp-Ch]

  v3 = a1;
  p_Src = 0;
  v33 = *(_DWORD *)(a1 + 72);
  v36 = *(_DWORD *)(a2 + 200);
  v38 = a2;
  v34 = a1;
  memset(v32, 0, 0x18u);
  if ( v33 == 2 )
  {
    v4 = *(_DWORD *)(a1 + 96);
    v5 = *(_DWORD *)(a1 + 100);
    v32[21] = *(_BYTE *)(a1 + 76);
    v27 = *(_DWORD *)(a1 + 88);
    *(_DWORD *)&v32[8] = v27;
    v28 = *(_DWORD *)(a1 + 92);
    *(_DWORD *)&v32[12] = v28;
    v8 = 0;
  }
  else
  {
    v4 = -1;
    v5 = -1;
    *(_DWORD *)v32 = -1;
    *(_DWORD *)&v32[4] = -1;
    if ( *(_BYTE *)(a2 + 76) )
    {
      v26 = 1;
      if ( v32[21] <= *(_BYTE *)(a2 + 77) )
        v32[21] = *(_BYTE *)(a2 + 77);
      v6 = *(_DWORD *)(a2 + 64) | *(_DWORD *)&v32[8];
      v7 = *(_DWORD *)(a2 + 68) | *(_DWORD *)&v32[12];
      v4 = *(_DWORD *)(a2 + 56);
      v5 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)&v32[8] = v6;
      *(_DWORD *)&v32[12] = v7;
      *(_DWORD *)v32 = v4;
      *(_DWORD *)&v32[4] = v5;
    }
    else
    {
      v7 = *(_DWORD *)&v32[12];
      v26 = v32[20];
      v6 = *(_DWORD *)&v32[8];
    }
    v27 = v6;
    v28 = v7;
    if ( *(_BYTE *)(a2 + 196) )
    {
      v3 = v34;
      v26 = 1;
      if ( v32[21] <= *(_BYTE *)(a2 + 197) )
      {
        v32[21] = *(_BYTE *)(a2 + 197);
        v3 = v34;
      }
      v13 = *(_DWORD *)(a2 + 188) | v7;
      v4 &= *(_DWORD *)(a2 + 176);
      v5 &= *(_DWORD *)(a2 + 180);
      v27 = *(_DWORD *)(a2 + 184) | v6;
      *(_DWORD *)&v32[8] = v27;
      v28 = v13;
      *(_DWORD *)&v32[12] = v13;
      *(_DWORD *)v32 = v4;
      *(_DWORD *)&v32[4] = v5;
    }
    v8 = 0;
    if ( v26 )
    {
      v33 = 1;
      goto LABEL_9;
    }
    v33 = 0;
    v4 = 0;
    v5 = 0;
    *(_DWORD *)(v3 + 116) = 0;
  }
  *(_DWORD *)&v32[4] = v5;
  *(_DWORD *)v32 = v4;
LABEL_9:
  if ( !*(_DWORD *)(v3 + 116) )
    goto LABEL_10;
  v14 = (int *)(v3 + 132);
  v29 = (int *)(v3 + 132);
  while ( 1 )
  {
    v15 = *v14;
    if ( v15 >= 0 || v15 == 0x80000000 )
      break;
    ++v8;
    v14 = v29 + 4;
    v29 += 4;
    if ( v8 >= *(_DWORD *)(v3 + 116) )
      goto LABEL_10;
  }
  v16 = *(_DWORD *)(16 * v8 + v3 + 120);
  v35 = v16 + v3;
  v17 = (_DWORD *)(v16 + v3);
  Src = v16 + __PAIR64__(*(_DWORD *)(16 * v8 + v3 + 124), v3);
  Size = *(_DWORD *)(16 * v8 + v3 + 128);
  v18 = *v29;
  p_Src = &Src;
  v19 = *(__int16 *)(v3 + 78) < 0;
  a2 = v38;
  v41 = v18;
  if ( !v19 || v18 != 0x80000000 )
    goto LABEL_10;
  v17[2] = 0;
  v17[3] = 0;
  v17[5] = 0;
  v17[4] = Size;
  v20 = 0;
  v21 = (unsigned __int8 *)(a2 + 102);
  v30 = 0;
  v31 = (unsigned __int8 *)(a2 + 102);
  while ( !*(v21 - 2) )
  {
LABEL_32:
    ++v20;
    v21 += 24;
    v30 = v20;
    v31 = v21;
    if ( v20 >= 4 )
      goto LABEL_35;
  }
  v20 = v30;
  if ( *v21 != (*(_WORD *)(v3 + 78) & 0x7FFF) )
  {
    v21 = v31;
    goto LABEL_32;
  }
  *(_QWORD *)(v35 + 8) = 1LL << ((unsigned __int8)v30 + 32);
LABEL_35:
  if ( !v36 )
  {
LABEL_10:
    v9 = v27;
    v10 = v28;
    goto LABEL_11;
  }
  v22 = v36;
  v23 = v36 + 28;
  RtlAcquireSRWLockExclusive(v36 + 28);
  *(_DWORD *)(v22 + 32) = NtCurrentTeb()->ClientId.UniqueThread;
  if ( *(_DWORD *)(v22 + 148) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v22 + 148));
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, Size + 16);
  *(_DWORD *)(v22 + 148) = Heap;
  if ( Heap )
  {
    *(_DWORD *)(Heap + 8) = Size;
    *(_DWORD *)(*(_DWORD *)(v22 + 148) + 12) = v41;
    v25 = *(_DWORD **)(v22 + 148);
    *v25 = v25 + 4;
    v25[1] = 0;
    memcpy(**(void ***)(v22 + 148), (const void *)Src, Size);
  }
  *(_DWORD *)(v22 + 32) = 0;
  RtlReleaseSRWLockExclusive(v23);
  v10 = *(_DWORD *)&v32[12];
  v9 = *(_DWORD *)&v32[8];
  v5 = *(_DWORD *)&v32[4];
  v4 = *(_DWORD *)v32;
LABEL_11:
  v11 = *(_DWORD *)(a2 + 28);
  v35 = v11;
  if ( v11 )
    ((void (__thiscall *)(unsigned int, unsigned int, int, _DWORD, int, int, int, int, unsigned __int64 *, _DWORD))v35)(
      v11,
      v34 + 56,
      v33,
      *(_DWORD *)&v32[21],
      v9,
      v10,
      v4,
      v5,
      p_Src,
      *(_DWORD *)(a2 + 32));
  return 0;
}
