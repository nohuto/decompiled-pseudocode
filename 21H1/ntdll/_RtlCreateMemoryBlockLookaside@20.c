/*
 * XREFs of _RtlCreateMemoryBlockLookaside@20 @ 0x4B2AA940
 * Callers:
 *     _RtlpInitializeStackTraceLog@0 @ 0x4B36EA32 (_RtlpInitializeStackTraceLog@0.c)
 * Callees:
 *     _RtlCreateMemoryZone@12 @ 0x4B2AAAA0 (_RtlCreateMemoryZone@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlDestroyMemoryZone@4 @ 0x4B34D720 (_RtlDestroyMemoryZone@4.c)
 *     _RtlAllocateMemoryZone@12 @ 0x4B3A20A0 (_RtlAllocateMemoryZone@12.c)
 */

int __stdcall RtlCreateMemoryBlockLookaside(_DWORD *a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int result; // eax
  int v12; // eax
  int v13; // ebx
  _DWORD *v14; // ebx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  _DWORD *i; // eax
  char v19; // al
  char v20; // al
  size_t Size; // [esp+Ch] [ebp-18h]
  unsigned int v22; // [esp+10h] [ebp-14h]
  int v23; // [esp+10h] [ebp-14h]
  int v24; // [esp+14h] [ebp-10h] BYREF
  int MemoryZone; // [esp+18h] [ebp-Ch]
  int v26; // [esp+1Ch] [ebp-8h]
  int v27; // [esp+20h] [ebp-4h] BYREF

  *a1 = 0;
  if ( a2 )
    return -1073741811;
  v5 = a3;
  if ( !a3 )
    return -1073741811;
  v6 = a4;
  if ( !a4 )
    return -1073741811;
  v7 = a5;
  if ( !a5 || a5 < a4 || a5 > 0x80000000 )
    return -1073741811;
  v26 = 1;
  if ( ((a4 - 1) & a4) != 0 )
  {
    v19 = 0;
    do
    {
      ++v19;
      v6 >>= 1;
    }
    while ( v6 );
    v6 = 1 << v19;
  }
  if ( ((a5 - 1) & a5) != 0 )
  {
    v20 = 0;
    do
    {
      ++v20;
      v7 >>= 1;
    }
    while ( v7 );
    v7 = 1 << v20;
  }
  if ( a3 < v7 )
    v5 = v7;
  v8 = v6;
  v22 = (v5 + 16 * (v5 / v7) + 4095) & 0xFFFFF000;
  v9 = 1;
  if ( v6 < v7 )
  {
    do
    {
      v8 *= 2;
      ++v9;
    }
    while ( v8 < v7 );
    v26 = v9;
  }
  v10 = 16 * (v9 + 2);
  Size = v10;
  result = RtlCreateMemoryZone(&v27, (v10 + 4095) & 0xFFFFF000, 0);
  if ( result >= 0 )
  {
    v12 = v10 + 8;
    v13 = v27;
    MemoryZone = RtlAllocateMemoryZone(v27, v12, (int)&v24);
    if ( MemoryZone < 0 )
    {
      RtlDestroyMemoryZone(v13);
      return MemoryZone;
    }
    else
    {
      v14 = (_DWORD *)((v24 + 7) & 0xFFFFFFF8);
      v23 = RtlCreateMemoryZone(&v24, v22, 0);
      if ( v23 < 0 )
      {
        RtlDestroyMemoryZone(v27);
        return v23;
      }
      else
      {
        memset(v14, 0, Size);
        v15 = v27;
        v16 = v24;
        *v14 = 0;
        v14[1] = v15;
        v14[2] = v16;
        v17 = v26;
        v14[3] = v6;
        v14[4] = v7;
        v14[5] = v17;
        for ( i = v14 + 8; ; i += 4 )
        {
          *i = 0;
          i[1] = 0;
          i[2] = v6;
          i[3] = v14;
          if ( v6 == v7 )
            break;
          v6 *= 2;
        }
        *a1 = v14;
        return 0;
      }
    }
  }
  return result;
}
