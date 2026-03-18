/*
 * XREFs of ObpDecrementHandleCount @ 0x1407A2FA0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     ObCompleteObjectDuplication @ 0x14066B204 (ObCompleteObjectDuplication.c)
 *     AlpcHandleDataDestroyProcedure @ 0x1406C2CA0 (AlpcHandleDataDestroyProcedure.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     ObCloseHandleTableEntry @ 0x1407A2E10 (ObCloseHandleTableEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1407A33E8 (ObpReleaseHandleInfo.c)
 */

void __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbp
  signed __int64 v6; // rdi
  void (__fastcall *v7)(_KPROCESS *, __int64, _QWORD, signed __int64); // r10
  char v8; // r12
  struct _LIST_ENTRY *v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  _DWORD *v12; // r9
  unsigned int v13; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v14[3]; // [rsp+38h] [rbp-70h] BYREF

  v13 = 0;
  v4 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  memset(v14, 0, sizeof(v14));
  v5 = ObTypeIndexTable[v4];
  if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
    v6 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v13);
    ExReleasePushLockEx(a2 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  v7 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128);
  if ( v7 )
  {
    v8 = 0;
    v9 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process == BugCheckParameter1 )
    {
      v7(BugCheckParameter1, a2 + 48, v13, v6);
    }
    else
    {
      v8 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v9 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v14, v12);
      (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128))(
        BugCheckParameter1,
        a2 + 48,
        v13,
        v6);
    }
    if ( v8 )
    {
      KiUnstackDetachProcess((__int64)v14, 0LL);
      PsDetachSiloFromCurrentThread(v9);
    }
  }
  if ( v6 == 1 )
    ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
}
