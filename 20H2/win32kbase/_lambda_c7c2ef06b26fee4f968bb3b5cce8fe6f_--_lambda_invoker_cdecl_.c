/*
 * XREFs of _lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_ @ 0x1C00BE490
 * Callers:
 *     <none>
 * Callees:
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0007950 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00220E8 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

void lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_()
{
  CDeviceIdentity *v0; // rcx
  struct DEVICEINFO *i; // rbx
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
    (CInpLockSharedIfNeeded *)&v2,
    (struct CInpPushLock *)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    CDeviceIdentity::SendNewIdentityCreated(v0, *((struct RawInputManagerDeviceObject **)i + 4));
  if ( !v3 )
  {
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
