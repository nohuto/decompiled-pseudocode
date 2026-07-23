/*
 * XREFs of PfSnLogScenarioDecision @ 0x14067A78C
 * Callers:
 *     PfSnBeginScenario @ 0x14067A4B4 (PfSnBeginScenario.c)
 *     PfSnBeginAppLaunch @ 0x14067A99C (PfSnBeginAppLaunch.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PfSnLogScenarioDecision(__int64 a1, int a2, __int16 a3, char a4, char a5, char a6, __int64 a7)
{
  _UNKNOWN **v7; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  char v14; // [rsp+38h] [rbp-81h] BYREF
  char v15; // [rsp+39h] [rbp-80h] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-7Dh] BYREF
  __int16 v17; // [rsp+40h] [rbp-79h] BYREF
  int v18; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-71h] BYREF
  __int64 v20; // [rsp+58h] [rbp-61h]
  int v21; // [rsp+60h] [rbp-59h]
  int v22; // [rsp+64h] [rbp-55h]
  __int64 v23; // [rsp+68h] [rbp-51h]
  __int64 v24; // [rsp+70h] [rbp-49h]
  int *v25; // [rsp+78h] [rbp-41h]
  __int64 v26; // [rsp+80h] [rbp-39h]
  __int16 *v27; // [rsp+88h] [rbp-31h]
  __int64 v28; // [rsp+90h] [rbp-29h]
  char *v29; // [rsp+98h] [rbp-21h]
  __int64 v30; // [rsp+A0h] [rbp-19h]
  char *v31; // [rsp+A8h] [rbp-11h]
  __int64 v32; // [rsp+B0h] [rbp-9h]
  char *v33; // [rsp+B8h] [rbp-1h]
  __int64 v34; // [rsp+C0h] [rbp+7h]
  int *v35; // [rsp+C8h] [rbp+Fh]
  __int64 v36; // [rsp+D0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+47h] BYREF
  int v38; // [rsp+110h] [rbp+57h] BYREF

  v7 = &retaddr;
  v38 = a2;
  if ( RegHandle )
  {
    LOBYTE(v7) = EtwEventEnabled(RegHandle, &PfSnEvt_ScenarioDecision_Info);
    if ( (_BYTE)v7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a1 + 2 * v11) );
      v16 = v11;
      UserData.Ptr = (ULONGLONG)&v16;
      v21 = 2 * (unsigned __int16)v11;
      v23 = a1 + 60;
      v25 = &v38;
      v27 = &v17;
      v29 = &v14;
      v15 = a5;
      v31 = &v15;
      v33 = &a6;
      *(_QWORD *)&UserData.Size = 2LL;
      v20 = a1;
      v22 = 0;
      v24 = 4LL;
      v26 = 4LL;
      v17 = a3;
      v28 = 2LL;
      v14 = a4;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 4LL;
      if ( a7 >= 0 )
        v12 = a7 / 10000000;
      else
        LODWORD(v12) = -(a7 != -1) - 1;
      v35 = &v18;
      v18 = v12;
      v36 = 4LL;
      LOBYTE(v7) = EtwWrite(RegHandle, &PfSnEvt_ScenarioDecision_Info, 0LL, 9u, &UserData);
    }
  }
  return (char)v7;
}
