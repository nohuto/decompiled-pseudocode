/*
 * XREFs of _RtlpHpLfhBucketUpdateAffinityMapping@8 @ 0x4B37622D
 * Callers:
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtGetCurrentProcessorNumber@0 @ 0x4B2F38B0 (_NtGetCurrentProcessorNumber@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpHpLfhBucketAllocateSlot@12 @ 0x4B376049 (_RtlpHpLfhBucketAllocateSlot@12.c)
 */

signed __int32 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(unsigned int a1, int a2)
{
  char CurrentProcessorNumber; // bl
  unsigned __int8 v5; // al
  unsigned int v6; // ebx
  struct _TEB *v7; // ecx
  signed __int32 result; // eax
  int v9; // edi
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int8 v15; // bl
  unsigned __int8 v16; // cl
  char v17; // di
  int v18; // esi
  int v19; // esi
  signed __int32 v20; // [esp+10h] [ebp-28h] BYREF
  volatile signed __int32 *v21; // [esp+14h] [ebp-24h]
  int v22; // [esp+18h] [ebp-20h]
  unsigned int v23; // [esp+1Ch] [ebp-1Ch]
  unsigned int v24; // [esp+20h] [ebp-18h]
  unsigned int v25; // [esp+24h] [ebp-14h]
  unsigned __int8 v26; // [esp+2Bh] [ebp-Dh]
  _DWORD v27[2]; // [esp+2Ch] [ebp-Ch]

  v22 = a2;
  v23 = a1;
  CurrentProcessorNumber = NtGetCurrentProcessorNumber();
  v5 = *(_BYTE *)(a1 + 28);
  v6 = CurrentProcessorNumber & 7;
  v25 = v6;
  if ( v6 >= v5 )
  {
    if ( v6 == v5 || v5 == 1 )
      v6 = 0;
    else
      v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 24) - v5 + v6 - 1);
    v25 = v6;
  }
  v7 = NtCurrentTeb();
  v26 = *(_BYTE *)(v6 + *(_DWORD *)(a2 + 48));
  result = BYTE1(v7->HeapData);
  if ( result != v6 )
  {
    BYTE1(v7->HeapData) = v6;
    return result;
  }
  v27[0] = 0;
  v27[1] = 0;
  v21 = (volatile signed __int32 *)(a2 + 44);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 44));
  v9 = *(_DWORD *)(a2 + 48);
  v10 = v26;
  if ( v26 != *(_BYTE *)(v9 + v6) )
    return RtlReleaseSRWLockExclusive(v21);
  v11 = *(unsigned __int8 *)(v23 + 28);
  v12 = 0;
  if ( *(_BYTE *)(v23 + 28) )
  {
    do
      ++*((_BYTE *)v27 + *(unsigned __int8 *)(v9 + v12++));
    while ( v12 < v11 );
    v10 = v26;
  }
  if ( *((_BYTE *)v27 + v10) == 1 )
    return RtlReleaseSRWLockExclusive(v21);
  v13 = v10 + 1;
  v24 = v13;
  v14 = v13;
  if ( v13 < v11 )
  {
    do
    {
      v15 = *((_BYTE *)v27 + v14);
      if ( !v15 )
        break;
      if ( v15 < *((_BYTE *)v27 + v13) )
        v13 = v14;
      ++v14;
    }
    while ( v14 < v11 );
    v6 = v25;
    v24 = v13;
  }
  if ( *((_BYTE *)v27 + v13) )
  {
    *(_BYTE *)(v9 + v6) = v13;
    return RtlReleaseSRWLockExclusive(v21);
  }
  v16 = *(_BYTE *)(a2 + 41);
  if ( v16 < (unsigned int)RtlpHpLfhContentionLimit )
  {
    *(_BYTE *)(a2 + 41) = v16 + 1;
    return RtlReleaseSRWLockExclusive(v21);
  }
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a2 + 44));
  v25 = 0;
  v17 = v24;
  v18 = *(_DWORD *)(a2 + 52);
  LOWORD(v25) = 2;
  result = _InterlockedCompareExchange((volatile signed __int32 *)(4 * v24 + v18), 2, 0);
  if ( !result )
  {
    v19 = v22;
    result = (signed __int32)RtlpHpLfhBucketAllocateSlot(v23, v22, v24);
    *(_DWORD *)(*(_DWORD *)(v22 + 52) + 4 * v24) = result;
    if ( result )
    {
      _InterlockedOr(&v20, 0);
      *(_BYTE *)(v19 + 2) = v17 + 1;
      result = *(_DWORD *)(v19 + 48);
      *(_BYTE *)(v6 + result) = v17;
      *(_BYTE *)(v19 + 41) = 0;
    }
  }
  return result;
}
