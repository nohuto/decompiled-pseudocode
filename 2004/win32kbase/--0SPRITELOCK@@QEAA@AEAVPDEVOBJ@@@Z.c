/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0093CE0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0147884 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0093DA0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rbx
  struct _ERESOURCE *v10; // rbx

  *(_QWORD *)this = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( IsThreadCrossSessionAttached((__int64)this)
    || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
    || (v9 = *ThreadWin32Thread) == 0
    || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(v9 + 104) && !*(_DWORD *)(v9 + 108) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 88LL;
    v10 = ghsemSprite;
    if ( ghsemSprite )
    {
      PsEnterPriorityRegion(v6);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(v6, v5, v7, (_DWORD)ghsemSprite, 5, (__int64)L"ghsemSprite");
  }
  return this;
}
