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

signed int __thiscall LdrpHandleTlsData(unsigned int *this)
{
  void *ProcessHeap; // ebx
  _BYTE *v3; // edi
  int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // eax
  int Heap; // eax
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // edi
  int NewTlsVector; // edx
  int *v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // [esp-4h] [ebp-94h]
  _DWORD *v20; // [esp+14h] [ebp-7Ch]
  int v21; // [esp+18h] [ebp-78h]
  int v22; // [esp+1Ch] [ebp-74h] BYREF
  int v23; // [esp+20h] [ebp-70h] BYREF
  int v24; // [esp+24h] [ebp-6Ch] BYREF
  unsigned int *v25; // [esp+28h] [ebp-68h]
  int v26; // [esp+2Ch] [ebp-64h]
  _BYTE *v27; // [esp+30h] [ebp-60h]
  _BYTE *v28; // [esp+34h] [ebp-5Ch]
  int v29; // [esp+38h] [ebp-58h] BYREF
  size_t Size; // [esp+3Ch] [ebp-54h] BYREF
  _DWORD *v31; // [esp+40h] [ebp-50h]
  int v32; // [esp+44h] [ebp-4Ch]
  int v33; // [esp+48h] [ebp-48h]
  signed int v34; // [esp+4Ch] [ebp-44h]
  unsigned int v35; // [esp+50h] [ebp-40h]
  char v36; // [esp+57h] [ebp-39h] BYREF
  _BYTE v37[32]; // [esp+58h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  v25 = this;
  if ( !LdrpActiveThreadCount )
    return 0;
  if ( RtlpImageDirectoryEntryToDataEx(this[6], 1, 9u, &v29, (int *)&Size) < 0 )
    Size = 0;
  if ( !Size )
    return 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v33 = (int)ProcessHeap;
  v26 = 0;
  v24 = 0;
  v28 = 0;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    v3 = v37;
    v28 = v37;
LABEL_8:
    v27 = v3;
    v32 = LdrpTlsBitmap;
    v4 = LdrpAllocateTlsEntry(&v29, &v36, &v22);
    v34 = v4;
    if ( v4 < 0 )
      goto LABEL_31;
    *((_DWORD *)v3 + 2) = LdrpActiveThreadCount;
    if ( v36 )
    {
      *((_DWORD *)v3 + 1) = 1;
      *((_DWORD *)v3 + 3) = v32;
      v32 = LdrpTlsBitmap;
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0;
      *((_DWORD *)v3 + 3) = v29;
    }
    Size = LdrpComputeTlsSizeAndAlignment(v22, &v23);
    v5 = 0;
    v35 = 0;
    v31 = 0;
    while ( 1 )
    {
      v6 = *((_DWORD *)v3 + 2);
      if ( v5 >= v6 )
        break;
      Heap = RtlAllocateHeap(v33, NtdllBaseTag + 786432, Size + 1 + v23);
      v21 = Heap;
      if ( !Heap )
        goto LABEL_54;
      v20 = (_DWORD *)(~v23 & (Heap + v23 + 1));
      *(v20 - 1) = Heap;
      ms_exc.registration.TryLevel = 0;
      memcpy(v20, *(const void **)(v22 + 8), Size);
      ms_exc.registration.TryLevel = -2;
      if ( v4 < 0 )
      {
        RtlFreeHeap(v33, 0, v21);
LABEL_20:
        v10 = v35;
        if ( !v35 )
          goto LABEL_26;
        v11 = 12 * v35;
        v12 = v33;
        while ( 2 )
        {
          v35 = --v10;
          v11 -= 12;
          v32 = v11;
          if ( (v3[v11 + 16] & 2) != 0 )
          {
            v13 = *(_DWORD **)&v27[v11 + 20];
            if ( !v13 )
              goto LABEL_24;
            if ( v36 )
              LdrpQueueDeferredTlsData(v13, *(_DWORD *)&v3[v11 + 24]);
            else
LABEL_38:
              RtlFreeHeap(v12, 0, *(v13 - 1));
            v10 = v35;
            v11 = v32;
          }
          else
          {
            if ( (v3[v11 + 16] & 1) == 0 )
            {
              ++v26;
              v18 = *(_DWORD *)&v27[v11 + 20];
              if ( v36 )
              {
                v31 = *(_DWORD **)(v18 + 4 * v29);
                RtlFreeHeap(v12, 0, v18 - 8);
                v13 = v31;
              }
              else
              {
                v13 = *(_DWORD **)&v27[v11 + 20];
              }
              goto LABEL_38;
            }
            ++LdrpPotentialTlsLeaks;
          }
LABEL_24:
          if ( !v10 )
          {
            v4 = v34;
LABEL_26:
            if ( v4 < 0 )
            {
              LdrpReleaseTlsEntry((int)v25, &v24);
              if ( v36 )
                LdrpTlsBitmap -= 8;
            }
            else if ( v26 )
            {
              LdrpActiveThreadCount -= v26;
            }
            if ( v4 >= 0 )
              *((_WORD *)v25 + 29) = -1;
LABEL_31:
            RtlReleaseSRWLockExclusive(&LdrpTlsLock);
            if ( v3 == v37 )
            {
              v14 = v33;
            }
            else
            {
              v19 = (int)v3;
              v14 = v33;
              RtlFreeHeap(v33, 0, v19);
            }
            if ( v24 )
              RtlFreeHeap(v14, 0, v24);
            if ( v4 < 0 )
              return v4;
            return 0;
          }
          continue;
        }
      }
      if ( v36 )
      {
        NewTlsVector = LdrpGetNewTlsVector(v32);
        v31 = (_DWORD *)NewTlsVector;
        if ( !NewTlsVector )
        {
          RtlFreeHeap(v33, 0, v21);
LABEL_54:
          v4 = -1073741801;
          goto LABEL_19;
        }
        *(_DWORD *)(NewTlsVector + 4 * v29) = v20;
      }
      else
      {
        v31 = v20;
      }
      v8 = v35;
      v9 = 12 * v35;
      *(_DWORD *)&v27[v9 + 20] = v31;
      *(_DWORD *)&v3[v9 + 16] = 0;
      v5 = v8 + 1;
      v35 = v5;
      v31 = (_DWORD *)v5;
      v4 = v34;
    }
    *(_DWORD *)v3 = 0;
    v4 = ZwSetInformationProcess(-1, 35, v3, 12 * v6 + 16);
LABEL_19:
    v34 = v4;
    goto LABEL_20;
  }
  v34 = RtlULongLongToUInt(
          12 * LdrpActiveThreadCount,
          (12 * (unsigned __int64)(unsigned int)LdrpActiveThreadCount) >> 32);
  if ( v34 >= 0 )
  {
    v34 = RtlULongPtrAdd(v35, 16, v16);
    if ( v34 >= 0 )
    {
      v3 = (_BYTE *)RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 786432, v35);
      v28 = v3;
      if ( v3 )
      {
        v17 = v34;
      }
      else
      {
        v17 = -1073741801;
        v34 = -1073741801;
      }
      if ( v17 >= 0 )
        goto LABEL_8;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  return v34;
}
