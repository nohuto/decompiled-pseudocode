/*
 * XREFs of _RtlAllocateMemoryBlockLookaside@12 @ 0x4B3A2010
 * Callers:
 *     _RtlpInitializeStackTraceLog@0 @ 0x4B36EA32 (_RtlpInitializeStackTraceLog@0.c)
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 * Callees:
 *     @RtlpInterlockedPopEntrySList@4 @ 0x4B2DFE20 (@RtlpInterlockedPopEntrySList@4.c)
 *     _RtlAllocateMemoryZone@12 @ 0x4B3A20A0 (_RtlAllocateMemoryZone@12.c)
 */

NTSTATUS __cdecl RtlAllocateMemoryBlockLookaside(PVOID MemoryBlockLookaside, ULONG BlockSize, PVOID *Block)
{
  PVOID *v3; // esi
  ULONG v4; // ecx
  char *v5; // esi
  int *v6; // eax
  _DWORD *v7; // ecx
  char *v9; // edi
  int *v10; // eax
  SIZE_T v11; // [esp-Ch] [ebp-14h]
  PVOID *v12; // [esp-4h] [ebp-Ch]
  _DWORD *v13; // [esp+4h] [ebp-4h] BYREF

  if ( BlockSize > *((_DWORD *)MemoryBlockLookaside + 4) )
    return -1073741811;
  v4 = *((_DWORD *)MemoryBlockLookaside + 3);
  v12 = v3;
  v5 = (char *)MemoryBlockLookaside + 32;
  while ( v4 < BlockSize )
  {
    v5 += 16;
    v4 *= 2;
  }
  v6 = RtlpInterlockedPopEntrySList((unsigned int)v5);
  v7 = v6;
  if ( v6 )
  {
    if ( ((unsigned __int8)v6 & 3) != 0 || (char *)v6[3] != v5 || v6[1] != *((_DWORD *)v5 + 2) )
    {
      *(_DWORD *)v5 = 0;
      *((_DWORD *)v5 + 1) = 0;
      v7 = 0;
    }
    v13 = v7;
    if ( v7 )
      goto LABEL_9;
  }
  else
  {
    v13 = 0;
  }
  HIDWORD(v11) = &v13;
  LODWORD(v11) = *((_DWORD *)v5 + 2) + 20;
  if ( RtlAllocateMemoryZone(*((PVOID *)MemoryBlockLookaside + 2), v11, v12) >= 0 )
  {
    v7 = (_DWORD *)(((unsigned int)v13 + 3) & 0xFFFFFFFC);
    v7[3] = v5;
    v7[1] = *((_DWORD *)v5 + 2);
LABEL_9:
    v7[2] = BlockSize;
    *Block = v7 + 4;
    return 0;
  }
  v9 = (char *)MemoryBlockLookaside + 16 * *((_DWORD *)MemoryBlockLookaside + 5) + 32;
  while ( v5 < v9 )
  {
    v10 = RtlpInterlockedPopEntrySList((unsigned int)v5);
    v7 = v10;
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 || (char *)v10[3] != v5 || v10[1] != *((_DWORD *)v5 + 2) )
      {
        *(_DWORD *)v5 = 0;
        *((_DWORD *)v5 + 1) = 0;
        v7 = 0;
      }
      if ( v7 )
        goto LABEL_9;
    }
    v5 += 16;
  }
  return -1073741670;
}
