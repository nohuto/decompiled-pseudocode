/*
 * XREFs of MiGetPageProtection @ 0x1402B41B0
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 * Callees:
 *     MiIsPfn @ 0x14021F200 (MiIsPfn.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140236AC8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiRotatedToFrameBuffer @ 0x14030F8A8 (MiRotatedToFrameBuffer.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiGetImageProtoProtection @ 0x140318D7C (MiGetImageProtoProtection.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14034F510 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiCaptureProtectionFromLockedProto @ 0x14036C140 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetProtectionFromPte @ 0x1403F2D08 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiGetValidAwePartitionId @ 0x14054AA00 (MiGetValidAwePartitionId.c)
 *     MiGetValidAweProtection @ 0x14054AB28 (MiGetValidAweProtection.c)
 */

__int64 __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        _WORD *a5)
{
  _WORD *v5; // r12
  int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  int v17; // r13d
  __int64 result; // rax
  unsigned __int64 v19; // rdx
  struct _LIST_ENTRY *v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // r14
  unsigned int v24; // r8d
  int v25; // eax
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  unsigned __int64 Process; // rcx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rdx
  struct _LIST_ENTRY *v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned int v36; // edx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  struct _LIST_ENTRY *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  _KPROCESS *v44; // rcx
  __int64 v45; // rdi
  unsigned __int64 v46; // rsi
  unsigned __int64 ProtoPteAddress; // rbx
  _QWORD *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rbp
  __int64 v53; // rbp
  _WORD *v54; // rcx
  __int64 CurrentProcess; // rax
  __int64 CloneAddress; // rax
  __int64 v57; // rax
  __int64 v58; // [rsp+80h] [rbp+8h] BYREF
  __int64 v59; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 *v60; // [rsp+90h] [rbp+18h]
  _DWORD *v61; // [rsp+98h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v5 = a5;
  v6 = 0;
  v7 = *(_QWORD *)a2;
  v59 = 0LL;
  v58 = 0LL;
  *a5 = 0;
  *a3 = 0LL;
  *a4 = 0;
  v11 = 0xFFFFF6FB7DBED000uLL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(BugCheckParameter2, a2, a3, a4)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v14 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v15 = v7 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v15 = v7;
      v7 = v15;
      if ( (v14 & 0x42) != 0 )
        v7 = v15 | 0x42;
    }
  }
  v16 = *(_DWORD *)(BugCheckParameter2 + 48);
  v17 = v16 & 0x70;
  a5 = (_WORD *)v7;
  if ( v17 == 48 && ((v16 & 0x100000) == 0 || (v16 & 0x1000000) != 0 || (v16 & 0x2000000) == 0) )
  {
    *v5 = MiGetValidAwePartitionId(v7);
    return MiGetValidAweProtection(BugCheckParameter2, v7);
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x400) == 0 )
    {
      if ( (v7 & 0x800) != 0 && (v57 = MiLockTransitionLeafPage(a2, 0LL)) != 0 )
      {
        *v5 = (*(_QWORD *)(v57 + 40) >> 39) & 0x3FF;
        _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        *v5 = **(_WORD **)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(PsGetCurrentProcess() + 1838));
      }
      v45 = (v7 >> 5) & 0x1F;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        *a4 = 0;
      return (unsigned int)v45;
    }
    if ( !MiIsPrototypePteVadLookup(v7) )
    {
      v52 = v7;
      if ( qword_140C4DDC0 && (v7 & 0x10) == 0 )
        v52 = v7 & ~qword_140C4DDC0;
      v53 = v52 >> 16;
      if ( MI_PROTO_FORMAT_COMBINED(v7) )
      {
        v54 = **(_WORD ***)(((v53 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess();
        if ( !*(_QWORD *)(CurrentProcess + 1264) || (CloneAddress = MiLocateCloneAddress(CurrentProcess, v53)) == 0 )
        {
          if ( v17 != 32 || (v16 & 0xF80) != 0x380 )
            KeBugCheckEx(0x1Au, 0x41202uLL, a2, v7, BugCheckParameter2);
          *v5 = **(_WORD **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
          return MiGetImageProtoProtection(BugCheckParameter2, v53);
        }
        v54 = *(_WORD **)(*(_QWORD *)(CloneAddress + 56) + 24LL);
      }
      *v5 = *v54;
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v53)];
    }
    v45 = (v7 >> 5) & 0x1F;
    if ( (v16 & 0x100000) == 0 )
    {
      *v5 = **(_WORD **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
      v46 = (unsigned __int64)((__int64)(a2 << 25) >> 16) >> 12;
      ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter2, v46, 4, &v58);
      if ( ProtoPteAddress )
      {
        v48 = *(_QWORD **)(BugCheckParameter2 + 120);
        if ( (__int64)v48 >= 0
          || v46
           - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2
                                                                                                 + 32) << 32)) <= (unsigned __int64)(*v48 - 1LL) >> 12 )
        {
          if ( *(_QWORD *)(*(_QWORD *)v58 + 64LL) || (*(_DWORD *)(*(_QWORD *)v58 + 56LL) & 0x2000) != 0 )
            return (unsigned int)v45;
          if ( (int)MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, v48, &v59, 0LL) < 0 )
          {
            LODWORD(v45) = 256;
            *v60 = ProtoPteAddress;
            return (unsigned int)v45;
          }
          v49 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
          LOBYTE(v50) = 2;
          v51 = v49;
          MiUnlockProtoPoolPage(v59, v50);
          if ( v51 )
            v6 = v45;
        }
      }
      LODWORD(v45) = v6;
    }
    return (unsigned int)v45;
  }
  if ( (unsigned __int64)&a5 < v11 || (unsigned __int64)&a5 > v12 )
    goto LABEL_28;
  if ( !(unsigned int)MiPteHasShadow(&a5, v7, a3, a4) || (v7 & 0x20) != 0 && (v7 & 0x42) != 0 )
    goto LABEL_29;
  v20 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( !v20 )
  {
LABEL_28:
    v19 = v7;
    goto LABEL_29;
  }
  v21 = *((_QWORD *)&v20->Flink + (((unsigned __int64)&a5 >> 3) & 0x1FF));
  v19 = v7 | 0x20;
  if ( (v21 & 0x20) == 0 )
    v19 = v7;
  if ( (v21 & 0x42) != 0 )
    v19 |= 0x42uLL;
LABEL_29:
  v22 = (v19 >> 12) & 0xFFFFFFFFFLL;
  v23 = 48 * v22 - 0x58000000000LL;
  if ( v17 == 16 )
  {
    if ( (unsigned int)MiIsPfn(v22) )
      *v5 = (*(_QWORD *)(v23 + 40) >> 39) & 0x3FF;
    return (v16 >> 7) & 0x1F;
  }
  else if ( v17 == 64 && (unsigned int)MiRotatedToFrameBuffer(a2) )
  {
    v24 = 4;
    if ( (v7 & 0x800) == 0 )
      v24 = 1;
    v25 = v16 & 0xC00;
    if ( v25 == 3072 && (v16 & 0x380) != 0 )
    {
      return v24 | 0x18;
    }
    else
    {
      if ( v25 == 1024 )
        v24 |= 8u;
      return v24;
    }
  }
  else
  {
    v26 = *(_QWORD *)(v23 + 40);
    *v5 = (v26 >> 39) & 0x3FF;
    if ( (v26 & 0x1000000000LL) != 0 )
    {
      result = MiGetProtectionFromPte(BugCheckParameter2, v7);
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        *v61 = 0;
    }
    else
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v23) )
        return (*(_DWORD *)(v23 + 16) >> 5) & 0x1F;
      Process = 0xFFFFF68000000000uLL;
      v31 = ((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
      v32 = *(_QWORD *)v31;
      if ( v31 >= v29
        && v31 <= v28
        && (unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v32, v27, v31)
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v33 = *(struct _LIST_ENTRY **)(Process + 1928);
        if ( v33 )
        {
          v34 = *((_QWORD *)&v33->Flink + ((v31 >> 3) & 0x1FF));
          v35 = v32 | 0x20;
          Process = (unsigned __int8)v34;
          LOBYTE(Process) = v34 & 0x20;
          if ( (v34 & 0x20) == 0 )
            v35 = v32;
          v32 = v35;
          if ( (v34 & 0x42) != 0 )
            v32 = v35 | 0x42;
        }
      }
      v36 = (v32 >> 60) & 7;
      if ( v36 )
      {
        if ( (*(_QWORD *)v31 & 0x10) != 0 || (*(_QWORD *)v31 & 8) == 0 )
        {
          if ( (*(_QWORD *)v31 & 0x10LL) != 0 )
            v36 |= 8u;
        }
        else
        {
          v36 |= 0x18u;
        }
      }
      else
      {
        v37 = *(_QWORD *)(v23 + 16);
        v38 = v23 + 16;
        if ( v23 + 16 >= v29
          && v38 <= v28
          && (unsigned int)MiPteHasShadow(Process, v38, v37, v31)
          && (v37 & 1) != 0
          && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v40 )
          {
            v41 = *((_QWORD *)&v40->Flink + ((v39 >> 3) & 0x1FF));
            v42 = v37 | 0x20;
            if ( (v41 & 0x20) == 0 )
              v42 = v37;
            v37 = v42;
            if ( (v41 & 0x42) != 0 )
              v37 = v42 | 0x42;
          }
        }
        v43 = (v37 >> 5) & 0x1F;
        if ( *(__int64 *)(v23 + 8) > 0 )
          return (unsigned int)MmMakeProtectNotWriteCopy[v43];
        v44 = KeGetCurrentThread()->ApcState.Process;
        if ( v44[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v44, *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL) )
          LODWORD(v43) = MmMakeProtectNotWriteCopy[v43];
        return (unsigned int)v43;
      }
      return v36;
    }
  }
  return result;
}
