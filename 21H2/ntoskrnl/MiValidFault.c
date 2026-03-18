/*
 * XREFs of MiValidFault @ 0x140291FC0
 * Callers:
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140230BA0 (KeInvalidAccessAllowed.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140243EC4 (MiCheckAndUpdateIoAttribution.c)
 *     MiUpdatePrefetchPriority @ 0x1402464E0 (MiUpdatePrefetchPriority.c)
 *     MiCheckSystemNxFault @ 0x140247C5C (MiCheckSystemNxFault.c)
 *     KeIsUserVaAccessAllowed @ 0x140291158 (KeIsUserVaAccessAllowed.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14033E534 (MiLockPageAndSetDirty.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiValidVirtualizationFault @ 0x14045C52A (MiValidVirtualizationFault.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x1405A6A10 (MI_IS_PTE_SHADOW_STACK.c)
 *     MiCanGrantExecute @ 0x1405A6DAC (MiCanGrantExecute.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405A7608 (MiKernelWriteToExecutableMemory.c)
 *     MiSetFaultPacketDirectives @ 0x1405A7A74 (MiSetFaultPacketDirectives.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, signed __int64 a2)
{
  ULONG_PTR v2; // r12
  ULONG_PTR v3; // r11
  ULONG_PTR v4; // r13
  volatile signed __int64 *v6; // rdi
  _KPROCESS *Process; // r8
  ULONG_PTR v8; // r14
  signed __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // r9
  int v18; // r10d
  signed __int64 v19; // rcx
  int v21; // eax
  char v22; // al
  _BYTE *v23; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v30; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp+8h]
  signed __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  __int64 v33; // [rsp+80h] [rbp+18h]

  v32 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  BugCheckParameter3 = v3;
  v6 = (volatile signed __int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v33 = (__int64)Process;
  v8 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
LABEL_2:
    v9 = v32;
    if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v32 & 0x80u) != 0LL )
    {
      if ( (v3 & 1) != 0 )
      {
        v23 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *v23 == 3 || *v23 == 6 )
          return (unsigned int)-1073741819;
LABEL_77:
        KeBugCheckEx(0x50u, v2, v4, v3, 8uLL);
      }
      if ( !KeInvalidAccessAllowed(v3, 0) )
      {
        v3 = BugCheckParameter3;
        goto LABEL_77;
      }
      return (unsigned int)-1073741819;
    }
    v10 = 0LL;
    v11 = 0;
    if ( (v32 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
      return (unsigned int)-1073741819;
    if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0
      && v3
      && v2 < 0xFFFF800000000000uLL
      && (v3 & 1) == 0
      && !KeIsUserVaAccessAllowed(v3) )
    {
      if ( !KeInvalidAccessAllowed(v3, v10) )
        KeBugCheckEx(0x50u, v2, v4, BugCheckParameter3, 0xFuLL);
      Process = (_KPROCESS *)v33;
      v10 = 0LL;
      v3 = BugCheckParameter3;
    }
    if ( (v4 & 2) == 0 )
    {
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 < 0 )
        {
          if ( !(unsigned int)MiCanGrantExecute(Process, v2) )
            return (unsigned int)-1073741819;
          v27 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v32) >> 12) & 0xFFFFFFFFFFLL;
          if ( v27 > qword_140C50840 || (*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
            return (unsigned int)-1073741819;
          v28 = v9 & 0x7FFFFFFFFFFFFFFFLL;
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
            v28 |= 0x20uLL;
          MiWriteValidPteNewProtection(v6, v28);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          {
            v10 = 1LL;
LABEL_119:
            KeFlushSingleTb(v2, v10, 0LL);
          }
LABEL_33:
          if ( v8 )
          {
            if ( *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
              MiValidVirtualizationFault(a1, BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL, v6, v17);
          }
          return v11;
        }
        if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        {
          MiCheckSystemNxFault(a1, v9, 5u);
          v3 = BugCheckParameter3;
          v10 = 0LL;
        }
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 && !(unsigned int)MI_IS_PTE_SHADOW_STACK(&v32) )
        return (unsigned int)-1073741819;
LABEL_21:
      v17 = (unsigned int)v10;
      v18 = v10;
      v19 = v9;
      if ( (v9 & 0x20) != 0 )
      {
        if ( (!v8 || *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) != 5) && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          v17 = 1LL;
      }
      else
      {
        v19 = v9 | 0x20;
        v18 = 1;
      }
      if ( (*(_QWORD *)(a1 + 8) & 2) != 0 )
      {
        if ( (v19 & 0x42) == 0 )
        {
LABEL_28:
          v19 |= 0x62uLL;
LABEL_29:
          if ( (MiFlags & 0x4000000) != 0 )
            _mm_lfence();
          if ( v9 != _InterlockedCompareExchange64(v6, v19, v9) )
            goto LABEL_33;
LABEL_32:
          if ( (_DWORD)v17 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          {
            v30 = *(_QWORD *)(a1 + 56);
            if ( v30 )
              v10 = (unsigned int)MiTbFlushType(v30);
            goto LABEL_119;
          }
          goto LABEL_33;
        }
        if ( (v19 & 0x42) == 0x40 )
        {
          v17 = 1LL;
          goto LABEL_28;
        }
      }
      if ( !v18 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( (v9 & 0x200) != 0 )
    {
      v21 = MiCopyOnWrite(v2);
      v11 = v21;
      if ( v21 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v21);
        return v11;
      }
      v11 = 274;
      goto LABEL_33;
    }
    if ( (v9 & 0x800) == 0 )
      return (unsigned int)-1073741819;
    if ( v9 >= 0
      && (v9 & 0x42) == 0
      && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
      && v2 < 0xFFFF800000000000uLL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
      {
        if ( (BYTE1(CurrentThread[1].Queue) & 0x10) == 0 )
          return (unsigned int)-1073739997;
      }
      else if ( (BYTE1(CurrentThread[1].Queue) & 0x20) == 0 )
      {
        v9 = v32;
        v11 = MiKernelWriteToExecutableMemory(a1, v32);
        if ( (v11 & 0x80000000) != 0 )
          return v11;
        goto LABEL_9;
      }
      v9 = v32;
    }
LABEL_9:
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v32) >> 12) & 0xFFFFFFFFFFLL;
    if ( v12 <= qword_140C50840 )
    {
      v13 = 6 * v12;
      if ( _bittest64((const signed __int64 *)(48 * v12 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        v14 = 48 * v12 - 0x220000000000LL;
        v15 = *(_QWORD *)(v14 + 16);
        v16 = v14 + 16;
        v33 = 8 * v13 - 0x220000000000LL;
        if ( (unsigned __int64)(v14 + 16) >= 0xFFFFF6FB7DBED000uLL
          && v16 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v15 & 1) != 0
            && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v26 = *((_QWORD *)&Flink->Flink + ((v16 >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v15 |= 0x20uLL;
              if ( (v26 & 0x42) != 0 )
                v15 |= 0x42uLL;
            }
          }
          v9 = v32;
        }
        if ( (v15 & 1) == 0
          && (!v15 || (!qword_140C50780 || (qword_140C50780 & v15) != 0) && (v15 & 0x400) == 0)
          && (v15 & 4) != 0 )
        {
          MiLockPageAndSetDirty(v14, 1LL);
          v14 = v33;
        }
        if ( *(__int64 *)(v14 + 40) < 0 && (*(_DWORD *)v16 & 0x400LL) != 0 )
          MiCheckAndUpdateIoAttribution(v14);
      }
    }
    v3 = BugCheckParameter3;
    v10 = 0LL;
    goto LABEL_21;
  }
  v22 = *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v22 == 1 )
  {
    MiUpdatePrefetchPriority(v3 & 0xFFFFFFFFFFFFFFFEuLL, v2, 0LL);
  }
  else if ( v22 != 3 )
  {
    goto LABEL_2;
  }
  return 0LL;
}
