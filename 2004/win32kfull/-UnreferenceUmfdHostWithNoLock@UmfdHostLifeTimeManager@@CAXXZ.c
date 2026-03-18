/*
 * XREFs of ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C010EA8C
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C010E240 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C010E548 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C010E6E0 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     <none>
 */

void UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock(void)
{
  if ( UmfdHostLifeTimeManager::s_UmfdHostProcess )
  {
    ObfDereferenceObject(UmfdHostLifeTimeManager::s_UmfdHostProcess);
    UmfdHostLifeTimeManager::s_UmfdHostProcess = 0LL;
  }
}
