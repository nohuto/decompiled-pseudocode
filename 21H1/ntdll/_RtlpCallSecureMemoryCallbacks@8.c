/*
 * XREFs of _RtlpCallSecureMemoryCallbacks@8 @ 0x4B35E5B0
 * Callers:
 *     _RtlFlushSecureMemoryCache@8 @ 0x4B35E4D0 (_RtlFlushSecureMemoryCache@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(int a1, int a2)
{
  int v2; // esi
  char v3; // bl
  PVOID *v4; // edi
  PVOID **v5; // ebx
  PVOID **v7; // eax
  PVOID *v8; // eax
  int v9; // ecx
  struct _PEB *v10; // eax
  PVOID v12; // [esp-4h] [ebp-2Ch]
  char v13; // [esp+13h] [ebp-15h]
  _DWORD *v15; // [esp+18h] [ebp-10h]
  PVOID BaseAddress; // [esp+20h] [ebp-8h] BYREF
  PVOID *p_BaseAddress; // [esp+24h] [ebp-4h]

  v2 = a2;
  p_BaseAddress = &BaseAddress;
  v3 = 0;
  v13 = 0;
  BaseAddress = &BaseAddress;
  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  v4 = (PVOID *)RtlpSecMemListHead;
  if ( RtlpSecMemListHead != &RtlpSecMemListHead )
  {
    do
    {
      v5 = (PVOID **)v4;
      v4[2] = (char *)v4[2] + 1;
      v15 = v4 + 2;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      if ( ((unsigned __int8 (__thiscall *)(PVOID, int, int))v4[3])(v4[3], a1, v2) )
        v13 = 1;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v4 = (PVOID *)*v4;
      if ( (*v15)-- == 1 )
      {
        if ( v4[1] != v5
          || (v7 = (PVOID **)v5[1], *v7 != (PVOID *)v5)
          || (*v7 = v4, v4[1] = v7, v8 = p_BaseAddress, *p_BaseAddress != &BaseAddress) )
        {
LABEL_16:
          __fastfail(3u);
        }
        *v5 = &BaseAddress;
        v5[1] = v8;
        *v8 = v5;
        p_BaseAddress = (PVOID *)v5;
      }
      v2 = a2;
    }
    while ( v4 != &RtlpSecMemListHead );
    v3 = v13;
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( BaseAddress != &BaseAddress )
  {
    if ( *((PVOID **)BaseAddress + 1) != &BaseAddress )
      goto LABEL_16;
    v9 = *(_DWORD *)BaseAddress;
    if ( *(PVOID *)(*(_DWORD *)BaseAddress + 4) != BaseAddress )
      goto LABEL_16;
    v12 = BaseAddress;
    v10 = NtCurrentPeb();
    BaseAddress = *(PVOID *)BaseAddress;
    *(_DWORD *)(v9 + 4) = &BaseAddress;
    RtlFreeHeap(v10->ProcessHeap, 0, v12);
  }
  return v3;
}
