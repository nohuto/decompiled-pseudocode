/*
 * XREFs of _vCleanupPrivateFonts@0 @ 0xA770E
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QAEXW4eCleanupMode@1@PAK@Z @ 0x1D069A (-bCleanupPFT@PUBLIC_PFTOBJ@@QAEXW4eCleanupMode@1@PAK@Z.c)
 */

int __thiscall vCleanupPrivateFonts(struct PFT *this)
{
  int result; // eax
  struct PFT *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this;
  result = _ghsemPublicPFT;
  if ( _ghsemPublicPFT )
  {
    GreAcquireSemaphore(_ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
    v2 = gpPFTPrivate;
    if ( gpPFTPrivate )
      PUBLIC_PFTOBJ::bCleanupPFT(&v2, 0, 0);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
    return GreReleaseSemaphoreInternal(_ghsemPublicPFT);
  }
  return result;
}
