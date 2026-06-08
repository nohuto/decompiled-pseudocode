/*
 * XREFs of AcpiEval_PSS @ 0x1C0024514
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00225FC (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000A334 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_sD @ 0x1C000ACA8 (WPP_RECORDER_SF_sD.c)
 *     AcpiEvaluateMethod @ 0x1C0021480 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C00247A4 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PSS(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rsi
  int v5; // ebx
  _DWORD *v6; // rdi
  int v7; // eax
  SIZE_T v8; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // [rsp+28h] [rbp-A1h]
  __int64 v16; // [rsp+30h] [rbp-99h]
  int v17; // [rsp+40h] [rbp-89h] BYREF
  int v18; // [rsp+44h] [rbp-85h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v20; // [rsp+50h] [rbp-79h] BYREF
  int v21; // [rsp+52h] [rbp-77h]
  const char *v22; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v23)(); // [rsp+60h] [rbp-69h]
  char v24; // [rsp+68h] [rbp-61h]
  int v25; // [rsp+6Ah] [rbp-5Fh]
  const char *v26; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v27)(); // [rsp+78h] [rbp-51h]
  char v28; // [rsp+80h] [rbp-49h]
  int v29; // [rsp+82h] [rbp-47h]
  const char *v30; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v31)(); // [rsp+90h] [rbp-39h]
  char v32; // [rsp+98h] [rbp-31h]
  int v33; // [rsp+9Ah] [rbp-2Fh]
  const char *v34; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v35)(); // [rsp+A8h] [rbp-21h]
  char v36; // [rsp+B0h] [rbp-19h]
  int v37; // [rsp+B2h] [rbp-17h]
  const char *v38; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v39)(); // [rsp+C0h] [rbp-9h]
  char v40; // [rsp+C8h] [rbp-1h]
  int v41; // [rsp+CAh] [rbp+1h]
  const char *v42; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v43)(); // [rsp+D8h] [rbp+Fh]

  v25 = 0x40000;
  v17 = 0;
  v22 = "CoreFrequency";
  v20 = 0;
  v26 = "Power";
  v21 = 0;
  v30 = "Latency";
  v24 = 1;
  v32 = 3;
  v28 = 2;
  v23 = AcpiParseULong;
  v34 = "BmLatency";
  v4 = 0LL;
  v27 = AcpiParseULong;
  v38 = "Control";
  v42 = "Status";
  v29 = 0x80000;
  v31 = AcpiParseULong;
  v33 = 786432;
  v35 = AcpiParseULong;
  v36 = 4;
  v37 = 0x100000;
  v39 = AcpiParseULong;
  v40 = 5;
  v41 = 1572864;
  v43 = AcpiParseULong;
  P = 0LL;
  v18 = 1397968991;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x40u);
  v5 = AcpiEvaluateMethod(a1, v18, 0LL, (unsigned int **)&P, &v17);
  if ( v5 < 0 )
    goto LABEL_34;
  v6 = P;
  *(_QWORD *)(a1 + 264) |= *(_DWORD *)(a1 + 272) & 0x30000000;
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x17u,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
    v5 = -1073741823;
    goto LABEL_34;
  }
  if ( !v17 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_25:
      v5 = -1073741275;
      goto LABEL_34;
    }
    v14 = 24;
LABEL_24:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v14,
      (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
    goto LABEL_25;
  }
  v7 = v6[2];
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v14 = 25;
    goto LABEL_24;
  }
  v8 = (unsigned int)(48 * v7 + 8);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_34;
  }
  memset(PoolWithTag, 0, (unsigned int)v8);
  v10 = v6 + 3;
  v11 = 0LL;
  *v4 = *((unsigned __int8 *)v6 + 8);
  if ( v6[2] )
  {
    while ( *v10 == 3 )
    {
      v5 = AcpiParseCore(
             (unsigned int)&v20,
             6,
             (int)v10 + 4,
             (unsigned __int16)v10[1],
             (__int64)&v4[12 * v11 + 2],
             48,
             (__int64)"_PSS",
             0);
      if ( v5 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v15) = v11;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x1Bu,
            (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
            v15);
        }
        goto LABEL_13;
      }
      v12 = (unsigned __int16)v10[1];
      if ( (unsigned __int16)v12 < 4u )
        v12 = 4LL;
      v11 = (unsigned int)(v11 + 1);
      v10 = (_WORD *)((char *)v10 + v12 + 4);
      if ( (unsigned int)v11 >= v6[2] )
        goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v11;
      WPP_RECORDER_SF_sD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Au,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
        (const char *)&v18,
        v16);
    }
    v5 = -1072431096;
    goto LABEL_34;
  }
LABEL_12:
  *a2 = v4;
  v4 = 0LL;
LABEL_13:
  if ( v5 < 0 )
  {
LABEL_34:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x40u);
    v6 = P;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return (unsigned int)v5;
}
