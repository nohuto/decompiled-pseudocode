/*
 * XREFs of EngDeleteDriverObj @ 0x1C0155EA0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C000B02C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     HmgLockEx @ 0x1C0083AE0 (HmgLockEx.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     FreeObject @ 0x1C008BB90 (FreeObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  HSEMAPHORE *v8; // rbx
  int v9; // r14d
  int v10; // r8d
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // r8d
  HSEMAPHORE *v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = HmgLockEx((unsigned int)hdo, 28, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(HSEMAPHORE **)(v6 + 40);
    v16 = v8;
    if ( !bCallBack )
      goto LABEL_12;
    EngAcquireSemaphore(v8[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v8[6], 11);
    v9 = (*(__int64 (__fastcall **)(__int64))(v7 + 32))(v7 + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)v8[6], v10);
    v11 = (struct _ERESOURCE *)v8[6];
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion(v12);
    }
    if ( v9 )
    {
LABEL_12:
      v13 = HmgRemoveObjectImpl((struct HOBJ__ *)hdo, bLocked + 1, 0, 1, 28, 0LL);
      if ( v13 )
      {
        PDEVOBJ::vUnreferencePdev((struct PDEV **)&v16, 0, v14);
        FreeObject(v13, 28);
        return 1;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
  }
  return 0;
}
