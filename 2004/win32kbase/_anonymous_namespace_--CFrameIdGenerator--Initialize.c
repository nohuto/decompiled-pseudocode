/*
 * XREFs of _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C0034A40
 * Callers:
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 * Callees:
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C000BA28 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
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
