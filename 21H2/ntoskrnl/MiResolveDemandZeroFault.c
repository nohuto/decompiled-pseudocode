/*
 * XREFs of MiResolveDemandZeroFault @ 0x1402B4450
 * Callers:
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14020A6B0 (MiCheckVirtualAddress.c)
 *     MiExpandSharedZeroCluster @ 0x14025EF28 (MiExpandSharedZeroCluster.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCreateSharedZeroPages @ 0x1402E5FC0 (MiCreateSharedZeroPages.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCheckUserVirtualAddress @ 0x140339750 (MiCheckUserVirtualAddress.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  int v8; // r10d
  char v9; // r15
  char v10; // r15
  unsigned __int64 v11; // r11
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r9
  _KPROCESS *Process; // r13
  unsigned __int64 v16; // r10
  __int64 v17; // r14
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *v19; // r13
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  char v27; // r13
  char v28; // r15
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r14
  int v33; // r13d
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // r12
  __int64 v37; // r12
  __int64 v38; // rbx
  int v39; // r8d
  int v40; // eax
  __int64 **Address; // rax
  unsigned int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 **v45; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  struct _LIST_ENTRY *v51; // rdx
  __int64 v52; // rax
  int v53; // edx
  unsigned __int64 v54; // [rsp+30h] [rbp-59h]
  unsigned __int64 v55; // [rsp+30h] [rbp-59h]
  __int64 **v56; // [rsp+38h] [rbp-51h] BYREF
  _KPROCESS *v57; // [rsp+40h] [rbp-49h]
  unsigned __int64 v58; // [rsp+48h] [rbp-41h] BYREF
  int v59[4]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v60[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v61; // [rsp+70h] [rbp-19h]
  unsigned __int64 v62; // [rsp+78h] [rbp-11h]
  int v63; // [rsp+80h] [rbp-9h]
  int v64; // [rsp+84h] [rbp-5h]
  __int64 v65; // [rsp+88h] [rbp-1h]
  int v66; // [rsp+90h] [rbp+7h]
  int v67; // [rsp+94h] [rbp+Bh]
  unsigned __int64 v68; // [rsp+98h] [rbp+Fh]
  __int64 v69; // [rsp+A0h] [rbp+17h]
  __int64 v70; // [rsp+A8h] [rbp+1Fh]
  int v71; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v72; // [rsp+100h] [rbp+77h]
  __int64 v73; // [rsp+108h] [rbp+7Fh]

  v73 = a4;
  v72 = a3;
  v4 = a1[7];
  v5 = 0LL;
  v60[0] = 0LL;
  v6 = a2;
  v65 = 0LL;
  v67 = 0;
  v8 = 0;
  v9 = *(_BYTE *)(v4 + 184);
  v70 = 0LL;
  v10 = v9 & 7;
  if ( !v10 )
  {
    v8 = 64;
    LODWORD(v60[0]) = 64;
  }
  v11 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
  v12 = a1[2] & 1;
  if ( v12 )
  {
    switch ( *(_BYTE *)v11 )
    {
      case 2:
        v8 |= 1u;
        break;
      case 1:
        v8 |= 2u;
        break;
      case 5:
        v8 |= 8u;
        break;
      default:
        goto LABEL_61;
    }
    LODWORD(v60[0]) = v8;
LABEL_61:
    if ( *(_BYTE *)v11 == 4 )
      goto LABEL_62;
  }
  if ( (v8 & 0xB) == 0 )
  {
    v13 = 0LL;
    goto LABEL_6;
  }
LABEL_62:
  v13 = v11;
  if ( v12 && *(_BYTE *)v11 == 4 )
    v70 = *(_QWORD *)(v11 + 40);
  if ( (v8 & 2) != 0 && (*(_DWORD *)(v11 + 80) & 0x4000) != 0 )
  {
    v8 |= 4u;
    LODWORD(v60[0]) = v8;
  }
  if ( (v8 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) > 0x1000uLL )
  {
    v8 |= 0x10u;
    LODWORD(v60[0]) = v8;
  }
LABEL_6:
  v68 = v13;
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
  {
    if ( a3 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(a3, a2);
    }
    return 0LL;
  }
  if ( (v8 & 8) != 0 && (*(_DWORD *)(v13 + 56) & 8) != 0 )
  {
    if ( a3 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(a3, a2);
    }
    return 3221225495LL;
  }
  v14 = *a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = a1[1] >> 57;
  v17 = 0LL;
  v57 = Process;
  v54 = v14;
  v56 = 0LL;
  if ( (_DWORD)v16 )
    goto LABEL_19;
  if ( !v12 )
  {
    v11 = 0LL;
    goto LABEL_11;
  }
  if ( *(_BYTE *)v11 == 4 )
  {
    LODWORD(v16) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v11 + 40) + 588LL)]
                                                   + 192)
                                       + 146LL)
                 + 1;
  }
  else
  {
    if ( *(_BYTE *)v11 != 2 )
      goto LABEL_11;
    LODWORD(v16) = *(_DWORD *)(v11 + 40);
  }
  if ( (_DWORD)v16 )
    goto LABEL_19;
LABEL_11:
  if ( !v10 )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = CurrentThread->ApcState.Process;
    v20 = v19[1].ActiveProcessorsPadding[8];
    if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v17 = (__int64)v56;
LABEL_55:
      if ( v11 && CurrentThread->ApcStateIndex == 1 )
        LODWORD(v16) = v19->IdealNode[CurrentThread->Affinity.Group] + 1;
      goto LABEL_18;
    }
    if ( v11 || *(_QWORD *)(v20 + 424) || *(_QWORD *)(v20 + 432) || *(_BYTE *)(v20 + 352) == 1 )
    {
      Address = MiLocateAddress(v14);
      v56 = Address;
      v17 = (__int64)Address;
      if ( !Address
        || (v42 = *((_DWORD *)Address + 12), LODWORD(v16) = (v42 >> 12) & 0x3F, !(_DWORD)v16)
        && ((v42 & 0x100000) != 0
         || (v43 = *Address[9]) == 0
         || (LODWORD(v16) = (*(_DWORD *)(v43 + 56) >> 20) & 0x3F, !(_DWORD)v16)) )
      {
        v14 = v54;
        goto LABEL_55;
      }
      v14 = v54;
    }
    else
    {
      v17 = (__int64)v56;
    }
LABEL_18:
    Process = v57;
  }
LABEL_19:
  v66 = v16;
  v61 = v14;
  v60[1] = a1;
  if ( !v17 && v6 <= 0xFFFFF6BFFFFFFF78uLL && v6 >= 0xFFFFF68000000000uLL )
  {
    v21 = *(_QWORD *)(qword_140C4E688 + 8LL * Process[1].IdealProcessorPadding[5]);
    if ( *(_DWORD *)(v21 + 1160) )
    {
      if ( *(_KPROCESS **)(v21 + 1280) == Process )
      {
        v45 = MiLocateAddress(v14);
        v14 = v54;
        v17 = (__int64)v45;
        v56 = v45;
      }
    }
  }
  v22 = *(_QWORD *)v6;
  v69 = v17;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v47 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
        v48 = v22 | 0x20;
        if ( (v47 & 0x20) == 0 )
          v48 = v22;
        v22 = v48;
        if ( (v47 & 0x42) != 0 )
          v22 = v48 | 0x42;
      }
    }
    v17 = (__int64)v56;
  }
  v23 = v72;
  if ( !v72 )
  {
    v24 = a1[2];
    v25 = (v22 >> 5) & 0x1F;
    if ( (v24 & 1) != 0 && *(_BYTE *)(v24 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v22 & 0x400) != 0 )
      LODWORD(v25) = 4;
    v63 = v25;
    v64 = v25;
    v62 = 0LL;
    return MiResolvePrivateZeroFault(v60);
  }
  v27 = v60[0];
  v28 = 0;
  v62 = v6;
  v29 = 24;
  v58 = 1LL;
  v30 = 0LL;
  v71 = 24;
  if ( (v60[0] & 0x15) != 0 && (v60[0] & 0x40) != 0 )
  {
    v44 = MiCheckVirtualAddress(v14, &v71, (__int64 *)&v56);
    v29 = v71;
    v30 = v44;
    v17 = (__int64)v56;
    v23 = v72;
    v63 = v71;
    v64 = v71;
LABEL_89:
    if ( (v27 & 4) != 0 && v29 >> 3 != 1 && (v29 >> 3 != 3 || (v29 & 7) == 0) )
    {
      LOBYTE(v30) = 17;
      MiUnlockProtoPoolPage(v23, v30);
      return 0LL;
    }
    if ( v30 && v17 && v29 != 24 && (v29 & 0xFFFFFFF8) != 0x10 )
      v58 = MiExpandSharedZeroCluster((__int64)v60);
    goto LABEL_34;
  }
  if ( v17 )
  {
    v49 = *(unsigned int *)(v17 + 48);
    if ( (v49 & 0x100000) == 0 && MiVadPageSizes[(v49 >> 18) & 3] == 16 )
    {
      v28 = 1;
      v50 = MiCheckUserVirtualAddress(v14, &v71, v17);
      v29 = v71;
      v30 = v50;
      v23 = v72;
    }
  }
  v63 = v29;
  v64 = v29;
  if ( v28 == 1 )
    goto LABEL_89;
LABEL_34:
  v31 = MiCreateSharedZeroPages(v60, &v58);
  v32 = v72;
  v33 = v31;
  v59[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v59);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  *(_BYTE *)(v32 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v32);
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33 >= 0 && (v60[0] & 4) == 0 )
  {
    v34 = v61;
    v57 = 0LL;
    v35 = v6 - 8LL * (unsigned int)((v54 - v61) >> 12);
    v36 = *a1;
    v55 = *a1;
    if ( (v60[0] & 8) != 0 )
      v57 = (_KPROCESS *)v13;
    if ( v58 )
    {
      v37 = (__int64)v57;
      do
      {
        v38 = *(_QWORD *)v35;
        if ( (unsigned int)MiPteInShadowRange(v35)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v38 & 1) != 0
          && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
        {
          v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v51 )
          {
            v52 = *((_QWORD *)&v51->Flink + ((v35 >> 3) & 0x1FF));
            v53 = v38 | 0x20;
            if ( (v52 & 0x20) == 0 )
              v53 = v38;
            LODWORD(v38) = v53;
            if ( (v52 & 0x42) != 0 )
              LODWORD(v38) = v53 | 0x42;
          }
        }
        v39 = v73;
        *a1 = v34;
        v40 = MiCompleteProtoPteFault((_DWORD)a1, v38, v39, 1, v37);
        v34 += 4096LL;
        if ( !v5 && v40 < 0 )
          v33 = v40;
        __incgsdword(0x2E9Cu);
        ++v5;
        v35 += 8LL;
      }
      while ( v5 < v58 );
      v36 = v55;
    }
    *a1 = v36;
  }
  return (unsigned int)v33;
}
