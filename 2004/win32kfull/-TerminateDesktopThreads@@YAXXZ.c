/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C00BFF3C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00C02E4 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     IPostQuitMessage @ 0x1C00C0274 (IPostQuitMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall TerminateDesktopThreads(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG v3; // ebx
  void *v4; // rcx
  int v5; // edx
  int v6; // ecx
  PVOID v7; // rcx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  __int128 Object; // [rsp+40h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  Object = 0LL;
  if ( gpTouchProcessor )
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(gpTouchProcessor);
  v4 = (void *)gTermIO[8];
  if ( v4 )
  {
    *(_QWORD *)&Object = gTermIO[8];
    ObfReferenceObject(v4);
    v3 = 1;
    if ( gTermIO[7] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(v6, v5, 8, 10, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      LODWORD(gTermIO[0]) |= 8u;
      KeSetEvent((PRKEVENT)gTermIO[7], 1, 0);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(v6, v5, 8, 11, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      IPostQuitMessage(gTermIO[2], 0LL);
    }
    gdwHydraHint |= 0x80000u;
  }
  else if ( gTermIO[1] )
  {
    HMAssignmentUnlock(&gTermIO[1]);
  }
  v7 = ::Object;
  if ( ::Object )
  {
    *((_QWORD *)&Object + 1) = ::Object;
    ObfReferenceObject(::Object);
    ++v3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(v9, v8, 7, 12, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    if ( Event )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_(v9, v8, 8, 13, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      gTermNOIO |= 8u;
      KeSetEvent(Event, 1, 0);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_(v9, v8, 8, 14, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      IPostQuitMessage(qword_1C0339FE0, 0LL);
    }
  }
  if ( v3 )
  {
    if ( gdwInAtomicOperation )
    {
      v7 = (PVOID)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation, a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v11, v10, 7, 15, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v3, (PVOID *)&Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL) == 258 )
      gdwHydraHint |= 0x800000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_(v13, v12, 7, 16, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    ObfDereferenceObject((PVOID)Object);
    if ( v3 > 1 )
      ObfDereferenceObject(*((PVOID *)&Object + 1));
    EnterCrit(0LL, 1LL);
  }
  gdwHydraHint |= 0x800u;
}
