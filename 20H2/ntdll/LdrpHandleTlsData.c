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

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  void *ProcessHeap; // r14
  _BYTE *Heap; // rdi
  unsigned __int64 v9; // rcx
  signed int TlsEntry; // esi
  __int64 v11; // r8
  int v12; // r12d
  unsigned int v13; // r8d
  int v14; // ecx
  __int64 v15; // r9
  char v16; // al
  int v17; // r8d
  unsigned int v18; // r8d
  __int64 v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rax
  _QWORD *v22; // r15
  __int64 v23; // rcx
  int v24; // r15d
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r15
  __int64 NewTlsVector; // rcx
  __int64 v29; // rcx
  _BYTE *v30; // rax
  char v31; // [rsp+30h] [rbp-E8h]
  char v32; // [rsp+31h] [rbp-E7h] BYREF
  int v33; // [rsp+34h] [rbp-E4h]
  unsigned int v34; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-DCh]
  unsigned int v36; // [rsp+40h] [rbp-D8h]
  _BYTE *v37; // [rsp+48h] [rbp-D0h]
  __int64 v38; // [rsp+50h] [rbp-C8h]
  unsigned int v39; // [rsp+58h] [rbp-C0h]
  int v40; // [rsp+5Ch] [rbp-BCh]
  unsigned int v41; // [rsp+60h] [rbp-B8h]
  int v42; // [rsp+64h] [rbp-B4h]
  __int64 v43; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-A8h]
  _BYTE *v45; // [rsp+78h] [rbp-A0h]
  size_t Size; // [rsp+80h] [rbp-98h]
  unsigned __int64 v47; // [rsp+88h] [rbp-90h]
  _BYTE *v48; // [rsp+90h] [rbp-88h]
  __int64 v49; // [rsp+98h] [rbp-80h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-78h]
  __int64 v51; // [rsp+A8h] [rbp-70h]
  __int64 v52[4]; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v53[40]; // [rsp+D0h] [rbp-48h] BYREF

  v38 = a1;
  v52[3] = a1;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v1 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), 1, 9u, &v34, &v43);
  v5 = v43;
  if ( v1 < 0 )
    v5 = 0LL;
  v43 = v5;
  if ( !v5 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v52[1] = (__int64)ProcessHeap;
  v42 = 0;
  v52[0] = 0LL;
  Heap = 0LL;
  v45 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, v2, v3, v4);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v53;
    v45 = v53;
  }
  else
  {
    v9 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      TlsEntry = 0;
    }
    else
    {
      v9 = -1LL;
      TlsEntry = -1073741675;
    }
    if ( TlsEntry >= 0 )
    {
      v11 = -1LL;
      if ( v9 + 16 >= v9 )
        v11 = v9 + 16;
      TlsEntry = v9 + 16 < v9 ? 0xC0000095 : 0;
      if ( v9 + 16 >= v9 )
      {
        Heap = (_BYTE *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v11);
        v45 = Heap;
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
  v37 = Heap;
  v48 = Heap;
  v12 = LdrpTlsBitmap;
  v36 = LdrpTlsBitmap;
  TlsEntry = LdrpAllocateTlsEntry(v43, v38, (unsigned int)&v34, (unsigned int)&v32, (__int64)&v49);
  v33 = TlsEntry;
  if ( TlsEntry < 0 )
    goto LABEL_39;
  *((_DWORD *)Heap + 2) = LdrpActiveThreadCount;
  v31 = v32;
  v13 = v34;
  v35 = v34;
  if ( v32 )
  {
    *((_DWORD *)Heap + 1) = 1;
    *((_DWORD *)Heap + 3) = v12;
    v36 = LdrpTlsBitmap;
  }
  else
  {
    *((_DWORD *)Heap + 1) = 0;
    *((_DWORD *)Heap + 3) = v13;
  }
  v50 = v49;
  v14 = (*(_DWORD *)(v49 + 52) >> 20) & 0xF;
  v15 = *(_QWORD *)(v49 + 24) - *(_QWORD *)(v49 + 16);
  Size = v15;
  v16 = v14 - 1;
  if ( (*(_DWORD *)(v49 + 52) & 0xF00000) == 0 )
    v16 = v14;
  v17 = 1 << v16;
  if ( (unsigned int)(1 << v16) < 0x10 )
    v17 = 16;
  v39 = v17;
  LODWORD(v43) = v17;
  v18 = v17 - 1;
  v41 = v18;
  v44 = v18;
  v52[2] = v15;
  LODWORD(v19) = 0;
  while ( 1 )
  {
    v40 = v19;
    v20 = *((_DWORD *)Heap + 2);
    if ( (unsigned int)v19 >= v20 )
    {
      *(_DWORD *)Heap = 0;
      v33 = NtSetInformationProcess(-1LL, 35LL, Heap, 24 * v20 + 16);
      goto LABEL_29;
    }
    v47 = v18;
    v21 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v18 + v15 + 1);
    v51 = v21;
    if ( !v21 )
    {
      v33 = -1073741801;
      goto LABEL_29;
    }
    v22 = (_QWORD *)(~v47 & (v21 + v39));
    v47 = (unsigned __int64)v22;
    *(v22 - 1) = v21;
    memmove(v22, *(const void **)(v50 + 16), Size);
    if ( v31 )
      break;
LABEL_27:
    v23 = 3LL * (unsigned int)v19;
    *(_QWORD *)&v37[8 * v23 + 24] = v22;
    *(_DWORD *)&Heap[8 * v23 + 16] = 0;
    LODWORD(v19) = v19 + 1;
    v18 = v41;
    v15 = Size;
  }
  NewTlsVector = LdrpGetNewTlsVector(v36);
  if ( NewTlsVector )
  {
    *(_QWORD *)(NewTlsVector + 8LL * v35) = v22;
    v22 = (_QWORD *)NewTlsVector;
    goto LABEL_27;
  }
  RtlFreeHeap((__int64)ProcessHeap, 0, v51);
  v33 = -1073741801;
LABEL_29:
  v24 = v42;
  while ( (_DWORD)v19 )
  {
    v19 = (unsigned int)(v19 - 1);
    if ( (Heap[24 * v19 + 16] & 2) != 0 )
    {
      v25 = *(_QWORD *)&v37[24 * v19 + 24];
      if ( !v25 )
        continue;
      if ( !v31 )
      {
        v26 = *(_QWORD *)(v25 - 8);
LABEL_35:
        RtlFreeHeap((__int64)ProcessHeap, 0, v26);
        continue;
      }
      LdrpQueueDeferredTlsData(v25, *(_QWORD *)&v37[24 * v19 + 32]);
    }
    else
    {
      if ( (Heap[24 * v19 + 16] & 1) == 0 )
      {
        ++v24;
        v29 = *(_QWORD *)&v37[24 * v19 + 24];
        if ( v31 )
        {
          v48 = *(_BYTE **)(v29 + 8LL * v35);
          RtlFreeHeap((__int64)ProcessHeap, 0, v29 - 16);
          v30 = v48;
        }
        else
        {
          v30 = *(_BYTE **)&v37[24 * v19 + 24];
        }
        v26 = *((_QWORD *)v30 - 1);
        goto LABEL_35;
      }
      ++LdrpPotentialTlsLeaks;
    }
  }
  TlsEntry = v33;
  if ( v33 < 0 )
  {
    v27 = v38;
    LdrpReleaseTlsEntry(v38, v52);
    if ( v31 )
      LdrpTlsBitmap -= 8;
  }
  else
  {
    if ( v24 )
      LdrpActiveThreadCount -= v24;
LABEL_39:
    v27 = v38;
  }
  if ( TlsEntry >= 0 )
    *(_WORD *)(v27 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != v53 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
  if ( v52[0] )
    RtlFreeHeap((__int64)ProcessHeap, 0, v52[0]);
  if ( TlsEntry >= 0 )
    return 0LL;
  return (unsigned int)TlsEntry;
}
