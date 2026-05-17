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

signed __int32 __fastcall RtlpHeapTrkTrackRemove(int a1, void *a2)
{
  int v2; // edi
  char v3; // bl
  int v4; // esi
  _DWORD **v5; // ecx
  _DWORD *v6; // eax
  signed __int32 result; // eax
  void ***v8; // ecx
  _DWORD *v9; // ecx
  _DWORD *v10; // edx

  v2 = 0;
  v3 = 0;
  v4 = RtlpHeapTrkHash(a2);
  RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(dword_4B3A6D84 + 4 * (v4 & 0xF)));
  v5 = (_DWORD **)(dword_4B3A6C54 + 8 * v4);
  v6 = *v5;
  if ( *v5 != v5 )
  {
    while ( 1 )
    {
      v2 = (int)v6;
      if ( (void *)v6[3] == a2 && v6[2] == a1 )
        break;
      v6 = (_DWORD *)*v6;
      if ( v6 == v5 )
        goto LABEL_5;
    }
    v9 = (_DWORD *)*v6;
    if ( *(_DWORD **)(*v6 + 4) != v6 || (v10 = (_DWORD *)v6[1], (_DWORD *)*v10 != v6) )
      __fastfail(3u);
    *v10 = v9;
    v3 = 1;
    v9[1] = v10;
  }
LABEL_5:
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int32 **)(dword_4B3A6D84 + 4 * (v4 & 0xF)));
  if ( v3 )
  {
    v8 = *(void ****)(v2 + 16);
    if ( v8 )
    {
      RtlpHeapTrkDereferenceStack(v8);
      *(_DWORD *)(v2 + 16) = 0;
    }
    return RtlFreeHeap(dword_4B3A6D94, 0, v2);
  }
  return result;
}
