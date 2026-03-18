/*
 * XREFs of MiValidFault @ 0x1402EFCC0
 * Callers:
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x1402B7090 (MiLockPageAndSetDirty.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402C8508 (MiCheckAndUpdateIoAttribution.c)
 *     KeIsUserVaAccessAllowed @ 0x1402EF73C (KeIsUserVaAccessAllowed.c)
 *     MiUpdatePrefetchPriority @ 0x1402F0360 (MiUpdatePrefetchPriority.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeInvalidAccessAllowed @ 0x140333400 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x140356108 (MiCheckSystemNxFault.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x1405424F0 (MI_IS_PTE_SHADOW_STACK.c)
 *     MiCanGrantExecute @ 0x140542C08 (MiCanGrantExecute.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405434E4 (MiKernelWriteToExecutableMemory.c)
 *     MiSetFaultPacketDirectives @ 0x140543A68 (MiSetFaultPacketDirectives.c)
 *     MiValidVirtualizationFault @ 0x140543A8C (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v3; // r12
  ULONG_PTR v4; // rsi
  volatile signed __int64 *v6; // rdx
  ULONG_PTR v7; // rcx
  _KPROCESS *Process; // r8
  char v9; // al
  __int64 v11; // rbx
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
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // r9
  unsigned int v36; // r10d
  int v37; // edx
  int v38; // r8d
  signed __int64 v39; // rcx
  signed __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v43; // [rsp+80h] [rbp+18h]
  _KPROCESS *v44; // [rsp+88h] [rbp+20h]

  v42 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v6 = (volatile signed __int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = v4 & 1;
  v43 = v6;
  Process = KeGetCurrentThread()->ApcState.Process;
  v44 = Process;
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
  v11 = v42;
  if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v42 & 0x80u) != 0LL )
  {
    v12 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v7 )
    {
      if ( *v12 != 1 && *v12 != 3 && *v12 != 6 )
LABEL_121:
        KeBugCheckEx(0x50u, v2, v3, v4, 8uLL);
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(v4, 0LL) != 1 )
    {
      goto LABEL_121;
    }
    return (unsigned int)-1073741819;
  }
  v13 = 0;
  if ( (v42 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
    return (unsigned int)-1073741819;
  v14 = 0xFFFF800000000000uLL;
  if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 && v4 && v2 < 0xFFFF800000000000uLL && !v7 && !KeIsUserVaAccessAllowed(v4) )
  {
    if ( (unsigned __int8)KeInvalidAccessAllowed(v4, 0LL) != 1 )
      KeBugCheckEx(0x50u, v2, v3, v4, 0xFuLL);
    Process = v44;
    v14 = 0xFFFF800000000000uLL;
    v6 = v43;
  }
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 0x10) != 0 )
    {
      if ( v11 < 0 )
      {
        if ( (unsigned int)MiCanGrantExecute(Process, v2) == 1
          && (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFLL)
                        - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
        {
          v20 = v11 & 0x7FFFFFFFFFFFFFFFLL;
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
            v20 |= 0x20uLL;
          v21 = v20;
          v16 = v43;
          MiWriteValidPteNewProtection((unsigned __int64)v43, v21);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
            KeFlushSingleTb(v2, 1LL, 0LL);
          goto LABEL_31;
        }
        return (unsigned int)-1073741819;
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        MiCheckSystemNxFault(a1, v11, 5LL);
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
      v11 = v42;
      v13 = MiKernelWriteToExecutableMemory(a1, v42);
      if ( (v13 & 0x80000000) != 0 )
        return v13;
      goto LABEL_60;
    }
    v11 = v42;
LABEL_60:
    if ( (v3 & 2) != 0 )
    {
      v22 = v11;
      v23 = 0xFFFFF6FB7DBED000uLL;
      v24 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)&v42 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v42 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v42, v11, Process, v14)
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v26 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v42 >> 3) & 0x1FF));
          v22 = v11;
          if ( (v26 & 0x20) != 0 )
            v22 = v11 | 0x20;
          v11 = v42;
          if ( (v26 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
        else
        {
          v11 = v42;
          v22 = v42;
        }
      }
      v27 = (v22 >> 12) & 0xFFFFFFFFFLL;
      v28 = 6 * v27;
      v29 = *(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL);
      if ( (v29 & 0x4000000000000LL) == 0 )
      {
LABEL_96:
        v36 = 0;
        v17 = v4 & 1;
        v37 = 0;
        v38 = 0;
        v39 = v11;
        if ( (v11 & 0x20) != 0 )
        {
          if ( ((v4 & 1) == 0 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
            && (MiFlags & 0x100) == 0
            && (MiFlags & 0x200) == 0 )
          {
            v37 = 1;
          }
        }
        else
        {
          v39 = v11 | 0x20;
          v38 = 1;
        }
        if ( (*(_QWORD *)(a1 + 8) & 2) == 0 || (v39 & 2) != 0 )
        {
          if ( !v38 )
          {
            v16 = v43;
            goto LABEL_115;
          }
        }
        else
        {
          if ( (v39 & 0x42) == 0x40 )
            v37 = 1;
          v39 |= 0x62uLL;
        }
        v40 = v11;
        v16 = v43;
        if ( v40 != _InterlockedCompareExchange64(v43, v39, v40) )
          goto LABEL_32;
LABEL_115:
        if ( v37 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        {
          v41 = *(_QWORD *)(a1 + 56);
          if ( v41 )
            v36 = MiTbFlushType(v41);
          KeFlushSingleTb(v2, v36, 0LL);
        }
        goto LABEL_32;
      }
      v30 = 48 * v27 - 0x58000000000LL;
      v31 = *(_QWORD *)(v30 + 16);
      v32 = v30 + 16;
      if ( v30 + 16 >= v23 && v32 <= v24 && (unsigned int)MiPteHasShadow(v29, v31, v28, v32) )
      {
        if ( (v31 & 1) == 0 )
          goto LABEL_87;
        if ( (v31 & 0x20) == 0 || (v31 & 0x42) == 0 )
        {
          v28 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v28 )
          {
            v33 = *(_QWORD *)(v28 + 8 * ((v32 >> 3) & 0x1FF));
            v28 = v31 | 0x20;
            if ( (v33 & 0x20) == 0 )
              v28 = v31;
            v31 = v28;
            if ( (v33 & 0x42) != 0 )
              v31 = v28 | 0x42;
          }
          v11 = v42;
        }
      }
      if ( (v31 & 1) != 0 )
      {
LABEL_93:
        if ( (unsigned int)MI_PFN_IS_PROTO(v30) && (*v35 & 0x400LL) != 0 )
          MiCheckAndUpdateIoAttribution(v34);
        goto LABEL_96;
      }
LABEL_87:
      if ( (!v31 || !qword_140C4DD40 || (v31 & qword_140C4DD40) != 0) && (v31 & 0x400) == 0 && (v31 & 4) != 0 )
        MiLockPageAndSetDirty(v30, 1LL, v28, v32);
      goto LABEL_93;
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 || (unsigned int)MI_IS_PTE_SHADOW_STACK(&v42, v6, Process, v14) )
      goto LABEL_96;
    return (unsigned int)-1073741819;
  }
  v15 = MiCopyOnWrite(v2, (ULONG_PTR *)v6, -1LL, 0);
  v13 = v15;
  if ( v15 >= 0 )
  {
    v16 = v43;
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
