/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E490
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007E640 (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A1D00 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // cl
  unsigned int v5; // eax
  __int64 v6; // rcx
  struct _TEB *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // r10
  unsigned int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // r8d
  _BYTE *v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r8
  signed __int32 v24[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-88h]
  _BYTE v26[64]; // [rsp+30h] [rbp-78h] BYREF

  CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  if ( (unsigned int)v6 >= v5 )
  {
    if ( (_DWORD)v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0LL;
    else
      v6 = *(unsigned __int8 *)((unsigned int)v6 - v5 - 1 + *(_QWORD *)(a1 + 48));
  }
  v7 = NtCurrentTeb();
  v8 = (unsigned int)v6;
  v9 = *(unsigned __int8 *)(v6 + *(_QWORD *)(a2 + 88));
  result = BYTE1(v7->HeapData);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE1(v7->HeapData) = v6;
    return result;
  }
  memset(v26, 0, sizeof(v26));
  RtlAcquireSRWLockExclusive(a2 + 80, v11, v12, v13);
  v14 = *(unsigned __int8 **)(a2 + 88);
  v15 = &v14[v8];
  if ( (_BYTE)v9 != v14[v8] )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v16 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v16 )
  {
    v17 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v18 = *v14++;
      ++v26[v18];
      --v17;
    }
    while ( v17 );
  }
  if ( v26[v9] == 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v19 = (unsigned int)(v9 + 1);
  v20 = v19;
  if ( (unsigned int)v19 < v16 )
  {
    v21 = &v26[(unsigned int)v19];
    do
    {
      if ( !*v21 )
        break;
      if ( *v21 < v26[v19] )
        v19 = v20;
      ++v20;
      ++v21;
    }
    while ( v20 < v16 );
  }
  if ( v26[v19] )
  {
    *v15 = v19;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  v22 = *(unsigned __int8 *)(a2 + 77);
  if ( v22 < RtlpHpLfhContentionLimit )
  {
    *(_BYTE *)(a2 + 77) = v22 + 1;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v25 = 0LL;
  v23 = *(_QWORD *)(a2 + 96);
  LOWORD(v25) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 8 * v19), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(a1, a2, (unsigned int)v19);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v19) = result;
    if ( result )
    {
      _InterlockedOr(v24, 0);
      *(_BYTE *)(a2 + 2) = v19 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v8 + result) = v19;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
