/*
 * XREFs of _RtlAllocateMemoryBlockLookaside@12 @ 0x4B3A2010
 * Callers:
 *     _RtlpInitializeStackTraceLog@0 @ 0x4B36EA32 (_RtlpInitializeStackTraceLog@0.c)
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 * Callees:
 *     @RtlpInterlockedPopEntrySList@4 @ 0x4B2DFE20 (@RtlpInterlockedPopEntrySList@4.c)
 *     _RtlAllocateMemoryZone@12 @ 0x4B3A20A0 (_RtlAllocateMemoryZone@12.c)
 */

int __stdcall RtlAllocateMemoryBlockLookaside(int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ecx
  int *v4; // esi
  int *v5; // eax
  _DWORD *v6; // ecx
  int *v8; // edi
  int *v9; // eax
  _DWORD *v10; // [esp+4h] [ebp-4h] BYREF

  if ( a2 > a1[4] )
    return -1073741811;
  v3 = a1[3];
  v4 = a1 + 8;
  while ( v3 < a2 )
  {
    v4 += 4;
    v3 *= 2;
  }
  v5 = RtlpInterlockedPopEntrySList((unsigned int)v4);
  v6 = v5;
  if ( v5 )
  {
    if ( ((unsigned __int8)v5 & 3) != 0 || (int *)v5[3] != v4 || v5[1] != v4[2] )
    {
      *v4 = 0;
      v4[1] = 0;
      v6 = 0;
    }
    v10 = v6;
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v10 = 0;
  }
  if ( RtlAllocateMemoryZone(a1[2], v4[2] + 20, (int)&v10) >= 0 )
  {
    v6 = (_DWORD *)(((unsigned int)v10 + 3) & 0xFFFFFFFC);
    v6[3] = v4;
    v6[1] = v4[2];
LABEL_9:
    v6[2] = a2;
    *a3 = v6 + 4;
    return 0;
  }
  v8 = &a1[4 * a1[5] + 8];
  while ( v4 < v8 )
  {
    v9 = RtlpInterlockedPopEntrySList((unsigned int)v4);
    v6 = v9;
    if ( v9 )
    {
      if ( ((unsigned __int8)v9 & 3) != 0 || (int *)v9[3] != v4 || v9[1] != v4[2] )
      {
        *v4 = 0;
        v4[1] = 0;
        v6 = 0;
      }
      if ( v6 )
        goto LABEL_9;
    }
    v4 += 4;
  }
  return -1073741670;
}
