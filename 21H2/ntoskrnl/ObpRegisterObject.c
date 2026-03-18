/*
 * XREFs of ObpRegisterObject @ 0x140986424
 * Callers:
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x14072DDC0 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x1402A1054 (RtlStringCbCopyA.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpGetObjectRefInfo @ 0x140985CD8 (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x140986128 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x1409E2AC8 (EtwTraceObject.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall ObpRegisterObject(__int64 a1)
{
  struct _KTHREAD *v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // r9
  __int64 Pool2; // rax
  unsigned int v6; // r8d
  char *v7; // rdi
  char v8; // al
  char v9; // cl
  char *v12; // [rsp+48h] [rbp+10h] BYREF

  if ( (xmmword_140D06910 & 0x80u) != 0LL )
    EtwTraceObject(4400LL, a1);
  LOBYTE(v2) = ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x73) != 0
      && ((ObpTraceFlags & 0x20) == 0 || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) != 0)
      && ObpIsObjectPoolTagTraced(a1)
      && (int)ObpGetObjectRefInfo(a1, (unsigned __int16 **)&v12) >= 0 )
    {
      v4 = v12;
      if ( v12 )
        goto LABEL_12;
      Pool2 = ExAllocatePool2(64LL, 6136LL, 1951556175LL);
      v12 = (char *)Pool2;
      v4 = (char *)Pool2;
      if ( Pool2 )
      {
        v6 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
        *(_QWORD *)(Pool2 + 8) = *((_QWORD *)ObpObjectTable + v6);
        *((_QWORD *)ObpObjectTable + v6) = Pool2;
        *(_WORD *)(Pool2 + 34) = 508;
LABEL_12:
        ++ObpNumTracedObjects;
        *(_QWORD *)v4 = a1;
        v7 = v12;
        RtlStringCbCopyA(
          v12 + 16,
          0x10uLL,
          (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors);
        *((_WORD *)v7 + 16) = 0;
        memset(v7 + 36, 0, 12LL * *((unsigned __int16 *)v7 + 17));
        v8 = ObpTraceFlags;
        v9 = *(_BYTE *)(a1 + 25) | 1;
        *(_BYTE *)(a1 + 25) = v9;
        if ( (v8 & 0x40) != 0 )
          *(_BYTE *)(a1 + 25) = v9 | 2;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v2 = KeGetCurrentThread();
    if ( v2->SpecialApcDisable++ == -1 )
    {
      v2 = (struct _KTHREAD *)((char *)v2 + 152);
      if ( *(struct _KTHREAD **)&v2->Header.Lock != v2 )
        LOBYTE(v2) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v2;
}
