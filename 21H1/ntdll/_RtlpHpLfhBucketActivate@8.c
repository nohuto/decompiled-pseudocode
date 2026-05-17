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

char __fastcall RtlpHpLfhBucketActivate(int a1, int a2)
{
  int v2; // edi
  volatile signed __int32 *v3; // esi
  signed __int32 v4; // ecx
  _DWORD *v5; // eax
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // ebx
  char *v11; // ecx
  size_t v12; // edx
  int v13; // eax
  size_t v15; // [esp-8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-18h]
  size_t Size; // [esp+14h] [ebp-10h]
  size_t Sizea; // [esp+14h] [ebp-10h]
  int v21; // [esp+18h] [ebp-Ch]
  char *v22; // [esp+18h] [ebp-Ch]
  unsigned int v23; // [esp+1Ch] [ebp-8h]
  int v24; // [esp+20h] [ebp-4h]

  v2 = a1;
  v3 = (volatile signed __int32 *)(a1 + 4 * (a2 + 32));
  v4 = *v3;
  LOBYTE(v5) = *v3 & 3;
  if ( (_BYTE)v5 == 1 )
  {
    v5 = (_DWORD *)_InterlockedCompareExchange(v3, v4 | 2, v4);
    if ( v5 == (_DWORD *)v4 )
    {
      v6 = ((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1;
      v7 = *(unsigned __int8 *)(v2 + 28);
      v23 = v7;
      v24 = (v6 + 1) << 6;
      v17 = v7 + v24 - (((_BYTE)v7 - 1) & 3) + 3;
      v8 = v17 + 4 * v7 - (((_BYTE)v17 + 4 * (_BYTE)v7 - 1) & 0x3F);
      v9 = v8 + 63;
      v21 = v8 + 63;
      if ( v6 )
      {
        v9 = v8 + 127;
        v21 = v8 + 127;
      }
      if ( (RtlpHpLfhPerfFlags & 0x200) == 0 )
      {
        v7 = 1;
        v23 = 1;
      }
      Size = v9 + v7 * v24;
      v5 = (_DWORD *)((int (__thiscall *)(int, _DWORD, size_t))(v2 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v2 + 20)))(
                       v2 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v2 + 20),
                       *(_DWORD *)v2,
                       Size);
      v10 = v5;
      if ( v5 )
      {
        v15 = Size;
        Sizea = 0;
        memset(v5, 0, v15);
        RtlpHpLfhBucketInitialize(v2);
        v10[12] = (char *)v10 + v24;
        v11 = (char *)v10 + v21;
        v22 = (char *)v10 + v21;
        v10[13] = (char *)v10 + v17;
        if ( v23 )
        {
          v12 = 0;
          do
          {
            *(_DWORD *)(v10[13] + 4 * v12) = v11;
            memset(*(void **)(v10[13] + 4 * v12), 0, 0x20u);
            RtlpHpLfhOwnerInitialize(v12, 0);
            v13 = v10[12];
            ++*((_BYTE *)v10 + 2);
            v11 = &v22[v24];
            *(_BYTE *)(Sizea + v13) = Sizea;
            v12 = Sizea + 1;
            Sizea = v12;
            v22 += v24;
          }
          while ( v12 < v23 );
          v2 = a1;
        }
        LOBYTE(v5) = a2;
        *(_DWORD *)(v2 + 4 * a2 + 128) = v10;
      }
    }
  }
  return (char)v5;
}
