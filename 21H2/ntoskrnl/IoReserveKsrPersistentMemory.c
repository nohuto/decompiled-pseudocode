/*
 * XREFs of IoReserveKsrPersistentMemory @ 0x14089C160
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402945E0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PipGetDeviceObjectLocation @ 0x14089C6A4 (PipGetDeviceObjectLocation.c)
 *     PipGetDriverKsrGuid @ 0x14089C8F4 (PipGetDriverKsrGuid.c)
 *     PipGetPersistentMemory @ 0x14089CAB8 (PipGetPersistentMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoReserveKsrPersistentMemory(struct _MDL *a1, ULONG_PTR a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // r14
  const void *v17; // r15
  void *v18; // r13
  int DriverKsrGuid; // edi
  int v20; // r12d
  struct _MDL *PagesForMdl; // rax
  PVOID v22; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  size_t v26; // r8
  struct _MDL *v27; // rdi
  struct _MDL *v28; // rcx
  PVOID v29; // rax
  size_t v31[2]; // [rsp+30h] [rbp-41h] BYREF
  int v32; // [rsp+40h] [rbp-31h]
  struct _MDL *v33; // [rsp+48h] [rbp-29h]
  __int64 v34; // [rsp+50h] [rbp-21h]
  __int64 v35; // [rsp+58h] [rbp-19h] BYREF
  __int64 v36; // [rsp+60h] [rbp-11h] BYREF
  PVOID v37; // [rsp+68h] [rbp-9h]
  _QWORD *v38; // [rsp+70h] [rbp-1h]
  __int128 v39; // [rsp+78h] [rbp+7h] BYREF

  v38 = a5;
  v35 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  LODWORD(v31[0]) = 0;
  v34 = a3;
  v33 = a1;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v6 || (*(_DWORD *)(v6 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v7 = *(_QWORD *)(a2 + 8);
      if ( v7 )
      {
        IoAddTriageDumpDataBlock(v7, (PVOID)(unsigned int)*(__int16 *)(v7 + 2));
        v8 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v8 )
        {
          IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v9 )
      {
        v10 = (unsigned __int16 *)(v9 + 40);
        IoAddTriageDumpDataBlock(v9, (PVOID)0x310);
        if ( *v10 )
        {
          IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v10 + 1), (PVOID)*v10);
        }
        v11 = *(_QWORD *)(a2 + 312);
        v12 = *(_QWORD *)(v11 + 40);
        if ( *(_WORD *)(v12 + 56) )
        {
          IoAddTriageDumpDataBlock(v12 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
          v11 = *(_QWORD *)(a2 + 312);
        }
        v13 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 16LL);
        if ( v13 )
        {
          v14 = (_WORD *)(v13 + 56);
          if ( *v14 )
          {
            IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
            v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 64), (PVOID)*(unsigned __int16 *)(v15 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
    a1 = v33;
  }
  v16 = 0LL;
  v17 = 0LL;
  v32 = 0;
  v18 = 0LL;
  memset((char *)v31 + 4, 0, 12);
  if ( !PnpKsrEnabled )
    return (unsigned int)-1073741637;
  if ( a4 )
    return (unsigned int)-1073741582;
  DriverKsrGuid = PipGetDriverKsrGuid(a1, &v39);
  if ( DriverKsrGuid < 0 )
    return (unsigned int)DriverKsrGuid;
  if ( a2 )
  {
    v17 = (const void *)v31[1];
    DriverKsrGuid = PipGetDeviceObjectLocation(a2);
    if ( DriverKsrGuid < 0 )
      goto LABEL_41;
    v32 = HIDWORD(v31[0]);
  }
  v20 = 1;
  DriverKsrGuid = PipGetPersistentMemory(v33, a2, &v36, 0LL, 1);
  if ( DriverKsrGuid == -1073741772 )
    DriverKsrGuid = 0;
  if ( DriverKsrGuid < 0 )
    goto LABEL_41;
  v31[1] = (v34 + 4103) & 0xFFFFFFFFFFFFF000uLL;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v31[1], MmCached, 0x14u);
  v33 = PagesForMdl;
  if ( PagesForMdl )
  {
    v22 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
    v37 = v22;
    if ( v22 )
    {
      memset(v22, 0, v31[1]);
      HIDWORD(v31[0]) = 2 * v32 + 16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, HIDWORD(v31[0]), 0x61706E50u);
      v31[1] = (size_t)PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_41;
      v24 = PoolWithTag;
      memset(PoolWithTag, 0, HIDWORD(v31[0]));
      v24[1] = v34;
      *(_WORD *)v24 = 1;
      v25 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x61706E50u);
      v16 = v25;
      if ( v25 )
      {
        *v25 = 0LL;
        v25[2] = 0LL;
        v25[3] = 0LL;
        v25[4] = 0LL;
        v25[5] = v37;
        v25[1] = v33;
        v25[6] = v24;
        *((_OWORD *)v25 + 1) = v39;
        if ( a2 )
        {
          v26 = (unsigned int)(2 * v32);
          *((_DWORD *)v24 + 1) = 2 * v32;
          memmove(v24 + 2, v17, v26);
          v20 = 2;
        }
        v27 = v33;
        v28 = v33;
        *(_DWORD *)v16 = v20;
        KsrMdlToMemoryRuns(v28, 0LL, 0LL, v31);
        v29 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * LODWORD(v31[0]), 0x61706E50u);
        v18 = v29;
        if ( v29 )
        {
          DriverKsrGuid = KsrMdlToMemoryRuns(v27, v29, LODWORD(v31[0]), v31);
          if ( DriverKsrGuid >= 0 )
          {
            DriverKsrGuid = KsrPersistMemoryWithMetadata(&v39, v18, LODWORD(v31[0]), v31[1], HIDWORD(v31[0]), &v35);
            if ( DriverKsrGuid >= 0 )
            {
              v16[4] = v35;
              *v38 = v16;
              v16 = 0LL;
            }
          }
          goto LABEL_41;
        }
      }
    }
  }
  DriverKsrGuid = -1073741670;
LABEL_41:
  if ( v16 )
    ExFreePoolWithTag(v16, 0x61706E50u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x61706E50u);
  return (unsigned int)DriverKsrGuid;
}
