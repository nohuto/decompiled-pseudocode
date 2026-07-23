/*
 * XREFs of MiCreatePerSessionProtos @ 0x14061BAE4
 * Callers:
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x1405594C0 (MiCloneImageVad.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 *     MiFinishCreateSection @ 0x14071D000 (MiFinishCreateSection.c)
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x14024D58C (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x14024D5B8 (MiUpdatePerSessionProto.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDereferenceSubsectionProtos @ 0x14061BA7C (MiDereferenceSubsectionProtos.c)
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x14061BE10 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdi
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 *SessionProtosInSubsection; // rax
  int v11; // ecx
  int PerSessionProtos; // r13d
  __int64 v13; // r8
  __int64 *v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

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
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
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
  v14 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 20);
    goto LABEL_4;
  }
  PerSessionProtos = MiAllocatePerSessionProtos(v11, 0, 0, 0, (__int64)&v14);
  if ( PerSessionProtos >= 0 )
  {
    v13 = (__int64)v14;
    *((_DWORD *)v14 + 16) = a2;
    MiUpdatePerSessionProto((__int64)a1, v8, v13, 1);
    goto LABEL_4;
  }
  v15 = 0LL;
  while ( v7 != v8 )
  {
    MiDereferenceSubsectionProtos(v7, a2, &v15);
    v7 = *(_QWORD *)(v7 + 16);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFreeSubsectionProtos(&v15);
  return (unsigned int)PerSessionProtos;
}
