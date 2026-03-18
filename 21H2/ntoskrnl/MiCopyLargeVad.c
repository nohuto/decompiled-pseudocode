/*
 * XREFs of MiCopyLargeVad @ 0x140982B6C
 * Callers:
 *     MiMapChildLargePageVads @ 0x140980FA0 (MiMapChildLargePageVads.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140231450 (ExUnlockUserBuffer.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 */

__int64 __fastcall MiCopyLargeVad(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 VadEvent; // rax
  __int64 v7; // r8
  _KPROCESS *v8; // r9
  int v9; // edi
  int v11; // r12d
  int v12; // r13d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  size_t v17; // rdi
  _DWORD *v18; // r9
  void *v19; // rcx
  struct _MDL *v20; // r15
  void *v21; // [rsp+30h] [rbp-39h] BYREF
  PVOID v22; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-19h]
  _OWORD v26[3]; // [rsp+58h] [rbp-11h] BYREF

  BugCheckParameter1 = a1;
  Src = 0LL;
  P = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  memset(v26, 0, sizeof(v26));
  MiLocateLockedVadEvent(a3, 16);
  VadEvent = MiLocateVadEvent(a2, v5);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 8) = *(_BYTE *)(VadEvent + 8);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(VadEvent + 16);
  }
  KiStackAttachProcess(v8, 0LL, (__int64)v26, v8);
  ExAcquirePushLockExclusiveEx(a3 + 40, 0LL);
  v9 = MiMapUserLargePages(a3, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a3 + 40);
  KeAbPostRelease(a3 + 40);
  KiUnstackDetachProcess((__int64)v26, 0LL);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = 0;
  v12 = *(_DWORD *)(a3 + 48) & 0x200;
  v13 = 4292870144LL;
  v14 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v15 = v14 << 12;
  v16 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v14 + 1) << 12;
  while ( v16 )
  {
    v17 = v13;
    if ( v16 <= v13 )
      v17 = v16;
    v11 = ExLockUserBuffer(v15, v17, 1, IoReadAccess, &Src, (struct _MDL **)&P);
    if ( v11 < 0 )
      goto LABEL_11;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v26, v18);
    v19 = (void *)v15;
    if ( v12 )
    {
      v20 = 0LL;
      v21 = (void *)v15;
      v22 = 0LL;
    }
    else
    {
      v11 = ExLockUserBuffer(v15, v17, 1, IoWriteAccess, &v21, (struct _MDL **)&v22);
      if ( v11 < 0 )
      {
        KiUnstackDetachProcess((__int64)v26, 0LL);
        ExUnlockUserBuffer((struct _MDL *)P);
LABEL_11:
        v13 = (v17 >> 1) & 0x7FFFFFFFFFE00000LL;
        if ( v13 < 0x200000 )
          return (unsigned int)v11;
        continue;
      }
      v20 = (struct _MDL *)v22;
      v19 = v21;
    }
    memmove(v19, Src, v17);
    if ( !v12 )
      ExUnlockUserBuffer(v20);
    KiUnstackDetachProcess((__int64)v26, 0LL);
    ExUnlockUserBuffer((struct _MDL *)P);
    v16 -= v17;
    v15 += v17;
  }
  return (unsigned int)v11;
}
