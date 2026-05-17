/*
 * XREFs of _RtlpStdLogCapturedStackTrace@12 @ 0x4B3694C1
 * Callers:
 *     _RtlStdLogStackTrace@8 @ 0x4B369040 (_RtlStdLogStackTrace@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _RtlpStdGetSpaceForTrace@8 @ 0x4B369414 (_RtlpStdGetSpaceForTrace@8.c)
 */

int *__fastcall RtlpStdLogCapturedStackTrace(int a1, int a2, unsigned int a3)
{
  int v5; // edx
  SIZE_T v6; // ecx
  int *SpaceForTrace; // esi
  SIZE_T v8; // eax
  __int16 v9; // cx
  int v10; // ecx
  int *v12; // [esp+Ch] [ebp-8h]
  size_t Size; // [esp+10h] [ebp-4h]

  v5 = a3 % *(_DWORD *)(a1 + 376);
  v6 = 4 * *(unsigned __int16 *)(a2 + 10);
  Size = v6;
  SpaceForTrace = (int *)(a1 + 380 + 8 * v5);
  v12 = SpaceForTrace;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive(SpaceForTrace + 1);
    v6 = Size;
  }
  while ( 1 )
  {
    SpaceForTrace = (int *)*SpaceForTrace;
    if ( !SpaceForTrace )
      break;
    if ( *((_WORD *)SpaceForTrace + 5) == *(_WORD *)(a2 + 10) )
    {
      v8 = RtlCompareMemory(SpaceForTrace + 3, (const void *)(a2 + 12), v6);
      v6 = Size;
      if ( v8 == Size )
        goto LABEL_8;
    }
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace(a1, *(_WORD *)(a2 + 10));
  if ( !SpaceForTrace )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
    goto LABEL_11;
  }
  memcpy(SpaceForTrace + 3, (const void *)(a2 + 12), Size);
  v9 = *(_WORD *)(a2 + 10);
  *((_WORD *)SpaceForTrace + 2) &= 0xF800u;
  *((_WORD *)SpaceForTrace + 5) = v9;
  v10 = a1 + 8 * (a3 % *(_DWORD *)(a1 + 376));
  *SpaceForTrace = *(_DWORD *)(v10 + 380);
  *(_DWORD *)(v10 + 380) = SpaceForTrace;
LABEL_8:
  if ( (SpaceForTrace[1] & 0x7FF) != 0x7FF )
    *((_WORD *)SpaceForTrace + 2) ^= (*((_WORD *)SpaceForTrace + 2) ^ (*((_WORD *)SpaceForTrace + 2) + 1)) & 0x7FF;
LABEL_11:
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive(v12 + 1);
  return SpaceForTrace;
}
