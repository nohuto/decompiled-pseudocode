/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x1C017DE28
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0155320 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x1C0158F40 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0166194 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C017BC40 (rimObsCheckForRegistrationConflicts.c)
 *     WPP_RECORDER_SF_dddq @ 0x1C017BE40 (WPP_RECORDER_SF_dddq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C017BF5C (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        KPROCESSOR_MODE PreviousMode)
{
  unsigned int v7; // ebp
  int v9; // edx
  int v10; // esi
  _DWORD *v11; // rbx
  _UNKNOWN **v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r13d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  unsigned int v22; // [rsp+50h] [rbp-38h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v21) = HIDWORD(Handle);
    WPP_RECORDER_SF_qD((_DWORD)Handle, a2, a3, a4);
  }
  Object = 0LL;
  v10 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v10 >= 0 )
  {
    RIMLockExclusive((__int64)&gInputObserverLock);
    v11 = Object;
    RIMLockExclusive((__int64)Object + 176);
    v13 = v11[28];
    v14 = v11[29];
    v15 = v11[27];
    v22 = v13;
    LODWORD(Object) = v14;
    if ( a4 < 0x30 )
    {
      v12 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = a4;
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          (_DWORD)v12,
          23,
          42,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          v21);
        v13 = v22;
        v14 = (unsigned int)Object;
      }
      v10 = -1073741789;
    }
    if ( v10 >= 0 )
    {
      v11[27] = 3;
      v11[28] = 0;
      if ( rimObsCheckForRegistrationConflicts(v7, v15, v13, v14) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddq(v16, (__int64)v12, v17, v18, v20);
        v11[27] = v15;
        v11[28] = v22;
        v11[30] = v7;
        if ( a3 )
        {
          *((_QWORD *)v11 + 12) = a3;
          v11[26] = a4;
        }
        goto LABEL_14;
      }
      v10 = -1073741823;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v12,
        23,
        44,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        Handle);
    }
    ObCloseHandle(Handle, PreviousMode);
LABEL_14:
    *((_QWORD *)v11 + 23) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 44, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v11);
    qword_1C024E3C8 = 0LL;
    ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v9,
      23,
      45,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      Handle);
  }
  return (unsigned int)v10;
}
