/*
 * XREFs of PspApplyMitigationOptions @ 0x140698088
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CD634 (PspSetRedirectionTrustPolicy.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleExceptions @ 0x1406DA8FC (ExEnableHandleExceptions.c)
 *     PspDecodeMitigationExecuteOptions @ 0x1406DDBBC (PspDecodeMitigationExecuteOptions.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E0058 (PspSetNoChildProcessRestrictedPolicy.c)
 *     KeSetCheckStackExtentsProcess @ 0x1408BD89C (KeSetCheckStackExtentsProcess.c)
 */

void __fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // xmm3_8
  unsigned __int64 v9; // xmm1_8
  __m128i v11; // xmm2
  __int128 v12; // xmm0
  unsigned __int64 v13; // rsi
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  unsigned __int64 v19; // rsi
  unsigned __int8 v20; // cl
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rax
  char v25; // si
  __int64 v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // rax
  char v29; // bl
  unsigned __int64 v30; // xmm1_8
  __m128i v31; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-50h]
  __m128i v33; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+58h] [rbp-28h]
  unsigned __int64 v36; // [rsp+68h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 1408);
  v7 = a3[1].m128i_u64[0];
  v9 = *((_QWORD *)a4 + 2);
  v34 = v7;
  v36 = v9;
  v11 = *a3;
  v12 = *a4;
  v33 = *a3;
  v35 = v12;
  if ( v5 && *(_WORD *)(v5 + 8) == 332 )
  {
    v31 = v11;
    v32 = v7;
    *(_BYTE *)(a1 + 643) = PspDecodeMitigationExecuteOptions(&v31);
  }
  v13 = v33.m128i_i64[0];
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v33.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_8;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10u);
  v13 = v33.m128i_i64[0];
LABEL_8:
  if ( (v13 & 0x30000) != 0 )
    v14 = (BYTE2(v13) & 3) == 2;
  else
    v14 = (a5 & 1) == 0;
  if ( v14 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40u);
    v13 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x40) == 0 )
  {
    if ( ((v13 >> 20) & 3) != 0 )
    {
      if ( ((v13 >> 20) & 3) != 1 )
        goto LABEL_19;
    }
    else if ( (a5 & 2) == 0 )
    {
      goto LABEL_19;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20u);
    v13 = v33.m128i_i64[0];
  }
LABEL_19:
  if ( !a2 )
    goto LABEL_28;
  if ( ((v13 >> 24) & 3) == 0 )
  {
    if ( (a5 & 4) == 0 )
      goto LABEL_26;
LABEL_24:
    v15 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a1);
    if ( v15 )
    {
      LOBYTE(v16) = 1;
      ExEnableHandleExceptions(v15, v16);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
    }
    goto LABEL_26;
  }
  if ( ((v13 >> 24) & 3) == 1 )
    goto LABEL_24;
LABEL_26:
  if ( (*(_DWORD *)(a2 + 2512) & 0x1000) != 0 )
  {
    v13 = v13 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    v33.m128i_i64[0] = v13;
  }
LABEL_28:
  if ( ((v13 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x3000u);
    v13 = v33.m128i_i64[0];
  }
  v17 = 0x2000;
  if ( (*(_DWORD *)(a1 + 2512) & 0x1000) == 0 && (((unsigned __int64)v35 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x2000u);
    v13 = v33.m128i_i64[0];
  }
  if ( ((v13 >> 36) & 3) != 1 )
  {
    if ( ((v13 >> 36) & 3) != 3 )
      goto LABEL_37;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x900u);
  v13 = v33.m128i_i64[0];
LABEL_37:
  v18 = 1024;
  v33.m128i_i64[1] = _mm_srli_si128(_mm_loadu_si128(&v33), 8).m128i_u64[0];
  if ( (v33.m128i_i8[15] & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x400u);
    v13 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x100) != 0 )
  {
    v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    *((_QWORD *)&v35 + 1) = *((_QWORD *)&v35 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( (((unsigned __int64)v35 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x800u);
    v13 = v33.m128i_i64[0];
  }
  if ( (BYTE4(v13) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x80u);
    v13 = v33.m128i_i64[0];
  }
  switch ( (v13 >> 40) & 3 )
  {
    case 0uLL:
      if ( (a5 & 8) == 0 )
        break;
      v19 = v13 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
      v33.m128i_i64[0] = v19;
      if ( (a5 & 0x20) != 0 && !PspDisableControlFlowGuardExportSuppression )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 2u);
        v33.m128i_i64[0] = v19 | 0x30000000000LL;
      }
LABEL_57:
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
      if ( (a5 & 0x10) == 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 5u);
      goto LABEL_59;
    case 1uLL:
      goto LABEL_57;
    case 3uLL:
      if ( PspDisableControlFlowGuardExportSuppression )
      {
        v33.m128i_i64[0] = v13 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 2u);
        v33.m128i_i64[0] |= 0x30000000000uLL;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
      if ( (a5 & 0x10) == 0 )
        KeSetCheckStackExtentsProcess(a1, 1LL);
LABEL_59:
      v13 = v33.m128i_i64[0];
      break;
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 2512) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 4u);
    v13 = v33.m128i_i64[0];
  }
  if ( ((v13 >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 2168) < 8u )
      *(_BYTE *)(a1 + 2168) = 8;
    if ( *(_BYTE *)(a1 + 2169) < 8u )
      *(_BYTE *)(a1 + 2169) = 8;
  }
  else
  {
    if ( ((v13 >> 44) & 3) != 3 )
      goto LABEL_74;
    if ( *(_BYTE *)(a1 + 2168) < 6u )
      *(_BYTE *)(a1 + 2168) = 6;
    if ( *(_BYTE *)(a1 + 2169) < 6u )
      *(_BYTE *)(a1 + 2169) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x800000u);
  v13 = v33.m128i_i64[0];
LABEL_74:
  if ( (*(_DWORD *)(a1 + 2512) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v35 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x1000000u);
      goto LABEL_79;
    }
    if ( (((unsigned __int64)v35 >> 44) & 3) == 3 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x2000000u);
LABEL_79:
      v13 = v33.m128i_i64[0];
    }
  }
  v20 = v33.m128i_i8[0];
  if ( (((unsigned __int8)v33.m128i_i8[0] >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 2512) & 1) != 0 )
  {
    v13 = v13 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v33.m128i_i64[0] = v13;
    v20 = v13;
  }
  if ( ((v20 >> 4) & 3) != 1 && (((unsigned __int64)v35 >> 4) & 3) == 1 )
  {
    v13 |= 0x30uLL;
    v33.m128i_i64[0] = v13;
  }
  if ( (a5 & 0x30000) == 0x10000 )
  {
    v13 = v13 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_91:
    v33.m128i_i64[0] = v13;
    goto LABEL_92;
  }
  if ( (a5 & 0x30000) == 0x30000 && (BYTE6(v13) & 3) != 1 )
  {
    v13 |= 0x3000000000000uLL;
    goto LABEL_91;
  }
LABEL_92:
  v21 = 0x20000LL;
  if ( (HIWORD(v13) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10000u);
    goto LABEL_96;
  }
  if ( (HIWORD(v13) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20000u);
LABEL_96:
    v13 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x30000) == 0 && (WORD3(v35) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20000u);
    v13 = v33.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x80000) != 0 )
  {
    v13 = v13 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    v33.m128i_i64[0] = v13;
  }
  if ( ((v13 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x80000u);
    v13 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x80000) == 0 && (((unsigned __int64)v35 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x100000u);
    v13 = v33.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x200000) != 0 )
  {
    v13 = v13 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    v33.m128i_i64[0] = v13;
  }
  if ( (HIBYTE(v13) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x200000u);
    v13 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x200000) == 0 && (BYTE7(v35) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x400000u);
    v13 = v33.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x40000) != 0 )
  {
    v13 = v13 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    v33.m128i_i64[0] = v13;
  }
  if ( ((v13 >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40000u);
  v22 = 0x8000000LL;
  if ( a2 )
  {
    v23 = *(_DWORD *)(a2 + 2512);
    if ( (v23 & 0x4000000) != 0 )
    {
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v23 & 0x8000000) != 0 )
    {
      v33.m128i_i64[1] |= 0x30uLL;
    }
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0xC000000u);
  }
  else if ( (((unsigned __int64)v33.m128i_i64[1] >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0xC000000) == 0 && ((*((_QWORD *)&v35 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000000u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 1u);
  if ( (*(_DWORD *)(a1 + 2516) & 1) == 0 && ((*((_QWORD *)&v35 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 2u);
  if ( (v33.m128i_i8[12] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 4u);
  if ( (HIWORD(v33.m128i_i64[1]) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40000000u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), v17);
  if ( (*(_DWORD *)(a1 + 2516) & 4) == 0 && (BYTE12(v35) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 8u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), v18);
  if ( (v18 & *(_DWORD *)(a1 + 2516)) == 0 && ((*((_QWORD *)&v35 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x800u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x10u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x10) == 0 && ((*((_QWORD *)&v35 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x20u);
  v24 = *(_QWORD *)(a1 + 1408);
  if ( v24 && *(_WORD *)(v24 + 8) == 332 )
  {
    if ( (((unsigned __int64)v33.m128i_i64[1] >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40u);
    if ( (*(_DWORD *)(a1 + 2516) & 0x40) == 0 && ((*((_QWORD *)&v35 + 1) >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x80u);
    if ( (((unsigned __int64)v33.m128i_i64[1] >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100u);
    if ( (*(_DWORD *)(a1 + 2516) & 0x100) == 0 && ((*((_QWORD *)&v35 + 1) >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200u);
  }
  v25 = (unsigned __int64)v33.m128i_i64[1] >> 36;
  if ( (v25 & 3) == 1 )
  {
    v26 = 1LL;
    goto LABEL_173;
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 36) & 3) == 3 )
  {
    v26 = 2LL;
LABEL_173:
    PspSetNoChildProcessRestrictedPolicy(a1, v26, 0x8000000LL, 0x20000LL);
  }
  if ( (v25 & 3) != 1 && ((*((_QWORD *)&v35 + 1) >> 36) & 3) == 1 )
    PspSetNoChildProcessRestrictedPolicy(a1, 3LL, v22, v21);
  if ( a2 )
  {
    v27 = *(_DWORD *)(a2 + 2512);
    if ( (v27 & 0x10000000) != 0 && (v27 & 0x20000000) == 0 )
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10000000u);
  }
  else if ( (((unsigned __int64)v33.m128i_i64[1] >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x30000000u);
  }
  switch ( ((unsigned __int64)v33.m128i_i64[1] >> 60) & 3 )
  {
    case 0uLL:
      if ( (a5 & 0x40000) == 0 || (a5 & 0x800000) != 0 || (a5 & 0x1000000) != 0 )
        break;
      if ( (a5 & 0x100000) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100000u);
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
LABEL_195:
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000u);
      break;
    case 1uLL:
      goto LABEL_195;
    case 3uLL:
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100000u);
      break;
  }
  if ( ((*((_QWORD *)&v35 + 1) >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x8000u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x4000) == 0 )
  {
    v28 = v34 & 0xFFFFFFFFFFFFFFFCuLL | 2;
    goto LABEL_206;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x20000u);
  if ( (v34 & 3) != 0 )
  {
    if ( (v34 & 3) == 3 )
      goto LABEL_204;
  }
  else if ( (a5 & 0x200000) != 0 )
  {
LABEL_204:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x80000000);
  }
  v28 = v34 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_206:
  v34 = v28;
  if ( (v36 & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40000u);
  if ( ((v34 >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200000u);
  }
  else if ( ((v34 >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200000u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x400000u);
  }
  if ( ((v36 >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x800000u);
  if ( ((v34 >> 16) & 3) == 0 )
  {
    if ( (a5 & 0x400000) != 0 )
      goto LABEL_219;
    goto LABEL_218;
  }
  if ( ((v34 >> 16) & 3) == 1 )
LABEL_218:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40000000u);
LABEL_219:
  v29 = v34 >> 20;
  if ( (v29 & 3) == 1 )
    PspSetRedirectionTrustPolicy((struct _KPROCESS *)a1, 1);
  if ( (v29 & 3) != 1 && ((v36 >> 20) & 3) == 1 )
    PspSetRedirectionTrustPolicy((struct _KPROCESS *)a1, 2);
  v30 = v34;
  *a3 = v33;
  a3[1].m128i_i64[0] = v30;
}
