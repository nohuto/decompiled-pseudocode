/*
 * XREFs of Register_PrepareHardware @ 0x1C006EC08
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0008D84 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     Register_ControllerReset @ 0x1C00102FC (Register_ControllerReset.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     Register_BiosHandoff @ 0x1C0012E98 (Register_BiosHandoff.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00135F0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Register_MapSecureMmio @ 0x1C003C164 (Register_MapSecureMmio.c)
 *     Register_ParseCapabilityRegister @ 0x1C006E228 (Register_ParseCapabilityRegister.c)
 */

__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  char *v5; // rdx
  int v6; // edx
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  int v12; // edi
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rcx
  char v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF

  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(
              WdfDriverGlobals,
              a2);
        ++i )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
           WdfDriverGlobals,
           a2,
           i);
    if ( *(_BYTE *)v7 == 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v6,
          6,
          12,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          i);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v8,
            6,
            13,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            *(_DWORD *)(v7 + 8),
            *(_DWORD *)(v7 + 4),
            *(_DWORD *)(v7 + 12));
        }
      }
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v9 = MmMapIoSpaceEx(*(_QWORD *)(v7 + 4), *(unsigned int *)(v7 + 12), 516LL);
        *(_QWORD *)(a1 + 24) = v9;
        if ( !v9 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              (_DWORD)v5,
              6,
              14,
              (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
          }
          v12 = -1073741670;
          goto LABEL_18;
        }
        v10 = *(_DWORD *)(v7 + 12);
        *(_DWORD *)(a1 + 20) = v10;
        *(_BYTE *)(a1 + 16) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = v10;
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_qd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v10,
            6,
            15,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            v9,
            v18);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 8)) )
    {
      v12 = Register_MapSecureMmio((_QWORD *)a1);
      if ( v12 < 0 )
        goto LABEL_18;
    }
    v11 = Register_ParseCapabilityRegister(a1);
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v14 = 17;
    }
    else
    {
      v11 = Register_BiosHandoff((_QWORD *)a1);
      v12 = v11;
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v14 = 18;
      }
      else
      {
        v11 = Register_ControllerReset(a1, 0);
        v12 = v11;
        if ( v11 >= 0 )
        {
          if ( (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL)) & 1) == 0 )
          {
            v15 = *(_QWORD *)(a1 + 8);
            v5 = (char *)&v19 - v15;
            v19 = 1uLL;
            v16 = 2LL;
            v17 = (_QWORD *)(v15 + 336);
            do
            {
              *v17 |= *(_QWORD *)((char *)v17 + (_QWORD)v5 - 336);
              ++v17;
              --v16;
            }
            while ( v16 );
          }
          goto LABEL_18;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v14 = 19;
      }
    }
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v5,
      6,
      v14,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v11);
    goto LABEL_18;
  }
  v12 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v5,
      6,
      16,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
  }
LABEL_18:
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)v5,
        6,
        20,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v12;
}
