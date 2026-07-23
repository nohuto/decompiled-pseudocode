/*
 * XREFs of _RtlpHpLfhBucketActivate@8 @ 0x4B375E85
 * Callers:
 *     _RtlpHpLfhBucketUpdateStats@12 @ 0x4B3763A4 (_RtlpHpLfhBucketUpdateStats@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHpLfhBucketInitialize@12 @ 0x4B376136 (_RtlpHpLfhBucketInitialize@12.c)
 *     _RtlpHpLfhOwnerInitialize@16 @ 0x4B376895 (_RtlpHpLfhOwnerInitialize@16.c)
 */

char __usercall RtlpHpLfhBucketActivate@<al>(int a1@<edx>, int a2@<ecx>, int a3@<ebx>)
{
  int v3; // edi
  volatile signed __int32 *v4; // esi
  signed __int32 v5; // ecx
  _DWORD *v6; // eax
  unsigned int v7; // esi
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // ebx
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // eax
  size_t v16; // [esp-8h] [ebp-2Ch]
  int v18; // [esp+Ch] [ebp-18h]
  int Size; // [esp+14h] [ebp-10h]
  size_t Sizea; // [esp+14h] [ebp-10h]
  int Size_4; // [esp+18h] [ebp-Ch]
  unsigned int v23; // [esp+1Ch] [ebp-8h]
  int v24; // [esp+20h] [ebp-4h]

  v3 = a2;
  v4 = (volatile signed __int32 *)(a2 + 4 * (a1 + 32));
  v5 = *v4;
  LOBYTE(v6) = *v4 & 3;
  if ( (_BYTE)v6 == 1 )
  {
    v6 = (_DWORD *)_InterlockedCompareExchange(v4, v5 | 2, v5);
    if ( v6 == (_DWORD *)v5 )
    {
      v7 = ((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1;
      HIDWORD(v16) = a3;
      v8 = *(unsigned __int8 *)(v3 + 28);
      v23 = v8;
      v24 = (v7 + 1) << 6;
      v18 = v8 + v24 - (((_BYTE)v8 - 1) & 3) + 3;
      v9 = v18 + 4 * v8 - (((_BYTE)v18 + 4 * (_BYTE)v8 - 1) & 0x3F);
      v10 = v9 + 63;
      Size_4 = v9 + 63;
      if ( v7 )
      {
        v10 = v9 + 127;
        Size_4 = v9 + 127;
      }
      if ( (RtlpHpLfhPerfFlags & 0x200) == 0 )
      {
        v8 = 1;
        v23 = 1;
      }
      Size = v10 + v8 * v24;
      v6 = (_DWORD *)((int (__thiscall *)(int, _DWORD, int))(v3 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v3 + 20)))(
                       v3 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v3 + 20),
                       *(_DWORD *)v3,
                       Size);
      v11 = v6;
      if ( v6 )
      {
        LODWORD(v16) = Size;
        LODWORD(Sizea) = 0;
        memset(v6, 0, v16);
        RtlpHpLfhBucketInitialize(v3);
        v11[12] = (char *)v11 + v24;
        v12 = (int)v11 + Size_4;
        HIDWORD(Sizea) = (char *)v11 + Size_4;
        v11[13] = (char *)v11 + v18;
        if ( v23 )
        {
          v13 = 0;
          do
          {
            *(_DWORD *)(v11[13] + 4 * v13) = v12;
            memset(*(void **)(v11[13] + 4 * v13), 0, 0x20u);
            RtlpHpLfhOwnerInitialize(v13, 0);
            v14 = v11[12];
            ++*((_BYTE *)v11 + 2);
            v12 = v24 + HIDWORD(Sizea);
            *(_BYTE *)(Sizea + v14) = Sizea;
            v13 = Sizea + 1;
            Sizea = __PAIR64__(v24 + HIDWORD(Sizea), (int)Sizea + 1);
          }
          while ( v13 < v23 );
          v3 = a2;
        }
        LOBYTE(v6) = a1;
        *(_DWORD *)(v3 + 4 * a1 + 128) = v11;
      }
    }
  }
  return (char)v6;
}
