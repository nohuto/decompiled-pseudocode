/*
 * XREFs of _LdrpHandleTlsData@4 @ 0x4B2D0CD1
 * Callers:
 *     _LdrpDoPostSnapWork@4 @ 0x4B2D0C67 (_LdrpDoPostSnapWork@4.c)
 * Callees:
 *     _LdrpReleaseTlsEntry@8 @ 0x4B2A7CB1 (_LdrpReleaseTlsEntry@8.c)
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpComputeTlsSizeAndAlignment@8 @ 0x4B2E16E5 (_LdrpComputeTlsSizeAndAlignment@8.c)
 *     @LdrpGetNewTlsVector@4 @ 0x4B2E171A (@LdrpGetNewTlsVector@4.c)
 *     _LdrpAllocateTlsEntry@20 @ 0x4B2E1766 (_LdrpAllocateTlsEntry@20.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _LdrpQueueDeferredTlsData@8 @ 0x4B2EB699 (_LdrpQueueDeferredTlsData@8.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

NTSTATUS __thiscall LdrpHandleTlsData(unsigned int *this)
{
  void *ProcessHeap; // ebx
  _BYTE *v3; // edi
  NTSTATUS v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // eax
  PVOID Heap; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  PVOID v12; // ebx
  int v13; // eax
  PVOID v14; // edi
  int NewTlsVector; // edx
  int *v16; // ecx
  int v17; // eax
  int v18; // ecx
  SIZE_T v19; // [esp-4h] [ebp-94h]
  size_t v20; // [esp-4h] [ebp-94h]
  void *v21; // [esp-4h] [ebp-94h]
  _DWORD *v22; // [esp+14h] [ebp-7Ch]
  PVOID BaseAddress; // [esp+18h] [ebp-78h]
  int v24; // [esp+1Ch] [ebp-74h] BYREF
  int v25; // [esp+20h] [ebp-70h] BYREF
  PVOID v26; // [esp+24h] [ebp-6Ch] BYREF
  unsigned int *v27; // [esp+28h] [ebp-68h]
  int v28; // [esp+2Ch] [ebp-64h]
  _BYTE *v29; // [esp+30h] [ebp-60h]
  _BYTE *v30; // [esp+34h] [ebp-5Ch]
  int v31; // [esp+38h] [ebp-58h] BYREF
  size_t Size; // [esp+3Ch] [ebp-54h] BYREF
  unsigned int SizeOfBitMap; // [esp+44h] [ebp-4Ch]
  PVOID HeapHandle; // [esp+48h] [ebp-48h]
  signed int v35; // [esp+4Ch] [ebp-44h]
  unsigned int v36; // [esp+50h] [ebp-40h]
  char v37; // [esp+57h] [ebp-39h] BYREF
  _BYTE ProcessInformation[32]; // [esp+58h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  v27 = this;
  if ( !LdrpActiveThreadCount )
    return 0;
  if ( RtlpImageDirectoryEntryToDataEx(this[6], 1, 9u, (unsigned int *)&v31, &Size) < 0 )
    LODWORD(Size) = 0;
  if ( !(_DWORD)Size )
    return 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v28 = 0;
  v26 = 0;
  v30 = 0;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    v3 = ProcessInformation;
    v30 = ProcessInformation;
LABEL_8:
    v29 = v3;
    SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
    v4 = LdrpAllocateTlsEntry(&v31, &v37, &v24);
    v35 = v4;
    if ( v4 < 0 )
      goto LABEL_31;
    *((_DWORD *)v3 + 2) = LdrpActiveThreadCount;
    if ( v37 )
    {
      *((_DWORD *)v3 + 1) = 1;
      *((_DWORD *)v3 + 3) = SizeOfBitMap;
      SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0;
      *((_DWORD *)v3 + 3) = v31;
    }
    Size = (unsigned int)LdrpComputeTlsSizeAndAlignment(v24, &v25);
    v5 = 0;
    v36 = 0;
    while ( 1 )
    {
      v6 = *((_DWORD *)v3 + 2);
      if ( v5 >= v6 )
        break;
      LODWORD(v19) = Size + 1 + v25;
      Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 786432, v19);
      BaseAddress = Heap;
      if ( !Heap )
        goto LABEL_54;
      v22 = (_DWORD *)(~v25 & ((unsigned int)Heap + v25 + 1));
      *(v22 - 1) = Heap;
      ms_exc.registration.TryLevel = 0;
      LODWORD(v20) = Size;
      memcpy(v22, *(const void **)(v24 + 8), v20);
      ms_exc.registration.TryLevel = -2;
      if ( v4 < 0 )
      {
        RtlFreeHeap(HeapHandle, 0, BaseAddress);
LABEL_20:
        v10 = v36;
        if ( !v36 )
          goto LABEL_26;
        v11 = 12 * v36;
        v12 = HeapHandle;
        while ( 2 )
        {
          v36 = --v10;
          v11 -= 12;
          SizeOfBitMap = v11;
          if ( (v3[v11 + 16] & 2) != 0 )
          {
            v13 = *(_DWORD *)&v29[v11 + 20];
            if ( !v13 )
              goto LABEL_24;
            if ( v37 )
              LdrpQueueDeferredTlsData(v13, *(_DWORD *)&v3[v11 + 24]);
            else
LABEL_38:
              RtlFreeHeap(v12, 0, *(PVOID *)(v13 - 4));
            v10 = v36;
            v11 = SizeOfBitMap;
          }
          else
          {
            if ( (v3[v11 + 16] & 1) == 0 )
            {
              ++v28;
              v18 = *(_DWORD *)&v29[v11 + 20];
              if ( v37 )
              {
                HIDWORD(Size) = *(_DWORD *)(v18 + 4 * v31);
                RtlFreeHeap(v12, 0, (PVOID)(v18 - 8));
                v13 = HIDWORD(Size);
              }
              else
              {
                v13 = *(_DWORD *)&v29[v11 + 20];
              }
              goto LABEL_38;
            }
            ++LdrpPotentialTlsLeaks;
          }
LABEL_24:
          if ( !v10 )
          {
            v4 = v35;
LABEL_26:
            if ( v4 < 0 )
            {
              LdrpReleaseTlsEntry((int)v27, &v26);
              if ( v37 )
                LdrpTlsBitmap.SizeOfBitMap -= 8;
            }
            else if ( v28 )
            {
              LdrpActiveThreadCount -= v28;
            }
            if ( v4 >= 0 )
              *((_WORD *)v27 + 29) = -1;
LABEL_31:
            RtlReleaseSRWLockExclusive(&LdrpTlsLock);
            if ( v3 == ProcessInformation )
            {
              v14 = HeapHandle;
            }
            else
            {
              v21 = v3;
              v14 = HeapHandle;
              RtlFreeHeap(HeapHandle, 0, v21);
            }
            if ( v26 )
              RtlFreeHeap(v14, 0, v26);
            if ( v4 < 0 )
              return v4;
            return 0;
          }
          continue;
        }
      }
      if ( v37 )
      {
        NewTlsVector = LdrpGetNewTlsVector(SizeOfBitMap);
        HIDWORD(Size) = NewTlsVector;
        if ( !NewTlsVector )
        {
          RtlFreeHeap(HeapHandle, 0, BaseAddress);
LABEL_54:
          v4 = -1073741801;
          goto LABEL_19;
        }
        *(_DWORD *)(NewTlsVector + 4 * v31) = v22;
      }
      else
      {
        HIDWORD(Size) = v22;
      }
      v8 = v36;
      v9 = 12 * v36;
      *(_DWORD *)&v29[v9 + 20] = HIDWORD(Size);
      *(_DWORD *)&v3[v9 + 16] = 0;
      v5 = v8 + 1;
      v36 = v5;
      HIDWORD(Size) = v5;
      v4 = v35;
    }
    *(_DWORD *)v3 = 0;
    v4 = ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessTlsInformation, v3, 12 * v6 + 16);
LABEL_19:
    v35 = v4;
    goto LABEL_20;
  }
  v35 = RtlULongLongToUInt(
          12 * LdrpActiveThreadCount,
          (12 * (unsigned __int64)(unsigned int)LdrpActiveThreadCount) >> 32);
  if ( v35 >= 0 )
  {
    v35 = RtlULongPtrAdd(v36, 16, v16);
    if ( v35 >= 0 )
    {
      LODWORD(v19) = v36;
      v3 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v19);
      v30 = v3;
      if ( v3 )
      {
        v17 = v35;
      }
      else
      {
        v17 = -1073741801;
        v35 = -1073741801;
      }
      if ( v17 >= 0 )
        goto LABEL_8;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  return v35;
}
