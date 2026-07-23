/*
 * XREFs of PipGetDeviceObjectLocation @ 0x14089C6A4
 * Callers:
 *     IoReserveKsrPersistentMemory @ 0x14089C160 (IoReserveKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089CAB8 (PipGetPersistentMemory.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipGetDeviceObjectLocation(ULONG_PTR BugCheckParameter2, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  int v7; // eax
  PVOID PoolWithTag; // rbx
  int ObjectProperty; // edi
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rdi
  __int64 v15; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+8h] BYREF
  int v21; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0;
  if ( !BugCheckParameter2 )
    goto LABEL_27;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v6 || (*(_DWORD *)(v6 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v11 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v11 )
    {
      IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
      v12 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      IoAddTriageDumpDataBlock(v13, (PVOID)0x310);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
      }
      v15 = *(_QWORD *)(BugCheckParameter2 + 312);
      v16 = (_WORD *)(*(_QWORD *)(v15 + 40) + 56LL);
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
        v15 = *(_QWORD *)(BugCheckParameter2 + 312);
      }
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL);
      if ( v17 )
      {
        v18 = (_WORD *)(v17 + 56);
        if ( *v18 )
        {
          IoAddTriageDumpDataBlock((ULONG)v18, (PVOID)2);
          v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
        }
      }
    }
LABEL_27:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v7 = 0;
  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  while ( 1 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(v6 + 48),
                       1LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_LocationPaths,
                       (__int64)&v21,
                       (__int64)PoolWithTag,
                       v7,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x61706E50u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61706E50u);
    if ( !PoolWithTag )
    {
      ObjectProperty = -1073741670;
      break;
    }
    v7 = NumberOfBytes;
  }
  if ( ObjectProperty < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x61706E50u);
  }
  else
  {
    *a2 = (unsigned int)NumberOfBytes >> 1;
    *a3 = PoolWithTag;
  }
  return (unsigned int)ObjectProperty;
}
