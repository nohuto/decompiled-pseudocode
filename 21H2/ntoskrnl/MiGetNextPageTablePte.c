/*
 * XREFs of MiGetNextPageTablePte @ 0x14031B510
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiReleaseWalkLocks @ 0x1402341A4 (MiReleaseWalkLocks.c)
 *     MiIsPdeOrAboveAccessible @ 0x14023A0E4 (MiIsPdeOrAboveAccessible.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiGetNextPageTablePte(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(__int64); // rax
  unsigned __int64 BugCheckParameter4; // rdi
  int v15; // eax
  ULONG_PTR v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = (unsigned __int64)a2;
  if ( a3 == 3 )
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  else
    v6 = *a2;
  v18 = v6;
  if ( !v6 )
  {
    if ( !(_DWORD)v3 )
      return (*(_DWORD *)a1 & 1) != 0;
    return 0LL;
  }
  if ( (v6 & 1) == 0 )
  {
    if ( (int)v3 >= 1 )
    {
      if ( !MiIsPdeOrAboveAccessible(v4) )
        goto LABEL_38;
    }
    else if ( !(_DWORD)v3 )
    {
      return 1LL;
    }
    if ( (*(_DWORD *)a1 & 0x80u) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      if ( v12 )
        MiFlushTbList(v12);
      v13 = *(void (__fastcall **)(__int64))(a1 + 160);
      if ( v13 )
        v13(a1);
      if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
        MiReleaseWalkLocks(a1);
      BugCheckParameter4 = (__int64)(v4 << 25) >> 16;
      MiGetLeafVa(BugCheckParameter4);
      v15 = MmAccessFault(2uLL, BugCheckParameter4);
      v16 = v15;
      if ( v15 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v16, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( v4 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v6 & 0x80u) != 0LL )
  {
LABEL_38:
    if ( (*(_DWORD *)a1 & 0x40) == 0 )
      return 1LL;
    v17 = *(_QWORD *)(a1 + 168);
    for ( *(_DWORD *)v17 = v3; (_DWORD)v3; LODWORD(v3) = v3 - 1 )
      v4 = (__int64)(v4 << 25) >> 16;
    if ( v4 < ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v4 = ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v17 + 8) = v4;
    return 3LL;
  }
  v7 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x200) != 0
    && qword_140C532D8 != (PVOID)qword_140C532E0
    && (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFFLL) == *(&qword_140C532D8 + v3) )
  {
    return 0LL;
  }
  if ( (int)v3 > ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
    return 2LL;
  if ( (v7 & 0x40) == 0 )
    return 1LL;
  v9 = *(_QWORD *)(a1 + 168);
  if ( (v7 & 4) != 0 )
  {
    MiLockPageTableInternal(*(_QWORD *)(a1 + 24), v4, 0LL);
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24), ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(a1 + 48) = v4;
  }
  v10 = (__int64)(v4 << 25) >> 16;
  v11 = ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 3LL;
  if ( v10 >= v11 )
    v11 = v10;
  *(_QWORD *)(v9 + 8) = v11;
  return result;
}
