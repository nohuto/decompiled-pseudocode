/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x140353D20
 * Callers:
 *     FsRtlCheckOplock @ 0x140354D00 (FsRtlCheckOplock.c)
 *     FsRtlCheckOplockEx @ 0x140355D90 (FsRtlCheckOplockEx.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140206150 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402067E0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206970 (ExReleaseFastMutexUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     FsRtlpOplockCleanup @ 0x1402AD5D0 (FsRtlpOplockCleanup.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402ADAF8 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1402B9EF0 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpOplockBreakToII @ 0x1402C4AAC (FsRtlpOplockBreakToII.c)
 *     ExpReleaseFastMutexContended @ 0x1402F171C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140354950 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140354E00 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x140355AE0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x140356AA0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D3C8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpClearOwner @ 0x140375278 (FsRtlpClearOwner.c)
 *     IoSetOplockKeyContext @ 0x140390E44 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     FsRtlGetMarkHandleInfo @ 0x1404F01D8 (FsRtlGetMarkHandleInfo.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060C9E0 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140683F20 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x140699750 (FsRtlAcknowledgeEcp.c)
 *     FsRtlFindExtraCreateParameter @ 0x1407039E0 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x140703A70 (FsRtlRemoveExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        IRP *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v13; // r14d
  __int64 v14; // r13
  volatile signed __int32 *CurrentStackLocation; // r12
  unsigned int v16; // esi
  __int64 v17; // rdx
  _QWORD *v19; // rcx
  struct _ECP_LIST *v20; // r12
  _DWORD *i; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  char v24; // al
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // rdi
  unsigned __int8 v27; // dl
  __int64 v28; // rcx
  __int64 v29; // rsi
  int SessionId; // eax
  __int64 v31; // rcx
  volatile signed __int32 *v32; // rdi
  int v33; // esi
  char v34; // al
  int v35; // edi
  int v36; // eax
  char v37; // al
  int v38; // eax
  bool v39; // zf
  int v40; // eax
  char v41; // al
  unsigned int v42; // eax
  ULONG_PTR v43; // rdi
  signed __int32 v44; // eax
  __int64 v45; // rax
  int v46; // eax
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-148h]
  bool v51; // [rsp+71h] [rbp-F7h] BYREF
  char v52; // [rsp+72h] [rbp-F6h]
  bool v53; // [rsp+73h] [rbp-F5h]
  _BYTE v54[4]; // [rsp+74h] [rbp-F4h] BYREF
  int v55; // [rsp+78h] [rbp-F0h]
  unsigned int v56; // [rsp+7Ch] [rbp-ECh]
  unsigned int v57; // [rsp+80h] [rbp-E8h]
  volatile signed __int32 *v58; // [rsp+88h] [rbp-E0h]
  unsigned int v59; // [rsp+90h] [rbp-D8h]
  int v60; // [rsp+94h] [rbp-D4h] BYREF
  PVOID EcpContext; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-C8h]
  int v63; // [rsp+A8h] [rbp-C0h]
  int v64; // [rsp+ACh] [rbp-BCh]
  int v65; // [rsp+B0h] [rbp-B8h]
  unsigned int v66; // [rsp+B8h] [rbp-B0h]
  __int64 v67; // [rsp+C0h] [rbp-A8h]
  __int64 v68; // [rsp+C8h] [rbp-A0h]
  __int64 v69; // [rsp+D0h] [rbp-98h]
  __int64 v70; // [rsp+D8h] [rbp-90h]
  PVOID P; // [rsp+E0h] [rbp-88h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-78h]
  __int64 v74; // [rsp+F8h] [rbp-70h]
  __int64 v75; // [rsp+100h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-60h]
  __int64 v77; // [rsp+110h] [rbp-58h]
  GUID EcpType; // [rsp+118h] [rbp-50h] BYREF

  v65 = a4;
  v66 = a3;
  v62 = a5;
  v70 = a6;
  v69 = a7;
  v68 = a9;
  v67 = a10;
  v13 = 0;
  v57 = 0;
  v14 = *a1;
  v75 = *a1;
  if ( a4 )
    return 3221225485LL;
  CurrentStackLocation = (volatile signed __int32 *)a2->Tail.Overlay.CurrentStackLocation;
  v58 = CurrentStackLocation;
  if ( (a3 & 4) != 0 )
  {
    P = 0LL;
    if ( !v14 )
      return 0LL;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    if ( *(_BYTE *)CurrentStackLocation )
    {
      v13 = -1073741811;
    }
    else if ( (*(_DWORD *)(v14 + 144) & 0x10000) != 0
           && FsRtlpCallerIsAtomicRequestor(v14, *((_QWORD *)CurrentStackLocation + 6), &P) )
    {
      v47 = P;
      FsRtlpOplockDequeueRH(P);
      v48 = v47[7];
      v49 = (_QWORD *)v47[8];
      if ( *(_QWORD **)(v48 + 8) != v47 + 7 || (_QWORD *)*v49 != v47 + 7 )
        __fastfail(3u);
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
      if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
        *(_DWORD *)(v14 + 144) &= 0xFFFCFFFF;
      if ( v47[5] )
        FsRtlpClearOwner(v14, v47);
      ExFreePoolWithTag(v47, 0);
      FsRtlpComputeShareableOplockState(v14);
      FsRtlpReleaseIrpsWaitingForRH(v14);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    return v13;
  }
  if ( (a3 & 0x10000000) == 0 )
  {
    v16 = 0;
    if ( *(_BYTE *)CurrentStackLocation )
      goto LABEL_5;
    v19 = *(_QWORD **)(*((_QWORD *)CurrentStackLocation + 6) + 208LL);
    if ( v19 )
    {
      if ( v19 != IopRevocationExtension )
      {
        v45 = v19[7];
        if ( v45 )
        {
          if ( (*(_BYTE *)(v45 + 2) & 3) != 0 )
            goto LABEL_5;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    EcpType = 0LL;
    IoGetIrpExtraCreateParameter(a2, &ExtraCreateParameter);
    v20 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v20, &EcpType, &EcpContext, 0LL) )
          goto LABEL_15;
        v46 = 1;
      }
      else
      {
        v46 = 2;
      }
      v56 = v46;
      CurrentStackLocation = v58;
      v16 = IoSetOplockKeyContext(*((_QWORD *)v58 + 6), EcpContext, (unsigned __int16)v46);
      if ( (_WORD)v56 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v16 == -1073741823 )
        v16 = 0;
      goto LABEL_5;
    }
LABEL_15:
    CurrentStackLocation = v58;
LABEL_5:
    v57 = v16;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(a1, a2, a3);
  if ( v14 != *a1 )
  {
    v14 = *a1;
    v75 = *a1;
  }
  if ( (a3 & 2) == 0 && v14 && (a2->Flags & 2) == 0 && !v57 )
  {
    v51 = (a3 & 0x20000000) != 0;
    v52 = 1;
    for ( i = (_DWORD *)0x140000000LL; ; i = (_DWORD *)0x140000000LL )
    {
      v54[0] = 0;
      v22 = a3 & 0x10;
      v56 = a3 & 0x10;
      if ( (a3 & 0x10) == 0 && !v51 )
      {
        v59 = *(_DWORD *)(v14 + 144);
        v23 = *(_QWORD *)(v14 + 8);
        v77 = v23;
        v24 = *(_BYTE *)CurrentStackLocation;
        v17 = v59;
        if ( *(_BYTE *)CurrentStackLocation == 3 && (v59 & 0xFFFF4FFE) == 0 )
          v52 = 0;
        if ( v24 == 4 && (v59 & 0xFFFFDFFE) == 0 )
          v52 = 0;
        if ( (a3 & 8) == 0 && v24 != 18 && v23 && v23 == *((_QWORD *)CurrentStackLocation + 6) )
        {
          v52 = 0;
          goto LABEL_133;
        }
      }
      if ( !v52 )
        goto LABEL_133;
      if ( !v51 )
        break;
LABEL_47:
      v51 = 1;
      v33 = *(_DWORD *)(v14 + 144);
      if ( v33 != 1 )
      {
        LOBYTE(v17) = 0;
        v56 = v17;
        v53 = 0;
        v34 = 0;
        v35 = 0;
        v55 = 0;
        if ( (_DWORD)v22 )
          goto LABEL_65;
        v36 = *(unsigned __int8 *)CurrentStackLocation;
        if ( v36 == 3 )
        {
          if ( (v33 & 8) != 0 )
          {
LABEL_83:
            v35 = 0x4000;
            v55 = 0x4000;
          }
          else
          {
            LOBYTE(v17) = 1;
            v53 = 1;
            v35 = 0x4000;
            v55 = 0x4000;
          }
          goto LABEL_52;
        }
        if ( v36 == 4 )
        {
LABEL_64:
          v34 = 1;
LABEL_65:
          v35 = 20480;
          v55 = 20480;
        }
        else
        {
          switch ( *(_BYTE *)CurrentStackLocation )
          {
            case 0:
              if ( ((v33 & 0x7000) == 0 || (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEDFE7F) == 0)
                && ((v33 & 0x1E) == 0 || (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEFFE7F) == 0)
                && (CurrentStackLocation[4] & 0x100000) == 0
                || (v33 & 8) != 0
                && (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEDFE56) == 0
                && (*((_BYTE *)CurrentStackLocation + 26) & 1) != 0 )
              {
                break;
              }
              v37 = *((_BYTE *)CurrentStackLocation + 19);
              if ( ((v37 & 0xFA) != 0 || v37 == 1) && (CurrentStackLocation[4] & 0x100000) == 0 )
                goto LABEL_82;
              goto LABEL_64;
            case 2:
              if ( (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 6) + 80LL) & 0x4000) != 0 )
                break;
              goto LABEL_73;
            case 6:
              v38 = *((_DWORD *)CurrentStackLocation + 4);
              if ( v38 == 20 )
              {
                v39 = *((_BYTE *)CurrentStackLocation + 33) == 0;
                goto LABEL_92;
              }
              if ( v38 == 19 )
                goto LABEL_64;
              switch ( v38 )
              {
                case 10:
                case 11:
                case 40:
                case 65:
                  v35 = 0x2000;
                  v55 = 0x2000;
                  if ( (v33 & 0xC) == 0 )
                    goto LABEL_52;
                  v34 = 1;
                  break;
                case 13:
                  if ( a2->AssociatedIrp.MasterIrp->Type )
                    goto LABEL_97;
                  goto LABEL_52;
                case 39:
                  goto LABEL_64;
                case 64:
                  if ( (*(_DWORD *)a2->AssociatedIrp.MasterIrp & 1) != 0 )
                  {
                    v35 = 0x2000;
                    v55 = 0x2000;
                  }
                  goto LABEL_52;
                default:
                  goto LABEL_52;
              }
              goto LABEL_53;
            case 9:
LABEL_82:
              LOBYTE(v17) = 1;
              v53 = 1;
              goto LABEL_83;
            case 0xD:
              v42 = *((_DWORD *)CurrentStackLocation + 6);
              if ( v42 > 0x98268 )
              {
                if ( v42 == 623428 || v42 == 623592 )
                  goto LABEL_64;
                v39 = v42 == 639668;
LABEL_92:
                if ( v39 )
                  goto LABEL_64;
              }
              else
              {
                switch ( v42 )
                {
                  case 0x98268u:
                    goto LABEL_64;
                  case 0x900FCu:
                    if ( (FsRtlGetMarkHandleInfo(a2, v17, v22, 0x140000000uLL) & 0x4000) == 0 )
                    {
LABEL_76:
                      v17 = v56;
                      goto LABEL_52;
                    }
                    v35 = 0x2000;
                    v55 = 0x2000;
                    v17 = v56;
                    if ( (v33 & 0xC) != 0 )
                    {
                      v34 = 1;
                      goto LABEL_53;
                    }
                    break;
                  case 0x94264u:
                    v17 = (v33 & 8) == 0;
                    v53 = (v33 & 8) == 0;
                    v35 = 0x4000;
                    v55 = 0x4000;
                    goto LABEL_52;
                  case 0x980C8u:
                  case 0x98208u:
                    goto LABEL_64;
                }
              }
              break;
            case 0x11:
              if ( (v33 & 8) != 0 )
                break;
              goto LABEL_64;
            case 0x12:
LABEL_73:
              FsRtlpOplockCleanup(v14, (__int64)CurrentStackLocation);
              if ( *(_BYTE *)CurrentStackLocation == 18 && (a3 & 0x20) != 0 )
              {
                v35 = 0x2000;
                v55 = 0x2000;
              }
              goto LABEL_76;
            case 0x15:
LABEL_97:
              v35 = 0x2000;
              v55 = 0x2000;
              break;
            default:
              break;
          }
LABEL_52:
          v34 = 0;
        }
LABEL_53:
        if ( (_BYTE)v17 )
        {
          if ( (*(_DWORD *)(v14 + 144) & 0x1F0FFDF) != 0x10
            && !(unsigned __int8)FsRtlpOplockKeysEqual(*((_QWORD *)CurrentStackLocation + 6), *(_QWORD *)(v14 + 8), 0LL) )
          {
            v57 = FsRtlpOplockBreakToII(
                    (__int64 *)v14,
                    (__int64)CurrentStackLocation,
                    (__int64)a2,
                    a3,
                    BugCheckParameter4,
                    v62,
                    v70,
                    v69,
                    a8,
                    v68,
                    v67,
                    &v51,
                    (__int64)v54);
          }
        }
        else if ( v34
               && ((*(_DWORD *)(v14 + 144) & 0x1F0FFDF) == 0x10
                || !(unsigned __int8)FsRtlpOplockKeysEqual(
                                       *((_QWORD *)CurrentStackLocation + 6),
                                       *(_QWORD *)(v14 + 8),
                                       0LL)) )
        {
          v57 = FsRtlpOplockBreakToNone(
                  v14,
                  (_DWORD)CurrentStackLocation,
                  (_DWORD)a2,
                  a3,
                  BugCheckParameter4,
                  v62,
                  v70,
                  v69,
                  a8,
                  v68,
                  v67,
                  (__int64)&v51,
                  (__int64)v54);
        }
        if ( !v57 && (*(_DWORD *)(v14 + 144) & v35) != 0 )
        {
          BugCheckParameter4 = v65;
          v57 = FsRtlpOplockBreakByCacheFlags(v14, CurrentStackLocation, a2, a3);
        }
      }
LABEL_133:
      if ( v51 && (a3 & 0x20000000) == 0 )
      {
        v43 = *(_QWORD *)(v14 + 152);
        *(_QWORD *)(v43 + 8) = 0LL;
        v44 = _InterlockedCompareExchange((volatile signed __int32 *)v43, 1, 0);
        if ( v44 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v43, v44);
        KeAbPostRelease(v43);
      }
      if ( !v54[0] )
        return v57;
    }
    v25 = *(_QWORD *)(v14 + 152);
    v58 = (volatile signed __int32 *)v25;
    CurrentThread = KeGetCurrentThread();
    v74 = 0LL;
    v60 = 0;
    v26 = (ULONG_PTR)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    if ( ++*(_BYTE *)(v26 + 794) != 1 )
      KeBugCheckEx(0x192u, v26, v25, KeGetCurrentIrql(), 0LL);
    v74 = 0LL;
    v73 = 0LL;
    v64 = 0;
    v27 = *(_BYTE *)(v26 + 792);
    if ( v27
      || ((v40 = 0, *(_BYTE *)(v26 + 870))
        ? (v41 = *(_BYTE *)(v26 + 870),
           *(_BYTE *)(v26 + 870) = 0,
           *(_BYTE *)(v26 + 792) |= v41,
           v27 = *(_BYTE *)(v26 + 792),
           v40 = 1)
        : (v27 = 0),
          (v63 = v40) != 0) )
    {
      _BitScanForward((unsigned int *)&v28, v27);
      v64 = v28;
      *(_BYTE *)(v26 + 792) = v27 & ~(1 << v28);
      v29 = *(_QWORD *)(v26 + 800) + 96 * v28;
      v73 = v29;
    }
    else
    {
      v29 = 0LL;
      v73 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
      {
LABEL_33:
        v74 = v29;
        if ( !v29 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v26 + 120), 0x10u);
LABEL_39:
          --*(_BYTE *)(v26 + 794);
          KiAbThreadRemoveBoosts(v26, v25, (__int64)&v60, i);
          v39 = (*(_WORD *)(v26 + 486))++ == 0xFFFF;
          if ( v39 && *(_QWORD *)(v26 + 152) != v26 + 152 )
            KiCheckForKernelApcDelivery(v31);
          v32 = v58;
          if ( !_interlockedbittestandreset(v58, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)v32, v29);
          if ( v29 )
            *(_BYTE *)(v29 + 26) |= 1u;
          *((_QWORD *)v32 + 1) = CurrentThread;
          v22 = v56;
          goto LABEL_47;
        }
        if ( v25 >= 0xFFFF800000000000uLL )
        {
          if ( byte_140C4F9C8[((v25 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx(*(_QWORD *)(v26 + 184));
            v25 = (ULONG_PTR)v58;
            goto LABEL_38;
          }
          v25 = (ULONG_PTR)v58;
        }
        SessionId = -1;
LABEL_38:
        *(_DWORD *)(v29 + 40) = SessionId;
        *(_QWORD *)(v29 + 32) = v25 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_39;
      }
      EtwTraceAutoBoostEntryExhaustion(v26, v25);
      i = (_DWORD *)0x140000000LL;
    }
    v25 = (ULONG_PTR)v58;
    goto LABEL_33;
  }
  return v57;
}
