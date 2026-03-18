/*
 * XREFs of ACPIAsyncAcquireGlobalLock @ 0x1C0023A70
 * Callers:
 *     GlobalLockEventHandler @ 0x1C0023960 (GlobalLockEventHandler.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C0057FBC (ACPIIoctlAcquireGlobalLock.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0023BB0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0051AC8 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIAsyncAcquireGlobalLock(__int64 a1)
{
  KIRQL v2; // di
  volatile signed __int32 *v3; // r8
  signed __int32 v4; // edx
  bool v5; // zf
  signed __int32 v6; // eax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rcx
  char *v12; // rax
  void **v13; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      10,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      a1);
  if ( a1 == *((_QWORD *)AcpiInformation + 9) )
  {
    ++*((_DWORD *)AcpiInformation + 20);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        11,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        a1,
        *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  if ( *((_UNKNOWN **)AcpiInformation + 6) == (_UNKNOWN *)((char *)AcpiInformation + 48) )
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
    if ( *((_BYTE *)AcpiInformation + 84) )
      goto LABEL_9;
    v4 = *v3;
    do
    {
      v6 = _InterlockedCompareExchange(v3, ((v4 & 2 | 4u) >> 1) | v4, v4);
      v5 = v4 == v6;
      v4 = v6;
    }
    while ( !v5 );
    if ( (v6 & 2) == 0 )
    {
LABEL_9:
      *((_QWORD *)AcpiInformation + 9) = a1;
      *((_DWORD *)AcpiInformation + 20) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          3,
          12,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          a1);
      return 0LL;
    }
  }
  v8 = (_QWORD *)((char *)AcpiInformation + 48);
  v9 = (_QWORD *)*((_QWORD *)AcpiInformation + 6);
  if ( (_QWORD *)*v8 == v8 )
  {
LABEL_18:
    *(_WORD *)(a1 + 10) = 1;
    v11 = (_QWORD *)(a1 + 16);
    v12 = (char *)AcpiInformation + 48;
    v13 = (void **)*((_QWORD *)AcpiInformation + 7);
    if ( *v13 != (char *)AcpiInformation + 48 )
      __fastfail(3u);
    *v11 = v12;
    *(_QWORD *)(a1 + 24) = v13;
    *v13 = v11;
    *((_QWORD *)v12 + 1) = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        14,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        a1);
  }
  else
  {
    while ( 1 )
    {
      v10 = v9 - 2;
      if ( v9 - 2 == (_QWORD *)a1 )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v8 )
        goto LABEL_18;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        13,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        a1,
        *(_WORD *)(a1 + 10));
    ++*((_WORD *)v10 + 5);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
  return 259LL;
}
