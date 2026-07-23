/*
 * XREFs of _RtlpCheckBusyBlockTail@8 @ 0x4B35D48C
 * Callers:
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

char __fastcall RtlpCheckBusyBlockTail(int a1, unsigned int a2)
{
  char v3; // al
  int v4; // eax
  int v5; // edi
  unsigned int v6; // edx
  int v7; // eax
  char v8; // dl
  int v9; // edi
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  char v13; // al
  int v14; // eax
  int v15; // eax
  int v16; // edi
  SIZE_T v18; // [esp-4h] [ebp-14h]
  int v19; // [esp+Ch] [ebp-4h]

  v3 = *(_BYTE *)(a2 + 7);
  if ( v3 == 1 )
    return 1;
  if ( v3 == 4 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      v4 = *(_DWORD *)a2;
      if ( (*(_DWORD *)a2 & *(_DWORD *)(a1 + 76)) != 0 )
        v4 ^= *(_DWORD *)(a1 + 80);
    }
    else
    {
      LOWORD(v4) = *(_WORD *)a2;
    }
    v5 = *(_DWORD *)(a2 - 8) - (unsigned __int16)v4;
  }
  else
  {
    if ( v3 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 76) )
      {
        v7 = *(_DWORD *)a2;
        if ( (*(_DWORD *)a2 & *(_DWORD *)(a1 + 76)) != 0 )
          v7 ^= *(_DWORD *)(a1 + 80);
      }
      else
      {
        LOWORD(v7) = *(_WORD *)a2;
      }
    }
    else
    {
      v6 = a1 ^ RtlpLFHKey ^ *(_DWORD *)a2 ^ (a2 >> 3);
      if ( (_WORD)v6 )
        v7 = 0;
      else
        v7 = *(_DWORD *)(a2 - (v6 >> 13));
      LOWORD(v7) = *(_WORD *)(v7 + 20);
    }
    v8 = *(_BYTE *)(a2 + 7);
    v9 = (unsigned __int16)v7;
    if ( v8 == 5 )
    {
      v10 = *(unsigned __int16 *)(a2 + 4) ^ *(unsigned __int16 *)(a1 + 84);
    }
    else if ( (v8 & 0x40) != 0 )
    {
      v10 = *(unsigned __int16 *)(a2 + 8 * (v8 & 0x3F) + 4);
    }
    else if ( (v8 & 0x3F) == 0x3F )
    {
      if ( v8 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 76) )
        {
          v12 = *(_DWORD *)a2;
          if ( (*(_DWORD *)a2 & *(_DWORD *)(a1 + 76)) != 0 )
            v12 ^= *(_DWORD *)(a1 + 80);
        }
        else
        {
          LOWORD(v12) = *(_WORD *)a2;
        }
      }
      else
      {
        v11 = a1 ^ RtlpLFHKey ^ *(_DWORD *)a2 ^ (a2 >> 3);
        if ( (_WORD)v11 )
          v12 = 0;
        else
          v12 = *(_DWORD *)(a2 - (v11 >> 13));
        LOWORD(v12) = *(_WORD *)(v12 + 20);
      }
      v10 = *(_DWORD *)(a2 + 8 * (unsigned __int16)v12 - 4);
    }
    else
    {
      v10 = v8 & 0x3F;
    }
    v5 = 8 * v9 - v10;
  }
  v13 = *(_BYTE *)(a2 + 7);
  if ( v13 == 5 )
  {
    v14 = *(unsigned __int8 *)(a2 + 6);
LABEL_39:
    v15 = 8 * v14;
    goto LABEL_43;
  }
  if ( (v13 & 0x40) != 0 )
  {
    v14 = v13 & 0x3F;
    goto LABEL_39;
  }
  v15 = 0;
LABEL_43:
  LODWORD(v18) = 8;
  v16 = v15 + v5;
  v19 = RtlCompareMemory((const void *)(v16 + a2 + 8), CheckHeapFillPattern, v18);
  if ( v19 == 8 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ");
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap block at %p modified at %p past requested size of %Ix\n",
    (const void *)a2,
    (const void *)(v16 + a2 + 8 + v19),
    v16);
  if ( NtCurrentPeb()->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return 0;
}
