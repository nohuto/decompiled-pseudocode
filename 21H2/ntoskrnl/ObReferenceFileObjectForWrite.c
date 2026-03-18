/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x14071E230
 * Callers:
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x14025032C (ExHandleLogBadReference.c)
 *     ExFastReplenishHandleTableEntry @ 0x140251008 (ExFastReplenishHandleTableEntry.c)
 *     HalPutDmaAdapter @ 0x140251C40 (HalPutDmaAdapter.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1402AC270 (ExSlowReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObpIncrPointerCountEx @ 0x1402F3424 (ObpIncrPointerCountEx.c)
 *     ExLockHandleTableEntry @ 0x1402F344C (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x140733340 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407ED9FC (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x1409851A4 (ObpAuditObjectAccess.c)
 */

__int64 __fastcall ObReferenceFileObjectForWrite(
        ULONG_PTR BugCheckParameter1,
        char a2,
        struct _DMA_ADAPTER **a3,
        _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v5; // rdi
  ULONG_PTR v7; // r12
  _KPROCESS *Process; // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax
  signed __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  __int128 v16; // rt0
  unsigned __int8 v17; // tt
  bool v18; // zf
  struct _DMA_ADAPTER *v19; // rbx
  int v20; // r15d
  int v21; // edx
  __int64 v22; // rsi
  int v23; // edx
  unsigned __int64 v24; // rcx
  int v26; // eax
  unsigned int v27; // edi
  int v28; // ecx
  signed __int32 v29[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+80h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v7 = BugCheckParameter1;
  v30 = 0LL;
  if ( (BugCheckParameter1 & 0x80000000) != 0LL )
  {
    if ( !a2 && BugCheckParameter1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = ObpKernelHandleTable;
      v7 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
      v31 = ObpKernelHandleTable;
      goto LABEL_3;
    }
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    v9 = Process[1].Affinity.StaticBitmap[28];
    v31 = v9;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
    {
LABEL_3:
      --CurrentThread->KernelApcDisable;
      if ( (v7 & 0x3FC) != 0 && (v10 = (__int64 *)ExpLookupHandleTableEntry(v9, v7), (v11 = v10) != 0LL) )
      {
        _m_prefetchw(v10);
        v12 = *v10;
        v13 = v11[1];
        *((_QWORD *)&v30 + 1) = v13;
        *(_QWORD *)&v30 = v12;
        v14 = v12;
        while ( (v14 & 0x1FFFE) != 0 )
        {
          if ( (v14 & 1) != 0 )
          {
            *(_QWORD *)&v16 = v14;
            *((_QWORD *)&v16 + 1) = v13;
            v17 = _InterlockedCompareExchange128(v11, v13, v14 - 2, (signed __int64 *)&v16);
            v15 = v16;
            v14 = v16;
            v30 = v16;
            v13 = *((_QWORD *)&v16 + 1);
            if ( v17 )
            {
              if ( (unsigned __int16)((unsigned __int64)v15 >> 1) != 16 )
              {
                v5 = (v15 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                goto LABEL_10;
              }
              *(_QWORD *)&v30 = ((unsigned int)v14 ^ (2 * (unsigned int)((unsigned __int64)v15 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v14;
              v5 = ((__int64)v30 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              ObpIncrPointerCountEx((volatile signed __int64 *)v5, 32752);
              v28 = ExFastReplenishHandleTableEntry(v11, (signed __int64 *)&v30, 32752);
              if ( v28 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)v5, -v28);
LABEL_29:
              LODWORD(v13) = DWORD2(v30);
              v14 = v30;
              goto LABEL_10;
            }
            v9 = v31;
          }
          else
          {
            ExpBlockOnLockedHandleEntry(v9, v11, v14);
            _m_prefetchw(v11);
            v13 = v11[1];
            *(_QWORD *)&v30 = *v11;
            v14 = v30;
            *((_QWORD *)&v30 + 1) = v13;
          }
        }
        if ( ExLockHandleTableEntry(v9, v11) )
        {
          v5 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          v30 = *(_OWORD *)v11;
          v26 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v11);
          ObpIncrPointerCountEx((volatile signed __int64 *)v5, v26 + 1);
          _InterlockedExchangeAdd64(v11, 1uLL);
          _InterlockedOr(v29, 0);
          if ( *(_QWORD *)(v9 + 48) )
          {
            ExfUnblockPushLock((volatile __int64 *)(v9 + 48), 0LL);
            LODWORD(v13) = DWORD2(v30);
            v14 = v30;
            goto LABEL_10;
          }
          goto LABEL_29;
        }
      }
      else
      {
        LODWORD(v13) = DWORD2(v30);
        v14 = v30;
      }
      if ( v7 )
      {
        ExHandleLogBadReference(v9, v7, KeGetCurrentThread()->PreviousMode);
        LODWORD(v13) = DWORD2(v30);
        v14 = v30;
      }
      v11 = 0LL;
LABEL_10:
      v18 = CurrentThread->KernelApcDisable++ == -1;
      if ( v18
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( !v11 )
      {
        v27 = -1073741816;
LABEL_35:
        *a3 = 0LL;
        return v27;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v5, 1, 1u, 0x746C6644u);
      v19 = (struct _DMA_ADAPTER *)(v5 + 48);
      if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v5 + 24) ^ (unsigned __int64)BYTE1(v5)] == IoFileObjectType )
      {
        v20 = v13 & 0x1FFFFFF;
        v21 = ~(unsigned __int8)(*(_DWORD *)(v5 + 128) >> 5) & 4;
        a4[1] = v20;
        v22 = (v14 >> 17) & 7;
        v23 = v21 | 2;
        *a4 = v22;
        if ( (v20 & v23) != 0 )
        {
          if ( !a2 )
            goto LABEL_22;
          if ( (*(_BYTE *)(v5 + 26) & 0x40) == 0 )
            goto LABEL_22;
          v24 = v5 - ObpInfoMaskToOffset[*(_BYTE *)(v5 + 26) & 0x7F];
          if ( !*(_BYTE *)(*(_QWORD *)v24 + 24LL) )
            goto LABEL_22;
          if ( *(_QWORD *)(*(_QWORD *)v24 + 16LL) != 1LL )
          {
            LODWORD(v22) = *a4;
LABEL_22:
            if ( (v22 & 4) == 0 || !a2 || (unsigned __int8)ObpAuditObjectAccess(v31, v7, (_DWORD)v11, v5, v23) )
            {
              *a3 = v19;
              return 0LL;
            }
            v27 = -1073741816;
            goto LABEL_52;
          }
          v27 = -1073700858;
        }
        else
        {
          v27 = -1073741790;
        }
      }
      else
      {
        v27 = -1073741788;
      }
LABEL_52:
      HalPutDmaAdapter(v19);
      goto LABEL_35;
    }
  }
  return 3221225480LL;
}
