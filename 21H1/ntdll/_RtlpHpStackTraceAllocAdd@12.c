/*
 * XREFs of _RtlpHpStackTraceAllocAdd@12 @ 0x4B36DEC6
 * Callers:
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlpHpStackDbAllocRoutine@8 @ 0x4B36DC40 (_RtlpHpStackDbAllocRoutine@8.c)
 *     _RtlpHpStackDbFreeRoutine@8 @ 0x4B36DC70 (_RtlpHpStackDbFreeRoutine@8.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 */

int __fastcall RtlpHpStackTraceAllocAdd(int a1, int a2, int a3)
{
  _DWORD *v5; // eax
  int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // esi
  unsigned int *v10; // edx
  char i; // cl
  unsigned int v12; // ecx
  bool v13; // zf
  int v14; // edx
  _DWORD *v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  _DWORD *v21; // edi
  volatile signed __int32 *v23; // [esp+Ch] [ebp-28h]
  _DWORD *v24; // [esp+10h] [ebp-24h]
  int j; // [esp+14h] [ebp-20h]
  int v26; // [esp+18h] [ebp-1Ch]
  _DWORD *v28; // [esp+20h] [ebp-14h]
  _DWORD *v29; // [esp+24h] [ebp-10h]
  int v30; // [esp+24h] [ebp-10h]
  unsigned int v31; // [esp+2Ch] [ebp-8h] BYREF
  unsigned int v32; // [esp+30h] [ebp-4h]

  v5 = (_DWORD *)RtlpHpMetadataAlloc(0, RtlpHpEnvHandle, dword_4B3A446C);
  v28 = v5;
  if ( !v5 )
    return 0;
  v5[2] = a3;
  v5[1] = a2;
  v23 = (volatile signed __int32 *)(a1 + 4);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 4));
  v6 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v7 = a1 + 8;
  v24 = (_DWORD *)v7;
  v8 = *(_DWORD *)(v7 + 4);
  if ( *(_DWORD *)v7 < 2 * (v8 >> 5) || RtlULongLongToUInt((int *)&v31, 2 * (v8 >> 5), 0) < 0 )
    goto LABEL_24;
  v9 = v31;
  if ( v31 < 4 )
    v9 = 4;
  v10 = (unsigned int *)RtlpHpStackDbAllocRoutine(4 * v9, 0);
  v31 = (unsigned int)v10;
  if ( v10 )
  {
    if ( ((v9 - 1) & v9) != 0 )
    {
      for ( i = -1; v9; v9 >>= 1 )
        ++i;
      v9 = 1 << i;
    }
    if ( v9 > 0x4000000 )
      v9 = 0x4000000;
    v32 = 0;
    v12 = 4 * v9 + v31 >= v31 ? (4 * v9) >> 2 : 0;
    if ( v12 )
    {
      do
      {
        ++v32;
        *v10++ = v7 | 1;
      }
      while ( v32 < v12 );
    }
    v13 = (*(_DWORD *)(v7 + 4) & 0xFFFFFFE0) == 0;
    v26 = -1 << (*(_DWORD *)(v7 + 4) & 0x1F);
    v32 = 0;
    if ( !v13 )
    {
      do
      {
        v14 = *(_DWORD *)(v7 + 8);
        for ( j = v14; ; v14 = j )
        {
          v15 = *(_DWORD **)(v14 + 4 * v32);
          v29 = v15;
          if ( ((unsigned __int8)v15 & 1) != 0 )
            break;
          *(_DWORD *)(v14 + 4 * v32) = *v15;
          v16 = ((((unsigned int)v26 & v15[1]) >> 24)
               + 37
               * ((unsigned __int8)(((unsigned int)v26 & v15[1]) >> 16)
                + 37
                * ((unsigned __int8)((unsigned __int16)(v26 & v15[1]) >> 8)
                 + 37 * ((unsigned __int8)(v26 & v15[1]) + 11623883)))) & (v9 - 1);
          v17 = v31;
          *v29 = *(_DWORD *)(v31 + 4 * v16);
          *(_DWORD *)(v17 + 4 * v16) = v29;
        }
        ++v32;
        v7 = (unsigned int)v24;
      }
      while ( v32 < v24[1] >> 5 );
    }
    v18 = *(_DWORD *)(v7 + 8);
    v8 = (32 * v9) | *(_DWORD *)(v7 + 4) & 0x1F;
    *(_DWORD *)(v7 + 8) = v31;
    *(_DWORD *)(v7 + 4) = v8;
    if ( v18 )
    {
      RtlpHpStackDbFreeRoutine(v18, 0);
      v8 = *(_DWORD *)(a1 + 12);
    }
    goto LABEL_23;
  }
  v8 = *(_DWORD *)(v7 + 4);
  if ( v8 >= 0x20 )
  {
LABEL_23:
    v6 = 1;
LABEL_24:
    v30 = v28[1] & (-1 << (v8 & 0x1F));
    v19 = (HIBYTE(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))) & ((v8 >> 5) - 1);
    v20 = *(_DWORD *)(v7 + 8);
    *v28 = *(_DWORD *)(v20 + 4 * v19);
    *(_DWORD *)(v20 + 4 * v19) = v28;
    ++*(_DWORD *)v7;
    v21 = 0;
    goto LABEL_25;
  }
  v21 = v28;
  v6 = 0;
LABEL_25:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v23);
  if ( v21 )
    RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
  return v6;
}
