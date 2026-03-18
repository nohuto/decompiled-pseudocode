/*
 * XREFs of MiGetPageProtection @ 0x14021F920
 * Callers:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiIsPfn @ 0x14025F1A0 (MiIsPfn.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402FD72C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiGetImageProtoProtection @ 0x14030ADF0 (MiGetImageProtoProtection.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140344F70 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1403697A0 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetProtectionFromPte @ 0x1403ED7E0 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiGetValidAwePartitionId @ 0x1405469E0 (MiGetValidAwePartitionId.c)
 *     MiGetValidAweProtection @ 0x140546B08 (MiGetValidAweProtection.c)
 */

__int64 __fastcall MiGetPageProtection(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 *a3, _DWORD *a4, _WORD *a5)
{
  _WORD *v5; // r12
  int v6; // ebp
  ULONG_PTR v7; // rdi
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
  __int64 v22; // rdx
  __int64 v23; // r14
  unsigned int v24; // r8d
  int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r11
  unsigned __int64 Process; // rcx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rdx
  struct _LIST_ENTRY *v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // edx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  struct _LIST_ENTRY *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  _KPROCESS *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdi
  unsigned __int64 v48; // rsi
  __int64 ProtoPteAddress; // rbx
  _QWORD *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // rbp
  __int64 v55; // rbp
  _WORD *v56; // rcx
  __int64 CurrentProcess; // rax
  __int64 CloneAddress; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+80h] [rbp+8h] BYREF
  __int64 v61; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v62; // [rsp+90h] [rbp+18h]
  _DWORD *v63; // [rsp+98h] [rbp+20h]

  v63 = a4;
  v62 = a3;
  v5 = a5;
  v6 = 0;
  v7 = *(_QWORD *)a2;
  v61 = 0LL;
  v60 = 0LL;
  *a5 = 0;
  *a3 = 0LL;
  *a4 = 0;
  v11 = 0xFFFFF6FB7DBED000uLL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(BugCheckParameter2, a2)
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
      if ( (v7 & 0x800) != 0 && (v59 = MiLockTransitionLeafPage(a2)) != 0 )
      {
        *v5 = (*(_QWORD *)(v59 + 40) >> 39) & 0x3FF;
        _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        *v5 = **(_WORD **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(PsGetCurrentProcess() + 1838));
      }
      v47 = (v7 >> 5) & 0x1F;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        *a4 = 0;
      return (unsigned int)v47;
    }
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v7) )
    {
      v54 = v7;
      if ( qword_140C4DE80 && (v7 & 0x10) == 0 )
        v54 = v7 & ~qword_140C4DE80;
      v55 = v54 >> 16;
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v7, v44, v45, v46) )
      {
        v56 = **(_WORD ***)(((v55 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess();
        if ( !*(_QWORD *)(CurrentProcess + 1264) || (CloneAddress = MiLocateCloneAddress(CurrentProcess, v55)) == 0 )
        {
          if ( v17 != 32 || (v16 & 0xF80) != 0x380 )
            KeBugCheckEx(0x1Au, 0x41202uLL, a2, v7, BugCheckParameter2);
          *v5 = **(_WORD **)(qword_140C4E588 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
          return MiGetImageProtoProtection(BugCheckParameter2, v55);
        }
        v56 = *(_WORD **)(*(_QWORD *)(CloneAddress + 56) + 24LL);
      }
      *v5 = *v56;
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v55)];
    }
    v47 = (v7 >> 5) & 0x1F;
    if ( (v16 & 0x100000) == 0 )
    {
      *v5 = **(_WORD **)(qword_140C4E588 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
      v48 = (unsigned __int64)((__int64)(a2 << 25) >> 16) >> 12;
      ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter2, v48, 4, &v60);
      if ( ProtoPteAddress )
      {
        v50 = *(_QWORD **)(BugCheckParameter2 + 120);
        if ( (__int64)v50 >= 0
          || v48
           - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2
                                                                                                 + 32) << 32)) <= (unsigned __int64)(*v50 - 1LL) >> 12 )
        {
          if ( *(_QWORD *)(*(_QWORD *)v60 + 64LL) || (*(_DWORD *)(*(_QWORD *)v60 + 56LL) & 0x2000) != 0 )
            return (unsigned int)v47;
          if ( (int)MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, v50, &v61, 0LL) < 0 )
          {
            LODWORD(v47) = 256;
            *v62 = ProtoPteAddress;
            return (unsigned int)v47;
          }
          v51 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
          LOBYTE(v52) = 2;
          v53 = v51;
          MiUnlockProtoPoolPage(v61, v52);
          if ( v53 )
            v6 = v47;
        }
      }
      LODWORD(v47) = v6;
    }
    return (unsigned int)v47;
  }
  if ( (unsigned __int64)&a5 < v11 || (unsigned __int64)&a5 > v12 )
    goto LABEL_28;
  if ( !(unsigned int)MiPteHasShadow(&a5, v7) || (v7 & 0x20) != 0 && (v7 & 0x42) != 0 )
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
  else if ( v17 == 64 && (unsigned int)MiRotatedToFrameBuffer(a2, v22, a3, a4) )
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
        *v63 = 0;
    }
    else
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v23, 1023LL, a3) )
        return (*(_DWORD *)(v23 + 16) >> 5) & 0x1F;
      Process = 0xFFFFF68000000000uLL;
      v30 = ((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
      v31 = *(_QWORD *)v30;
      if ( v30 >= v28
        && v30 <= v27
        && (unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v31)
        && (v31 & 1) != 0
        && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v32 = *(struct _LIST_ENTRY **)(Process + 1928);
        if ( v32 )
        {
          v33 = *((_QWORD *)&v32->Flink + ((v30 >> 3) & 0x1FF));
          v34 = v31 | 0x20;
          Process = (unsigned __int8)v33;
          LOBYTE(Process) = v33 & 0x20;
          if ( (v33 & 0x20) == 0 )
            v34 = v31;
          v31 = v34;
          if ( (v33 & 0x42) != 0 )
            v31 = v34 | 0x42;
        }
      }
      v35 = (v31 >> 60) & 7;
      if ( v35 )
      {
        if ( (*(_QWORD *)v30 & 0x10) != 0 || (*(_QWORD *)v30 & 8) == 0 )
        {
          if ( (*(_QWORD *)v30 & 0x10LL) != 0 )
            v35 |= 8u;
        }
        else
        {
          v35 |= 0x18u;
        }
      }
      else
      {
        v36 = *(_QWORD *)(v23 + 16);
        v37 = v23 + 16;
        if ( v23 + 16 >= v28
          && v37 <= v27
          && (unsigned int)MiPteHasShadow(Process, v37)
          && (v36 & 1) != 0
          && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
        {
          v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v39 )
          {
            v40 = *((_QWORD *)&v39->Flink + ((v38 >> 3) & 0x1FF));
            v41 = v36 | 0x20;
            if ( (v40 & 0x20) == 0 )
              v41 = v36;
            v36 = v41;
            if ( (v40 & 0x42) != 0 )
              v36 = v41 | 0x42;
          }
        }
        v42 = (v36 >> 5) & 0x1F;
        if ( *(__int64 *)(v23 + 8) > 0 )
          return (unsigned int)MmMakeProtectNotWriteCopy[v42];
        v43 = KeGetCurrentThread()->ApcState.Process;
        if ( v43[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v43, *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL) )
          LODWORD(v42) = MmMakeProtectNotWriteCopy[v42];
        return (unsigned int)v42;
      }
      return v35;
    }
  }
  return result;
}
