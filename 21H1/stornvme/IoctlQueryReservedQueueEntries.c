/*
 * XREFs of IoctlQueryReservedQueueEntries @ 0x1C0011C08
 * Callers:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 */

__int64 __fastcall IoctlQueryReservedQueueEntries(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // esi
  __int64 v6; // r8
  unsigned __int16 *v7; // rcx
  __int64 v8; // rbp
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  int v11; // ecx
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  unsigned __int16 i; // r10
  __int64 v15; // r9
  _WORD *v16; // r15
  __int16 v17; // cx
  unsigned __int16 v18; // r11
  __int64 v19; // rdx

  v3 = 16LL;
  v5 = 16;
  if ( *(_WORD *)(a1 + 814) )
  {
    v6 = *(unsigned __int16 *)(a1 + 814);
    v7 = (unsigned __int16 *)(*(_QWORD *)(a1 + 800) + 26LL);
    do
    {
      if ( *(v7 - 5) )
        v5 += 32 * *v7 + 32;
      v7 += 16;
      --v6;
    }
    while ( v6 );
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v8 = *(_QWORD *)(a2 + 64);
    v3 = 60LL;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 24);
  }
  if ( !*(_WORD *)(a1 + 786) )
  {
    result = 3238002689LL;
LABEL_14:
    *(_BYTE *)(a2 + 3) = 6;
    return result;
  }
  v10 = *(unsigned int *)(a2 + v3);
  if ( v10 >= (unsigned __int64)v5 + 28 )
  {
    NVMeZeroMemory((void *)(v8 + 28), v10 - 28);
    v12 = *(_WORD *)(a1 + 814);
    v13 = v8 + 44;
    for ( i = 0; i < v12; ++i )
    {
      v15 = *(_QWORD *)(a1 + 800) + 32LL * i;
      if ( *(_WORD *)(v15 + 16) )
      {
        v16 = (_WORD *)(v13 + 26);
        v17 = *(_WORD *)(v13 + 24);
        v18 = 0;
        *(_QWORD *)v13 = *(_QWORD *)v15;
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(v15 + 8);
        *(_WORD *)(v13 + 16) = *(_WORD *)(v15 + 16);
        *(_WORD *)(v13 + 18) = *(_WORD *)(v15 + 18);
        *(_WORD *)(v13 + 24) ^= (*(_WORD *)(v15 + 24) ^ v17) & 1;
        *(_WORD *)(v13 + 24) ^= ((unsigned __int8)*(_WORD *)(v13 + 24) ^ (unsigned __int8)*(_WORD *)(v15 + 24)) & 2;
        *(_DWORD *)(v13 + 20) = *(_DWORD *)(v15 + 20);
        v13 += 32LL;
        *v16 = 0;
        v12 = *(_WORD *)(a1 + 814);
        if ( v12 )
        {
          do
          {
            v19 = *(_QWORD *)(a1 + 792) + 32LL * v18;
            if ( *(_WORD *)(v19 + 20) == *(_WORD *)(v15 + 16) )
            {
              *(_QWORD *)v13 = *(_QWORD *)v19;
              *(_QWORD *)(v13 + 8) = *(_QWORD *)(v19 + 8);
              *(_WORD *)(v13 + 16) = *(_WORD *)(v19 + 16);
              *(_WORD *)(v13 + 18) = *(_WORD *)(v19 + 18);
              *(_WORD *)(v13 + 22) ^= (*(_WORD *)(v13 + 22) ^ *(_WORD *)(v19 + 22)) & 1;
              *(_WORD *)(v13 + 20) = *(_WORD *)(v19 + 20);
              *(_WORD *)(v13 + 24) = *(_WORD *)(v19 + 24);
              ++*v16;
              v13 += 32LL;
            }
            v12 = *(_WORD *)(a1 + 814);
            ++v18;
          }
          while ( v18 < v12 );
        }
      }
    }
    v11 = v5;
    *(_WORD *)(v8 + 36) = *(_WORD *)(a1 + 786);
  }
  else
  {
    if ( (unsigned int)v10 < 0x24 )
    {
      result = 3238002694LL;
      goto LABEL_14;
    }
    v11 = 8;
  }
  *(_BYTE *)(a2 + 3) = 1;
  result = 0LL;
  *(_DWORD *)(v8 + 32) = v5;
  *(_DWORD *)(v8 + 28) = v5;
  *(_DWORD *)(v8 + 24) = v11;
  return result;
}
