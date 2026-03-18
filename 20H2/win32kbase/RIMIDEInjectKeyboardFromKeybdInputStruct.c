/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01690CC
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0133BB0 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C00369D0 (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C01667A0 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C016933C (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169B54 (RIMIDEValidateKeybdInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  _BYTE *v11; // rdi
  _WORD *v12; // rbx
  int v13; // edx
  bool v14; // zf
  char v15; // al
  unsigned int v16; // r8d
  __int16 v17; // ax
  __int16 v18; // ax
  __int16 v19; // dx
  __int16 v20; // dx
  __int16 v21; // cx
  __int16 v22; // ax
  __int16 v23; // ax
  unsigned __int64 v24; // rcx
  int v25; // edx
  int v26; // ebx
  _BYTE v28[192]; // [rsp+30h] [rbp-108h] BYREF

  memset(v28, 0, sizeof(v28));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 88));
  v10 = 0;
  if ( a3 )
  {
    v11 = &v28[4];
    v12 = (_WORD *)(a2 + 16);
    while ( (unsigned int)RIMIDEValidateKeybdInputStruct(a2 + 24LL * v10) )
    {
      if ( *(_DWORD *)(a1 + 488) || (v14 = !RIMIsRunningOnDesktop(), v15 = 0, v14) )
        v15 = 1;
      v16 = *((_DWORD *)v12 - 3);
      if ( (v16 & 0x8000) == 0 || (v14 = v15 == 0, v17 = -3, v14) )
        v17 = -2;
      *((_WORD *)v11 - 2) = v17;
      v18 = 8 * (v16 & 0x10);
      if ( (v16 & 4) != 0 )
      {
        v19 = v18 | 0x20;
      }
      else
      {
        v19 = 8 * (v16 & 0x10);
        if ( *(v12 - 8) && (v16 & 8) == 0 )
          v19 = v18 | 0x40;
      }
      v20 = (2 * (v16 & 1)) | (v16 >> 1) & 1 | v19;
      if ( (v16 & 0x8000) != 0 )
      {
        v21 = 256;
        if ( *v12 == 256 || (v21 = 512, *v12 == 512) )
          v20 |= v21;
      }
      *(_WORD *)v11 = v20;
      if ( (v20 & 0x40) != 0 )
        v22 = *(v12 - 8);
      else
        v22 = *(v12 - 7);
      *((_WORD *)v11 - 1) = v22;
      if ( (v16 & 0x20) != 0 )
        v23 = v12[1];
      else
        v23 = 0;
      *((_WORD *)v11 + 1) = v23;
      LODWORD(v24) = *((_DWORD *)v12 - 2);
      if ( !(_DWORD)v24 )
        v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v11 + 1) = v24;
      ++v10;
      v11 += 12;
      v12 += 12;
      if ( v10 >= a3 )
        goto LABEL_30;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, 32, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_30:
    v26 = RIMIDEInjectKeyboardInput(a1, v28, a3);
    if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v25, 1, 33, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v26);
    }
  }
  return (unsigned int)v26;
}
