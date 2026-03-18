/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x140254990
 * Callers:
 *     FsRtlCheckOplock @ 0x140255970 (FsRtlCheckOplock.c)
 *     FsRtlCheckOplockEx @ 0x140256AF0 (FsRtlCheckOplockEx.c)
 * Callees:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402555C0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140255A70 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x140256840 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpComputeShareableOplockState @ 0x14025AE70 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402F569C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockCleanup @ 0x1402F5884 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x1402F5C84 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x1402F5CF4 (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140308130 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpOplockBreakToII @ 0x1403155DC (FsRtlpOplockBreakToII.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14035A82C (ExpReleaseFastMutexContended.c)
 *     FsRtlpOplockBreakToNone @ 0x14036A3F8 (FsRtlpOplockBreakToNone.c)
 *     IoSetOplockKeyContext @ 0x14038D914 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     FsRtlGetMarkHandleInfo @ 0x1404EA778 (FsRtlGetMarkHandleInfo.c)
 *     IoGetIrpExtraCreateParameter @ 0x1405FFDF0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x1406010C0 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x140601150 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066E310 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1406C7DC0 (FsRtlAcknowledgeEcp.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        __int64 a2,
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
  unsigned __int8 *v15; // r12
  unsigned int v16; // esi
  __int64 v17; // rdx
  _QWORD *v19; // rcx
  struct _ECP_LIST *v20; // r12
  unsigned __int64 i; // r9
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
  __int64 v32; // r8
  __int64 v33; // r9
  ULONG_PTR v34; // rdi
  int v35; // esi
  char v36; // al
  int v37; // edi
  int v38; // eax
  unsigned __int8 v39; // al
  int v40; // eax
  bool v41; // zf
  int v42; // eax
  char v43; // al
  unsigned int v44; // eax
  ULONG_PTR v45; // rdi
  unsigned __int32 v46; // eax
  __int64 v47; // rax
  int v48; // eax
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-148h]
  bool v53; // [rsp+71h] [rbp-F7h] BYREF
  char v54; // [rsp+72h] [rbp-F6h]
  bool v55; // [rsp+73h] [rbp-F5h]
  _BYTE v56[4]; // [rsp+74h] [rbp-F4h] BYREF
  int v57; // [rsp+78h] [rbp-F0h]
  unsigned int v58; // [rsp+7Ch] [rbp-ECh]
  unsigned int v59; // [rsp+80h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-E0h]
  unsigned int v61; // [rsp+90h] [rbp-D8h]
  int v62; // [rsp+94h] [rbp-D4h]
  PVOID EcpContext; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-C8h]
  int v65; // [rsp+A8h] [rbp-C0h]
  int v66; // [rsp+ACh] [rbp-BCh]
  int v67; // [rsp+B0h] [rbp-B8h]
  unsigned int v68; // [rsp+B8h] [rbp-B0h]
  __int64 v69; // [rsp+C0h] [rbp-A8h]
  __int64 v70; // [rsp+C8h] [rbp-A0h]
  __int64 v71; // [rsp+D0h] [rbp-98h]
  __int64 v72; // [rsp+D8h] [rbp-90h]
  PVOID P; // [rsp+E0h] [rbp-88h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v75; // [rsp+F0h] [rbp-78h]
  __int64 v76; // [rsp+F8h] [rbp-70h]
  __int64 v77; // [rsp+100h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-60h]
  __int64 v79; // [rsp+110h] [rbp-58h]
  GUID EcpType; // [rsp+118h] [rbp-50h] BYREF

  v67 = a4;
  v68 = a3;
  v64 = a5;
  v72 = a6;
  v71 = a7;
  v70 = a9;
  v69 = a10;
  v13 = 0;
  v59 = 0;
  v14 = *a1;
  v77 = *a1;
  if ( a4 )
    return 3221225485LL;
  v15 = *(unsigned __int8 **)(a2 + 184);
  BugCheckParameter2 = (ULONG_PTR)v15;
  if ( (a3 & 4) != 0 )
  {
    P = 0LL;
    if ( !v14 )
      return 0LL;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    if ( *v15 )
    {
      v13 = -1073741811;
    }
    else if ( (*(_DWORD *)(v14 + 144) & 0x10000) != 0
           && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(v14, *((_QWORD *)v15 + 6), &P) )
    {
      v49 = P;
      FsRtlpOplockDequeueRH(P);
      v50 = v49[7];
      v51 = (_QWORD *)v49[8];
      if ( *(_QWORD **)(v50 + 8) != v49 + 7 || (_QWORD *)*v51 != v49 + 7 )
        __fastfail(3u);
      *v51 = v50;
      *(_QWORD *)(v50 + 8) = v51;
      if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
        *(_DWORD *)(v14 + 144) &= 0xFFFCFFFF;
      if ( v49[5] )
        FsRtlpClearOwner(v14, v49);
      ExFreePoolWithTag(v49, 0);
      FsRtlpComputeShareableOplockState(v14);
      FsRtlpReleaseIrpsWaitingForRH(v14);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    return v13;
  }
  if ( (a3 & 0x10000000) == 0 )
  {
    v16 = 0;
    if ( *v15 )
      goto LABEL_5;
    v19 = *(_QWORD **)(*((_QWORD *)v15 + 6) + 208LL);
    if ( v19 )
    {
      if ( v19 != IopRevocationExtension )
      {
        v47 = v19[7];
        if ( v47 )
        {
          if ( (*(_BYTE *)(v47 + 2) & 3) != 0 )
            goto LABEL_5;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    EcpType = 0LL;
    IoGetIrpExtraCreateParameter((PIRP)a2, &ExtraCreateParameter);
    v20 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v20, &EcpType, &EcpContext, 0LL) )
          goto LABEL_15;
        v48 = 1;
      }
      else
      {
        v48 = 2;
      }
      v58 = v48;
      v15 = (unsigned __int8 *)BugCheckParameter2;
      v16 = IoSetOplockKeyContext(*(_QWORD *)(BugCheckParameter2 + 48), EcpContext, (unsigned __int16)v48);
      if ( (_WORD)v58 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v16 == -1073741823 )
        v16 = 0;
      goto LABEL_5;
    }
LABEL_15:
    v15 = (unsigned __int8 *)BugCheckParameter2;
LABEL_5:
    v59 = v16;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(a1, a2, a3);
  if ( v14 != *a1 )
  {
    v14 = *a1;
    v77 = *a1;
  }
  if ( (a3 & 2) == 0 && v14 && (*(_DWORD *)(a2 + 16) & 2) == 0 && !v59 )
  {
    v53 = (a3 & 0x20000000) != 0;
    v54 = 1;
    for ( i = 0x140000000uLL; ; i = 0x140000000uLL )
    {
      v56[0] = 0;
      v22 = a3 & 0x10;
      v58 = a3 & 0x10;
      if ( (a3 & 0x10) == 0 && !v53 )
      {
        v61 = *(_DWORD *)(v14 + 144);
        v23 = *(_QWORD *)(v14 + 8);
        v79 = v23;
        v24 = *v15;
        v17 = v61;
        if ( *v15 == 3 && (v61 & 0xFFFF4FFE) == 0 )
          v54 = 0;
        if ( v24 == 4 && (v61 & 0xFFFFDFFE) == 0 )
          v54 = 0;
        if ( (a3 & 8) == 0 && v24 != 18 && v23 && v23 == *((_QWORD *)v15 + 6) )
        {
          v54 = 0;
          goto LABEL_133;
        }
      }
      if ( !v54 )
        goto LABEL_133;
      if ( !v53 )
        break;
LABEL_47:
      v53 = 1;
      v35 = *(_DWORD *)(v14 + 144);
      if ( v35 != 1 )
      {
        LOBYTE(v17) = 0;
        v58 = v17;
        v55 = 0;
        v36 = 0;
        v37 = 0;
        v57 = 0;
        if ( (_DWORD)v22 )
          goto LABEL_65;
        v38 = *v15;
        if ( v38 == 3 )
        {
          if ( (v35 & 8) != 0 )
          {
LABEL_83:
            v37 = 0x4000;
            v57 = 0x4000;
          }
          else
          {
            LOBYTE(v17) = 1;
            v55 = 1;
            v37 = 0x4000;
            v57 = 0x4000;
          }
          goto LABEL_52;
        }
        if ( v38 == 4 )
        {
LABEL_64:
          v36 = 1;
LABEL_65:
          v37 = 20480;
          v57 = 20480;
        }
        else
        {
          switch ( *v15 )
          {
            case 0u:
              if ( ((v35 & 0x7000) == 0 || (*(_DWORD *)(*((_QWORD *)v15 + 1) + 16LL) & 0xFFEDFE7F) == 0)
                && ((v35 & 0x1E) == 0 || (*(_DWORD *)(*((_QWORD *)v15 + 1) + 16LL) & 0xFFEFFE7F) == 0)
                && (*((_DWORD *)v15 + 4) & 0x100000) == 0
                || (v35 & 8) != 0 && (*(_DWORD *)(*((_QWORD *)v15 + 1) + 16LL) & 0xFFEDFE56) == 0 && (v15[26] & 1) != 0 )
              {
                break;
              }
              v39 = v15[19];
              if ( ((v39 & 0xFA) != 0 || v39 == 1) && (*((_DWORD *)v15 + 4) & 0x100000) == 0 )
                goto LABEL_82;
              goto LABEL_64;
            case 2u:
              if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 80LL) & 0x4000) != 0 )
                break;
              goto LABEL_73;
            case 6u:
              v40 = *((_DWORD *)v15 + 4);
              if ( v40 == 20 )
              {
                v41 = v15[33] == 0;
                goto LABEL_92;
              }
              if ( v40 == 19 )
                goto LABEL_64;
              switch ( v40 )
              {
                case 10:
                case 11:
                case 40:
                case 65:
                  v37 = 0x2000;
                  v57 = 0x2000;
                  if ( (v35 & 0xC) == 0 )
                    goto LABEL_52;
                  v36 = 1;
                  break;
                case 13:
                  if ( **(_BYTE **)(a2 + 24) )
                    goto LABEL_97;
                  goto LABEL_52;
                case 39:
                  goto LABEL_64;
                case 64:
                  if ( (**(_DWORD **)(a2 + 24) & 1) != 0 )
                  {
                    v37 = 0x2000;
                    v57 = 0x2000;
                  }
                  goto LABEL_52;
                default:
                  goto LABEL_52;
              }
              goto LABEL_53;
            case 9u:
LABEL_82:
              LOBYTE(v17) = 1;
              v55 = 1;
              goto LABEL_83;
            case 0xDu:
              v44 = *((_DWORD *)v15 + 6);
              if ( v44 > 0x98268 )
              {
                if ( v44 == 623428 || v44 == 623592 )
                  goto LABEL_64;
                v41 = v44 == 639668;
LABEL_92:
                if ( v41 )
                  goto LABEL_64;
              }
              else
              {
                switch ( v44 )
                {
                  case 0x98268u:
                    goto LABEL_64;
                  case 0x900FCu:
                    if ( (FsRtlGetMarkHandleInfo(a2, v17, v22, 0x140000000uLL) & 0x4000) == 0 )
                    {
LABEL_76:
                      v17 = v58;
                      goto LABEL_52;
                    }
                    v37 = 0x2000;
                    v57 = 0x2000;
                    v17 = v58;
                    if ( (v35 & 0xC) != 0 )
                    {
                      v36 = 1;
                      goto LABEL_53;
                    }
                    break;
                  case 0x94264u:
                    v17 = (v35 & 8) == 0;
                    v55 = (v35 & 8) == 0;
                    v37 = 0x4000;
                    v57 = 0x4000;
                    goto LABEL_52;
                  case 0x980C8u:
                  case 0x98208u:
                    goto LABEL_64;
                }
              }
              break;
            case 0x11u:
              if ( (v35 & 8) != 0 )
                break;
              goto LABEL_64;
            case 0x12u:
LABEL_73:
              FsRtlpOplockCleanup(v14, v15, v22, 0x140000000uLL);
              if ( *v15 == 18 && (a3 & 0x20) != 0 )
              {
                v37 = 0x2000;
                v57 = 0x2000;
              }
              goto LABEL_76;
            case 0x15u:
LABEL_97:
              v37 = 0x2000;
              v57 = 0x2000;
              break;
            default:
              break;
          }
LABEL_52:
          v36 = 0;
        }
LABEL_53:
        if ( (_BYTE)v17 )
        {
          if ( (*(_DWORD *)(v14 + 144) & 0x1F0FFDF) != 0x10
            && !(unsigned __int8)FsRtlpOplockKeysEqual(*((_QWORD *)v15 + 6), *(_QWORD *)(v14 + 8), 0LL, i) )
          {
            v59 = FsRtlpOplockBreakToII(
                    v14,
                    (_DWORD)v15,
                    a2,
                    a3,
                    BugCheckParameter4,
                    v64,
                    v72,
                    v71,
                    a8,
                    v70,
                    v69,
                    (__int64)&v53,
                    (__int64)v56);
          }
        }
        else if ( v36
               && ((*(_DWORD *)(v14 + 144) & 0x1F0FFDF) == 0x10
                || !(unsigned __int8)FsRtlpOplockKeysEqual(*((_QWORD *)v15 + 6), *(_QWORD *)(v14 + 8), 0LL, i)) )
        {
          v59 = FsRtlpOplockBreakToNone(
                  v14,
                  (_DWORD)v15,
                  a2,
                  a3,
                  BugCheckParameter4,
                  v64,
                  v72,
                  v71,
                  a8,
                  v70,
                  v69,
                  (__int64)&v53,
                  (__int64)v56);
        }
        if ( !v59 && (*(_DWORD *)(v14 + 144) & v37) != 0 )
        {
          BugCheckParameter4 = v67;
          v59 = FsRtlpOplockBreakByCacheFlags(v14, v15, a2, a3);
        }
      }
LABEL_133:
      if ( v53 && (a3 & 0x20000000) == 0 )
      {
        v45 = *(_QWORD *)(v14 + 152);
        *(_QWORD *)(v45 + 8) = 0LL;
        v46 = _InterlockedCompareExchange((volatile signed __int32 *)v45, 1, 0);
        if ( v46 )
          ExpReleaseFastMutexContended(v45, v46);
        KeAbPostRelease(v45);
      }
      if ( !v56[0] )
        return v59;
    }
    v25 = *(_QWORD *)(v14 + 152);
    BugCheckParameter2 = v25;
    CurrentThread = KeGetCurrentThread();
    v76 = 0LL;
    v62 = 0;
    v26 = (ULONG_PTR)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    if ( ++*(_BYTE *)(v26 + 794) != 1 )
      KeBugCheckEx(0x192u, v26, v25, KeGetCurrentIrql(), 0LL);
    v76 = 0LL;
    v75 = 0LL;
    v66 = 0;
    v27 = *(_BYTE *)(v26 + 792);
    if ( v27
      || ((v42 = 0, *(_BYTE *)(v26 + 870))
        ? (v43 = *(_BYTE *)(v26 + 870),
           *(_BYTE *)(v26 + 870) = 0,
           *(_BYTE *)(v26 + 792) |= v43,
           v27 = *(_BYTE *)(v26 + 792),
           v42 = 1)
        : (v27 = 0),
          (v65 = v42) != 0) )
    {
      _BitScanForward((unsigned int *)&v28, v27);
      v66 = v28;
      *(_BYTE *)(v26 + 792) = v27 & ~(1 << v28);
      v29 = *(_QWORD *)(v26 + 800) + 96 * v28;
      v75 = v29;
    }
    else
    {
      v29 = 0LL;
      v75 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
      {
LABEL_33:
        v76 = v29;
        if ( !v29 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v26 + 120), 0x10u);
LABEL_39:
          --*(_BYTE *)(v26 + 794);
          KiAbThreadRemoveBoosts(v26);
          v41 = (*(_WORD *)(v26 + 486))++ == 0xFFFF;
          if ( v41 && *(_QWORD *)(v26 + 152) != v26 + 152 )
            KiCheckForKernelApcDelivery(v31, v17, v32, v33);
          v34 = BugCheckParameter2;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
            ExpAcquireFastMutexContended(v34);
          if ( v29 )
            *(_BYTE *)(v29 + 26) |= 1u;
          *(_QWORD *)(v34 + 8) = CurrentThread;
          v22 = v58;
          i = 0x140000000uLL;
          goto LABEL_47;
        }
        if ( v25 >= 0xFFFF800000000000uLL )
        {
          if ( byte_140C4F908[((v25 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx(*(_QWORD *)(v26 + 184));
            v25 = BugCheckParameter2;
            goto LABEL_38;
          }
          v25 = BugCheckParameter2;
        }
        SessionId = -1;
LABEL_38:
        *(_DWORD *)(v29 + 40) = SessionId;
        *(_QWORD *)(v29 + 32) = v25 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_39;
      }
      EtwTraceAutoBoostEntryExhaustion(v26, v25, v22, 0x140000000uLL);
    }
    v25 = BugCheckParameter2;
    goto LABEL_33;
  }
  return v59;
}
