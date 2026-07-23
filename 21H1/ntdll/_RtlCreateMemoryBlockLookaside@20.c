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

NTSTATUS __cdecl RtlCreateMemoryBlockLookaside(
        PVOID *MemoryBlockLookaside,
        ULONG Flags,
        ULONG InitialSize,
        ULONG MinimumBlockSize,
        ULONG MaximumBlockSize)
{
  ULONG v5; // ebx
  ULONG v6; // edi
  unsigned int v7; // esi
  ULONG v8; // ecx
  int v9; // eax
  int v10; // ebx
  NTSTATUS result; // eax
  int v12; // eax
  PVOID v13; // ebx
  _DWORD *v14; // ebx
  PVOID v15; // ecx
  PVOID v16; // eax
  int v17; // eax
  _DWORD *i; // eax
  char v19; // al
  char v20; // al
  size_t v21; // [esp-4h] [ebp-28h]
  ULONG v22; // [esp+0h] [ebp-24h]
  PVOID *v23; // [esp+0h] [ebp-24h]
  ULONG v24; // [esp+0h] [ebp-24h]
  int Size; // [esp+Ch] [ebp-18h]
  unsigned int Size_4; // [esp+10h] [ebp-14h]
  int Size_4a; // [esp+10h] [ebp-14h]
  PVOID v28; // [esp+14h] [ebp-10h] BYREF
  int v29; // [esp+18h] [ebp-Ch]
  int v30; // [esp+1Ch] [ebp-8h]
  PVOID MemoryZone; // [esp+20h] [ebp-4h] BYREF

  *MemoryBlockLookaside = 0;
  if ( Flags )
    return -1073741811;
  v5 = InitialSize;
  if ( !InitialSize )
    return -1073741811;
  v6 = MinimumBlockSize;
  if ( !MinimumBlockSize )
    return -1073741811;
  v7 = MaximumBlockSize;
  if ( !MaximumBlockSize || MaximumBlockSize < MinimumBlockSize || MaximumBlockSize > 0x80000000 )
    return -1073741811;
  v30 = 1;
  if ( ((MinimumBlockSize - 1) & MinimumBlockSize) != 0 )
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
  if ( ((MaximumBlockSize - 1) & MaximumBlockSize) != 0 )
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
  if ( InitialSize < v7 )
    v5 = v7;
  v8 = v6;
  Size_4 = (v5 + 16 * (v5 / v7) + 4095) & 0xFFFFF000;
  v9 = 1;
  if ( v6 < v7 )
  {
    do
    {
      v8 *= 2;
      ++v9;
    }
    while ( v8 < v7 );
    v30 = v9;
  }
  v10 = 16 * (v9 + 2);
  Size = v10;
  result = RtlCreateMemoryZone(&MemoryZone, (v10 + 4095) & 0xFFFFF000, v22);
  if ( result >= 0 )
  {
    v12 = v10 + 8;
    v13 = MemoryZone;
    v29 = RtlAllocateMemoryZone(MemoryZone, __PAIR64__(&v28, v12), v23);
    if ( v29 < 0 )
    {
      RtlDestroyMemoryZone(v13);
      return v29;
    }
    else
    {
      v14 = (_DWORD *)(((unsigned int)v28 + 7) & 0xFFFFFFF8);
      Size_4a = RtlCreateMemoryZone(&v28, Size_4, v24);
      if ( Size_4a < 0 )
      {
        RtlDestroyMemoryZone(MemoryZone);
        return Size_4a;
      }
      else
      {
        LODWORD(v21) = Size;
        memset(v14, 0, v21);
        v15 = MemoryZone;
        v16 = v28;
        *v14 = 0;
        v14[1] = v15;
        v14[2] = v16;
        v17 = v30;
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
        *MemoryBlockLookaside = v14;
        return 0;
      }
    }
  }
  return result;
}
