/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x4B364F2B
 * Callers:
 *     _RtlpHeapTrkInterceptor@16 @ 0x4B3648D0 (_RtlpHeapTrkInterceptor@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     RtlpHeapTrkDereferenceStack @ 0x4B36451B (RtlpHeapTrkDereferenceStack.c)
 */

_DWORD *__thiscall RtlpHeapTrkTrackRemoveHeap(void *this)
{
  char v1; // bl
  unsigned int i; // esi
  int v3; // edi
  unsigned int v4; // edx
  int *v5; // eax
  int v6; // ecx
  int **v7; // edi
  int v8; // edi
  int v9; // esi
  _DWORD *result; // eax
  int v11; // eax
  _DWORD *v12; // ecx
  void ***v13; // ecx
  int v14; // [esp+10h] [ebp-18h]
  unsigned int v15; // [esp+14h] [ebp-14h]
  _DWORD v17[2]; // [esp+20h] [ebp-8h] BYREF

  v1 = 0;
  v17[1] = v17;
  v17[0] = v17;
  for ( i = 0; i < 0xF778; i += 8 )
  {
    v3 = v1 & 0xF;
    v14 = v3;
    RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(dword_4B3A6D84 + 4 * v3));
    v4 = i + dword_4B3A6C54;
    v15 = i + dword_4B3A6C54;
    v5 = *(int **)(i + dword_4B3A6C54);
    if ( v5 != (int *)(i + dword_4B3A6C54) )
    {
      do
      {
        v6 = *v5;
        v3 = v14;
        if ( (void *)v5[2] == this )
        {
          if ( *(int **)(v6 + 4) != v5
            || (v7 = (int **)v5[1], *v7 != v5)
            || (*v7 = (int *)v6, *(_DWORD *)(v6 + 4) = v7, v8 = v17[0], *(_DWORD **)(v17[0] + 4) != v17) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v5 = v17[0];
          v5[1] = (int)v17;
          v4 = v15;
          *(_DWORD *)(v8 + 4) = v5;
          v3 = v14;
          v17[0] = v5;
        }
        v5 = (int *)v6;
      }
      while ( v6 != v4 );
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int32 **)(dword_4B3A6D84 + 4 * v3));
    ++v1;
  }
  while ( 1 )
  {
    v9 = v17[0];
    result = v17;
    if ( (_DWORD *)v17[0] == v17 )
      return result;
    v11 = *(_DWORD *)v17[0];
    if ( *(_DWORD *)(*(_DWORD *)v17[0] + 4) != v17[0] )
      goto LABEL_16;
    v12 = *(_DWORD **)(v17[0] + 4);
    if ( *v12 != v17[0] )
      goto LABEL_16;
    *v12 = v11;
    *(_DWORD *)(v11 + 4) = v12;
    v13 = *(void ****)(v9 + 16);
    if ( v13 )
    {
      RtlpHeapTrkDereferenceStack(v13);
      *(_DWORD *)(v9 + 16) = 0;
    }
    RtlFreeHeap(dword_4B3A6D94, 0, v9);
  }
}
