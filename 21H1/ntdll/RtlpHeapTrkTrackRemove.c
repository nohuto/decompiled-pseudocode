/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x4B364E7D
 * Callers:
 *     _RtlpHeapTrkInterceptor@16 @ 0x4B3648D0 (_RtlpHeapTrkInterceptor@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     RtlpHeapTrkDereferenceStack @ 0x4B36451B (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkHash @ 0x4B364861 (RtlpHeapTrkHash.c)
 */

void __fastcall RtlpHeapTrkTrackRemove(int a1, void *a2)
{
  _DWORD *v2; // edi
  char v3; // bl
  int v4; // esi
  _DWORD **v5; // ecx
  _DWORD *v6; // eax
  PVOID **v7; // ecx
  int v8; // ecx
  _DWORD *v9; // edx

  v2 = 0;
  v3 = 0;
  v4 = RtlpHeapTrkHash(a2);
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * (v4 & 0xF)));
  v5 = (_DWORD **)(dword_4B3A6C54 + 8 * v4);
  v6 = *v5;
  if ( *v5 != v5 )
  {
    while ( 1 )
    {
      v2 = v6;
      if ( (void *)v6[3] == a2 && v6[2] == a1 )
        break;
      v6 = (_DWORD *)*v6;
      if ( v6 == v5 )
        goto LABEL_5;
    }
    v8 = *v6;
    if ( *(_DWORD **)(*v6 + 4) != v6 || (v9 = (_DWORD *)v6[1], (_DWORD *)*v9 != v6) )
      __fastfail(3u);
    *v9 = v8;
    v3 = 1;
    *(_DWORD *)(v8 + 4) = v9;
  }
LABEL_5:
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * (v4 & 0xF)));
  if ( v3 )
  {
    v7 = (PVOID **)v2[4];
    if ( v7 )
    {
      RtlpHeapTrkDereferenceStack(v7);
      v2[4] = 0;
    }
    RtlFreeHeap(HeapHandle, 0, v2);
  }
}
