/*
 * XREFs of LdrpHandleTlsData @ 0x180047C64
 * Callers:
 *     LdrpDoPostSnapWork @ 0x180047BB0 (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetNewTlsVector @ 0x18004837C (LdrpGetNewTlsVector.c)
 *     LdrpAllocateTlsEntry @ 0x1800483EC (LdrpAllocateTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x180048A84 (LdrpQueueDeferredTlsData.c)
 *     LdrpReleaseTlsEntry @ 0x18007E6C0 (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x18009D430 (NtSetInformationProcess.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(unsigned __int64 *a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  void *ProcessHeap; // r14
  _DWORD *Heap; // rdi
  unsigned __int64 v6; // rcx
  signed int TlsEntry; // esi
  SIZE_T v8; // r8
  unsigned int SizeOfBitMap; // r12d
  unsigned int v10; // r8d
  int v11; // ecx
  void *v12; // r9
  char v13; // al
  int v14; // r8d
  unsigned int v15; // r8d
  __int64 v16; // r12
  unsigned int v17; // eax
  PVOID v18; // rax
  _QWORD *v19; // r15
  __int64 v20; // rcx
  int v21; // r15d
  __int64 v22; // r8
  void *v23; // r8
  unsigned __int64 *v24; // r15
  __int64 NewTlsVector; // rcx
  __int64 v26; // rcx
  _DWORD *v27; // rax
  char v28; // [rsp+30h] [rbp-E8h]
  char v29; // [rsp+31h] [rbp-E7h] BYREF
  NTSTATUS v30; // [rsp+34h] [rbp-E4h]
  unsigned int v31; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int v32; // [rsp+3Ch] [rbp-DCh]
  unsigned int v33; // [rsp+40h] [rbp-D8h]
  _DWORD *v34; // [rsp+48h] [rbp-D0h]
  unsigned __int64 *v35; // [rsp+50h] [rbp-C8h]
  unsigned int v36; // [rsp+58h] [rbp-C0h]
  int v37; // [rsp+5Ch] [rbp-BCh]
  unsigned int v38; // [rsp+60h] [rbp-B8h]
  int v39; // [rsp+64h] [rbp-B4h]
  __int64 v40; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-A8h]
  _BYTE *v42; // [rsp+78h] [rbp-A0h]
  size_t Size; // [rsp+80h] [rbp-98h]
  unsigned __int64 v44; // [rsp+88h] [rbp-90h]
  _DWORD *v45; // [rsp+90h] [rbp-88h]
  __int64 v46; // [rsp+98h] [rbp-80h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-78h]
  PVOID BaseAddress; // [rsp+A8h] [rbp-70h]
  PVOID v49[4]; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v50[40]; // [rsp+D0h] [rbp-48h] BYREF

  v35 = a1;
  v49[3] = a1;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v1 = RtlpImageDirectoryEntryToDataEx(a1[6], 1, 9u, &v31, (char **)&v40);
  v2 = v40;
  if ( v1 < 0 )
    v2 = 0LL;
  v40 = v2;
  if ( !v2 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v49[1] = ProcessHeap;
  v39 = 0;
  v49[0] = 0LL;
  Heap = 0LL;
  v42 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v50;
    v42 = v50;
  }
  else
  {
    v6 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      TlsEntry = 0;
    }
    else
    {
      v6 = -1LL;
      TlsEntry = -1073741675;
    }
    if ( TlsEntry >= 0 )
    {
      v8 = -1LL;
      if ( v6 + 16 >= v6 )
        v8 = v6 + 16;
      TlsEntry = v6 + 16 < v6 ? 0xC0000095 : 0;
      if ( v6 + 16 >= v6 )
      {
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v8);
        v42 = Heap;
        if ( !Heap )
          TlsEntry = -1073741801;
      }
    }
    if ( TlsEntry < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)TlsEntry;
    }
  }
  v34 = Heap;
  v45 = Heap;
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v33 = LdrpTlsBitmap.SizeOfBitMap;
  TlsEntry = LdrpAllocateTlsEntry(v40, (_DWORD)v35, (unsigned int)&v31, (unsigned int)&v29, (__int64)&v46);
  v30 = TlsEntry;
  if ( TlsEntry < 0 )
    goto LABEL_39;
  Heap[2] = LdrpActiveThreadCount;
  v28 = v29;
  v10 = v31;
  v32 = v31;
  if ( v29 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v33 = LdrpTlsBitmap.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = v10;
  }
  v47 = v46;
  v11 = (*(_DWORD *)(v46 + 52) >> 20) & 0xF;
  v12 = (void *)(*(_QWORD *)(v46 + 24) - *(_QWORD *)(v46 + 16));
  Size = (size_t)v12;
  v13 = v11 - 1;
  if ( (*(_DWORD *)(v46 + 52) & 0xF00000) == 0 )
    v13 = v11;
  v14 = 1 << v13;
  if ( (unsigned int)(1 << v13) < 0x10 )
    v14 = 16;
  v36 = v14;
  LODWORD(v40) = v14;
  v15 = v14 - 1;
  v38 = v15;
  v41 = v15;
  v49[2] = v12;
  LODWORD(v16) = 0;
  while ( 1 )
  {
    v37 = v16;
    v17 = Heap[2];
    if ( (unsigned int)v16 >= v17 )
    {
      *Heap = 0;
      v30 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v17 + 16);
      goto LABEL_29;
    }
    v44 = v15;
    v18 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, (SIZE_T)v12 + v15 + 1);
    BaseAddress = v18;
    if ( !v18 )
    {
      v30 = -1073741801;
      goto LABEL_29;
    }
    v19 = (_QWORD *)(~v44 & ((unsigned __int64)v18 + v36));
    v44 = (unsigned __int64)v19;
    *(v19 - 1) = v18;
    memmove(v19, *(const void **)(v47 + 16), Size);
    if ( v28 )
      break;
LABEL_27:
    v20 = 3LL * (unsigned int)v16;
    *(_QWORD *)&v34[2 * v20 + 6] = v19;
    Heap[2 * v20 + 4] = 0;
    LODWORD(v16) = v16 + 1;
    v15 = v38;
    v12 = (void *)Size;
  }
  NewTlsVector = LdrpGetNewTlsVector(v33);
  if ( NewTlsVector )
  {
    *(_QWORD *)(NewTlsVector + 8LL * v32) = v19;
    v19 = (_QWORD *)NewTlsVector;
    goto LABEL_27;
  }
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  v30 = -1073741801;
LABEL_29:
  v21 = v39;
  while ( (_DWORD)v16 )
  {
    v16 = (unsigned int)(v16 - 1);
    if ( (Heap[6 * v16 + 4] & 2) != 0 )
    {
      v22 = *(_QWORD *)&v34[6 * v16 + 6];
      if ( !v22 )
        continue;
      if ( !v28 )
      {
        v23 = *(void **)(v22 - 8);
LABEL_35:
        RtlFreeHeap(ProcessHeap, 0, v23);
        continue;
      }
      LdrpQueueDeferredTlsData(v22, *(_QWORD *)&v34[6 * v16 + 8]);
    }
    else
    {
      if ( (Heap[6 * v16 + 4] & 1) == 0 )
      {
        ++v21;
        v26 = *(_QWORD *)&v34[6 * v16 + 6];
        if ( v28 )
        {
          v45 = *(_DWORD **)(v26 + 8LL * v32);
          RtlFreeHeap(ProcessHeap, 0, (PVOID)(v26 - 16));
          v27 = v45;
        }
        else
        {
          v27 = *(_DWORD **)&v34[6 * v16 + 6];
        }
        v23 = (void *)*((_QWORD *)v27 - 1);
        goto LABEL_35;
      }
      ++LdrpPotentialTlsLeaks;
    }
  }
  TlsEntry = v30;
  if ( v30 < 0 )
  {
    v24 = v35;
    LdrpReleaseTlsEntry(v35, v49);
    if ( v28 )
      LdrpTlsBitmap.SizeOfBitMap -= 8;
  }
  else
  {
    if ( v21 )
      LdrpActiveThreadCount -= v21;
LABEL_39:
    v24 = v35;
  }
  if ( TlsEntry >= 0 )
    *((_WORD *)v24 + 55) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)v50 )
    RtlFreeHeap(ProcessHeap, 0, Heap);
  if ( v49[0] )
    RtlFreeHeap(ProcessHeap, 0, v49[0]);
  if ( TlsEntry >= 0 )
    return 0LL;
  return (unsigned int)TlsEntry;
}
