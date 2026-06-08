/*
 * XREFs of AcpiParseLpiObject @ 0x1C002647C
 * Callers:
 *     AcpiEval_LPI @ 0x1C00244E0 (AcpiEval_LPI.c)
 *     AcpiParseProcessorContainer @ 0x1C0026C7C (AcpiParseProcessorContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C00048DC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0007544 (WPP_RECORDER_SF_SD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C000769C (WPP_RECORDER_SF_Sd.c)
 *     memmove @ 0x1C000EAC0 (memmove.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     AcpiParseCore @ 0x1C00261D4 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C002720C (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiParseLpiObject(__int64 a1, const wchar_t *a2, char a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // r15
  _WORD *v11; // rdi
  unsigned __int16 v12; // r14
  size_t v13; // r8
  __int64 v14; // rax
  char *v15; // r14
  int v16; // r13d
  _QWORD *PoolWithTag; // rax
  _QWORD *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  char *v22; // r15
  unsigned int v23; // r14d
  unsigned __int8 *v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rdx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  __int64 v30; // rax
  unsigned __int16 v31; // r9
  unsigned int v32; // esi
  __int64 v33; // rcx
  int v35; // [rsp+20h] [rbp-E0h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v39; // [rsp+50h] [rbp-B0h]
  char v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+62h] [rbp-9Eh]
  const char *v42; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v43)(); // [rsp+70h] [rbp-90h]
  char v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+7Ah] [rbp-86h]
  const char *v46; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v47)(); // [rsp+88h] [rbp-78h]
  char v48; // [rsp+90h] [rbp-70h]
  int v49; // [rsp+92h] [rbp-6Eh]
  const char *v50; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v51)(); // [rsp+A0h] [rbp-60h]
  char v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+AAh] [rbp-56h]
  const char *v54; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v55)(); // [rsp+B8h] [rbp-48h]
  char v56; // [rsp+C0h] [rbp-40h]
  int v57; // [rsp+C2h] [rbp-3Eh]
  const char *v58; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v59)(); // [rsp+D0h] [rbp-30h]
  char v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+DAh] [rbp-26h]
  const char *v62; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v63)(); // [rsp+E8h] [rbp-18h]
  char v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+F2h] [rbp-Eh]
  const char *v66; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v67)(); // [rsp+100h] [rbp+0h]
  char v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+10Ah] [rbp+Ah]
  const char *v70; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v71)(); // [rsp+118h] [rbp+18h]
  char v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+122h] [rbp+22h]
  const char *v74; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v75)(); // [rsp+130h] [rbp+30h]
  char v76; // [rsp+138h] [rbp+38h]
  int v77; // [rsp+13Ah] [rbp+3Ah]
  const char *v78; // [rsp+140h] [rbp+40h]
  NTSTATUS (__fastcall *v79)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+148h] [rbp+48h]
  char v80; // [rsp+150h] [rbp+50h] BYREF
  int v81; // [rsp+152h] [rbp+52h]
  const char *v82; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v83)(); // [rsp+160h] [rbp+60h]
  char v84; // [rsp+168h] [rbp+68h]
  int v85; // [rsp+16Ah] [rbp+6Ah]
  const char *v86; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v87)(); // [rsp+178h] [rbp+78h]
  char v88; // [rsp+180h] [rbp+80h]
  int v89; // [rsp+182h] [rbp+82h]
  const char *v90; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v91)(); // [rsp+190h] [rbp+90h]
  char v92; // [rsp+198h] [rbp+98h]
  int v93; // [rsp+19Ah] [rbp+9Ah]
  const char *v94; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v95)(); // [rsp+1A8h] [rbp+A8h]
  char v96; // [rsp+1B0h] [rbp+B0h]
  int v97; // [rsp+1B2h] [rbp+B2h]
  const char *v98; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v99)(); // [rsp+1C0h] [rbp+C0h]
  char v100; // [rsp+1C8h] [rbp+C8h]
  int v101; // [rsp+1CAh] [rbp+CAh]
  const char *v102; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v103)(); // [rsp+1D8h] [rbp+D8h]
  char v104; // [rsp+1E0h] [rbp+E0h]
  int v105; // [rsp+1E2h] [rbp+E2h]
  const char *v106; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v107)(); // [rsp+1F0h] [rbp+F0h]
  char v108; // [rsp+1F8h] [rbp+F8h]
  int v109; // [rsp+1FAh] [rbp+FAh]
  const char *v110; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v111)(); // [rsp+208h] [rbp+108h]
  char v112; // [rsp+210h] [rbp+110h]
  int v113; // [rsp+212h] [rbp+112h]
  const char *v114; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v115)(); // [rsp+220h] [rbp+120h]
  char v116; // [rsp+228h] [rbp+128h]
  int v117; // [rsp+22Ah] [rbp+12Ah]
  const char *v118; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v119)(); // [rsp+238h] [rbp+138h]
  char v120; // [rsp+240h] [rbp+140h]
  int v121; // [rsp+242h] [rbp+142h]
  const char *v122; // [rsp+248h] [rbp+148h]
  NTSTATUS (__fastcall *v123)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+250h] [rbp+150h]

  v39 = a4;
  v43 = AcpiParseULong;
  v47 = AcpiParseULong;
  v51 = AcpiParseULong;
  v54 = "ArchitectureFlags";
  v42 = "MinimumResidency";
  v80 = 0;
  v81 = 0;
  v55 = AcpiParseULong;
  v59 = AcpiParseULong;
  v82 = "MinimumResidency";
  v46 = "WakeupLatency";
  v83 = AcpiParseULong;
  v63 = AcpiParseULong;
  v86 = "WakeupLatency";
  v40 = 0;
  v87 = AcpiParseULong;
  v41 = 0;
  v90 = "Flags";
  v48 = 2;
  v50 = "Flags";
  v56 = 4;
  v67 = AcpiParseRegister;
  v71 = AcpiParseRegister;
  v75 = AcpiParseRegister;
  v91 = AcpiParseULong;
  v44 = 1;
  v45 = 0x40000;
  v49 = 0x80000;
  v52 = 3;
  v53 = 786432;
  v57 = 0x100000;
  v58 = "ResidencyCounterFrequency";
  v60 = 5;
  v61 = 1310720;
  v62 = "EnabledParentState";
  v64 = 6;
  v65 = 1572866;
  v66 = "EntryMethod";
  v68 = 7;
  v69 = 2359298;
  v70 = "ResidencyCounter";
  v72 = 8;
  v73 = 3145730;
  v74 = "UsageCounter";
  v76 = 9;
  v77 = 4194305;
  v78 = "StateName";
  v79 = AcpiParseAnsiString;
  v84 = 1;
  v85 = 0x40000;
  v88 = 2;
  v89 = 0x80000;
  v102 = "EnabledParentState";
  v94 = "ArchitectureFlags";
  v107 = AcpiParseRegisterOrQword;
  v95 = AcpiParseULong;
  v111 = AcpiParseStaticRegister;
  v98 = "ResidencyCounterFrequency";
  v106 = "EntryMethod";
  v110 = "EntryMethod";
  v114 = "ResidencyCounter";
  v115 = AcpiParseRegister;
  v119 = AcpiParseRegister;
  v92 = 3;
  v93 = 786432;
  v96 = 4;
  v97 = 0x100000;
  v99 = AcpiParseULong;
  v100 = 5;
  v101 = 1310720;
  v103 = AcpiParseULong;
  v104 = 6;
  v105 = 1572866;
  v108 = 6;
  v109 = 1572864;
  v112 = 7;
  v113 = 2359298;
  v116 = 8;
  v117 = 3145730;
  v118 = "UsageCounter";
  v120 = 9;
  v121 = 4194305;
  v122 = "StateName";
  v123 = AcpiParseAnsiString;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x33u,
        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
        a2);
    return (unsigned int)-1073741275;
  }
  if ( *(_WORD *)(a1 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v7 = 52;
LABEL_8:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
      a2);
    return (unsigned int)-1072431096;
  }
  v8 = *(unsigned __int16 *)(a1 + 14);
  v9 = *(_DWORD *)(a1 + 16);
  if ( (unsigned __int16)v8 < 4u )
    v8 = 4LL;
  v10 = *(unsigned int *)(a1 + 4);
  v11 = (_WORD *)(v8 + a1 + 16);
  if ( (unsigned __int64)v11 >= a1 + v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v7 = 53;
    goto LABEL_8;
  }
  if ( *v11 )
  {
    if ( *v11 != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431096;
      v7 = 54;
      goto LABEL_8;
    }
    v12 = v11[1];
    if ( v12 > 8u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431096;
      v7 = 55;
      goto LABEL_8;
    }
    v13 = (unsigned __int16)v11[1];
    v38 = 0LL;
    memmove(&v38, v11 + 2, v13);
  }
  else
  {
    v12 = v11[1];
    v38 = *((unsigned int *)v11 + 1);
  }
  if ( v12 >= 4u )
  {
    _mm_lfence();
    v14 = (unsigned __int16)v11[1];
    LODWORD(v10) = *(_DWORD *)(a1 + 4);
  }
  else
  {
    v14 = 4LL;
  }
  v15 = (char *)v11 + v14 + 4;
  if ( (unsigned __int64)v15 >= a1 + (unsigned __int64)(unsigned int)v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v7 = 56;
    goto LABEL_8;
  }
  if ( *(_WORD *)v15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v7 = 57;
    goto LABEL_8;
  }
  _mm_lfence();
  v16 = *((_DWORD *)v15 + 1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(80 * v16 + 24), 0x72637250u);
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(80 * v16 + 24));
    v18[1] = v38;
    *(_DWORD *)v18 = v9;
    *((_DWORD *)v18 + 4) = v16;
    if ( *((_WORD *)v15 + 1) >= 4u )
    {
      _mm_lfence();
      v21 = *((unsigned __int16 *)v15 + 1);
    }
    else
    {
      v21 = 4LL;
    }
    v22 = &v15[v21 + 4];
    v23 = 0;
    while ( (unsigned __int64)v22 < a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
    {
      if ( v23 == v16 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = 58;
          goto LABEL_62;
        }
        goto LABEL_59;
      }
      if ( *(_WORD *)v22 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_SD((__int64)WPP_GLOBAL_Control->DeviceExtension, 4LL, v19, v20, v35, a2);
        goto LABEL_59;
      }
      v24 = (unsigned __int8 *)&v80;
      v25 = 10LL * v23;
      if ( !a3 )
        v24 = (unsigned __int8 *)&v40;
      if ( (int)AcpiParseCore(
                  v24,
                  (unsigned int)(a3 != 0) + 10,
                  (__int64)(v22 + 4),
                  *((unsigned __int16 *)v22 + 1),
                  (__int64)&v18[v25 + 3],
                  80,
                  "_LPI",
                  1) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v36) = v23 + 3;
          WPP_RECORDER_SF_Sd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v26,
            v19,
            0x3Cu,
            (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
            a2,
            v36);
        }
        v6 = -1072431089;
        goto LABEL_71;
      }
      v27 = &v18[v25 + 6];
      if ( *v27 != 127 )
        AcpiTranslateAccessSize(v27, v26);
      v28 = (char *)&v18[v25 + 7] + 4;
      if ( *v28 != 127 )
        AcpiTranslateAccessSize(v28, v26);
      v29 = &v18[v25 + 9];
      if ( *v29 != 127 )
        AcpiTranslateAccessSize(v29, v26);
      v30 = *((unsigned __int16 *)v22 + 1);
      if ( (unsigned __int16)v30 < 4u )
        v30 = 4LL;
      v22 += v30 + 4;
      ++v23;
    }
    if ( v23 != v16 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = 61;
LABEL_62:
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v31,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
          a2);
      }
LABEL_59:
      v6 = -1072431096;
      goto LABEL_71;
    }
    if ( v23 )
    {
      v6 = 0;
      *v39 = v18;
      v18 = 0LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x3Eu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
          a2);
      v6 = -1072431096;
    }
LABEL_71:
    LODWORD(v38) = v6;
    if ( v18 )
    {
      v32 = 0;
      if ( *((_DWORD *)v18 + 4) )
      {
        do
        {
          v33 = 10LL * v32;
          if ( v18[v33 + 12] )
            RtlFreeUnicodeString((PUNICODE_STRING)&v18[v33 + 11]);
          ++v32;
        }
        while ( v32 < *((_DWORD *)v18 + 4) );
        v6 = v38;
      }
      ExFreePoolWithTag(v18, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
