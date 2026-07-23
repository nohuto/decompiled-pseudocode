/*
 * XREFs of _RtlpCreateSerializationGroup@4 @ 0x4B2ADE05
 * Callers:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

_DWORD *__thiscall RtlpCreateSerializationGroup(void *this)
{
  _DWORD *i; // eax
  _DWORD *v3; // esi
  _DWORD *Heap; // eax
  _RTL_SRWLOCK *v6; // eax
  _RTL_SRWLOCK *v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  int **v10; // edx
  int *v11; // ecx
  _DWORD *v12; // edi
  SIZE_T v13; // [esp-4h] [ebp-10h]

  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 24));
  for ( i = *(_DWORD **)(dword_4B3A664C + 16); i != (_DWORD *)(dword_4B3A664C + 16); i = (_DWORD *)*i )
  {
    v3 = i - 2;
    if ( (void *)*(i - 1) == this )
    {
      _InterlockedIncrement(v3 + 5);
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 24));
      return v3;
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 24));
  LODWORD(v13) = 24;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  v3 = Heap;
  if ( !Heap )
    return 0;
  Heap[2] = 0;
  Heap[3] = 0;
  *(_WORD *)Heap = 2323;
  *((_WORD *)Heap + 1) = 24;
  v6 = (_RTL_SRWLOCK *)(dword_4B3A664C + 24);
  v3[1] = this;
  v3[5] = 1;
  v3[4] = 0;
  RtlAcquireSRWLockExclusive(v6);
  v7 = (_RTL_SRWLOCK *)dword_4B3A664C;
  v8 = dword_4B3A664C + 16;
  v9 = *(_DWORD **)(dword_4B3A664C + 16);
  if ( v9 == (_DWORD *)(dword_4B3A664C + 16) )
  {
LABEL_8:
    v10 = *(int ***)(dword_4B3A664C + 20);
    v11 = v3 + 2;
    if ( *v10 != (int *)v8 )
      __fastfail(3u);
    *v11 = v8;
    v3[3] = v10;
    *v10 = v11;
    *(_DWORD *)(v8 + 4) = v11;
    RtlReleaseSRWLockExclusive(v7 + 6);
    return v3;
  }
  while ( 1 )
  {
    v12 = v9 - 2;
    if ( (void *)*(v9 - 1) == this )
      break;
    v9 = (_DWORD *)*v9;
    if ( v9 == (_DWORD *)v8 )
    {
      v7 = (_RTL_SRWLOCK *)dword_4B3A664C;
      goto LABEL_8;
    }
  }
  _InterlockedIncrement(v12 + 5);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 24));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v12;
}
