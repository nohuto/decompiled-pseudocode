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
  _UNKNOWN **v4; // edi
  _DWORD *v5; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  struct _PEB *v10; // eax
  int v12; // [esp-4h] [ebp-2Ch]
  char v13; // [esp+13h] [ebp-15h]
  _DWORD *v15; // [esp+18h] [ebp-10h]
  _DWORD *v17; // [esp+20h] [ebp-8h] BYREF
  _DWORD **v18; // [esp+24h] [ebp-4h]

  v2 = a2;
  v18 = &v17;
  v3 = 0;
  v13 = 0;
  v17 = &v17;
  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  v4 = (_UNKNOWN **)RtlpSecMemListHead;
  if ( RtlpSecMemListHead != (_UNKNOWN *)&RtlpSecMemListHead )
  {
    do
    {
      v5 = v4;
      v4[2] = (_UNKNOWN *)((char *)v4[2] + 1);
      v15 = v4 + 2;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      if ( ((unsigned __int8 (__thiscall *)(void *, int, int))v4[3])(v4[3], a1, v2) )
        v13 = 1;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v4 = (_UNKNOWN **)*v4;
      if ( (*v15)-- == 1 )
      {
        if ( v4[1] != (_UNKNOWN *)v5
          || (v7 = (_DWORD *)v5[1], (_DWORD *)*v7 != v5)
          || (*v7 = v4, v4[1] = v7, v8 = v18, *v18 != &v17) )
        {
LABEL_16:
          __fastfail(3u);
        }
        *v5 = &v17;
        v5[1] = v8;
        *v8 = v5;
        v18 = (_DWORD **)v5;
      }
      v2 = a2;
    }
    while ( v4 != &RtlpSecMemListHead );
    v3 = v13;
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( v17 != &v17 )
  {
    if ( (_DWORD **)v17[1] != &v17 )
      goto LABEL_16;
    v9 = *v17;
    if ( *(_DWORD **)(*v17 + 4) != v17 )
      goto LABEL_16;
    v12 = (int)v17;
    v10 = NtCurrentPeb();
    v17 = (_DWORD *)*v17;
    *(_DWORD *)(v9 + 4) = &v17;
    RtlFreeHeap((int)v10->ProcessHeap, 0, v12);
  }
  return v3;
}
