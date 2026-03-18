/*
 * XREFs of ObpDecrementHandleCount @ 0x14068AA54
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x14066B79C (ObCompleteObjectDuplication.c)
 *     AlpcHandleDataDestroyProcedure @ 0x14068A9E0 (AlpcHandleDataDestroyProcedure.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x14068AC10 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1406B9214 (ObpReleaseHandleInfo.c)
 */

__int64 __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbp
  signed __int64 v6; // rdi
  void (__fastcall *v7)(_KPROCESS *, __int64, _QWORD, signed __int64); // r10
  __int64 result; // rax
  char v9; // r12
  struct _LIST_ENTRY *v10; // r15
  __int64 v11; // r8
  _DWORD *v12; // r9
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  _DWORD *v14; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v16; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v17[3]; // [rsp+38h] [rbp-70h] BYREF

  v16 = 0;
  v4 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  memset(v17, 0, sizeof(v17));
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
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v16);
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
    v9 = 0;
    v10 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process == BugCheckParameter1 )
    {
      v7(BugCheckParameter1, a2 + 48, v16, v6);
    }
    else
    {
      v9 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v10 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v17, v14);
      (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128))(
        BugCheckParameter1,
        a2 + 48,
        v16,
        v6);
    }
    if ( v9 )
    {
      KiUnstackDetachProcess((__int64)v17, 0LL, v11, v12);
      PsDetachSiloFromCurrentThread(v10);
    }
  }
  result = ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
  return result;
}
