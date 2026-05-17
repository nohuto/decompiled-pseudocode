/*
 * XREFs of _LdrpAllocateTls@0 @ 0x4B2E15BF
 * Callers:
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrpInitializeTls@0 @ 0x4B2E14F7 (_LdrpInitializeTls@0.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpComputeTlsSizeAndAlignment@8 @ 0x4B2E16E5 (_LdrpComputeTlsSizeAndAlignment@8.c)
 *     @LdrpGetNewTlsVector@4 @ 0x4B2E171A (@LdrpGetNewTlsVector@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

int __stdcall LdrpAllocateTls()
{
  void **NewTlsVector; // esi
  _DWORD *v1; // edi
  int Heap; // eax
  _DWORD *v3; // ecx
  unsigned int v5; // edi
  _DWORD *v6; // eax
  unsigned int v7; // [esp+10h] [ebp-48h]
  int v8; // [esp+20h] [ebp-38h]
  int v9; // [esp+24h] [ebp-34h] BYREF
  _UNKNOWN **v10; // [esp+28h] [ebp-30h]
  struct _TEB *v11; // [esp+2Ch] [ebp-2Ch]
  size_t Size; // [esp+30h] [ebp-28h]
  void *ProcessHeap; // [esp+34h] [ebp-24h]
  _DWORD *v14; // [esp+38h] [ebp-20h]
  int v15; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v11 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v15 = 0;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v7 = LdrpTlsBitmap;
  if ( LdrpTlsBitmap )
  {
    NewTlsVector = (void **)LdrpGetNewTlsVector(LdrpTlsBitmap);
    if ( !NewTlsVector )
    {
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      return -1073741801;
    }
    v10 = &LdrpTlsList;
    v14 = LdrpTlsList;
    while ( 1 )
    {
      v1 = v14;
      if ( v14 == v10 )
        break;
      v14 = (_DWORD *)*v14;
      Size = LdrpComputeTlsSizeAndAlignment(v1, &v9);
      v8 = v9;
      Heap = RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 786432, v9 + 1 + Size);
      if ( !Heap )
      {
        v15 = -1073741801;
LABEL_14:
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        v5 = 0;
        do
        {
          v6 = NewTlsVector[v5];
          if ( v6 )
            RtlFreeHeap((int)ProcessHeap, 0, *(v6 - 1));
          ++v5;
        }
        while ( v5 < v7 );
        RtlFreeHeap((int)ProcessHeap, 0, (int)(NewTlsVector - 2));
        return v15;
      }
      v3 = (_DWORD *)(~v8 & (Heap + v8 + 1));
      *(v3 - 1) = Heap;
      NewTlsVector[v1[9]] = v3;
      ms_exc.registration.TryLevel = 0;
      memcpy(v3, (const void *)v1[2], Size);
      ms_exc.registration.TryLevel = -2;
      if ( v15 < 0 )
        goto LABEL_14;
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrtls.c",
          873,
          "LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          NewTlsVector,
          v1[9],
          v1[3] - v1[2],
          (const void *)v1[2],
          NewTlsVector[v1[9]]);
    }
  }
  else
  {
    NewTlsVector = &v11->ThreadLocalStoragePointer;
  }
  v11->ThreadLocalStoragePointer = NewTlsVector;
  _InterlockedIncrement(&LdrpActiveThreadCount);
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 0;
}
