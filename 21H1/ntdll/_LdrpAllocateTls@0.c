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
  PVOID Heap; // eax
  _DWORD *v3; // ecx
  unsigned int v5; // edi
  PVOID *v6; // eax
  SIZE_T v7; // [esp-4h] [ebp-5Ch]
  size_t v8; // [esp-4h] [ebp-5Ch]
  unsigned int SizeOfBitMap; // [esp+10h] [ebp-48h]
  int v10; // [esp+20h] [ebp-38h]
  int v11; // [esp+24h] [ebp-34h] BYREF
  _UNKNOWN **v12; // [esp+28h] [ebp-30h]
  struct _TEB *v13; // [esp+2Ch] [ebp-2Ch]
  int Size; // [esp+30h] [ebp-28h]
  PVOID Size_4; // [esp+34h] [ebp-24h]
  _DWORD *v16; // [esp+38h] [ebp-20h]
  int v17; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v13 = NtCurrentTeb();
  Size_4 = NtCurrentPeb()->ProcessHeap;
  v17 = 0;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( LdrpTlsBitmap.SizeOfBitMap )
  {
    NewTlsVector = (void **)LdrpGetNewTlsVector(LdrpTlsBitmap.SizeOfBitMap);
    if ( !NewTlsVector )
    {
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      return -1073741801;
    }
    v12 = &LdrpTlsList;
    v16 = LdrpTlsList;
    while ( 1 )
    {
      v1 = v16;
      if ( v16 == v12 )
        break;
      v16 = (_DWORD *)*v16;
      Size = LdrpComputeTlsSizeAndAlignment(v1, &v11);
      v10 = v11;
      LODWORD(v7) = v11 + 1 + Size;
      Heap = RtlAllocateHeap(Size_4, NtdllBaseTag + 786432, v7);
      if ( !Heap )
      {
        v17 = -1073741801;
LABEL_14:
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        v5 = 0;
        do
        {
          v6 = (PVOID *)NewTlsVector[v5];
          if ( v6 )
            RtlFreeHeap(Size_4, 0, *(v6 - 1));
          ++v5;
        }
        while ( v5 < SizeOfBitMap );
        RtlFreeHeap(Size_4, 0, NewTlsVector - 2);
        return v17;
      }
      v3 = (_DWORD *)(~v10 & ((unsigned int)Heap + v10 + 1));
      *(v3 - 1) = Heap;
      NewTlsVector[v1[9]] = v3;
      ms_exc.registration.TryLevel = 0;
      LODWORD(v8) = Size;
      memcpy(v3, (const void *)v1[2], v8);
      ms_exc.registration.TryLevel = -2;
      if ( v17 < 0 )
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
    NewTlsVector = &v13->ThreadLocalStoragePointer;
  }
  v13->ThreadLocalStoragePointer = NewTlsVector;
  _InterlockedIncrement(&LdrpActiveThreadCount);
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 0;
}
