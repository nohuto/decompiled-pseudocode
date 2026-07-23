/*
 * XREFs of NtFreeUserPhysicalPages @ 0x1408D1EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     LOCK_ADDRESS_SPACE @ 0x1402A195C (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     ExGetCallBackBlockRoutine @ 0x14037F340 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiGetAweInfoPartition @ 0x140546874 (MiGetAweInfoPartition.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x14054758C (MiPreparePhysicalPagesMdlForFree.c)
 *     MiReferenceAweHandle @ 0x14054812C (MiReferenceAweHandle.c)
 *     MiReturnProcessCommitment @ 0x14054AC54 (MiReturnProcessCommitment.c)
 *     MiCaptureUlongPtrArray @ 0x1408D0E54 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __cdecl NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  int v5; // ebx
  struct _KPROCESS *v6; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // r13
  PMDL Mdl; // rsi
  unsigned __int64 v13; // r10
  __int64 v14; // r12
  PRKPROCESS v15; // r14
  NTSTATUS v16; // edi
  IRP *Irp; // r10
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  struct _MDL *v21; // rcx
  struct _KTHREAD *v22; // rdi
  __int64 ByteOffset; // rax
  __int64 AweInfoPartition; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // r8
  signed __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int16 v29; // cx
  __int64 v30; // rax
  void *v31; // rcx
  KPROCESSOR_MODE v32; // [rsp+30h] [rbp-1108h]
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-1100h] BYREF
  __int64 v34; // [rsp+40h] [rbp-10F8h]
  __int64 v35; // [rsp+48h] [rbp-10F0h] BYREF
  void *Src; // [rsp+50h] [rbp-10E8h]
  unsigned __int64 v37; // [rsp+58h] [rbp-10E0h]
  unsigned __int64 v38; // [rsp+60h] [rbp-10D8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-10D0h]
  __int64 v40; // [rsp+70h] [rbp-10C8h]
  unsigned __int64 v41; // [rsp+78h] [rbp-10C0h]
  PULONG_PTR v42; // [rsp+80h] [rbp-10B8h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-10A8h] BYREF
  _BYTE v44[4144]; // [rsp+C0h] [rbp-1078h] BYREF

  Src = UserPfnArray;
  v42 = NumberOfPages;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v44, 0, sizeof(v44));
  PROCESS = 0LL;
  v35 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v32 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v8 = *NumberOfPages;
    v37 = *NumberOfPages;
    *NumberOfPages = 0LL;
  }
  else
  {
    v8 = *NumberOfPages;
    v37 = *NumberOfPages;
  }
  if ( !v8 )
    return -1073741584;
  v11 = 0LL;
  v34 = 0LL;
  Mdl = (PMDL)v44;
  result = MiReferenceAweHandle(ProcessHandle, 2u, PreviousMode, (PVOID *)&PROCESS, &v35);
  v13 = 0LL;
  if ( result >= 0 )
  {
    v14 = v35;
    if ( v35 )
    {
      v11 = *(_QWORD *)(MiSectionControlArea(v35) + 8);
      v34 = v11;
    }
    else
    {
      v15 = PROCESS;
      if ( PROCESS )
        goto LABEL_14;
      v5 = 4;
    }
    PROCESS = v6;
    v15 = v6;
LABEL_14:
    v38 = v13;
    if ( v11 || (v11 = *(_QWORD *)(v15[1].ActiveProcessorsPadding[8] + 392), (v34 = v11) != 0) )
    {
      v18 = ExGetCallBackBlockRoutine(v11);
      Mdl = (PMDL)Irp;
      v19 = 512LL;
      if ( v8 > 0x200 / v18 )
      {
        if ( v8 <= 0xC0000 / v18 )
          v19 = v8 * v18;
        else
          v19 = ~(v18 - 1) & 0xC0000;
        while ( v19 > 0x200 )
        {
          Mdl = IoAllocateMdl(0LL, (_DWORD)v19 << 12, 0, 0, Irp);
          Irp = 0LL;
          if ( Mdl )
            break;
          v19 = ~(v18 - 1) & (v18 + (v19 >> 1) - 1);
        }
      }
      if ( !Mdl )
      {
        Mdl = (PMDL)v44;
        v19 = 512LL;
      }
      v20 = v19 / v18;
      while ( 1 )
      {
        if ( v8 < v20 )
          v20 = v8;
        v41 = v20;
        Mdl->Next = (struct _MDL *)Irp;
        Mdl->Size = 8 * ((((v20 << 12) + 4095) >> 12) + 6);
        Mdl->MdlFlags = (__int16)Irp;
        Mdl->StartVa = Irp;
        Mdl->ByteOffset = (unsigned int)Irp;
        Mdl->ByteCount = (_DWORD)v20 << 12;
        v5 &= ~1u;
        v21 = Mdl + 1;
        if ( v32 == (_BYTE)Irp )
        {
          memmove(v21, Src, 8 * v20);
        }
        else
        {
          v16 = MiCaptureUlongPtrArray(v21, (char *)Src, v20);
          if ( v16 < 0 )
            goto LABEL_57;
        }
        v22 = CurrentThread;
        if ( CurrentThread->ApcState.Process != v15 )
        {
          KeStackAttachProcess(v15, &ApcState);
          v5 |= 1u;
        }
        if ( !v14 )
        {
          LOCK_ADDRESS_SPACE((__int64)v22, (__int64)v15);
          if ( (v15[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            break;
        }
        v16 = MiFreePhysicalPages(v34, (__int64)Mdl);
        ByteOffset = Mdl->ByteOffset;
        v40 = ByteOffset;
        Irp = 0LL;
        if ( ByteOffset )
        {
          if ( !v14 )
            MiReturnProcessCommitment((__int64)v15, v18 * (unsigned int)ByteOffset);
          v38 += ByteOffset;
        }
        if ( !v14 )
        {
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v15);
          Irp = 0LL;
        }
        if ( Mdl->ByteCount )
        {
          AweInfoPartition = MiGetAweInfoPartition(v34);
          v27 = -(__int64)(v18 * v26);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 7608), v27);
          v14 = v35;
          if ( !v35 )
          {
            v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PROCESS[1].Spare2[39], v27);
            v14 = v35;
          }
          Mdl->MdlFlags |= 2u;
          Mdl->ByteCount <<= 12;
          MiPreparePhysicalPagesMdlForFree((__int64)Mdl, v18, v27, v25);
          MiFreePagesFromMdl((ULONG_PTR)Mdl, 0);
          v8 = v37;
          v15 = PROCESS;
          Irp = 0LL;
        }
        v8 -= v40;
        v37 = v8;
        if ( v16 || !v8 )
          goto LABEL_57;
        if ( (v5 & 1) != 0 )
        {
          KeUnstackDetachProcess(&ApcState);
          v5 &= ~1u;
          Irp = 0LL;
        }
        v28 = v15[1].AffinityPadding[10];
        if ( v28 && ((v29 = *(_WORD *)(v28 + 8), v29 == 332) || v29 == 452) )
          v30 = 4LL;
        else
          v30 = 8LL;
        v20 = v41;
        Src = (char *)Src + v41 * v30;
      }
      UNLOCK_ADDRESS_SPACE((__int64)v22, (__int64)v15);
      v16 = -1073741558;
    }
    else
    {
      v16 = -1073741585;
    }
LABEL_57:
    if ( Mdl != (PMDL)v44 )
    {
      Mdl->MdlFlags &= ~2u;
      IoFreeMdl(Mdl);
    }
    if ( (v5 & 1) != 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( (v5 & 4) == 0 )
    {
      v31 = (void *)v14;
      if ( !v14 )
        v31 = v15;
      ObfDereferenceObjectWithTag(v31, 0x68506D4Du);
    }
    *v42 = v38;
    return v16;
  }
  return result;
}
