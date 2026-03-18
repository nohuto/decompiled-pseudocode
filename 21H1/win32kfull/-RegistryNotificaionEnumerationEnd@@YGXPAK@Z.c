/*
 * XREFs of ?RegistryNotificaionEnumerationEnd@@YGXPAK@Z @ 0x1EB769
 * Callers:
 *     _GreAddFontResourceWInternal@28 @ 0xDC42C (_GreAddFontResourceWInternal@28.c)
 * Callees:
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QAEXW4eCleanupMode@1@PAK@Z @ 0x1D069A (-bCleanupPFT@PUBLIC_PFTOBJ@@QAEXW4eCleanupMode@1@PAK@Z.c)
 */

void __thiscall RegistryNotificaionEnumerationEnd(_DWORD *this)
{
  struct _FONTHASH **v2; // [esp+8h] [ebp-4h] BYREF

  if ( _ghsemPublicPFT )
  {
    GreAcquireSemaphore(_ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
    v2 = gpPFTPublic;
    if ( gpPFTPublic )
      PUBLIC_PFTOBJ::bCleanupPFT((PFTOBJ *)&v2, 1, this);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
    GreReleaseSemaphoreInternal(_ghsemPublicPFT);
  }
}
