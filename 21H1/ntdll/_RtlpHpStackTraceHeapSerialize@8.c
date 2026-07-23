/*
 * XREFs of _RtlpHpStackTraceHeapSerialize@8 @ 0x4B36E530
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpWalkHeapInternal@12 @ 0x4B35A1E8 (_RtlpWalkHeapInternal@12.c)
 *     _RtlpHpStackTraceAllocFindMapping@8 @ 0x4B36E11F (_RtlpHpStackTraceAllocFindMapping@8.c)
 *     _RtlpHpStackTraceHeapGetContext@12 @ 0x4B36E4D5 (_RtlpHpStackTraceHeapGetContext@12.c)
 */

int __stdcall RtlpHpStackTraceHeapSerialize(_DWORD *a1, int a2)
{
  _RTL_SRWLOCK *v2; // ebx
  bool v3; // zf
  int v4; // esi
  PVOID v5; // edi
  int Mapping; // eax
  _RTL_SRWLOCK *v8; // [esp+Ch] [ebp-4Ch] BYREF
  int v9; // [esp+10h] [ebp-48h] BYREF
  int v10; // [esp+14h] [ebp-44h]
  int v11; // [esp+18h] [ebp-40h]
  int v12; // [esp+1Ch] [ebp-3Ch]
  int v13; // [esp+20h] [ebp-38h]
  PVOID HeapHandle; // [esp+24h] [ebp-34h]
  int v15[7]; // [esp+28h] [ebp-30h] BYREF
  _WORD v16[2]; // [esp+44h] [ebp-14h] BYREF
  _DWORD *v17; // [esp+48h] [ebp-10h]
  int v18; // [esp+4Ch] [ebp-Ch]
  int v19; // [esp+50h] [ebp-8h]

  v13 = 0;
  HeapHandle = a1;
  v12 = a2;
  if ( RtlpHpStackTraceHeapGetContext(a1, 0, (PVOID *)&v8) >= 0 )
  {
    v2 = v8;
  }
  else
  {
    v2 = 0;
    v8 = 0;
  }
  v3 = a1[2] == -571548178;
  v16[0] = 2;
  v16[1] = 4;
  v17 = a1;
  if ( v3 )
  {
    v19 = a1[32] << 12;
    v19 += a1[19] << 12;
    v18 = a1[33] << 12;
    v2 = v8;
    v18 += a1[20] << 12;
  }
  else
  {
    v18 = a1[126] - a1[145];
    v19 = a1[125];
  }
  v4 = (*(int (__thiscall **)(_DWORD, _WORD *, int, _DWORD))(a2 + 8))(
         *(_DWORD *)(a2 + 8),
         v16,
         16,
         *(_DWORD *)(a2 + 12));
  if ( v4 >= 0 )
  {
    memset(v15, 0, sizeof(v15));
    if ( v2 )
    {
      v13 = 1;
      RtlAcquireSRWLockShared(v2 + 1);
      ++v2->Value;
    }
    v5 = HeapHandle;
    RtlLockHeap(HeapHandle);
    while ( RtlpWalkHeapInternal((int)v5, (int)v15, 1) >= 0 )
    {
      if ( (v15[2] & 0x10000) != 0 )
      {
        v10 = 0;
        v9 = v15[0];
        v11 = v15[1];
        if ( v2 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping((int)v2, v15[0]);
          if ( Mapping )
            v10 = *(_DWORD *)(Mapping + 8);
        }
        else
        {
          v10 = 0;
        }
        v4 = (*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(v12 + 8))(
               *(_DWORD *)(v12 + 8),
               &v9,
               12,
               *(_DWORD *)(v12 + 12));
        if ( v4 < 0 )
          goto LABEL_21;
      }
    }
    v11 = -1;
    v10 = 0;
    v9 = 305450479;
    v4 = (*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(v12 + 8))(
           *(_DWORD *)(v12 + 8),
           &v9,
           12,
           *(_DWORD *)(v12 + 12));
    if ( v4 >= 0 )
      v4 = 0;
LABEL_21:
    RtlUnlockHeap(v5);
    if ( v13 )
    {
      --v2->Value;
      RtlReleaseSRWLockShared(v2 + 1);
    }
  }
  return v4;
}
