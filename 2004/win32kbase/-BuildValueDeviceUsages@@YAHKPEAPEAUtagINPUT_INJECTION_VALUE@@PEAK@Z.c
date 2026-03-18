/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016D140
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C016B090 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall BuildValueDeviceUsages(
        __int64 a1,
        struct tagINPUT_INJECTION_VALUE **a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  struct tagINPUT_INJECTION_VALUE **v6; // r14
  int v7; // edi
  __int64 v8; // rbp
  unsigned int v9; // edi
  int v10; // esi
  char *v11; // r15
  char *v12; // r12
  struct tagINPUT_INJECTION_VALUE *v13; // rax
  int v14; // edx
  struct tagINPUT_INJECTION_VALUE *v15; // r9
  struct tagINPUT_INJECTION_VALUE *v16; // rcx
  __int16 *v17; // r8
  unsigned int v18; // edx
  __int16 v19; // ax
  unsigned int v20; // r8d
  _WORD *v21; // r9
  __int64 v22; // rcx

  v4 = 0;
  v6 = a2;
  v7 = a1;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v8 = 5LL;
  if ( v7 == 3 )
  {
    v9 = 6;
    v10 = 11;
    v11 = (char *)&unk_1C024A6E2;
    v12 = (char *)&unk_1C024A6E4;
LABEL_7:
    v13 = (struct tagINPUT_INJECTION_VALUE *)Win32AllocPoolZInit(0x90uLL, 1785620818LL);
    *v6 = v13;
    v15 = v13;
    if ( v13 )
    {
      v16 = v13;
      v17 = (__int16 *)&unk_1C024A8A4;
      v18 = 5;
      do
      {
        *(_WORD *)v16 = *(v17 - 1);
        v16 = (struct tagINPUT_INJECTION_VALUE *)((char *)v16 + 12);
        v19 = *v17;
        v17 += 16;
        *((_WORD *)v16 - 5) = v19;
        --v8;
      }
      while ( v8 );
      v20 = 0;
      v21 = (_WORD *)((char *)v15 + 60);
      do
      {
        if ( v20 >= v9 )
          break;
        ++v18;
        v22 = 32LL * v20++;
        *v21 = *(_WORD *)&v11[v22];
        v21[1] = *(_WORD *)&v12[v22];
        v21 += 6;
      }
      while ( v18 < 0xC );
      if ( v18 == v10 )
      {
        *a3 = 12;
        return 1;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Dd(
          (__int64)gRimLog,
          2u,
          1u,
          0xCu,
          (__int64)&WPP_4ec5c7b8de2538b43b29520e01bcbd50_Traceguids,
          v18,
          v10);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v14, 1, 13, (__int64)&WPP_4ec5c7b8de2538b43b29520e01bcbd50_Traceguids, 23);
    }
    return v4;
  }
  if ( v7 == 2 )
  {
    v9 = 5;
    v11 = (char *)&unk_1C024A7C2;
    v10 = 10;
    v12 = (char *)&unk_1C024A7C4;
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, (_DWORD)a2, 1, 11, (__int64)&WPP_4ec5c7b8de2538b43b29520e01bcbd50_Traceguids, v7);
  }
  return 0LL;
}
