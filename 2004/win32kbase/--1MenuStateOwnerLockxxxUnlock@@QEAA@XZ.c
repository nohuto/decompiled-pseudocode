/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C00CEAEC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(MenuStateOwnerLockxxxUnlock *this)
{
  if ( *(_QWORD *)this )
  {
    if ( qword_1C0252118 )
      qword_1C0252118();
  }
}
