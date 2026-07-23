/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x14035EA70
 * Callers:
 *     FsRtlCheckOplock @ 0x14035FA50 (FsRtlCheckOplock.c)
 *     FsRtlCheckOplockEx @ 0x140360AE0 (FsRtlCheckOplockEx.c)
 * Callees:
 *     FsRtlpOplockCleanup @ 0x14022B930 (FsRtlpOplockCleanup.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14022BE58 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140238100 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpOplockBreakToII @ 0x14024302C (FsRtlpOplockBreakToII.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402AAA80 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14035F6A0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x140360830 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x1403617F0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D578 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     IoSetOplockKeyContext @ 0x140390F94 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     FsRtlGetMarkHandleInfo @ 0x1404F0158 (FsRtlGetMarkHandleInfo.c)
 *     IoGetIrpExtraCreateParameter @ 0x1405DDD60 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1405F8440 (FsRtlAcknowledgeEcp.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14069C490 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x14071ADC0 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x14071AE50 (FsRtlRemoveExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v21; // r8
  __int64 v22; // rcx
  char v23; // al
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rdi
  unsigned __int8 v26; // dl
  __int64 v27; // rcx
  __int64 v28; // rsi
  int SessionId; // eax
  volatile signed __int32 *v30; // rdi
  int v31; // esi
  char v32; // al
  int v33; // edi
  int v34; // eax
  char v35; // al
  int v36; // eax
  bool v37; // zf
  int v38; // eax
  char v39; // al
  unsigned int v40; // eax
  ULONG_PTR v41; // rdi
  signed __int32 v42; // eax
  __int64 v43; // rax
  int v44; // eax
  _QWORD *v45; // rbx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-148h]
  bool v49; // [rsp+71h] [rbp-F7h] BYREF
  char v50; // [rsp+72h] [rbp-F6h]
  bool v51; // [rsp+73h] [rbp-F5h]
  _BYTE v52[4]; // [rsp+74h] [rbp-F4h] BYREF
  int v53; // [rsp+78h] [rbp-F0h]
  unsigned int v54; // [rsp+7Ch] [rbp-ECh]
  unsigned int v55; // [rsp+80h] [rbp-E8h]
  volatile signed __int32 *v56; // [rsp+88h] [rbp-E0h]
  unsigned int v57; // [rsp+90h] [rbp-D8h]
  unsigned int v58; // [rsp+94h] [rbp-D4h] BYREF
  PVOID EcpContext; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-C8h]
  int v61; // [rsp+A8h] [rbp-C0h]
  int v62; // [rsp+ACh] [rbp-BCh]
  int v63; // [rsp+B0h] [rbp-B8h]
  unsigned int v64; // [rsp+B8h] [rbp-B0h]
  __int64 v65; // [rsp+C0h] [rbp-A8h]
  __int64 v66; // [rsp+C8h] [rbp-A0h]
  __int64 v67; // [rsp+D0h] [rbp-98h]
  __int64 v68; // [rsp+D8h] [rbp-90h]
  PVOID P; // [rsp+E0h] [rbp-88h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-78h]
  __int64 v72; // [rsp+F8h] [rbp-70h]
  __int64 v73; // [rsp+100h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-60h]
  __int64 v75; // [rsp+110h] [rbp-58h]
  GUID EcpType; // [rsp+118h] [rbp-50h] BYREF

  v63 = a4;
  v64 = a3;
  v60 = a5;
  v68 = a6;
  v67 = a7;
  v66 = a9;
  v65 = a10;
  v13 = 0;
  v55 = 0;
  v14 = *a1;
  v73 = *a1;
  if ( a4 )
    return 3221225485LL;
  CurrentStackLocation = (volatile signed __int32 *)a2->Tail.Overlay.CurrentStackLocation;
  v56 = CurrentStackLocation;
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
      v45 = P;
      FsRtlpOplockDequeueRH(P);
      v46 = v45[7];
      v47 = (_QWORD *)v45[8];
      if ( *(_QWORD **)(v46 + 8) != v45 + 7 || (_QWORD *)*v47 != v45 + 7 )
        __fastfail(3u);
      *v47 = v46;
      *(_QWORD *)(v46 + 8) = v47;
      if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
        *(_DWORD *)(v14 + 144) &= 0xFFFCFFFF;
      if ( v45[5] )
        FsRtlpClearOwner(v14, v45);
      ExFreePoolWithTag(v45, 0);
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
        v43 = v19[7];
        if ( v43 )
        {
          if ( (*(_BYTE *)(v43 + 2) & 3) != 0 )
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
        v44 = 1;
      }
      else
      {
        v44 = 2;
      }
      v54 = v44;
      CurrentStackLocation = v56;
      v16 = IoSetOplockKeyContext(*((_QWORD *)v56 + 6), EcpContext, (unsigned __int16)v44);
      if ( (_WORD)v54 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v16 == -1073741823 )
        v16 = 0;
      goto LABEL_5;
    }
LABEL_15:
    CurrentStackLocation = v56;
LABEL_5:
    v55 = v16;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(a1, a2, a3);
  if ( v14 != *a1 )
  {
    v14 = *a1;
    v73 = *a1;
  }
  if ( (a3 & 2) == 0 && v14 && (a2->Flags & 2) == 0 && !v55 )
  {
    v49 = (a3 & 0x20000000) != 0;
    v50 = 1;
    while ( 1 )
    {
      v52[0] = 0;
      v21 = a3 & 0x10;
      v54 = a3 & 0x10;
      if ( (a3 & 0x10) == 0 && !v49 )
      {
        v57 = *(_DWORD *)(v14 + 144);
        v22 = *(_QWORD *)(v14 + 8);
        v75 = v22;
        v23 = *(_BYTE *)CurrentStackLocation;
        v17 = v57;
        if ( *(_BYTE *)CurrentStackLocation == 3 && (v57 & 0xFFFF4FFE) == 0 )
          v50 = 0;
        if ( v23 == 4 && (v57 & 0xFFFFDFFE) == 0 )
          v50 = 0;
        if ( (a3 & 8) == 0 && v23 != 18 && v22 && v22 == *((_QWORD *)CurrentStackLocation + 6) )
        {
          v50 = 0;
          goto LABEL_133;
        }
      }
      if ( !v50 )
        goto LABEL_133;
      if ( !v49 )
        break;
LABEL_47:
      v49 = 1;
      v31 = *(_DWORD *)(v14 + 144);
      if ( v31 != 1 )
      {
        LOBYTE(v17) = 0;
        v54 = v17;
        v51 = 0;
        v32 = 0;
        v33 = 0;
        v53 = 0;
        if ( (_DWORD)v21 )
          goto LABEL_65;
        v34 = *(unsigned __int8 *)CurrentStackLocation;
        if ( v34 == 3 )
        {
          if ( (v31 & 8) != 0 )
          {
LABEL_83:
            v33 = 0x4000;
            v53 = 0x4000;
          }
          else
          {
            LOBYTE(v17) = 1;
            v51 = 1;
            v33 = 0x4000;
            v53 = 0x4000;
          }
          goto LABEL_52;
        }
        if ( v34 == 4 )
        {
LABEL_64:
          v32 = 1;
LABEL_65:
          v33 = 20480;
          v53 = 20480;
        }
        else
        {
          switch ( *(_BYTE *)CurrentStackLocation )
          {
            case 0:
              if ( ((v31 & 0x7000) == 0 || (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEDFE7F) == 0)
                && ((v31 & 0x1E) == 0 || (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEFFE7F) == 0)
                && (CurrentStackLocation[4] & 0x100000) == 0
                || (v31 & 8) != 0
                && (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEDFE56) == 0
                && (*((_BYTE *)CurrentStackLocation + 26) & 1) != 0 )
              {
                break;
              }
              v35 = *((_BYTE *)CurrentStackLocation + 19);
              if ( ((v35 & 0xFA) != 0 || v35 == 1) && (CurrentStackLocation[4] & 0x100000) == 0 )
                goto LABEL_82;
              goto LABEL_64;
            case 2:
              if ( (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 6) + 80LL) & 0x4000) != 0 )
                break;
              goto LABEL_73;
            case 6:
              v36 = *((_DWORD *)CurrentStackLocation + 4);
              if ( v36 == 20 )
              {
                v37 = *((_BYTE *)CurrentStackLocation + 33) == 0;
                goto LABEL_92;
              }
              if ( v36 == 19 )
                goto LABEL_64;
              switch ( v36 )
              {
                case 10:
                case 11:
                case 40:
                case 65:
                  v33 = 0x2000;
                  v53 = 0x2000;
                  if ( (v31 & 0xC) == 0 )
                    goto LABEL_52;
                  v32 = 1;
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
                    v33 = 0x2000;
                    v53 = 0x2000;
                  }
                  goto LABEL_52;
                default:
                  goto LABEL_52;
              }
              goto LABEL_53;
            case 9:
LABEL_82:
              LOBYTE(v17) = 1;
              v51 = 1;
              goto LABEL_83;
            case 0xD:
              v40 = *((_DWORD *)CurrentStackLocation + 6);
              if ( v40 > 0x98268 )
              {
                if ( v40 == 623428 || v40 == 623592 )
                  goto LABEL_64;
                v37 = v40 == 639668;
LABEL_92:
                if ( v37 )
                  goto LABEL_64;
              }
              else
              {
                switch ( v40 )
                {
                  case 0x98268u:
                    goto LABEL_64;
                  case 0x900FCu:
                    if ( (FsRtlGetMarkHandleInfo(a2, v17, v21, 0x140000000uLL) & 0x4000) == 0 )
                    {
LABEL_76:
                      v17 = v54;
                      goto LABEL_52;
                    }
                    v33 = 0x2000;
                    v53 = 0x2000;
                    v17 = v54;
                    if ( (v31 & 0xC) != 0 )
                    {
                      v32 = 1;
                      goto LABEL_53;
                    }
                    break;
                  case 0x94264u:
                    v17 = (v31 & 8) == 0;
                    v51 = (v31 & 8) == 0;
                    v33 = 0x4000;
                    v53 = 0x4000;
                    goto LABEL_52;
                  case 0x980C8u:
                  case 0x98208u:
                    goto LABEL_64;
                }
              }
              break;
            case 0x11:
              if ( (v31 & 8) != 0 )
                break;
              goto LABEL_64;
            case 0x12:
LABEL_73:
              FsRtlpOplockCleanup((_QWORD *)v14, (__int64)CurrentStackLocation);
              if ( *(_BYTE *)CurrentStackLocation == 18 && (a3 & 0x20) != 0 )
              {
                v33 = 0x2000;
                v53 = 0x2000;
              }
              goto LABEL_76;
            case 0x15:
LABEL_97:
              v33 = 0x2000;
              v53 = 0x2000;
              break;
            default:
              break;
          }
LABEL_52:
          v32 = 0;
        }
LABEL_53:
        if ( (_BYTE)v17 )
        {
          if ( (*(_DWORD *)(v14 + 144) & 0x1F0FFDF) != 0x10
            && !(unsigned __int8)FsRtlpOplockKeysEqual(*((_QWORD *)CurrentStackLocation + 6), *(_QWORD *)(v14 + 8), 0LL) )
          {
            v55 = FsRtlpOplockBreakToII(
                    (__int64 *)v14,
                    (__int64)CurrentStackLocation,
                    (__int64)a2,
                    a3,
                    BugCheckParameter4,
                    v60,
                    v68,
                    v67,
                    a8,
                    v66,
                    v65,
                    &v49,
                    (__int64)v52);
          }
        }
        else if ( v32
               && ((*(_DWORD *)(v14 + 144) & 0x1F0FFDF) == 0x10
                || !(unsigned __int8)FsRtlpOplockKeysEqual(
                                       *((_QWORD *)CurrentStackLocation + 6),
                                       *(_QWORD *)(v14 + 8),
                                       0LL)) )
        {
          v55 = FsRtlpOplockBreakToNone(
                  v14,
                  (_DWORD)CurrentStackLocation,
                  (_DWORD)a2,
                  a3,
                  BugCheckParameter4,
                  v60,
                  v68,
                  v67,
                  a8,
                  v66,
                  v65,
                  (__int64)&v49,
                  (__int64)v52);
        }
        if ( !v55 && (*(_DWORD *)(v14 + 144) & v33) != 0 )
        {
          BugCheckParameter4 = v63;
          v55 = FsRtlpOplockBreakByCacheFlags(v14, CurrentStackLocation, a2, a3);
        }
      }
LABEL_133:
      if ( v49 && (a3 & 0x20000000) == 0 )
      {
        v41 = *(_QWORD *)(v14 + 152);
        *(_QWORD *)(v41 + 8) = 0LL;
        v42 = _InterlockedCompareExchange((volatile signed __int32 *)v41, 1, 0);
        if ( v42 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v41, v42);
        KeAbPostRelease(v41);
      }
      if ( !v52[0] )
        return v55;
    }
    v24 = *(_QWORD *)(v14 + 152);
    v56 = (volatile signed __int32 *)v24;
    CurrentThread = KeGetCurrentThread();
    v72 = 0LL;
    v58 = 0;
    v25 = (ULONG_PTR)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    if ( ++*(_BYTE *)(v25 + 794) != 1 )
      KeBugCheckEx(0x192u, v25, v24, KeGetCurrentIrql(), 0LL);
    v72 = 0LL;
    v71 = 0LL;
    v62 = 0;
    v26 = *(_BYTE *)(v25 + 792);
    if ( v26
      || ((v38 = 0, *(_BYTE *)(v25 + 870))
        ? (v39 = *(_BYTE *)(v25 + 870),
           *(_BYTE *)(v25 + 870) = 0,
           *(_BYTE *)(v25 + 792) |= v39,
           v26 = *(_BYTE *)(v25 + 792),
           v38 = 1)
        : (v26 = 0),
          (v61 = v38) != 0) )
    {
      _BitScanForward((unsigned int *)&v27, v26);
      v62 = v27;
      *(_BYTE *)(v25 + 792) = v26 & ~(1 << v27);
      v28 = *(_QWORD *)(v25 + 800) + 96 * v27;
      v71 = v28;
    }
    else
    {
      v28 = 0LL;
      v71 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
      {
LABEL_33:
        v72 = v28;
        if ( !v28 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v25 + 120), 0x10u);
LABEL_39:
          --*(_BYTE *)(v25 + 794);
          KiAbThreadRemoveBoosts(v25, v24, &v58);
          v37 = (*(_WORD *)(v25 + 486))++ == 0xFFFF;
          if ( v37 && *(_QWORD *)(v25 + 152) != v25 + 152 )
            KiCheckForKernelApcDelivery();
          v30 = v56;
          if ( !_interlockedbittestandreset(v56, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)v30, (PRTL_BALANCED_NODE)v28);
          if ( v28 )
            *(_BYTE *)(v28 + 26) |= 1u;
          *((_QWORD *)v30 + 1) = CurrentThread;
          v21 = v54;
          goto LABEL_47;
        }
        if ( v24 >= 0xFFFF800000000000uLL )
        {
          if ( byte_140C4FA08[((v24 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx(*(_QWORD *)(v25 + 184));
            v24 = (ULONG_PTR)v56;
            goto LABEL_38;
          }
          v24 = (ULONG_PTR)v56;
        }
        SessionId = -1;
LABEL_38:
        *(_DWORD *)(v28 + 40) = SessionId;
        *(_QWORD *)(v28 + 32) = v24 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_39;
      }
      EtwTraceAutoBoostEntryExhaustion(v25, v24);
    }
    v24 = (ULONG_PTR)v56;
    goto LABEL_33;
  }
  return v55;
}
