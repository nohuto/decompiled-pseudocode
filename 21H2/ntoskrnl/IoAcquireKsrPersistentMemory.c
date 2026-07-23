/*
 * XREFs of IoAcquireKsrPersistentMemory @ 0x14089BD20
 * Callers:
 *     <none>
 * Callees:
 *     ExIsSoftBoot @ 0x14039B5C0 (ExIsSoftBoot.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PipGetPersistentMemory @ 0x14089CAB8 (PipGetPersistentMemory.c)
 */

__int64 __fastcall IoAcquireKsrPersistentMemory(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rdi
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v8 || (*(_DWORD *)(v8 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 )
      {
        IoAddTriageDumpDataBlock(v9, (PVOID)(unsigned int)*(__int16 *)(v9 + 2));
        v10 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v10 )
        {
          IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v11 )
      {
        v12 = (unsigned __int16 *)(v11 + 40);
        IoAddTriageDumpDataBlock(v11, (PVOID)0x310);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), (PVOID)*v12);
        }
        v13 = *(_QWORD *)(a2 + 312);
        v14 = (_WORD *)(*(_QWORD *)(v13 + 40) + 56LL);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
          v13 = *(_QWORD *)(a2 + 312);
        }
        v15 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL);
        if ( v15 )
        {
          v16 = (_WORD *)(v15 + 56);
          if ( *v16 )
          {
            IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
            v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  if ( ExIsSoftBoot() )
    return PipGetPersistentMemory(a1, a2, a4, a3, 1);
  else
    return 3221225659LL;
}
