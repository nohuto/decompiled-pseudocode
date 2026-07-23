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

void __fastcall RtlpHpLfhBucketUpdateAffinityMapping(unsigned int a1, int a2)
{
  char CurrentProcessorNumber; // bl
  unsigned __int8 v5; // al
  unsigned int v6; // ebx
  struct _TEB *v7; // ecx
  int v8; // edi
  unsigned __int8 v9; // al
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // cl
  char v16; // di
  int v17; // esi
  int v18; // esi
  void *Slot; // eax
  signed __int32 v20; // [esp+10h] [ebp-28h] BYREF
  PRTL_SRWLOCK SRWLock; // [esp+14h] [ebp-24h]
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
  if ( BYTE1(v7->HeapData) != v6 )
  {
    BYTE1(v7->HeapData) = v6;
    return;
  }
  v27[0] = 0;
  v27[1] = 0;
  SRWLock = (PRTL_SRWLOCK)(a2 + 44);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 44));
  v8 = *(_DWORD *)(a2 + 48);
  v9 = v26;
  if ( v26 != *(_BYTE *)(v8 + v6) )
    goto LABEL_22;
  v10 = *(unsigned __int8 *)(v23 + 28);
  v11 = 0;
  if ( *(_BYTE *)(v23 + 28) )
  {
    do
      ++*((_BYTE *)v27 + *(unsigned __int8 *)(v8 + v11++));
    while ( v11 < v10 );
    v9 = v26;
  }
  if ( *((_BYTE *)v27 + v9) == 1 )
    goto LABEL_22;
  v12 = v9 + 1;
  v24 = v12;
  v13 = v12;
  if ( v12 < v10 )
  {
    do
    {
      v14 = *((_BYTE *)v27 + v13);
      if ( !v14 )
        break;
      if ( v14 < *((_BYTE *)v27 + v12) )
        v12 = v13;
      ++v13;
    }
    while ( v13 < v10 );
    v6 = v25;
    v24 = v12;
  }
  if ( *((_BYTE *)v27 + v12) )
  {
    *(_BYTE *)(v8 + v6) = v12;
LABEL_22:
    RtlReleaseSRWLockExclusive(SRWLock);
    return;
  }
  v15 = *(_BYTE *)(a2 + 41);
  if ( v15 < (unsigned int)RtlpHpLfhContentionLimit )
  {
    *(_BYTE *)(a2 + 41) = v15 + 1;
    goto LABEL_22;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 44));
  v25 = 0;
  v16 = v24;
  v17 = *(_DWORD *)(a2 + 52);
  LOWORD(v25) = 2;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(4 * v24 + v17), 2, 0) )
  {
    v18 = v22;
    Slot = RtlpHpLfhBucketAllocateSlot(v23, v22, v24);
    *(_DWORD *)(*(_DWORD *)(v22 + 52) + 4 * v24) = Slot;
    if ( Slot )
    {
      _InterlockedOr(&v20, 0);
      *(_BYTE *)(v18 + 2) = v16 + 1;
      *(_BYTE *)(v6 + *(_DWORD *)(v18 + 48)) = v16;
      *(_BYTE *)(v18 + 41) = 0;
    }
  }
}
