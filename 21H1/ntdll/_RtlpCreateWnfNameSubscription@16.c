/*
 * XREFs of _RtlpCreateWnfNameSubscription@16 @ 0x4B2B088D
 * Callers:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpCreateWnfNameSubscription(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // edi
  _RTL_SRWLOCK *v5; // ebx
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  _DWORD *Heap; // eax
  _DWORD *v10; // esi
  _DWORD *i; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // ecx
  _DWORD *v14; // eax
  SIZE_T v16; // [esp-4h] [ebp-14h]
  size_t v17; // [esp-4h] [ebp-14h]

  v4 = dword_4B3A664C;
  if ( a2 )
    return -1073741811;
  v5 = (_RTL_SRWLOCK *)(dword_4B3A664C + 4);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 4));
  v6 = (_DWORD *)(v4 + 8);
  v7 = (_DWORD *)*v6;
  if ( (_DWORD *)*v6 != v6 )
  {
    while ( 1 )
    {
      v8 = v7 - 7;
      if ( *(v7 - 3) == a3 && v8[5] == a4 )
        break;
      v7 = (_DWORD *)*v7;
      if ( v7 == v6 )
        goto LABEL_5;
    }
    _InterlockedIncrement(v8 + 20);
    *a1 = v8;
    RtlReleaseSRWLockShared(v5);
    return 0;
  }
LABEL_5:
  RtlReleaseSRWLockShared(v5);
  LODWORD(v16) = 112;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  v10 = Heap;
  if ( Heap )
  {
    LODWORD(v17) = 112;
    memset(Heap, 0, v17);
    *(_WORD *)v10 = 2322;
    *((_WORD *)v10 + 1) = 112;
    v10[4] = a3;
    v10[5] = a4;
    v10[12] = v10 + 11;
    v10[11] = v10 + 11;
    v10[20] = 1;
    v10[23] = 0;
    v10[22] = 0;
    v10[2] = 0;
    v10[3] = 0;
    RtlAcquireSRWLockExclusive(v5);
    for ( i = (_DWORD *)*v6; i != v6; i = (_DWORD *)*i )
    {
      v12 = i - 7;
      if ( *(i - 3) == a3 && v12[5] == a4 )
      {
        _InterlockedIncrement(v12 + 20);
        *a1 = v12;
        RtlReleaseSRWLockExclusive(v5);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
        return 0;
      }
    }
    v13 = (_DWORD *)*v6;
    v14 = v10 + 7;
    if ( *(_DWORD **)(*v6 + 4) != v6 )
      __fastfail(3u);
    *v14 = v13;
    v10[8] = v6;
    v13[1] = v14;
    *v6 = v14;
    *a1 = v10;
    RtlReleaseSRWLockExclusive(v5);
    return 0;
  }
  return -1073741801;
}
