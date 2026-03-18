/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C015D050
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C016FD74 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  const struct tagRIMDEADZONE *v4; // rbx
  RIMDeadzone *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rax

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
    v6 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL, 1853506642LL);
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
        Win32FreePool(v8);
      }
      else
      {
        v12 = 0LL;
        v13 = (_QWORD *)(a1 + 416);
        while ( *v13 )
        {
          v12 = (unsigned int)(v12 + 1);
          ++v13;
          if ( (unsigned int)v12 >= 5 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v7, v10, v11);
            goto LABEL_18;
          }
        }
        *(_QWORD *)(a1 + 8 * v12 + 416) = v8;
        ++*(_DWORD *)(a1 + 456);
        *a3 = (unsigned int)v12;
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
