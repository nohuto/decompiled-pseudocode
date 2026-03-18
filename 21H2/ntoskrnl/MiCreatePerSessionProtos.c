/*
 * XREFs of MiCreatePerSessionProtos @ 0x1406DDB48
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x1405B9904 (MiCloneImageVad.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiFinishCreateSection @ 0x1406FD9F0 (MiFinishCreateSection.c)
 *     MiMapSystemImage @ 0x140761714 (MiMapSystemImage.c)
 *     MiInitializeImageExtents @ 0x1409706E4 (MiInitializeImageExtents.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x140255844 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x140255870 (MiUpdatePerSessionProto.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x1406DDAE0 (MiDereferenceSubsectionProtos.c)
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406DDE9C (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rsi
  volatile signed __int64 *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbp
  bool v9; // zf
  __int64 *SessionProtosInSubsection; // rax
  int v12; // ecx
  int PerSessionProtos; // r13d
  __int64 v14; // r8
  __int64 *v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (volatile signed __int64 *)(v5 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  v7 = (__int64)(a1 + 16);
  v8 = (__int64)(a1 + 16);
  if ( a1 == (__int64 *)-128LL )
  {
LABEL_5:
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  while ( (*(_BYTE *)(v8 + 34) & 2) == 0 )
  {
LABEL_4:
    v8 = *(_QWORD *)(v8 + 16);
    if ( !v8 )
      goto LABEL_5;
  }
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(v8, a2);
  v15 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 20);
    goto LABEL_4;
  }
  PerSessionProtos = MiAllocatePerSessionProtos(v12, 0, 0, 0, (__int64)&v15);
  if ( PerSessionProtos >= 0 )
  {
    v14 = (__int64)v15;
    *((_DWORD *)v15 + 16) = a2;
    MiUpdatePerSessionProto((__int64)a1, v8, v14, 1);
    goto LABEL_4;
  }
  v16 = 0LL;
  while ( v7 != v8 )
  {
    MiDereferenceSubsectionProtos(v7, a2, &v16);
    v7 = *(_QWORD *)(v7 + 16);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiFreeSubsectionProtos(&v16);
  return (unsigned int)PerSessionProtos;
}
