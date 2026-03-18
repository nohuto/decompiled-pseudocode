/*
 * XREFs of Register_BiosHandoff @ 0x1C0012E98
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_PrepareHardware @ 0x1C006EC08 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C000A738 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0012E40 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUchar @ 0x1C0012FDC (XilRegister_ReadUchar.c)
 *     Register_WriteSecureMmio @ 0x1C003C624 (Register_WriteSecureMmio.c)
 *     Etw_StartDeviceFail @ 0x1C0047DA0 (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_BiosHandoff(_QWORD *a1)
{
  __int64 v1; // rbp
  char Uchar; // al
  __int64 v4; // rcx
  char v5; // al
  int v6; // ebx
  int i; // r14d
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d
  int Ulong; // eax
  unsigned int v12; // ebx
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-30h]
  char v19; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  Interval.QuadPart = 0LL;
  v1 = a1[8];
  if ( v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72LL), 4, 6, 50, (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
    Uchar = XilRegister_ReadUchar(a1, v1 + 3);
    v4 = a1[1];
    v5 = Uchar | 1;
    v19 = v5;
    if ( *(_BYTE *)(v4 + 537) )
    {
      Register_WriteSecureMmio(a1, v1 + 3, 0LL, &v19);
    }
    else
    {
      *(_BYTE *)(v1 + 3) = v5;
      _InterlockedOr(v17, 0);
    }
    v6 = 20;
    for ( i = 0; ; i += 100 )
    {
      if ( (XilRegister_ReadUchar(a1, v1 + 2) & 1) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_11;
        v9 = a1[1];
        v10 = 51;
        v18 = i;
        LOBYTE(v8) = 4;
        goto LABEL_10;
      }
      if ( !v6 )
        break;
      --v6;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v9 = a1[1];
    if ( (*(_QWORD *)(v9 + 336) & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v9 + 72),
          v8,
          6,
          53,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          208);
        v9 = a1[1];
      }
      v14 = 1LL;
      goto LABEL_28;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 52;
      v18 = 2000;
      LOBYTE(v8) = 3;
LABEL_10:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v9 + 72),
        v8,
        6,
        v10,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        v18);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72LL), 3, 6, 49, (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
  }
LABEL_11:
  if ( (XilRegister_ReadUlong((__int64)a1, (unsigned int *)(a1[4] + 4LL)) & 1) != 0 )
  {
LABEL_12:
    if ( v1 )
    {
      Ulong = XilRegister_ReadUlong((__int64)a1, (unsigned int *)(v1 + 4));
      XilRegister_WriteUlong((__int64)a1, (_DWORD *)(v1 + 4), Ulong & 0x1FFFDFFF);
    }
    return 0;
  }
  v9 = a1[1];
  v8 = 0x8000000000000000uLL;
  if ( *(__int64 *)(v9 + 336) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 2, 6, 54, (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
      v9 = a1[1];
    }
    v14 = 2LL;
LABEL_28:
    Etw_StartDeviceFail(v9, v8, v14);
    return (unsigned int)-1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 2, 6, 55, (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
  v15 = Register_ControllerStop((__int64)a1);
  v12 = v15;
  if ( v15 >= 0 )
    goto LABEL_12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v16,
      6,
      56,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v15);
  }
  return v12;
}
