/*
 * XREFs of MiGetNextPageTablePte @ 0x14020C280
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiReleaseWalkLocks @ 0x1402FC23C (MiReleaseWalkLocks.c)
 *     MiIsPdeOrAboveAccessible @ 0x140320C30 (MiIsPdeOrAboveAccessible.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiGetNextPageTablePte(__int16 *a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  __int16 v7; // bx
  __int64 result; // rax
  __int64 v9; // rcx
  void (__fastcall *v10)(__int16 *); // rax
  ULONG_PTR BugCheckParameter4; // rsi
  int v12; // eax
  ULONG_PTR v13; // rbx
  __int64 v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a2;
  v4 = (unsigned __int64)a2;
  v5 = a3;
  if ( a3 == 3
    && (unsigned int)MiPteInShadowRange(a2, a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v19 = *((_QWORD *)&Flink->Flink + ((v4 >> 3) & 0x1FF));
      v20 = v3 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v3;
      v3 = v20;
      if ( (v19 & 0x42) != 0 )
        v3 = v20 | 0x42;
    }
  }
  v21 = v3;
  if ( !v3 )
  {
    if ( !(_DWORD)v5 )
      return (*(_BYTE *)a1 & 1) != 0;
    return 0LL;
  }
  if ( (v3 & 1) == 0 )
  {
    if ( (int)v5 < 1 || (unsigned int)MiIsPdeOrAboveAccessible(v4) )
    {
      if ( !(_DWORD)v5 )
        return 1LL;
      if ( *(char *)a1 >= 0 )
      {
        v9 = *((_QWORD *)a1 + 2);
        if ( v9 )
          MiFlushTbList(v9);
        v10 = (void (__fastcall *)(__int16 *))*((_QWORD *)a1 + 20);
        if ( v10 )
          v10(a1);
        if ( (a1[1] & 1) == 0 )
          MiReleaseWalkLocks(a1);
        BugCheckParameter4 = (__int64)(v4 << 25) >> 16;
        v12 = MmAccessFault(
                ((unsigned __int64)*((unsigned int *)a1 + 2) << 57) | 0x100000000000002LL,
                BugCheckParameter4);
        v13 = v12;
        if ( v12 < 0 )
        {
          MiFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x7Au, 1uLL, v13, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
        }
        return 1LL;
      }
      return 0LL;
    }
LABEL_39:
    if ( (*(_BYTE *)a1 & 0x40) == 0 )
      return 1LL;
    v17 = *((_QWORD *)a1 + 21);
    for ( *(_DWORD *)v17 = v5; (_DWORD)v5; LODWORD(v5) = v5 - 1 )
      v4 = (__int64)(v4 << 25) >> 16;
    if ( v4 < ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v4 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v17 + 8) = v4;
    return 3LL;
  }
  if ( v4 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v3 & 0x80u) != 0LL )
    goto LABEL_39;
  v7 = *a1;
  if ( (*a1 & 0x200) != 0
    && qword_140C4ED08 != (PVOID)qword_140C4ED10
    && (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v21) >> 12) & 0xFFFFFFFFFLL) == *(&qword_140C4ED08 + v5) )
  {
    return 0LL;
  }
  if ( (int)v5 > ((*((unsigned __int8 *)a1 + 2) >> 2) & 7) )
    return 2LL;
  if ( (v7 & 0x40) == 0 )
    return 1LL;
  v14 = *((_QWORD *)a1 + 21);
  if ( (v7 & 4) != 0 )
  {
    MiLockPageTableInternal(*((_QWORD *)a1 + 3), v4, 0LL);
    MiUnlockPageTableInternal(*((_QWORD *)a1 + 3), ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *((_QWORD *)a1 + 6) = v4;
  }
  v15 = (__int64)(v4 << 25) >> 16;
  v16 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 3LL;
  if ( v15 >= v16 )
    v16 = v15;
  *(_QWORD *)(v14 + 8) = v16;
  return result;
}
