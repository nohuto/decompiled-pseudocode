/*
 * XREFs of ObpDecrementHandleCount @ 0x1405E04F8
 * Callers:
 *     AlpcHandleDataDestroyProcedure @ 0x1405DFE50 (AlpcHandleDataDestroyProcedure.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x14065718C (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x1405E06C0 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1406B2300 (ObpReleaseHandleInfo.c)
 */

void __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbp
  signed __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v8)(_KPROCESS *, __int64, _QWORD, signed __int64); // r10
  char v9; // r12
  struct _LIST_ENTRY *v10; // r15
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  unsigned int v12; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v13[3]; // [rsp+38h] [rbp-70h] BYREF

  v12 = 0;
  v4 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  memset(v13, 0, sizeof(v13));
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
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v12);
    ExReleasePushLockEx(a2 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  v8 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128);
  if ( v8 )
  {
    v9 = 0;
    v10 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      v9 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v10 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v13);
      v8 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128);
    }
    v8(BugCheckParameter1, a2 + 48, v12, v6);
    if ( v9 )
    {
      KiUnstackDetachProcess((__int64)v13, 0);
      PsDetachSiloFromCurrentThread(v10);
    }
  }
  if ( v6 == 1 )
    ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
}
