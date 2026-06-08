/*
 * XREFs of AcpiEval_XPSS @ 0x1C0027FCC
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00331AC (InitAcpiPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C00283CC (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C00289E4 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_XPSS(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rsi
  int v5; // ebx
  _DWORD *v6; // rdi
  unsigned __int16 v7; // r9
  int v8; // eax
  SIZE_T v9; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v11; // r15
  __int64 i; // r14
  __int64 v13; // rax
  __int64 v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  char v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+52h] [rbp-AEh]
  const char *v20; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-A0h]
  char v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+6Ah] [rbp-96h]
  const char *v24; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-88h]
  char v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+82h] [rbp-7Eh]
  const char *v28; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-70h]
  char v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ah] [rbp-66h]
  const char *v32; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-58h]
  char v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B2h] [rbp-4Eh]
  const char *v36; // [rsp+B8h] [rbp-48h]
  void *v37; // [rsp+C0h] [rbp-40h]
  char v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CAh] [rbp-36h]
  const char *v40; // [rsp+D0h] [rbp-30h]
  void *v41; // [rsp+D8h] [rbp-28h]
  char v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E2h] [rbp-1Eh]
  const char *v44; // [rsp+E8h] [rbp-18h]
  void *v45; // [rsp+F0h] [rbp-10h]
  char v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FAh] [rbp-6h]
  const char *v48; // [rsp+100h] [rbp+0h]
  void *v49; // [rsp+108h] [rbp+8h]

  v22 = 1;
  v16 = 0;
  v20 = "CoreFrequency";
  v18 = 0;
  v21 = AcpiParseULong;
  v24 = "Power";
  v25 = AcpiParseULong;
  v28 = "Latency";
  v29 = AcpiParseULong;
  v33 = AcpiParseULong;
  v30 = 3;
  v19 = 0;
  v32 = "BmLatency";
  v4 = 0LL;
  v23 = 0x40000;
  v36 = "Control";
  v40 = "Status";
  v44 = "ControlMask";
  v48 = "StatusMask";
  v26 = 2;
  v27 = 0x80000;
  v31 = 786432;
  v34 = 4;
  v35 = 1048578;
  v37 = &AcpiParseULong64;
  v38 = 5;
  v39 = 1572866;
  v41 = &AcpiParseULong64;
  v42 = 6;
  v43 = 2097154;
  v45 = &AcpiParseULong64;
  v46 = 7;
  v47 = 2621442;
  v49 = &AcpiParseULong64;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x80u);
  v5 = AcpiEvaluateMethod(a1, 1397968984, 0, (unsigned int)&P, (__int64)&v16);
  if ( v5 < 0 )
    goto LABEL_29;
  v6 = P;
  *(_QWORD *)(a1 + 264) |= *(_DWORD *)(a1 + 272) & 0x40000000;
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Cu,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
    v5 = -1073741823;
    goto LABEL_29;
  }
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_10:
      v5 = -1073741275;
      goto LABEL_29;
    }
    v7 = 29;
LABEL_9:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
    goto LABEL_10;
  }
  v8 = v6[2];
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v7 = 30;
    goto LABEL_9;
  }
  v9 = (unsigned int)(48 * v8 + 8);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v9);
    v11 = v6 + 3;
    *v4 = *((unsigned __int8 *)v6 + 8);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v6[2] )
      {
        *a2 = v4;
        v4 = 0LL;
        goto LABEL_28;
      }
      if ( *v11 != 3 )
      {
        v5 = -1072431096;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v15) = i;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x1Fu,
            (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
            v15);
        }
        goto LABEL_29;
      }
      v5 = AcpiParseCore(
             (unsigned int)&v18,
             8,
             (int)v11 + 4,
             (unsigned __int16)v11[1],
             (__int64)&v4[12 * i + 2],
             48,
             (__int64)"XPSS",
             0);
      if ( v5 < 0 )
        break;
      v13 = (unsigned __int16)v11[1];
      if ( (unsigned __int16)v13 < 4u )
        v13 = 4LL;
      v11 = (_WORD *)((char *)v11 + v13 + 4);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = i;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x20u,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
        v15);
    }
LABEL_28:
    if ( v5 >= 0 )
      goto LABEL_30;
  }
  else
  {
    v5 = -1073741670;
  }
LABEL_29:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x80u);
  v6 = P;
LABEL_30:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return (unsigned int)v5;
}
