/*
 * XREFs of _UmfdSessionInitialize@0 @ 0xE5DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdCallSessionInitialize@@YGJXZ @ 0xE5E48 (-UmfdCallSessionInitialize@@YGJXZ.c)
 *     ?Initialize@UmfdAllocation@@SG_NXZ @ 0xE5FBC (-Initialize@UmfdAllocation@@SG_NXZ.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CG_NXZ @ 0xE6078 (-SessionInitialize@UmfdHostLifeTimeManager@@CG_NXZ.c)
 *     _bEnableFontDriver@8 @ 0xE6112 (_bEnableFontDriver@8.c)
 *     ?Create@?$CSortedVector@KK@NSInstrumentation@@SGPAV12@XZ @ 0xE61C6 (-Create@-$CSortedVector@KK@NSInstrumentation@@SGPAV12@XZ.c)
 */

int __stdcall UmfdSessionInitialize()
{
  GreInitializePushLock(&UmfdLookupPushLock);
  GreInitializePushLock(&UmfdWinLogonRequestLock);
  UmfdFontFileLookup = (PVOID)NSInstrumentation::CSortedVector<unsigned long,unsigned long>::Create();
  if ( UmfdFontFileLookup
    && bEnableFontDriver(UmfdEnableDriver, 5)
    && UmfdHostLifeTimeManager::SessionInitialize()
    && UmfdAllocation::Initialize()
    && UmfdCallSessionInitialize() >= 0 )
  {
    return 0;
  }
  else
  {
    return -1073741823;
  }
}
