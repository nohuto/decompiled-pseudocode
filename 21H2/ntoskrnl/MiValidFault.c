/*
 * XREFs of MiValidFault @ 0x1402AE050
 * Callers:
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140220080 (KeInvalidAccessAllowed.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCheckSystemNxFault @ 0x140245F28 (MiCheckSystemNxFault.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiUpdatePrefetchPriority @ 0x14025C700 (MiUpdatePrefetchPriority.c)
 *     KeIsUserVaAccessAllowed @ 0x1402764A8 (KeIsUserVaAccessAllowed.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140303768 (MiCheckAndUpdateIoAttribution.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14031A7BC (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x140547C00 (MI_IS_PTE_SHADOW_STACK.c)
 *     MiCanGrantExecute @ 0x140548318 (MiCanGrantExecute.c)
 *     MiKernelWriteToExecutableMemory @ 0x140548BF4 (MiKernelWriteToExecutableMemory.c)
 *     MiSetFaultPacketDirectives @ 0x140549178 (MiSetFaultPacketDirectives.c)
 *     MiValidVirtualizationFault @ 0x14054919C (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  ULONG_PTR v3; // r12
  ULONG_PTR v4; // rsi
  volatile signed __int64 *v6; // rdx
  ULONG_PTR v7; // rcx
  _KPROCESS *Process; // r8
  char v9; // al
  signed __int64 v11; // rbx
  _BYTE *v12; // rax
  unsigned int v13; // edi
  unsigned __int64 v14; // r9
  int v15; // eax
  volatile signed __int64 *v16; // rbx
  ULONG_PTR v17; // r13
  _BYTE *v18; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rdx
  unsigned __int64 v30; // r9
  struct _LIST_ENTRY *v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  _DWORD *v34; // r9
  unsigned int v35; // r10d
  int v36; // edx
  int v37; // r8d
  signed __int64 v38; // rcx
  signed __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v42; // [rsp+80h] [rbp+18h]
  _KPROCESS *v43; // [rsp+88h] [rbp+20h]

  v41 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v6 = (volatile signed __int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = v4 & 1;
  v42 = v6;
  Process = KeGetCurrentThread()->ApcState.Process;
  v43 = Process;
  if ( (v4 & 1) != 0 )
  {
    v9 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v9 == 1 )
    {
      MiUpdatePrefetchPriority(v4 & 0xFFFFFFFFFFFFFFFEuLL, v2, 0LL);
      return 0LL;
    }
    if ( v9 == 3 )
      return 0LL;
    v7 = v4 & 1;
  }
  v11 = v41;
  if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v41 & 0x80u) != 0LL )
  {
    v12 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v7 )
    {
      if ( *v12 != 1 && *v12 != 3 && *v12 != 6 )
LABEL_121:
        KeBugCheckEx(0x50u, v2, v3, v4, 8uLL);
    }
    else if ( KeInvalidAccessAllowed(v4, 0) != 1 )
    {
      goto LABEL_121;
    }
    return (unsigned int)-1073741819;
  }
  v13 = 0;
  if ( (v41 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
    return (unsigned int)-1073741819;
  v14 = 0xFFFF800000000000uLL;
  if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 && v4 && v2 < 0xFFFF800000000000uLL && !v7 && !KeIsUserVaAccessAllowed(v4) )
  {
    if ( KeInvalidAccessAllowed(v4, 0) != 1 )
      KeBugCheckEx(0x50u, v2, v3, v4, 0xFuLL);
    Process = v43;
    v14 = 0xFFFF800000000000uLL;
    v6 = v42;
  }
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 0x10) != 0 )
    {
      if ( v11 < 0 )
      {
        if ( (unsigned int)MiCanGrantExecute(Process, v2) == 1
          && (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
        {
          v20 = v11 & 0x7FFFFFFFFFFFFFFFLL;
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
            v20 |= 0x20uLL;
          v21 = v20;
          v16 = v42;
          MiWriteValidPteNewProtection(v42, v21);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
            KeFlushSingleTb(v2, 1u, 0);
          goto LABEL_31;
        }
        return (unsigned int)-1073741819;
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        MiCheckSystemNxFault(a1, v11, 5u);
    }
    goto LABEL_60;
  }
  if ( (v11 & 0x200) == 0 )
  {
    if ( (v11 & 0x800) == 0 )
      return (unsigned int)-1073741819;
    if ( v11 < 0 || (v11 & 0x42) != 0 || (Process[1].DirectoryTableBase & 0x1000000000LL) == 0 || v2 >= v14 )
      goto LABEL_60;
    CurrentThread = KeGetCurrentThread();
    if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
    {
      if ( (BYTE1(CurrentThread[1].Queue) & 0x10) == 0 )
        return (unsigned int)-1073739997;
    }
    else if ( (BYTE1(CurrentThread[1].Queue) & 0x20) == 0 )
    {
      v11 = v41;
      v13 = MiKernelWriteToExecutableMemory(a1, v41);
      if ( (v13 & 0x80000000) != 0 )
        return v13;
      goto LABEL_60;
    }
    v11 = v41;
LABEL_60:
    if ( (v3 & 2) != 0 )
    {
      v22 = v11;
      v23 = 0xFFFFF6FB7DBED000uLL;
      v24 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)&v41 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v41 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v26 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v41 >> 3) & 0x1FF));
          v22 = v11;
          if ( (v26 & 0x20) != 0 )
            v22 = v11 | 0x20;
          v11 = v41;
          if ( (v26 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
        else
        {
          v11 = v41;
          v22 = v41;
        }
      }
      v27 = (v22 >> 12) & 0xFFFFFFFFFLL;
      if ( (*(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      {
LABEL_96:
        v35 = 0;
        v17 = v4 & 1;
        v36 = 0;
        v37 = 0;
        v38 = v11;
        if ( (v11 & 0x20) != 0 )
        {
          if ( ((v4 & 1) == 0 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
            && (MiFlags & 0x100) == 0
            && (MiFlags & 0x200) == 0 )
          {
            v36 = 1;
          }
        }
        else
        {
          v38 = v11 | 0x20;
          v37 = 1;
        }
        if ( (*(_QWORD *)(a1 + 8) & 2) == 0 || (v38 & 2) != 0 )
        {
          if ( !v37 )
          {
            v16 = v42;
            goto LABEL_115;
          }
        }
        else
        {
          if ( (v38 & 0x42) == 0x40 )
            v36 = 1;
          v38 |= 0x62uLL;
        }
        v39 = v11;
        v16 = v42;
        if ( v39 != _InterlockedCompareExchange64(v42, v38, v39) )
          goto LABEL_32;
LABEL_115:
        if ( v36 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        {
          v40 = *(_QWORD *)(a1 + 56);
          if ( v40 )
            v35 = MiTbFlushType(v40);
          KeFlushSingleTb(v2, v35, 0);
        }
        goto LABEL_32;
      }
      v28 = 48 * v27 - 0x58000000000LL;
      v29 = *(_QWORD *)(v28 + 16);
      if ( v28 + 16 >= v23 && v28 + 16 <= v24 && (unsigned int)MiPteHasShadow() )
      {
        if ( (v29 & 1) == 0 )
          goto LABEL_87;
        if ( (v29 & 0x20) == 0 || (v29 & 0x42) == 0 )
        {
          v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v31 )
          {
            v32 = *((_QWORD *)&v31->Flink + ((v30 >> 3) & 0x1FF));
            v33 = v29 | 0x20;
            if ( (v32 & 0x20) == 0 )
              v33 = v29;
            v29 = v33;
            if ( (v32 & 0x42) != 0 )
              v29 = v33 | 0x42;
          }
          v11 = v41;
        }
      }
      if ( (v29 & 1) != 0 )
      {
LABEL_93:
        if ( (unsigned int)MI_PFN_IS_PROTO(v28) && (*v34 & 0x400LL) != 0 )
          MiCheckAndUpdateIoAttribution();
        goto LABEL_96;
      }
LABEL_87:
      if ( (!v29 || !qword_140C4DF80 || (v29 & qword_140C4DF80) != 0) && (v29 & 0x400) == 0 && (v29 & 4) != 0 )
        MiLockPageAndSetDirty(v28, 1LL);
      goto LABEL_93;
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 || (unsigned int)MI_IS_PTE_SHADOW_STACK(&v41, v6, Process, v14) )
      goto LABEL_96;
    return (unsigned int)-1073741819;
  }
  v15 = MiCopyOnWrite(v2, v6, -1LL, 0LL);
  v13 = v15;
  if ( v15 >= 0 )
  {
    v16 = v42;
    v13 = 274;
LABEL_31:
    v17 = v4 & 1;
LABEL_32:
    if ( v17 )
    {
      v18 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v18 == 5 )
        MiValidVirtualizationFault(a1, v18, v16);
    }
    return v13;
  }
  MiSetFaultPacketDirectives(a1, (unsigned int)v15);
  return v13;
}
