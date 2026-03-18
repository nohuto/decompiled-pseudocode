/*
 * XREFs of ?DestroyCoreState@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C0339844
 * Callers:
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C033A184 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z @ 0x1C02C88D4 (-DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::DestroyCoreState(DXGPROTECTEDSESSION *this)
{
  __int64 v2; // r8
  void *v3; // rdx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1063LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      1063LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = (void *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    ADAPTER_DISPLAY::DdiDestroyProtectedSession(*((ADAPTER_DISPLAY **)this + 2), v3, v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  return 0LL;
}
