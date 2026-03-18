/*
 * XREFs of Register_ControllerStop @ 0x1C000A738
 * Callers:
 *     Controller_D0Exit @ 0x1C000AABC (Controller_D0Exit.c)
 *     Register_BiosHandoff @ 0x1C0012E98 (Register_BiosHandoff.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InitiateRecovery @ 0x1C00317A0 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0012E40 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbx
  int Ulong; // eax
  int i; // r14d
  int v6; // edx
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      6,
      57,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    Ulong = XilRegister_ReadUlong(a1, v3);
    XilRegister_WriteUlong(a1, v3, Ulong & 0xFFFFFFFE);
    for ( i = 16; ; --i )
    {
      if ( (XilRegister_ReadUlong(a1, v3 + 4) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v6,
            6,
            58,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            16 - i,
            1);
        }
        return v1;
      }
      if ( !i )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v6,
        6,
        59,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        16);
    }
    return (unsigned int)-1073741823;
  }
  return v1;
}
