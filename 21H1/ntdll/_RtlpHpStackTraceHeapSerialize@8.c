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
  int v2; // ebx
  bool v3; // zf
  int v4; // esi
  int v5; // edi
  int Mapping; // eax
  void *v7; // ecx
  int v9; // [esp+Ch] [ebp-4Ch] BYREF
  int v10; // [esp+10h] [ebp-48h] BYREF
  int v11; // [esp+14h] [ebp-44h]
  int v12; // [esp+18h] [ebp-40h]
  int v13; // [esp+1Ch] [ebp-3Ch]
  int v14; // [esp+20h] [ebp-38h]
  _DWORD *v15; // [esp+24h] [ebp-34h]
  int v16[7]; // [esp+28h] [ebp-30h] BYREF
  _WORD v17[2]; // [esp+44h] [ebp-14h] BYREF
  _DWORD *v18; // [esp+48h] [ebp-10h]
  int v19; // [esp+4Ch] [ebp-Ch]
  int v20; // [esp+50h] [ebp-8h]

  v14 = 0;
  v15 = a1;
  v13 = a2;
  if ( RtlpHpStackTraceHeapGetContext((int)a1, 0, &v9) >= 0 )
  {
    v2 = v9;
  }
  else
  {
    v2 = 0;
    v9 = 0;
  }
  v3 = a1[2] == -571548178;
  v17[0] = 2;
  v17[1] = 4;
  v18 = a1;
  if ( v3 )
  {
    v20 = a1[32] << 12;
    v20 += a1[19] << 12;
    v19 = a1[33] << 12;
    v2 = v9;
    v19 += a1[20] << 12;
  }
  else
  {
    v19 = a1[126] - a1[145];
    v20 = a1[125];
  }
  v4 = (*(int (__thiscall **)(_DWORD, _WORD *, int, _DWORD))(a2 + 8))(
         *(_DWORD *)(a2 + 8),
         v17,
         16,
         *(_DWORD *)(a2 + 12));
  if ( v4 >= 0 )
  {
    memset(v16, 0, sizeof(v16));
    if ( v2 )
    {
      v14 = 1;
      RtlAcquireSRWLockShared((volatile signed __int32 *)(v2 + 4));
      ++*(_DWORD *)v2;
    }
    v5 = (int)v15;
    RtlLockHeap((int)v15);
    while ( RtlpWalkHeapInternal(v5, (int)v16, 1) >= 0 )
    {
      if ( (v16[2] & 0x10000) != 0 )
      {
        v11 = 0;
        v10 = v16[0];
        v12 = v16[1];
        if ( v2 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping(v2, v16[0]);
          if ( Mapping )
            v11 = *(_DWORD *)(Mapping + 8);
        }
        else
        {
          v11 = 0;
        }
        v4 = (*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(v13 + 8))(
               *(_DWORD *)(v13 + 8),
               &v10,
               12,
               *(_DWORD *)(v13 + 12));
        if ( v4 < 0 )
          goto LABEL_21;
      }
    }
    v12 = -1;
    v11 = 0;
    v10 = 305450479;
    v4 = (*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(v13 + 8))(
           *(_DWORD *)(v13 + 8),
           &v10,
           12,
           *(_DWORD *)(v13 + 12));
    if ( v4 >= 0 )
      v4 = 0;
LABEL_21:
    RtlUnlockHeap(v7, v5);
    if ( v14 )
    {
      --*(_DWORD *)v2;
      RtlReleaseSRWLockShared((volatile signed __int32 *)(v2 + 4));
    }
  }
  return v4;
}
