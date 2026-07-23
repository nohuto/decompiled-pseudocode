/*
 * XREFs of IoQueryKsrPersistentMemorySize @ 0x14089BF90
 * Callers:
 *     <none>
 * Callees:
 *     ExIsSoftBoot @ 0x14039B5C0 (ExIsSoftBoot.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PipGetPersistentMemory @ 0x14089CAB8 (PipGetPersistentMemory.c)
 */

__int64 __fastcall IoQueryKsrPersistentMemorySize(__int64 a1, ULONG_PTR a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 *v10; // rdi
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax

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
        v12 = (_WORD *)(*(_QWORD *)(v11 + 40) + 56LL);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
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
  }
  *a3 = 0LL;
  if ( !ExIsSoftBoot() )
    return 3221225659LL;
  result = PipGetPersistentMemory(a1, a2, a3, 0LL, 0);
  if ( (_DWORD)result == -1073741789 && *a3 )
    return 0LL;
  return result;
}
