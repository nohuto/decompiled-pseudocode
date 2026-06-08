/*
 * XREFs of AcpiEval_PSD_TSD @ 0x1C0027430
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C003256C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00327EC (InitAcpiThrottleDomain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004448 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sd @ 0x1C0008410 (WPP_RECORDER_SF_sd.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C00283CC (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C00289E4 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PSD_TSD(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r12d
  unsigned int v6; // eax
  _DWORD *v7; // rsi
  int v8; // ebx
  _WORD *v9; // rdi
  int v10; // eax
  SIZE_T v11; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-A9h]
  char v19[8]; // [rsp+40h] [rbp-89h] BYREF
  int v20; // [rsp+48h] [rbp-81h] BYREF
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  char v22; // [rsp+60h] [rbp-69h] BYREF
  int v23; // [rsp+62h] [rbp-67h]
  const char *v24; // [rsp+68h] [rbp-61h]
  __int64 (__fastcall *v25)(); // [rsp+70h] [rbp-59h]
  char v26; // [rsp+78h] [rbp-51h]
  int v27; // [rsp+7Ah] [rbp-4Fh]
  const char *v28; // [rsp+80h] [rbp-49h]
  __int64 (__fastcall *v29)(); // [rsp+88h] [rbp-41h]
  char v30; // [rsp+90h] [rbp-39h]
  int v31; // [rsp+92h] [rbp-37h]
  const char *v32; // [rsp+98h] [rbp-31h]
  __int64 (__fastcall *v33)(); // [rsp+A0h] [rbp-29h]
  char v34; // [rsp+A8h] [rbp-21h]
  int v35; // [rsp+AAh] [rbp-1Fh]
  const char *v36; // [rsp+B0h] [rbp-19h]
  __int64 (__fastcall *v37)(); // [rsp+B8h] [rbp-11h]
  char v38; // [rsp+C0h] [rbp-9h]
  int v39; // [rsp+C2h] [rbp-7h]
  const char *v40; // [rsp+C8h] [rbp-1h]
  __int64 (__fastcall *v41)(); // [rsp+D0h] [rbp+7h]
  int v42; // [rsp+E0h] [rbp+17h] BYREF
  char v43; // [rsp+E4h] [rbp+1Bh]

  v3 = 0;
  *(_DWORD *)v19 = a2;
  v20 = 0;
  v24 = "NumberOfEntries";
  v22 = 0;
  v28 = "Revision";
  v23 = 0;
  v32 = "DomainNumber";
  v26 = 1;
  v36 = "CoordinationType";
  v27 = 0x40000;
  v25 = AcpiParseULong;
  v40 = "MemberCount";
  v6 = 512;
  v29 = AcpiParseULong;
  v30 = 2;
  if ( a2 != 1146310751 )
    v6 = 0x2000;
  v31 = 0x80000;
  v33 = AcpiParseULong;
  v7 = 0LL;
  v34 = 3;
  v35 = 786432;
  v37 = AcpiParseULong;
  v38 = 4;
  v39 = 0x100000;
  v41 = AcpiParseULong;
  v42 = a2;
  v43 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), v6);
  v8 = AcpiEvaluateMethod(a1, *(_DWORD *)v19, 0, (unsigned int)&P, (__int64)&v20);
  if ( v8 < 0 )
    goto LABEL_26;
  if ( !v20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x14u,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
        v19);
    v8 = -1073741275;
    goto LABEL_26;
  }
  v9 = P;
  v10 = *((_DWORD *)P + 2);
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x15u,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
        v19);
    v8 = -1073741275;
    goto LABEL_26;
  }
  v11 = (unsigned int)(20 * v10 + 4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
LABEL_26:
    if ( *(_DWORD *)v19 == 1146310751 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x200u);
    else
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x2000u);
    v9 = P;
    goto LABEL_30;
  }
  memset(PoolWithTag, 0, v11);
  v13 = v9 + 6;
  *v7 = *((unsigned __int8 *)v9 + 8);
  while ( 1 )
  {
    if ( v13 >= (_WORD *)((char *)v9 + *((unsigned int *)v9 + 1)) )
    {
      *a3 = v7;
      v7 = 0LL;
      goto LABEL_25;
    }
    if ( *v13 != 3 )
    {
      v8 = -1072431096;
      goto LABEL_26;
    }
    v8 = AcpiParseCore(
           (unsigned int)&v22,
           5,
           (int)v13 + 4,
           (unsigned __int16)v13[1],
           (__int64)&v7[4 * v3 + 1 + v3],
           20,
           (__int64)&v42,
           0);
    if ( v8 < 0 )
      break;
    v16 = (unsigned __int16)v13[1];
    if ( (unsigned __int16)v16 < 4u )
      v16 = 4LL;
    v13 = (_WORD *)((char *)v13 + v16 + 4);
    ++v3;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, v14, v15, 0x16u, v18, (const char *)&v42);
LABEL_25:
  if ( v8 < 0 )
    goto LABEL_26;
LABEL_30:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v8;
}
