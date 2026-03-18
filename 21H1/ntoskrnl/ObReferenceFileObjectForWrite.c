/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x1405E4810
 * Callers:
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExLockHandleTableEntry @ 0x140264150 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140264320 (ExSlowReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x14030B74C (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x140319EF0 (ExFastReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x14062B830 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406B626C (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x1408D8154 (ObpAuditObjectAccess.c)
 */

__int64 __fastcall ObReferenceFileObjectForWrite(
        __int64 BugCheckParameter1,
        __int64 a2,
        struct _DMA_ADAPTER **a3,
        _DWORD *a4)
{
  __int128 v4; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v6; // rdi
  ULONG_PTR v8; // r12
  _KPROCESS *Process; // rax
  ULONG_PTR v10; // rbx
  __int128 *v11; // r14
  __int64 v12; // rax
  signed __int64 v13; // r15
  __int64 v14; // rsi
  __int128 v15; // rt0
  unsigned __int8 v16; // tt
  bool v17; // zf
  struct _DMA_ADAPTER *v18; // rbx
  int v19; // r15d
  int v20; // edx
  __int64 v21; // rsi
  int v22; // edx
  unsigned __int64 v23; // rcx
  int v25; // eax
  unsigned int v26; // edi
  signed __int32 v27[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v29; // [rsp+80h] [rbp+8h]
  char v30; // [rsp+88h] [rbp+10h]

  *((_QWORD *)&v4 + 1) = a2;
  v30 = BYTE8(v4);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v8 = BugCheckParameter1;
  v28 = 0LL;
  if ( (int)BugCheckParameter1 < 0 )
  {
    if ( !BYTE8(v4) && BugCheckParameter1 != -1 && BugCheckParameter1 != -2 )
    {
      v10 = ObpKernelHandleTable;
      v8 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
      v29 = ObpKernelHandleTable;
      goto LABEL_3;
    }
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    v10 = Process[1].AffinityPadding[8];
    v29 = v10;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
    {
LABEL_3:
      --CurrentThread->KernelApcDisable;
      if ( (v8 & 0x3FC) != 0 && (*(_QWORD *)&v4 = ExpLookupHandleTableEntry(v10, v8), (v11 = (__int128 *)v4) != 0LL) )
      {
        _m_prefetchw((const void *)v4);
        v12 = *(_QWORD *)v4;
        v13 = *((_QWORD *)v11 + 1);
        *((_QWORD *)&v28 + 1) = v13;
        *(_QWORD *)&v28 = v12;
        v14 = v12;
        while ( (v14 & 0x1FFFE) != 0 )
        {
          if ( (v14 & 1) != 0 )
          {
            BugCheckParameter1 = v13;
            *(_QWORD *)&v15 = v14;
            *((_QWORD *)&v15 + 1) = v13;
            v16 = _InterlockedCompareExchange128((volatile signed __int64 *)v11, v13, v14 - 2, (signed __int64 *)&v15);
            v4 = v15;
            v14 = v15;
            v28 = v15;
            v13 = *((_QWORD *)&v15 + 1);
            if ( v16 )
            {
              if ( (unsigned __int16)((unsigned __int64)v4 >> 1) != 16 )
              {
                v6 = ((__int64)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                goto LABEL_10;
              }
              *(_QWORD *)&v28 = v4 ^ ((unsigned int)v4 ^ (2 * (unsigned int)((unsigned __int64)v4 >> 1) - 2)) & 0x1FFFE;
              v6 = ((__int64)v28 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              ObpIncrPointerCountEx((volatile signed __int64 *)v6, 32752);
              LODWORD(v4) = ExFastReplenishHandleTableEntry(
                              (volatile signed __int64 *)v11,
                              (unsigned __int64 *)&v28,
                              32752);
              BugCheckParameter1 = (int)v4;
              if ( (_DWORD)v4 )
              {
                BugCheckParameter1 = (unsigned int)-(int)v4;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v6, (int)BugCheckParameter1);
              }
LABEL_30:
              LODWORD(v13) = DWORD2(v28);
              v14 = v28;
              goto LABEL_10;
            }
            v10 = v29;
          }
          else
          {
            ExpBlockOnLockedHandleEntry(v10, v11);
            _m_prefetchw(v11);
            v13 = *((_QWORD *)v11 + 1);
            *(_QWORD *)&v28 = *(_QWORD *)v11;
            v14 = v28;
            *((_QWORD *)&v28 + 1) = v13;
          }
        }
        if ( ExLockHandleTableEntry(v10, (signed __int64 *)v11) )
        {
          v6 = (*(__int64 *)v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          v28 = *v11;
          v25 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v11);
          ObpIncrPointerCountEx((volatile signed __int64 *)v6, v25 + 1);
          _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 1uLL);
          BugCheckParameter1 = v10 + 48;
          _InterlockedOr(v27, 0);
          if ( *(_QWORD *)(v10 + 48) )
          {
            ExfUnblockPushLock((volatile __int64 *)BugCheckParameter1, 0LL);
            LODWORD(v13) = DWORD2(v28);
            v14 = v28;
            goto LABEL_10;
          }
          goto LABEL_30;
        }
      }
      else
      {
        LODWORD(v13) = DWORD2(v28);
        v14 = v28;
      }
      if ( v8 )
      {
        ExHandleLogBadReference(v10, v8, KeGetCurrentThread()->PreviousMode);
        LODWORD(v13) = DWORD2(v28);
        v14 = v28;
      }
      v11 = 0LL;
LABEL_10:
      v17 = CurrentThread->KernelApcDisable++ == -1;
      if ( v17
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(BugCheckParameter1, *((__int64 *)&v4 + 1), (__int64)a3, a4);
      }
      if ( !v11 )
      {
        v26 = -1073741816;
LABEL_36:
        *a3 = 0LL;
        return v26;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v6, 1, 1u, 0x746C6644u);
      v18 = (struct _DMA_ADAPTER *)(v6 + 48);
      if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 + 24) ^ (unsigned __int64)BYTE1(v6)] == IoFileObjectType )
      {
        v19 = v13 & 0x1FFFFFF;
        v20 = ~(unsigned __int8)(*(_DWORD *)(v6 + 128) >> 5) & 4;
        a4[1] = v19;
        v21 = (v14 >> 17) & 7;
        v22 = v20 | 2;
        *a4 = v21;
        if ( (v19 & v22) != 0 )
        {
          if ( !v30 )
            goto LABEL_22;
          if ( (*(_BYTE *)(v6 + 26) & 0x40) == 0 )
            goto LABEL_22;
          v23 = v6 - ObpInfoMaskToOffset[*(_BYTE *)(v6 + 26) & 0x7F];
          if ( !*(_BYTE *)(*(_QWORD *)v23 + 24LL) )
            goto LABEL_22;
          if ( *(_QWORD *)(*(_QWORD *)v23 + 16LL) != 1LL )
          {
            LODWORD(v21) = *a4;
LABEL_22:
            if ( (v21 & 4) == 0 || !v30 || (unsigned __int8)ObpAuditObjectAccess(v29, v8, (_DWORD)v11, v6, v22) )
            {
              *a3 = v18;
              return 0LL;
            }
            v26 = -1073741816;
            goto LABEL_53;
          }
          v26 = -1073700858;
        }
        else
        {
          v26 = -1073741790;
        }
      }
      else
      {
        v26 = -1073741788;
      }
LABEL_53:
      HalPutDmaAdapter(v18);
      goto LABEL_36;
    }
  }
  return 3221225480LL;
}
