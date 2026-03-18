/*
 * XREFs of MiResolveDemandZeroFault @ 0x1402A1B30
 * Callers:
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiCheckUserVirtualAddress @ 0x140259610 (MiCheckUserVirtualAddress.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiResolvePrivateZeroFault @ 0x1402A2100 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiCreateSharedZeroPages @ 0x1402B7DE0 (MiCreateSharedZeroPages.c)
 *     MiExpandSharedZeroCluster @ 0x14031580C (MiExpandSharedZeroCluster.c)
 *     MiCheckVirtualAddress @ 0x140315F00 (MiCheckVirtualAddress.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  int v36; // r13d
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // r12
  __int64 v40; // r12
  __int64 v41; // rbx
  int v42; // r8d
  int v43; // eax
  __int64 **Address; // rax
  unsigned int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 **v48; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  struct _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  int v56; // edx
  unsigned __int64 v57; // [rsp+30h] [rbp-59h]
  unsigned __int64 v58; // [rsp+30h] [rbp-59h]
  __int64 **v59; // [rsp+38h] [rbp-51h] BYREF
  _KPROCESS *v60; // [rsp+40h] [rbp-49h]
  unsigned __int64 v61; // [rsp+48h] [rbp-41h] BYREF
  int v62[4]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v63[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v64; // [rsp+70h] [rbp-19h]
  unsigned __int64 v65; // [rsp+78h] [rbp-11h]
  int v66; // [rsp+80h] [rbp-9h]
  int v67; // [rsp+84h] [rbp-5h]
  __int64 v68; // [rsp+88h] [rbp-1h]
  int v69; // [rsp+90h] [rbp+7h]
  int v70; // [rsp+94h] [rbp+Bh]
  unsigned __int64 v71; // [rsp+98h] [rbp+Fh]
  __int64 v72; // [rsp+A0h] [rbp+17h]
  __int64 v73; // [rsp+A8h] [rbp+1Fh]
  int v74; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v75; // [rsp+100h] [rbp+77h]
  __int64 v76; // [rsp+108h] [rbp+7Fh]

  v76 = a4;
  v75 = a3;
  v4 = a1[7];
  v5 = 0LL;
  v63[0] = 0LL;
  v6 = a2;
  v68 = 0LL;
  v70 = 0;
  v8 = 0;
  v9 = *(_BYTE *)(v4 + 184);
  v73 = 0LL;
  v10 = v9 & 7;
  if ( !v10 )
  {
    v8 = 64;
    LODWORD(v63[0]) = 64;
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
    LODWORD(v63[0]) = v8;
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
    v73 = *(_QWORD *)(v11 + 40);
  if ( (v8 & 2) != 0 && (*(_DWORD *)(v11 + 80) & 0x4000) != 0 )
  {
    v8 |= 4u;
    LODWORD(v63[0]) = v8;
  }
  if ( (v8 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) > 0x1000uLL )
  {
    v8 |= 0x10u;
    LODWORD(v63[0]) = v8;
  }
LABEL_6:
  v71 = v13;
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
  v60 = Process;
  v57 = v14;
  v59 = 0LL;
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
      v17 = (__int64)v59;
LABEL_55:
      if ( v11 && CurrentThread->ApcStateIndex == 1 )
        LODWORD(v16) = v19->IdealNode[CurrentThread->Affinity.Group] + 1;
      goto LABEL_18;
    }
    if ( v11 || *(_QWORD *)(v20 + 424) || *(_QWORD *)(v20 + 432) || *(_BYTE *)(v20 + 352) == 1 )
    {
      Address = MiLocateAddress(v14);
      v59 = Address;
      v17 = (__int64)Address;
      if ( !Address
        || (v45 = *((_DWORD *)Address + 12), LODWORD(v16) = (v45 >> 12) & 0x3F, !(_DWORD)v16)
        && ((v45 & 0x100000) != 0
         || (v46 = *Address[9]) == 0
         || (LODWORD(v16) = (*(_DWORD *)(v46 + 56) >> 20) & 0x3F, !(_DWORD)v16)) )
      {
        v14 = v57;
        goto LABEL_55;
      }
      v14 = v57;
    }
    else
    {
      v17 = (__int64)v59;
    }
LABEL_18:
    Process = v60;
  }
LABEL_19:
  v69 = v16;
  v64 = v14;
  v63[1] = a1;
  if ( !v17 && v6 <= 0xFFFFF6BFFFFFFF78uLL && v6 >= 0xFFFFF68000000000uLL )
  {
    v21 = *(_QWORD *)(qword_140C4E448 + 8LL * Process[1].IdealProcessorPadding[5]);
    if ( *(_DWORD *)(v21 + 1160) )
    {
      if ( *(_KPROCESS **)(v21 + 1280) == Process )
      {
        v48 = MiLocateAddress(v14);
        v14 = v57;
        v17 = (__int64)v48;
        v59 = v48;
      }
    }
  }
  v22 = *(_QWORD *)v6;
  v72 = v17;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v50 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
        v51 = v22 | 0x20;
        if ( (v50 & 0x20) == 0 )
          v51 = v22;
        v22 = v51;
        if ( (v50 & 0x42) != 0 )
          v22 = v51 | 0x42;
      }
    }
    v17 = (__int64)v59;
  }
  v23 = v75;
  if ( !v75 )
  {
    v24 = a1[2];
    v25 = (v22 >> 5) & 0x1F;
    if ( (v24 & 1) != 0 && (v24 &= ~1uLL, *(_BYTE *)v24 == 4) || (v22 & 0x400) != 0 )
      LODWORD(v25) = 4;
    v66 = v25;
    v67 = v25;
    v65 = 0LL;
    return MiResolvePrivateZeroFault(v63, v24, 0LL, v14);
  }
  v27 = v63[0];
  v28 = 0;
  v65 = v6;
  v29 = 24;
  v61 = 1LL;
  v30 = 0LL;
  v74 = 24;
  if ( (v63[0] & 0x15) != 0 && (v63[0] & 0x40) != 0 )
  {
    v47 = MiCheckVirtualAddress(v14, &v74, &v59);
    v29 = v74;
    v30 = v47;
    v17 = (__int64)v59;
    v23 = v75;
    v66 = v74;
    v67 = v74;
LABEL_89:
    if ( (v27 & 4) != 0 && v29 >> 3 != 1 && (v29 >> 3 != 3 || (v29 & 7) == 0) )
    {
      LOBYTE(v30) = 17;
      MiUnlockProtoPoolPage(v23, v30);
      return 0LL;
    }
    if ( v30 && v17 && v29 != 24 && (v29 & 0xFFFFFFF8) != 0x10 )
      v61 = MiExpandSharedZeroCluster(v63);
    goto LABEL_34;
  }
  if ( v17 )
  {
    v52 = *(unsigned int *)(v17 + 48);
    if ( (v52 & 0x100000) == 0 && MiVadPageSizes[(v52 >> 18) & 3] == 16 )
    {
      v28 = 1;
      v53 = MiCheckUserVirtualAddress(v14, &v74, v17);
      v29 = v74;
      v30 = v53;
      v23 = v75;
    }
  }
  v66 = v29;
  v67 = v29;
  if ( v28 == 1 )
    goto LABEL_89;
LABEL_34:
  v31 = MiCreateSharedZeroPages(v63, &v61);
  v35 = v75;
  v36 = v31;
  v62[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v62, v32, v33, v34);
    while ( *(__int64 *)(v35 + 24) < 0 );
  }
  *(_BYTE *)(v35 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v35, v32, v33, v34);
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v36 >= 0 && (v63[0] & 4) == 0 )
  {
    v37 = v64;
    v60 = 0LL;
    v38 = v6 - 8LL * (unsigned int)((v57 - v64) >> 12);
    v39 = *a1;
    v58 = *a1;
    if ( (v63[0] & 8) != 0 )
      v60 = (_KPROCESS *)v13;
    if ( v61 )
    {
      v40 = (__int64)v60;
      do
      {
        v41 = *(_QWORD *)v38;
        if ( MiPteInShadowRange(v38)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v41 & 1) != 0
          && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
        {
          v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v54 )
          {
            v55 = *((_QWORD *)&v54->Flink + ((v38 >> 3) & 0x1FF));
            v56 = v41 | 0x20;
            if ( (v55 & 0x20) == 0 )
              v56 = v41;
            LODWORD(v41) = v56;
            if ( (v55 & 0x42) != 0 )
              LODWORD(v41) = v56 | 0x42;
          }
        }
        v42 = v76;
        *a1 = v37;
        v43 = MiCompleteProtoPteFault((_DWORD)a1, v41, v42, 1, v40);
        v37 += 4096LL;
        if ( !v5 && v43 < 0 )
          v36 = v43;
        __incgsdword(0x2E9Cu);
        ++v5;
        v38 += 8LL;
      }
      while ( v5 < v61 );
      v39 = v58;
    }
    *a1 = v39;
  }
  return (unsigned int)v36;
}
