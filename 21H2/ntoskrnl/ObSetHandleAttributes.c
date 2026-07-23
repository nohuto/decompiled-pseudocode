/*
 * XREFs of ObSetHandleAttributes @ 0x1405F1710
 * Callers:
 *     NtSetInformationObject @ 0x1405F14A0 (NtSetInformationObject.c)
 * Callees:
 *     ExSetHandleAttributes @ 0x1402296FC (ExSetHandleAttributes.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ObpIsKernelHandle @ 0x140353610 (ObpIsKernelHandle.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140685770 (ExMapHandleToPointer.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  unsigned __int64 v4; // rbx
  char v5; // r12
  char v6; // r15
  _KPROCESS *Process; // r14
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  volatile signed __int64 *v14; // r10
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // ebx
  signed __int32 v19[8]; // [rsp+0h] [rbp-88h] BYREF
  _OWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF

  memset(v20, 0, sizeof(v20));
  v4 = a1;
  v5 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ObpIsKernelHandle(a1, a3) )
  {
    v4 ^= 0xFFFFFFFF80000000uLL;
    v8 = ObpKernelHandleTable;
    if ( Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v20);
      v5 = 1;
    }
  }
  else if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v8 = ObReferenceProcessHandleTable(Process);
    if ( !v8 )
      return 3221225480LL;
    v6 = 1;
  }
  else
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[8];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (__int64 *)ExMapHandleToPointer(v8, v4);
  v14 = v10;
  if ( v10 )
  {
    LOBYTE(v12) = *a2;
    v15 = (*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !*a2
      || (v11 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v15 + 24) ^ (unsigned __int64)BYTE1(v15),
          (*(_DWORD *)(ObTypeIndexTable[v11] + 72) & 2) == 0) )
    {
      v16 = ((_BYTE)v12 != 0 ? 2 : 0) | 1;
      if ( !a2[1] )
        v16 = (_BYTE)v12 != 0 ? 2 : 0;
      ExSetHandleAttributes((__int64)v14, v16, 3);
    }
    _InterlockedExchangeAdd64(v14, 1uLL);
    _InterlockedOr(v19, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    v17 = 0;
  }
  else
  {
    v17 = -1073741790;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12, v13);
  if ( v5 )
    KiUnstackDetachProcess((__int64)v20, 0LL);
  if ( v6 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return v17;
}
