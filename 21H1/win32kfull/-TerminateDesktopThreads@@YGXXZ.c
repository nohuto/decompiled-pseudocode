/*
 * XREFs of ?TerminateDesktopThreads@@YGXXZ @ 0xCCBCA
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _IPostQuitMessage@8 @ 0xABFB2 (_IPostQuitMessage@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __stdcall TerminateDesktopThreads()
{
  ULONG v0; // edi
  void *v1; // ecx
  union _LARGE_INTEGER Timeout; // [esp+10h] [ebp-10h] BYREF
  PVOID Object; // [esp+18h] [ebp-8h] BYREF
  PVOID v4; // [esp+1Ch] [ebp-4h]

  Object = 0;
  v4 = 0;
  v0 = 0;
  if ( _gpTouchProcessor )
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(_gpTouchProcessor);
  v1 = (void *)_gTermIO[8];
  if ( v1 )
  {
    Object = (PVOID)_gTermIO[8];
    ObfReferenceObject(v1);
    v0 = 1;
    if ( _gTermIO[7] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(8, 10, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      _gTermIO[0] |= 8u;
      KeSetEvent((PRKEVENT)_gTermIO[7], 1, 0);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(8, 11, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      IPostQuitMessage(_gTermIO[2], 0);
    }
    _gdwHydraHint |= (unsigned int)&loc_80000;
  }
  else if ( _gTermIO[1] )
  {
    HMAssignmentUnlock(&_gTermIO[1]);
  }
  if ( ::Object )
  {
    v4 = ::Object;
    ObfReferenceObject(::Object);
    ++v0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(7, 12, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    if ( dword_273C50 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(8, 13, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      gTermNOIO |= 8u;
      KeSetEvent(dword_273C50, 1, 0);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(8, 14, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      IPostQuitMessage(dword_273C3C, 0);
    }
  }
  if ( v0 )
  {
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(7, 15, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v0, &Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0) == 258 )
      _gdwHydraHint |= 0x800000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(7, 16, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    ObfDereferenceObject(Object);
    if ( v0 > 1 )
      ObfDereferenceObject(v4);
    EnterCrit(0, 1);
  }
  _gdwHydraHint |= 0x800u;
}
