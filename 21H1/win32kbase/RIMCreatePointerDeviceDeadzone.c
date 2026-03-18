/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C01633A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C01760A4 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  const struct tagRIMDEADZONE *v4; // rbx
  RIMDeadzone *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 32, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 || *(_DWORD *)(a1 + 456) >= 5u )
  {
    v9 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v9;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 34, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
  }
  else
  {
    v6 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL, 0x6E7A4452u);
    v8 = (__int64)v6;
    if ( v6 )
    {
      v9 = RIMDeadzone::Initialize(v6, v4);
      if ( v9 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 33, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
        }
        Win32FreePool(v8, v7, v10);
      }
      else
      {
        v11 = 0LL;
        v12 = (_QWORD *)(a1 + 416);
        while ( *v12 )
        {
          v11 = (unsigned int)(v11 + 1);
          ++v12;
          if ( (unsigned int)v11 >= 5 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
            goto LABEL_18;
          }
        }
        *(_QWORD *)(a1 + 8 * v11 + 416) = v8;
        ++*(_DWORD *)(a1 + 456);
        *a3 = (unsigned int)v11;
      }
    }
    else
    {
      v9 = -1073741801;
    }
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v7, 1, 35, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids, v9);
  }
  return (unsigned int)v9;
}
