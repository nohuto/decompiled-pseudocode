/*
 * XREFs of MiCreatePerSessionProtos @ 0x1406E68A4
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x140553790 (MiCloneImageVad.c)
 *     MiFinishCreateSection @ 0x1406304C0 (MiFinishCreateSection.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x140745AB0 (MiMapSystemImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiLocateSessionProtosInSubsection @ 0x14031F0E4 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x14031F110 (MiUpdatePerSessionProto.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x1406E683C (MiDereferenceSubsectionProtos.c)
 *     MiAllocatePerSessionProtos @ 0x1406E69C8 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1406E6BD0 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdi
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *SessionProtosInSubsection; // rax
  int v14; // ecx
  int PerSessionProtos; // r13d
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

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
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
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
  v20 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 20);
    goto LABEL_4;
  }
  PerSessionProtos = MiAllocatePerSessionProtos(v14, 0, 0, 0, (__int64)&v20);
  if ( PerSessionProtos >= 0 )
  {
    v16 = (__int64)v20;
    *((_DWORD *)v20 + 16) = a2;
    MiUpdatePerSessionProto((__int64)a1, v8, v16, 1);
    goto LABEL_4;
  }
  v21 = 0LL;
  while ( v7 != v8 )
  {
    MiDereferenceSubsectionProtos(v7, a2, &v21);
    v7 = *(_QWORD *)(v7 + 16);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v17, v18, v19);
  MiFreeSubsectionProtos(&v21);
  return (unsigned int)PerSessionProtos;
}
