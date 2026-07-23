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

PVOID *__thiscall RtlpHeapTrkTrackRemoveHeap(PVOID this)
{
  char v1; // bl
  unsigned int i; // esi
  int v3; // edi
  PVOID *v4; // edx
  PVOID *v5; // eax
  PVOID *v6; // ecx
  PVOID **v7; // edi
  _DWORD *v8; // edi
  _DWORD *v9; // esi
  PVOID *result; // eax
  _DWORD *v11; // eax
  PVOID *v12; // ecx
  PVOID **v13; // ecx
  int v14; // [esp+10h] [ebp-18h]
  unsigned int v15; // [esp+14h] [ebp-14h]
  PVOID BaseAddress[2]; // [esp+20h] [ebp-8h] BYREF

  v1 = 0;
  BaseAddress[1] = BaseAddress;
  BaseAddress[0] = BaseAddress;
  for ( i = 0; i < 0xF778; i += 8 )
  {
    v3 = v1 & 0xF;
    v14 = v3;
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * v3));
    v4 = (PVOID *)(i + dword_4B3A6C54);
    v15 = i + dword_4B3A6C54;
    v5 = *(PVOID **)(i + dword_4B3A6C54);
    if ( v5 != (PVOID *)(i + dword_4B3A6C54) )
    {
      do
      {
        v6 = (PVOID *)*v5;
        v3 = v14;
        if ( v5[2] == this )
        {
          if ( v6[1] != v5
            || (v7 = (PVOID **)v5[1], *v7 != v5)
            || (*v7 = v6, v6[1] = v7, v8 = BaseAddress[0], *((PVOID **)BaseAddress[0] + 1) != BaseAddress) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v5 = BaseAddress[0];
          v5[1] = BaseAddress;
          v4 = (PVOID *)v15;
          v8[1] = v5;
          v3 = v14;
          BaseAddress[0] = v5;
        }
        v5 = v6;
      }
      while ( v6 != v4 );
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * v3));
    ++v1;
  }
  while ( 1 )
  {
    v9 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      return result;
    v11 = *(_DWORD **)BaseAddress[0];
    if ( *(PVOID *)(*(_DWORD *)BaseAddress[0] + 4) != BaseAddress[0] )
      goto LABEL_16;
    v12 = (PVOID *)*((_DWORD *)BaseAddress[0] + 1);
    if ( *v12 != BaseAddress[0] )
      goto LABEL_16;
    *v12 = v11;
    v11[1] = v12;
    v13 = (PVOID **)v9[4];
    if ( v13 )
    {
      RtlpHeapTrkDereferenceStack(v13);
      v9[4] = 0;
    }
    RtlFreeHeap(HeapHandle, 0, v9);
  }
}
