/*
 * XREFs of MiLoadSectionIntoVsmEnclave @ 0x1408D36D0
 * Callers:
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140219160 (MmSizeOfMdl.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     MiCountCommittedPages @ 0x140549BE8 (MiCountCommittedPages.c)
 *     MiPrefetchControlArea @ 0x1406C3FE8 (MiPrefetchControlArea.c)
 *     MiDecommitRegion @ 0x1407059D0 (MiDecommitRegion.c)
 *     VslLoadEnclaveModule @ 0x140890018 (VslLoadEnclaveModule.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3B1C (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D3D5C (MiUnmapImageForEnclaveUse.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadSectionIntoVsmEnclave(
        __int64 a1,
        ULONG_PTR a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int Length,
        _QWORD *Base,
        PMDL MemoryDescriptorList,
        _QWORD *a9)
{
  _QWORD *MappedSystemVa; // rsi
  unsigned __int64 v11; // r12
  unsigned int v12; // ebx
  _DWORD *v13; // r15
  __int64 v14; // r14
  int EnclaveModule; // esi
  unsigned __int64 v16; // r12
  SIZE_T v18; // rax
  struct _MDL *Pool; // rax
  __int64 v20; // r8
  __int64 v21; // r12
  unsigned __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // rdx
  _BYTE v27[4]; // [rsp+50h] [rbp-88h] BYREF
  _WORD v28[4]; // [rsp+54h] [rbp-84h] BYREF
  int v29; // [rsp+5Ch] [rbp-7Ch] BYREF
  __int64 v30; // [rsp+60h] [rbp-78h] BYREF
  __int64 v31; // [rsp+68h] [rbp-70h] BYREF
  __int64 v32; // [rsp+70h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-60h]
  __int64 v34; // [rsp+80h] [rbp-58h]
  __int64 v35; // [rsp+90h] [rbp-48h]
  unsigned __int64 v37; // [rsp+E8h] [rbp+10h]

  MappedSystemVa = Base;
  v11 = (unsigned __int64)Base;
  v28[0] = 0;
  v30 = 0LL;
  v29 = 0;
  v27[0] = 0;
  v35 = *(_QWORD *)(a2 + 72);
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  v12 = 0;
  v13 = 0LL;
  v31 = 0LL;
  v14 = (__int64)MemoryDescriptorList;
  if ( Length < 0x10 )
  {
    EnclaveModule = -1073741820;
LABEL_3:
    v16 = 0LL;
    goto LABEL_4;
  }
  if ( MemoryDescriptorList )
  {
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( !MappedSystemVa )
      goto LABEL_19;
  }
  else
  {
    Base = 0LL;
    v34 = Length;
    v18 = MmSizeOfMdl((PVOID)v11, Length);
    Pool = (struct _MDL *)MiAllocatePool(64, v18, 0x6C646D4Du);
    v14 = (__int64)Pool;
    if ( !v11 )
    {
LABEL_19:
      EnclaveModule = -1073741670;
      goto LABEL_3;
    }
    Pool->Next = 0LL;
    Pool->Size = 8 * ((((unsigned __int64)((unsigned __int16)MappedSystemVa & 0xFFF) + v34 + 4095) >> 12) + 6);
    Pool->MdlFlags = 0;
    Pool->StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
    Pool->ByteOffset = (unsigned __int16)MappedSystemVa & 0xFFF;
    Pool->ByteCount = Length;
    MmProbeAndLockPages(Pool, 0, IoReadAccess);
  }
  v13 = MiAllocatePool(256, 0x30uLL, 0x4D456D4Du);
  if ( !v13 )
    goto LABEL_19;
  LOBYTE(v20) = a3;
  EnclaveModule = MiMapImageForEnclaveUse(*MappedSystemVa, a4, v20, &v31, &v30);
  if ( EnclaveModule < 0 )
    goto LABEL_3;
  v21 = v30;
  v22 = ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v30 + 8LL) << 12) + a5 - 1;
  v37 = v22;
  MiLockVad((__int64)CurrentThread, a2);
  v12 = 1;
  if ( (unsigned int)MiVadDeleted(a2) || MiCountCommittedPages(a5, v22, a2, (_DWORD *)(a1 + 1664)) )
  {
    EnclaveModule = -1073741800;
  }
  else
  {
    v12 = 3;
    v23 = v21 + 128;
    v24 = *(_QWORD *)(v23 + 8) << 9;
    v32 = v24;
    while ( 1 )
    {
      EnclaveModule = MiCommitExistingVad(
                        a2,
                        a5 + (((*(_QWORD *)(v23 + 8) << 9) - v24) & 0xFFFFFFFFFFFFF000uLL),
                        (unsigned __int64)*(unsigned int *)(v23 + 44) << 12,
                        4u,
                        0,
                        0LL,
                        0,
                        0LL,
                        &v29,
                        v28);
      if ( EnclaveModule < 0 )
        break;
      v23 = *(_QWORD *)(v23 + 16);
      v24 = v32;
      if ( !v23 )
      {
        v25 = v30;
        MiPrefetchControlArea(v30, RtlpInterceptorRoutines[0], 0LL, 1, 0, 0xFFFFFFFF);
        EnclaveModule = VslLoadEnclaveModule(
                          *(_QWORD *)(v35 + 24),
                          a5,
                          *(_QWORD *)(*(_QWORD *)(v25 + 96) + 56LL),
                          v31,
                          v14,
                          v27,
                          v13 + 9,
                          v13 + 10);
        if ( EnclaveModule >= 0 )
        {
          v12 = 1;
          if ( v27[0] )
          {
            v13[8] = 2;
            *((_QWORD *)v13 + 2) = a5;
            v26 = *(_QWORD **)(a2 + 88);
            if ( *v26 != a2 + 80 )
              __fastfail(3u);
            *(_QWORD *)v13 = a2 + 80;
            *((_QWORD *)v13 + 1) = v26;
            *v26 = v13;
            *(_QWORD *)(a2 + 88) = v13;
            *a9 = v13;
            v13 = 0LL;
          }
        }
        break;
      }
    }
  }
  v16 = v37;
LABEL_4:
  if ( (v12 & 1) == 0 )
    MiLockVad((__int64)CurrentThread, a2);
  MiUnlockAndDereferenceVad((char *)a2);
  if ( v31 )
  {
    MiUnmapImageForEnclaveUse();
    if ( v12 >= 2 )
      MiDecommitRegion(a2, a5, v16);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 && !Base )
  {
    if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v14);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
  return (unsigned int)EnclaveModule;
}
