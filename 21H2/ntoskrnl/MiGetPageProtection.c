/*
 * XREFs of MiGetPageProtection @ 0x14033BAF0
 * Callers:
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetImageProtoProtection @ 0x14023957C (MiGetImageProtoProtection.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14030FA04 (MiTryLockProtoPoolPageAtDpc.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     MiCaptureProtectionFromLockedProto @ 0x14036C920 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetProtectionFromPte @ 0x1403F4550 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiGetValidAwePartitionId @ 0x14054C740 (MiGetValidAwePartitionId.c)
 *     MiGetValidAweProtection @ 0x14054C868 (MiGetValidAweProtection.c)
 */

__int64 MiGetPageProtection(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 **a3, _DWORD *a4, ...)
{
  _WORD *v4; // r12
  int v5; // ebp
  unsigned __int64 v6; // rdi
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ebx
  int v16; // r13d
  __int64 result; // rax
  unsigned __int64 v18; // rdx
  struct _LIST_ENTRY *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  unsigned int v23; // r8d
  int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdx
  struct _LIST_ENTRY *v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned int v33; // edx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  struct _LIST_ENTRY *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  _KPROCESS *Process; // rcx
  __int64 v41; // rdi
  unsigned __int64 v42; // rsi
  __int64 *ProtoPteAddress; // rbx
  _QWORD *v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rbp
  unsigned __int64 v47; // rbp
  _WORD *v48; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *CloneAddress; // rax
  __int64 v51; // rax
  __int64 v52; // [rsp+80h] [rbp+8h] BYREF
  __int64 v53; // [rsp+88h] [rbp+10h] BYREF
  __int64 **v54; // [rsp+90h] [rbp+18h]
  _DWORD *v55; // [rsp+98h] [rbp+20h]
  _WORD *v56; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v56 = va_arg(va1, _WORD *);
  v55 = a4;
  v54 = a3;
  v4 = v56;
  v5 = 0;
  v6 = *(_QWORD *)a2;
  v53 = 0LL;
  v52 = 0LL;
  *v56 = 0;
  *a3 = 0LL;
  *a4 = 0;
  v10 = 0xFFFFF6FB7DBED000uLL;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v13 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v14 = v6 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v6;
      v6 = v14;
      if ( (v13 & 0x42) != 0 )
        v6 = v14 | 0x42;
    }
  }
  v15 = *(_DWORD *)(BugCheckParameter2 + 48);
  v16 = v15 & 0x70;
  v56 = (_WORD *)v6;
  if ( v16 == 48 && ((v15 & 0x100000) == 0 || (v15 & 0x1000000) != 0 || (v15 & 0x2000000) == 0) )
  {
    *v4 = MiGetValidAwePartitionId(v6);
    return MiGetValidAweProtection(BugCheckParameter2, v6);
  }
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 0x400) == 0 )
    {
      if ( (v6 & 0x800) != 0 && (v51 = MiLockTransitionLeafPage(a2, 0LL)) != 0 )
      {
        *v4 = (*(_QWORD *)(v51 + 40) >> 39) & 0x3FF;
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        *v4 = **(_WORD **)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(PsGetCurrentProcess() + 1838));
      }
      v41 = (v6 >> 5) & 0x1F;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        *a4 = 0;
      return (unsigned int)v41;
    }
    if ( !MiIsPrototypePteVadLookup(v6) )
    {
      v46 = v6;
      if ( qword_140C4DF80 && (v6 & 0x10) == 0 )
        v46 = v6 & ~qword_140C4DF80;
      v47 = v46 >> 16;
      if ( MI_PROTO_FORMAT_COMBINED(v6) )
      {
        v48 = **(_WORD ***)(((v47 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess();
        if ( !*(_QWORD *)(CurrentProcess + 1264) || (CloneAddress = MiLocateCloneAddress(CurrentProcess, v47)) == 0LL )
        {
          if ( v16 != 32 || (v15 & 0xF80) != 0x380 )
            KeBugCheckEx(0x1Au, 0x41202uLL, a2, v6, BugCheckParameter2);
          *v4 = **(_WORD **)(qword_140C4E688 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
          return MiGetImageProtoProtection(BugCheckParameter2, v47);
        }
        v48 = *(_WORD **)(CloneAddress[7] + 24LL);
      }
      *v4 = *v48;
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v47)];
    }
    v41 = (v6 >> 5) & 0x1F;
    if ( (v15 & 0x100000) == 0 )
    {
      *v4 = **(_WORD **)(qword_140C4E688 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
      v42 = (unsigned __int64)((__int64)(a2 << 25) >> 16) >> 12;
      ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(BugCheckParameter2, v42, 4, &v52);
      if ( ProtoPteAddress )
      {
        v44 = *(_QWORD **)(BugCheckParameter2 + 120);
        if ( (__int64)v44 >= 0
          || v42
           - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2
                                                                                                 + 32) << 32)) <= (unsigned __int64)(*v44 - 1LL) >> 12 )
        {
          if ( *(_QWORD *)(*(_QWORD *)v52 + 64LL) || (*(_DWORD *)(*(_QWORD *)v52 + 56LL) & 0x2000) != 0 )
            return (unsigned int)v41;
          if ( (int)MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, (__int64)v44, &v53, 0LL) < 0 )
          {
            LODWORD(v41) = 256;
            *v54 = ProtoPteAddress;
            return (unsigned int)v41;
          }
          v45 = MI_READ_PTE_LOCK_FREE((unsigned __int64)ProtoPteAddress);
          MiUnlockProtoPoolPage(v53, 2u);
          if ( v45 )
            v5 = v41;
        }
      }
      LODWORD(v41) = v5;
    }
    return (unsigned int)v41;
  }
  if ( (unsigned __int64)va < v10 || (unsigned __int64)va > v11 )
    goto LABEL_28;
  if ( !(unsigned int)MiPteHasShadow() || (v6 & 0x20) != 0 && (v6 & 0x42) != 0 )
    goto LABEL_29;
  v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( !v19 )
  {
LABEL_28:
    v18 = v6;
    goto LABEL_29;
  }
  v20 = *((_QWORD *)&v19->Flink + (((unsigned __int64)va >> 3) & 0x1FF));
  v18 = v6 | 0x20;
  if ( (v20 & 0x20) == 0 )
    v18 = v6;
  if ( (v20 & 0x42) != 0 )
    v18 |= 0x42uLL;
LABEL_29:
  v21 = (v18 >> 12) & 0xFFFFFFFFFLL;
  v22 = 48 * v21 - 0x58000000000LL;
  if ( v16 == 16 )
  {
    if ( (unsigned int)MiIsPfn(v21, v21) )
      *v4 = (*(_QWORD *)(v22 + 40) >> 39) & 0x3FF;
    return (v15 >> 7) & 0x1F;
  }
  else if ( v16 == 64 && MiRotatedToFrameBuffer(a2) )
  {
    v23 = 4;
    if ( (v6 & 0x800) == 0 )
      v23 = 1;
    v24 = v15 & 0xC00;
    if ( v24 == 3072 && (v15 & 0x380) != 0 )
    {
      return v23 | 0x18;
    }
    else
    {
      if ( v24 == 1024 )
        v23 |= 8u;
      return v23;
    }
  }
  else
  {
    v25 = *(_QWORD *)(v22 + 40);
    *v4 = (v25 >> 39) & 0x3FF;
    if ( (v25 & 0x1000000000LL) != 0 )
    {
      result = MiGetProtectionFromPte(BugCheckParameter2, v6);
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        *v55 = 0;
    }
    else
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v22) )
        return (*(_DWORD *)(v22 + 16) >> 5) & 0x1F;
      v28 = ((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
      v29 = *(_QWORD *)v28;
      if ( v28 >= v27
        && v28 <= v26
        && (unsigned int)MiPteHasShadow()
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v30 )
        {
          v31 = *((_QWORD *)&v30->Flink + ((v28 >> 3) & 0x1FF));
          v32 = v29 | 0x20;
          if ( (v31 & 0x20) == 0 )
            v32 = v29;
          v29 = v32;
          if ( (v31 & 0x42) != 0 )
            v29 = v32 | 0x42;
        }
      }
      v33 = (v29 >> 60) & 7;
      if ( v33 )
      {
        if ( (*(_QWORD *)v28 & 0x10) != 0 || (*(_QWORD *)v28 & 8) == 0 )
        {
          if ( (*(_QWORD *)v28 & 0x10LL) != 0 )
            v33 |= 8u;
        }
        else
        {
          v33 |= 0x18u;
        }
      }
      else
      {
        v34 = *(_QWORD *)(v22 + 16);
        if ( v22 + 16 >= v27
          && v22 + 16 <= v26
          && (unsigned int)MiPteHasShadow()
          && (v34 & 1) != 0
          && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
        {
          v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v36 )
          {
            v37 = *((_QWORD *)&v36->Flink + ((v35 >> 3) & 0x1FF));
            v38 = v34 | 0x20;
            if ( (v37 & 0x20) == 0 )
              v38 = v34;
            v34 = v38;
            if ( (v37 & 0x42) != 0 )
              v34 = v38 | 0x42;
          }
        }
        v39 = (v34 >> 5) & 0x1F;
        if ( *(__int64 *)(v22 + 8) > 0 )
          return (unsigned int)MmMakeProtectNotWriteCopy[v39];
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process[1].Affinity.Bitmap[12]
          && MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) )
        {
          LODWORD(v39) = MmMakeProtectNotWriteCopy[v39];
        }
        return (unsigned int)v39;
      }
      return v33;
    }
  }
  return result;
}
