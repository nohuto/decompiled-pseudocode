/*
 * XREFs of MiGetPageProtection @ 0x1402B25A0
 * Callers:
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 * Callees:
 *     MiIsPfn @ 0x140206280 (MiIsPfn.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     PsGetCurrentProcess @ 0x14023A4B0 (PsGetCurrentProcess.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033AA6C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiRotatedToFrameBuffer @ 0x14033CD08 (MiRotatedToFrameBuffer.c)
 *     MiGetImageProtoProtection @ 0x1403476F0 (MiGetImageProtoProtection.c)
 *     MiCaptureProtectionFromLockedProto @ 0x14036A160 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetProtectionFromPte @ 0x1403EE8A0 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiGetValidAwePartitionId @ 0x140547030 (MiGetValidAwePartitionId.c)
 *     MiGetValidAweProtection @ 0x140547158 (MiGetValidAweProtection.c)
 */

__int64 __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 Flink,
        unsigned __int64 *a3,
        _DWORD *a4,
        _WORD *a5)
{
  _WORD *v5; // r12
  int v6; // ebp
  ULONG_PTR v7; // rdi
  ULONG_PTR v9; // rsi
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v15; // r13d
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // r8d
  int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  unsigned __int64 Process; // rcx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rdx
  struct _LIST_ENTRY *v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // edx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  struct _LIST_ENTRY *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  _KPROCESS *v42; // rcx
  __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  unsigned __int64 ProtoPteAddress; // rbx
  _QWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rbp
  __int64 v51; // rbp
  _WORD *v52; // rcx
  _KPROCESS *CurrentProcess; // rax
  __int64 CloneAddress; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+80h] [rbp+8h] BYREF
  __int64 v57; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 *v58; // [rsp+90h] [rbp+18h]
  _DWORD *v59; // [rsp+98h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v5 = a5;
  v6 = 0;
  v7 = *(_QWORD *)Flink;
  v9 = Flink;
  v57 = 0LL;
  v56 = 0LL;
  *a5 = 0;
  *a3 = 0LL;
  *a4 = 0;
  v11 = 0xFFFFF6FB7DBED000uLL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  if ( Flink >= 0xFFFFF6FB7DBED000uLL
    && Flink <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(BugCheckParameter2, Flink, a3, a4)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v13 = *(_QWORD *)(Flink + 8 * ((v9 >> 3) & 0x1FF));
      Flink = v7 | 0x20;
      if ( (v13 & 0x20) == 0 )
        Flink = v7;
      v7 = Flink;
      if ( (v13 & 0x42) != 0 )
        v7 = Flink | 0x42;
    }
  }
  v14 = *(_DWORD *)(BugCheckParameter2 + 48);
  v15 = v14 & 0x70;
  a5 = (_WORD *)v7;
  if ( v15 == 48 && ((v14 & 0x100000) == 0 || (v14 & 0x1000000) != 0 || (v14 & 0x2000000) == 0) )
  {
    *v5 = MiGetValidAwePartitionId(v7);
    return MiGetValidAweProtection(BugCheckParameter2, v7);
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x400) == 0 )
    {
      if ( (v7 & 0x800) != 0 && (v55 = MiLockTransitionLeafPage(v9, 0LL)) != 0 )
      {
        *v5 = (*(_QWORD *)(v55 + 40) >> 39) & 0x3FF;
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        *v5 = **(_WORD **)(qword_140C4E448 + 8LL * PsGetCurrentProcess()[1].IdealProcessorPadding[5]);
      }
      v43 = (v7 >> 5) & 0x1F;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        *a4 = 0;
      return (unsigned int)v43;
    }
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v7, Flink, a3, a4) )
    {
      v50 = v7;
      if ( qword_140C4DD40 && (v7 & 0x10) == 0 )
        v50 = v7 & ~qword_140C4DD40;
      v51 = v50 >> 16;
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v7) )
      {
        v52 = **(_WORD ***)(((v51 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess();
        if ( !CurrentProcess[1].Affinity.Bitmap[12] || (CloneAddress = MiLocateCloneAddress(CurrentProcess, v51)) == 0 )
        {
          if ( v15 != 32 || (v14 & 0xF80) != 0x380 )
            KeBugCheckEx(0x1Au, 0x41202uLL, v9, v7, BugCheckParameter2);
          *v5 = **(_WORD **)(qword_140C4E448 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
          return MiGetImageProtoProtection(BugCheckParameter2, v51);
        }
        v52 = *(_WORD **)(*(_QWORD *)(CloneAddress + 56) + 24LL);
      }
      *v5 = *v52;
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v51)];
    }
    v43 = (v7 >> 5) & 0x1F;
    if ( (v14 & 0x100000) == 0 )
    {
      *v5 = **(_WORD **)(qword_140C4E448 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
      v44 = (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12;
      ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter2, v44, 4, &v56);
      if ( ProtoPteAddress )
      {
        v46 = *(_QWORD **)(BugCheckParameter2 + 120);
        if ( (__int64)v46 >= 0
          || v44
           - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2
                                                                                                 + 32) << 32)) <= (unsigned __int64)(*v46 - 1LL) >> 12 )
        {
          if ( *(_QWORD *)(*(_QWORD *)v56 + 64LL) || (*(_DWORD *)(*(_QWORD *)v56 + 56LL) & 0x2000) != 0 )
            return (unsigned int)v43;
          if ( (int)MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, v46, &v57, 0LL) < 0 )
          {
            LODWORD(v43) = 256;
            *v58 = ProtoPteAddress;
            return (unsigned int)v43;
          }
          v47 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
          LOBYTE(v48) = 2;
          v49 = v47;
          MiUnlockProtoPoolPage(v57, v48);
          if ( v49 )
            v6 = v43;
        }
      }
      LODWORD(v43) = v6;
    }
    return (unsigned int)v43;
  }
  if ( (unsigned __int64)&a5 < v11 || (unsigned __int64)&a5 > v12 )
    goto LABEL_28;
  if ( !(unsigned int)MiPteHasShadow(&a5, v7, a3, a4) || (v7 & 0x20) != 0 && (v7 & 0x42) != 0 )
    goto LABEL_29;
  v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( !v18 )
  {
LABEL_28:
    v17 = v7;
    goto LABEL_29;
  }
  v19 = *((_QWORD *)&v18->Flink + (((unsigned __int64)&a5 >> 3) & 0x1FF));
  v17 = v7 | 0x20;
  if ( (v19 & 0x20) == 0 )
    v17 = v7;
  if ( (v19 & 0x42) != 0 )
    v17 |= 0x42uLL;
LABEL_29:
  v20 = (v17 >> 12) & 0xFFFFFFFFFLL;
  v21 = 48 * v20 - 0x58000000000LL;
  if ( v15 == 16 )
  {
    if ( (unsigned int)MiIsPfn(v20) )
      *v5 = (*(_QWORD *)(v21 + 40) >> 39) & 0x3FF;
    return (v14 >> 7) & 0x1F;
  }
  else if ( v15 == 64 && (unsigned int)MiRotatedToFrameBuffer(v9) )
  {
    v22 = 4;
    if ( (v7 & 0x800) == 0 )
      v22 = 1;
    v23 = v14 & 0xC00;
    if ( v23 == 3072 && (v14 & 0x380) != 0 )
    {
      return v22 | 0x18;
    }
    else
    {
      if ( v23 == 1024 )
        v22 |= 8u;
      return v22;
    }
  }
  else
  {
    v24 = *(_QWORD *)(v21 + 40);
    *v5 = (v24 >> 39) & 0x3FF;
    if ( (v24 & 0x1000000000LL) != 0 )
    {
      result = MiGetProtectionFromPte(BugCheckParameter2, v7);
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        *v59 = 0;
    }
    else
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v21) )
        return (*(_DWORD *)(v21 + 16) >> 5) & 0x1F;
      Process = 0xFFFFF68000000000uLL;
      v29 = ((((__int64)(v9 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
      v30 = *(_QWORD *)v29;
      if ( v29 >= v27
        && v29 <= v26
        && (unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v30, v25, v29)
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v31 = *(struct _LIST_ENTRY **)(Process + 1928);
        if ( v31 )
        {
          v32 = *((_QWORD *)&v31->Flink + ((v29 >> 3) & 0x1FF));
          v33 = v30 | 0x20;
          Process = (unsigned __int8)v32;
          LOBYTE(Process) = v32 & 0x20;
          if ( (v32 & 0x20) == 0 )
            v33 = v30;
          v30 = v33;
          if ( (v32 & 0x42) != 0 )
            v30 = v33 | 0x42;
        }
      }
      v34 = (v30 >> 60) & 7;
      if ( v34 )
      {
        if ( (*(_QWORD *)v29 & 0x10) != 0 || (*(_QWORD *)v29 & 8) == 0 )
        {
          if ( (*(_QWORD *)v29 & 0x10LL) != 0 )
            v34 |= 8u;
        }
        else
        {
          v34 |= 0x18u;
        }
      }
      else
      {
        v35 = *(_QWORD *)(v21 + 16);
        v36 = v21 + 16;
        if ( v21 + 16 >= v27
          && v36 <= v26
          && (unsigned int)MiPteHasShadow(Process, v36, v35, v29)
          && (v35 & 1) != 0
          && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
        {
          v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v38 )
          {
            v39 = *((_QWORD *)&v38->Flink + ((v37 >> 3) & 0x1FF));
            v40 = v35 | 0x20;
            if ( (v39 & 0x20) == 0 )
              v40 = v35;
            v35 = v40;
            if ( (v39 & 0x42) != 0 )
              v35 = v40 | 0x42;
          }
        }
        v41 = (v35 >> 5) & 0x1F;
        if ( *(__int64 *)(v21 + 8) > 0 )
          return (unsigned int)MmMakeProtectNotWriteCopy[v41];
        v42 = KeGetCurrentThread()->ApcState.Process;
        if ( v42[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v42, *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) )
          LODWORD(v41) = MmMakeProtectNotWriteCopy[v41];
        return (unsigned int)v41;
      }
      return v34;
    }
  }
  return result;
}
