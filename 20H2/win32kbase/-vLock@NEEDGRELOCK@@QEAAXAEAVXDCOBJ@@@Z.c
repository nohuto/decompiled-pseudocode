/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C004D220
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C004D370 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct XDCOBJ *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v5 = v4;
  if ( v3
    && ((*(_DWORD *)(v3 + 36) & 0x8200) == 0x200 || !(unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5))
    && (*(_DWORD *)(v4 + 40) & 0x8000) == 0 )
  {
    *(_QWORD *)this = ghsemGreLock;
    EngAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 2LL);
  }
}
