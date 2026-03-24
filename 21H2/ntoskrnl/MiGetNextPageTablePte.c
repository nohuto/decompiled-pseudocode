/*
 * XREFs of MiGetNextPageTablePte @ 0x14020CDB0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020BDA0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiReleaseWalkLocks @ 0x1402AA590 (MiReleaseWalkLocks.c)
 *     MiIsPdeOrAboveAccessible @ 0x1402D1130 (MiIsPdeOrAboveAccessible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     MiFlushAllFilesystemPages @ 0x1405355C8 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiGetNextPageTablePte(__int16 *a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  __int16 v7; // bx
  __int64 result; // rax
  void (__fastcall *v9)(__int16 *); // rax
  ULONG_PTR BugCheckParameter4; // rsi
  int v11; // eax
  ULONG_PTR v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

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
      v18 = *((_QWORD *)&Flink->Flink + ((v4 >> 3) & 0x1FF));
      v19 = v3 | 0x20;
      if ( (v18 & 0x20) == 0 )
        v19 = v3;
      v3 = v19;
      if ( (v18 & 0x42) != 0 )
        v3 = v19 | 0x42;
    }
  }
  v20 = v3;
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
        if ( *((_QWORD *)a1 + 2) )
          MiFlushTbList();
        v9 = (void (__fastcall *)(__int16 *))*((_QWORD *)a1 + 20);
        if ( v9 )
          v9(a1);
        if ( (a1[1] & 1) == 0 )
          MiReleaseWalkLocks(a1);
        BugCheckParameter4 = (__int64)(v4 << 25) >> 16;
        v11 = MmAccessFault(
                ((unsigned __int64)*((unsigned int *)a1 + 2) << 57) | 0x100000000000002LL,
                BugCheckParameter4);
        v12 = v11;
        if ( v11 < 0 )
        {
          MiFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x7Au, 1uLL, v12, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
        }
        return 1LL;
      }
      return 0LL;
    }
LABEL_39:
    if ( (*(_BYTE *)a1 & 0x40) == 0 )
      return 1LL;
    v16 = *((_QWORD *)a1 + 21);
    for ( *(_DWORD *)v16 = v5; (_DWORD)v5; LODWORD(v5) = v5 - 1 )
      v4 = (__int64)(v4 << 25) >> 16;
    if ( v4 < ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v4 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v16 + 8) = v4;
    return 3LL;
  }
  if ( v4 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v3 & 0x80u) != 0LL )
    goto LABEL_39;
  v7 = *a1;
  if ( (*a1 & 0x200) != 0
    && qword_140C4EDC8 != (PVOID)qword_140C4EDD0
    && (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v20) >> 12) & 0xFFFFFFFFFLL) == *(&qword_140C4EDC8 + v5) )
  {
    return 0LL;
  }
  if ( (int)v5 > ((*((unsigned __int8 *)a1 + 2) >> 2) & 7) )
    return 2LL;
  if ( (v7 & 0x40) == 0 )
    return 1LL;
  v13 = *((_QWORD *)a1 + 21);
  if ( (v7 & 4) != 0 )
  {
    MiLockPageTableInternal(*((_QWORD *)a1 + 3), v4, 0LL);
    MiUnlockPageTableInternal(*((_QWORD *)a1 + 3), ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *((_QWORD *)a1 + 6) = v4;
  }
  v14 = (__int64)(v4 << 25) >> 16;
  v15 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 3LL;
  if ( v14 >= v15 )
    v15 = v14;
  *(_QWORD *)(v13 + 8) = v15;
  return result;
}
