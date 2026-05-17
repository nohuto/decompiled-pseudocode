/*
 * XREFs of _RtlAllocateHandle@8 @ 0x4B2E0600
 * Callers:
 *     _RtlpInsertStringAtom@8 @ 0x4B2E0590 (_RtlpInsertStringAtom@8.c)
 * Callees:
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

unsigned int *__stdcall RtlAllocateHandle(unsigned int *a1, unsigned int *a2)
{
  unsigned int **v2; // edi
  unsigned int *v3; // ecx
  unsigned int v5; // ecx
  int v6; // ebx
  struct _PEB *v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // [esp+Ch] [ebp-14h]
  int v17; // [esp+10h] [ebp-10h] BYREF
  int v18; // [esp+14h] [ebp-Ch] BYREF
  int v19; // [esp+18h] [ebp-8h] BYREF
  unsigned int *v20; // [esp+1Ch] [ebp-4h] BYREF

  v2 = (unsigned int **)(a1 + 4);
  if ( !a1[4] )
  {
    if ( a1[2] )
    {
      v5 = a1[3];
      if ( v5 <= *a1 )
      {
        v6 = v5 * a1[1];
        v16 = v6 + 8 * a1[1];
        v7 = NtCurrentPeb();
        v8 = a1[5]
           ? RtlReAllocateHeap((int)v7->ProcessHeap, 8, a1[5], v16)
           : RtlAllocateHeap((int)v7->ProcessHeap, 8, v16);
        v19 = v8;
        if ( v8 )
        {
          a1[3] += 8;
          v9 = v8 + v6;
          a1[5] = v8;
          v10 = v16 + v8;
          v20 = (unsigned int *)v9;
          goto LABEL_11;
        }
      }
    }
    else
    {
      v12 = (unsigned int *)a1[6];
      if ( !v12 )
      {
        v13 = *a1 * a1[1];
        v19 = 0;
        v18 = v13;
        if ( (int)NtAllocateVirtualMemory(-1, &v19, 0, &v18, 0x2000, 4) < 0 )
          return 0;
        v14 = v19;
        v15 = v19 + v18;
        a1[5] = v19;
        a1[7] = v15;
        v12 = (unsigned int *)v14;
        a1[6] = v14;
      }
      v20 = v12;
      if ( (unsigned int)v12 < a1[7] )
      {
        v17 = 4096;
        if ( (int)NtAllocateVirtualMemory(-1, &v20, 0, &v17, 4096, 4) >= 0 )
        {
          v9 = (unsigned int)v20;
          v10 = (int)v20 + v17;
LABEL_11:
          a1[6] = v10;
          v11 = a1 + 4;
          while ( v9 < a1[6] )
          {
            *v11 = v9;
            v11 = v20;
            v9 = (unsigned int)v20 + a1[1];
            v20 = (unsigned int *)v9;
          }
          goto LABEL_2;
        }
      }
    }
    return 0;
  }
LABEL_2:
  v3 = *v2;
  v20 = v3;
  *v2 = (unsigned int *)*v3;
  *v3 = 0;
  if ( a2 )
    *a2 = ((unsigned int)v20 - a1[5]) / a1[1];
  return v20;
}
