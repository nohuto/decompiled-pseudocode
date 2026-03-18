/*
 * XREFs of ObSetHandleAttributes @ 0x1406C1510
 * Callers:
 *     NtSetInformationObject @ 0x1406C12A0 (NtSetInformationObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObpIsKernelHandle @ 0x140264120 (ObpIsKernelHandle.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ExSetHandleAttributes @ 0x1402FCD64 (ExSetHandleAttributes.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  __int64 v4; // rbx
  char v5; // r12
  char v6; // r15
  _KPROCESS *Process; // r14
  _DWORD *v8; // r9
  unsigned __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *v15; // r10
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  __int64 v19; // r8
  _DWORD *v20; // r9
  signed __int32 v22[8]; // [rsp+0h] [rbp-88h] BYREF
  _OWORD v23[3]; // [rsp+20h] [rbp-68h] BYREF

  memset(v23, 0, sizeof(v23));
  v4 = a1;
  v5 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ObpIsKernelHandle(a1, a3) )
  {
    v4 ^= 0xFFFFFFFF80000000uLL;
    v9 = ObpKernelHandleTable;
    if ( Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v23, v8);
      v5 = 1;
    }
  }
  else if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v9 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    if ( !v9 )
      return 3221225480LL;
    v6 = 1;
  }
  else
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[8];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExMapHandleToPointer((unsigned int *)v9, v4);
  v15 = v11;
  if ( v11 )
  {
    LOBYTE(v13) = *a2;
    v16 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !*a2
      || (v12 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v16 + 24) ^ (unsigned __int64)BYTE1(v16),
          (*(_DWORD *)(ObTypeIndexTable[v12] + 72) & 2) == 0) )
    {
      v17 = ((_BYTE)v13 != 0 ? 2 : 0) | 1;
      if ( !a2[1] )
        v17 = (_BYTE)v13 != 0 ? 2 : 0;
      ExSetHandleAttributes((__int64)v15, v17, 3);
    }
    _InterlockedExchangeAdd64(v15, 1uLL);
    _InterlockedOr(v22, 0);
    if ( *(_QWORD *)(v9 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v9 + 48), 0LL);
    v18 = 0;
  }
  else
  {
    v18 = -1073741790;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v12, v13, v14);
  if ( v5 )
    KiUnstackDetachProcess((__int64)v23, 0LL, v19, v20);
  if ( v6 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return v18;
}
