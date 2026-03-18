/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C017197C
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C013BBA0 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C00657BC (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C016F050 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C0171BEC (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0172404 (RIMIDEValidateKeybdInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // r14d
  _BYTE *v8; // rdi
  _WORD *v9; // rbx
  int v10; // edx
  bool v11; // zf
  char v12; // al
  unsigned int v13; // r8d
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // dx
  __int16 v17; // dx
  __int16 v18; // cx
  __int16 v19; // ax
  __int16 v20; // ax
  unsigned __int64 v21; // rcx
  int v22; // edx
  int v23; // ebx
  _BYTE v25[192]; // [rsp+30h] [rbp-108h] BYREF

  memset(v25, 0, sizeof(v25));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 88));
  v7 = 0;
  if ( a3 )
  {
    v8 = &v25[4];
    v9 = (_WORD *)(a2 + 16);
    while ( (unsigned int)RIMIDEValidateKeybdInputStruct(a2 + 24LL * v7) )
    {
      if ( *(_DWORD *)(a1 + 488) || (v11 = !RIMIsRunningOnDesktop(), v12 = 0, v11) )
        v12 = 1;
      v13 = *((_DWORD *)v9 - 3);
      if ( (v13 & 0x8000) == 0 || (v11 = v12 == 0, v14 = -3, v11) )
        v14 = -2;
      *((_WORD *)v8 - 2) = v14;
      v15 = 8 * (v13 & 0x10);
      if ( (v13 & 4) != 0 )
      {
        v16 = v15 | 0x20;
      }
      else
      {
        v16 = 8 * (v13 & 0x10);
        if ( *(v9 - 8) && (v13 & 8) == 0 )
          v16 = v15 | 0x40;
      }
      v17 = (2 * (v13 & 1)) | (v13 >> 1) & 1 | v16;
      if ( (v13 & 0x8000) != 0 )
      {
        v18 = 256;
        if ( *v9 == 256 || (v18 = 512, *v9 == 512) )
          v17 |= v18;
      }
      *(_WORD *)v8 = v17;
      if ( (v17 & 0x40) != 0 )
        v19 = *(v9 - 8);
      else
        v19 = *(v9 - 7);
      *((_WORD *)v8 - 1) = v19;
      if ( (v13 & 0x20) != 0 )
        v20 = v9[1];
      else
        v20 = 0;
      *((_WORD *)v8 + 1) = v20;
      LODWORD(v21) = *((_DWORD *)v9 - 2);
      if ( !(_DWORD)v21 )
        v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v8 + 1) = v21;
      ++v7;
      v8 += 12;
      v9 += 12;
      if ( v7 >= a3 )
        goto LABEL_30;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 32, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_30:
    v23 = RIMIDEInjectKeyboardInput(a1, v25, a3);
    if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v22, 1, 33, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v23);
    }
  }
  return (unsigned int)v23;
}
