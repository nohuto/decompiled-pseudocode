/*
 * XREFs of _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C00236B4
 * Callers:
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 * Callees:
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0021490 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 */

__int64 anonymous_namespace_::CFrameIdGenerator::Initialize()
{
  _DWORD *v0; // rax
  struct A0xad387374::CFrameIdGenerator *v1; // rbx

  v0 = (_DWORD *)Win32AllocPool(56LL, 1885947971LL);
  v1 = (struct A0xad387374::CFrameIdGenerator *)v0;
  if ( v0 )
  {
    *v0 = 1;
    CInpLockGuard::Initialize((CInpLockGuard *)(v0 + 2));
  }
  else
  {
    v1 = 0LL;
  }
  `anonymous namespace'::CFrameIdGenerator::s_pInstance = v1;
  return v1 == 0LL ? 0xC0000017 : 0;
}
