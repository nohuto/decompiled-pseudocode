/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x1407357A4
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1402E2030 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036A990 (RtlUnicodeStringPrintfEx.c)
 *     PnpGetLogString @ 0x14036C908 (PnpGetLogString.c)
 *     McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer @ 0x14036CAD0 (McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer.c)
 *     RtlTimeToTimeFields @ 0x14036CDF0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x1405069A8 (RtlUnicodeStringExHandleOtherFlags.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140690CB0 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     RtlStringFromGUIDEx @ 0x14070EF18 (RtlStringFromGUIDEx.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 *     PnpTraceDeviceConfig @ 0x140735ED4 (PnpTraceDeviceConfig.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r10
  void *v10; // r9
  __int64 v11; // rdx
  wchar_t *Buffer; // r8
  int v13; // r12d
  __int64 **v14; // r15
  __int64 **v15; // rdx
  int v16; // r15d
  char v17; // r14
  __int64 *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  int *v21; // rax
  const wchar_t *v22; // rdx
  const wchar_t *v23; // r8
  const wchar_t *v24; // r9
  const wchar_t *v25; // r10
  const wchar_t *v26; // r11
  __int64 v27; // r13
  __int64 **v28; // r14
  __int64 **v29; // rax
  wchar_t *v30; // r12
  __int64 v31; // r10
  __int64 v32; // r11
  wchar_t *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r11
  int v37; // r8d
  __int64 *v38; // rcx
  unsigned __int16 v39; // ax
  wchar_t *StringRoutine; // rax
  UNICODE_STRING v41; // xmm0
  __int64 *v42; // rsi
  wchar_t *v43; // r8
  wchar_t *v44; // r9
  size_t v45; // rdx
  size_t v46; // rax
  __int16 v47; // cx
  __int64 v48; // r9
  __int64 v49; // r14
  const WCHAR *v50; // rcx
  unsigned __int64 v51; // r10
  int v52; // ebx
  unsigned __int16 Length; // cx
  unsigned int v54; // r9d
  __int64 v55; // rdx
  __int64 v56; // rax
  char v57; // r14
  __int64 *v58; // rbx
  __int64 v59; // r8
  __int64 v60; // rdx
  int *v61; // rax
  const wchar_t *v62; // rdx
  const wchar_t *v63; // r8
  const wchar_t *v64; // r9
  const wchar_t *v65; // r10
  const wchar_t *v66; // r11
  char v67; // r14
  __int64 *v68; // rbx
  __int64 v69; // r8
  __int64 v70; // rdx
  int *LogString; // rax
  const wchar_t *v72; // rdx
  const wchar_t *v73; // r8
  const wchar_t *v74; // r9
  const wchar_t *v75; // r10
  const wchar_t *v76; // r11
  char v77; // r14
  __int64 *v78; // rbx
  __int64 v79; // r8
  __int64 v80; // rdx
  int *v81; // rax
  const wchar_t *v82; // rdx
  const wchar_t *v83; // r8
  const wchar_t *v84; // r9
  const wchar_t *v85; // r10
  const wchar_t *v86; // r11
  int v87; // ecx
  unsigned __int16 v88; // si
  wchar_t *v89; // rax
  __int64 *v90; // rsi
  int v91; // r15d
  int v92; // r9d
  void *v93; // r9
  __int64 v94; // rdx
  unsigned __int16 v95; // cx
  unsigned int v96; // r8d
  __int64 v97; // rdx
  UNICODE_STRING *v98; // r8
  UNICODE_STRING *v99; // rdx
  const wchar_t *v100; // rcx
  NTSTATUS v101; // ebx
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-F0h]
  wchar_t **ppszDestEnda; // [rsp+20h] [rbp-F0h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-E8h]
  size_t *pcchRemaininga; // [rsp+28h] [rbp-E8h]
  ULONG dwFlags[2]; // [rsp+30h] [rbp-E0h]
  BOOL v107; // [rsp+90h] [rbp-80h]
  _TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-70h] BYREF
  int v109; // [rsp+B0h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-58h] BYREF
  UNICODE_STRING v111; // [rsp+D0h] [rbp-40h] BYREF
  UNICODE_STRING v112; // [rsp+E0h] [rbp-30h] BYREF
  UNICODE_STRING v113; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v114; // [rsp+100h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp-8h] BYREF
  int v116; // [rsp+118h] [rbp+8h]
  int v117; // [rsp+11Ch] [rbp+Ch]
  __int64 v118; // [rsp+120h] [rbp+10h]
  UNICODE_STRING GuidString; // [rsp+128h] [rbp+18h] BYREF
  UNICODE_STRING v120; // [rsp+138h] [rbp+28h] BYREF
  wchar_t *v121; // [rsp+148h] [rbp+38h] BYREF
  size_t v122; // [rsp+150h] [rbp+40h] BYREF
  size_t pcchNewDestLength; // [rsp+158h] [rbp+48h] BYREF
  __int64 v124; // [rsp+160h] [rbp+50h]
  __int64 v125; // [rsp+168h] [rbp+58h]
  __int64 v126; // [rsp+170h] [rbp+60h]
  UNICODE_STRING v127; // [rsp+178h] [rbp+68h] BYREF
  UNICODE_STRING v128; // [rsp+188h] [rbp+78h] BYREF
  GUID Guid; // [rsp+198h] [rbp+88h] BYREF
  _QWORD v130[20]; // [rsp+1B0h] [rbp+A0h] BYREF
  wchar_t pszDest[12]; // [rsp+250h] [rbp+140h] BYREF
  wchar_t v132[24]; // [rsp+268h] [rbp+158h] BYREF

  v126 = a7;
  v109 = a4;
  v124 = a3;
  v114 = a2;
  v7 = a3;
  v118 = a1;
  v8 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = a1;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v120.Length = 0LL;
  v120.Buffer = 0LL;
  v107 = 1;
  v125 = 0LL;
  *(_QWORD *)&v113.Length = 0LL;
  v113.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v117 = 0;
  *(_QWORD *)&v111.Length = 0LL;
  v111.Buffer = 0LL;
  TimeFields = 0LL;
  v127 = 0LL;
  Guid = 0LL;
  v112 = 0LL;
  v128 = 0LL;
  if ( (byte_140C1307A & 0x18) != 0x18 )
    goto LABEL_38;
  if ( a3 )
  {
    memset(v130, 0, sizeof(v130));
    v10 = *(void **)(v7 + 16);
    v11 = *(_QWORD *)(v7 + 64);
    v130[0] = &DEVPKEY_DriverPackage_OriginalInfName;
    v130[2] = &DestinationString;
    v130[5] = DEVPKEY_DriverPackage_DriverFlightIds;
    v130[7] = &UnicodeString;
    v130[10] = DEVPKEY_DriverPackage_SubmissionId;
    v130[12] = &v120;
    LODWORD(v130[1]) = 18;
    HIDWORD(v130[3]) = 6;
    LODWORD(v130[6]) = 8210;
    HIDWORD(v130[8]) = 6;
    LODWORD(v130[11]) = 18;
    HIDWORD(v130[13]) = 6;
    if ( (int)PiDevCfgQueryObjectProperties(18LL, v11, 8u, v10, (__int64)v130, 3u) < 0 )
      goto LABEL_38;
    if ( SLODWORD(v130[4]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v130[9]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v54 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v55 = 0LL;
        do
        {
          if ( !Buffer[v55] )
          {
            Buffer[v55] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v55 = ++v54;
        }
        while ( v54 < ((unsigned __int64)Length >> 1) - 2 );
        v8 = v114;
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( SLODWORD(v130[14]) < 0 )
      RtlInitUnicodeString(&v120, 0LL);
    if ( DestinationString.Buffer )
      v107 = RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(v7 + 112), &TimeFields);
    LODWORD(pcchRemaining) = TimeFields.Year;
    LODWORD(ppszDestEnd) = TimeFields.Day;
    if ( RtlStringCchPrintfW(
           pszDest,
           0xBuLL,
           L"%02d/%02d/%04d",
           (unsigned int)TimeFields.Month,
           ppszDestEnd,
           pcchRemaining) < 0 )
      pszDest[0] = 0;
    LODWORD(pcchRemaininga) = *(unsigned __int16 *)(v7 + 122);
    LODWORD(ppszDestEnda) = *(unsigned __int16 *)(v7 + 124);
    if ( RtlStringCchPrintfW(
           v132,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(v7 + 124)),
           ppszDestEnda,
           pcchRemaininga,
           *(unsigned __int16 *)(v7 + 120)) < 0 )
      v132[0] = 0;
    v13 = *(_DWORD *)(v7 + 108);
    v14 = (__int64 **)(v7 + 224);
    v15 = *(__int64 ***)(v7 + 224);
    if ( v13 == -1 )
      v13 = 0;
    v116 = v13;
    if ( v15 != v14 )
    {
      v37 = 0;
      do
      {
        v38 = v15[22];
        v37 += *((unsigned __int16 *)v15 + 20) + *((unsigned __int16 *)v15 + 36) + 22;
        if ( v38 )
        {
          v56 = -1LL;
          do
            ++v56;
          while ( *((_WORD *)v38 + v56) );
          v37 += 2 * v56 + 2;
        }
        v15 = (__int64 **)*v15;
      }
      while ( v15 != v14 );
      v39 = v37 + 2;
      if ( (unsigned int)(v37 + 2) > 0xFFFE )
        v39 = -2;
      v113.MaximumLength = v39;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v39);
      v113.Buffer = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_38;
      v41 = v113;
      *StringRoutine = 0;
      v42 = *v14;
      TimeFields = (_TIME_FIELDS)v41;
      if ( v42 != (__int64 *)v14 )
      {
        do
        {
          if ( v42 != *v14 )
          {
            if ( (TimeFields.Year & 1) != 0 )
              break;
            if ( (TimeFields.Month & 1) != 0 )
              break;
            if ( TimeFields.Year > (unsigned int)TimeFields.Month )
              break;
            if ( TimeFields.Month == -1 )
              break;
            v43 = *(wchar_t **)&TimeFields.Minute;
            if ( !*(_QWORD *)&TimeFields.Minute && (TimeFields.Year || TimeFields.Month) )
              break;
            v44 = *(wchar_t **)&TimeFields.Minute;
            v45 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
            v46 = 0LL;
            v47 = v45;
            if ( v45 )
            {
              v48 = 0x7FFFLL;
              v49 = *(_QWORD *)&TimeFields.Minute - (_QWORD)L" ";
              v50 = L" ";
              v51 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
              v52 = 0;
              do
              {
                if ( !v48 )
                  break;
                if ( !*v50 )
                  break;
                *(const WCHAR *)((char *)v50 + v49) = *v50;
                --v48;
                ++v50;
                ++v46;
                --v51;
              }
              while ( v51 );
              if ( !v51 && v48 && *v50 )
                v52 = -2147483643;
              pcchNewDestLength = v46;
              v47 = v45 - v46;
              v44 = &v43[v46];
              v121 = v44;
              v122 = v45 - v46;
              if ( v52 < 0 )
              {
                RtlUnicodeStringExHandleOtherFlags(v43, v45, (size_t)v43, &pcchNewDestLength, &v121, &v122, 0x800u);
                v44 = v121;
                v47 = v122;
                LOWORD(v46) = pcchNewDestLength;
              }
            }
            else
            {
              v52 = *(_QWORD *)&TimeFields.Minute != 0LL ? -2147483643 : -1073741811;
            }
            TimeFields.Year = 2 * v46;
            if ( ((v52 + 0x80000000) & 0x80000000) != 0 || v52 == -2147483643 )
            {
              TimeFields.Year = 0;
              TimeFields.Month = 2 * v47;
              *(_QWORD *)&TimeFields.Minute = v44;
            }
            if ( v52 < 0 )
              break;
          }
          dwFlags[0] = *((_DWORD *)v42 + 27);
          if ( RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L"%wZ:%wZ:%08X",
                 v42 + 5,
                 v42 + 9,
                 *(_QWORD *)dwFlags) < 0
            || v42[22]
            && RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L":%ws",
                 v42[22]) < 0 )
          {
            break;
          }
          v42 = (__int64 *)*v42;
        }
        while ( v42 != (__int64 *)v14 );
        v7 = v124;
        LOBYTE(v13) = v116;
        v8 = v114;
      }
    }
    LOBYTE(a4) = v109;
    v9 = v118;
  }
  else
  {
    pszDest[0] = 0;
    LOBYTE(v13) = 0;
    v132[0] = 0;
    v107 = 0;
  }
  v16 = a5;
  if ( a5 < 0 )
  {
    if ( a5 == -1073740959 )
    {
      if ( (byte_140C1307A & 0x20) != 0 )
      {
        v67 = a4 & 1;
        v68 = (__int64 *)(v7 + 240);
        if ( !v7 )
          v68 = PiDevCfgNullGuid;
        PnpGetLogString(*(_QWORD *)(v9 + 16) + 40LL);
        PnpGetLogString((__int64)&v113);
        PnpGetLogString(v69);
        PnpGetLogString(v70);
        LogString = PnpGetLogString((v7 + 272) & -(__int64)(v7 != 0));
        McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
          v107,
          (__int64)KMPnPEvt_DeviceConfig_Blocked,
          (__int64)v73,
          *(const wchar_t **)(v8 + 8),
          v76,
          (__int64)v68,
          pszDest,
          v132,
          (const wchar_t *)LogString,
          v107,
          v72,
          v13,
          v73,
          v75,
          v67,
          97,
          v74);
      }
    }
    else if ( (byte_140C1307A & 0x10) != 0 )
    {
      v77 = a4 & 1;
      v78 = (__int64 *)(v7 + 240);
      if ( !v7 )
        v78 = PiDevCfgNullGuid;
      PnpGetLogString(*(_QWORD *)(v9 + 16) + 40LL);
      PnpGetLogString((__int64)&v113);
      PnpGetLogString(v79);
      PnpGetLogString(v80);
      v81 = PnpGetLogString((v7 + 272) & -(__int64)(v7 != 0));
      McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
        v107,
        (__int64)KMPnPEvt_DeviceConfig_Failure,
        (__int64)v83,
        *(const wchar_t **)(v8 + 8),
        v86,
        (__int64)v78,
        pszDest,
        v132,
        (const wchar_t *)v81,
        v107,
        v82,
        v13,
        v83,
        v85,
        v77,
        a5,
        v84);
    }
  }
  else if ( (a4 & 0x70) != 0 )
  {
    if ( (byte_140C1307A & 0x20) != 0 )
    {
      v57 = a4 & 1;
      v58 = (__int64 *)(v7 + 240);
      if ( !v7 )
        v58 = PiDevCfgNullGuid;
      PnpGetLogString(*(_QWORD *)(v9 + 16) + 40LL);
      PnpGetLogString((__int64)&v113);
      PnpGetLogString(v59);
      PnpGetLogString(v60);
      v61 = PnpGetLogString((v7 + 272) & -(__int64)(v7 != 0));
      McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
        v107,
        (__int64)KMPnPEvt_DeviceConfig_RebootRequired,
        (__int64)v63,
        *(const wchar_t **)(v8 + 8),
        v66,
        (__int64)v58,
        pszDest,
        v132,
        (const wchar_t *)v61,
        v107,
        v62,
        v13,
        v63,
        v65,
        v57,
        a5,
        v64);
    }
  }
  else if ( (byte_140C1307A & 8) != 0 )
  {
    v17 = a4 & 1;
    v18 = (__int64 *)(v7 + 240);
    if ( !v7 )
      v18 = PiDevCfgNullGuid;
    PnpGetLogString(*(_QWORD *)(v9 + 16) + 40LL);
    PnpGetLogString((__int64)&v113);
    PnpGetLogString(v19);
    PnpGetLogString(v20);
    v21 = PnpGetLogString((v7 + 272) & -(__int64)(v7 != 0));
    McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
      v107,
      (__int64)&KMPnPEvt_DeviceConfig_Success,
      (__int64)v23,
      *(const wchar_t **)(v8 + 8),
      v26,
      (__int64)v18,
      pszDest,
      v132,
      (const wchar_t *)v21,
      v107,
      v22,
      v13,
      v23,
      v25,
      v17,
      a5,
      v24);
  }
  if ( v7 )
  {
    v27 = a6;
    v28 = (__int64 **)(v7 + 208);
    v29 = *(__int64 ***)(v7 + 208);
    if ( v29 == (__int64 **)(v7 + 208) )
      goto LABEL_30;
    v87 = v117;
    do
    {
      v29 = (__int64 **)*v29;
      ++v87;
    }
    while ( v29 != v28 );
    if ( !v87 )
    {
LABEL_30:
      v30 = v111.Buffer;
    }
    else
    {
      v88 = 0x7FFF;
      if ( (unsigned int)(1646 * v87 + 2) <= 0x7FFF )
      {
        v88 = 1646 * v87 + 2;
        v111.MaximumLength = v88;
      }
      else
      {
        v111.MaximumLength = 0x7FFF;
      }
      v111.Length = 0;
      v89 = (wchar_t *)ExpAllocateStringRoutine(v88);
      v111.Buffer = v89;
      v30 = v89;
      if ( !v89 )
        goto LABEL_38;
      memset(v89, 0, v88);
      v111.MaximumLength = v88 - 2;
      v90 = *v28;
      TimeFields = (_TIME_FIELDS)v111;
      if ( v90 != (__int64 *)v28 )
      {
        v91 = v109 & 1;
        do
        {
          v92 = v91 | 0x10;
          if ( !*((_DWORD *)v90 + 97) )
            v92 = v91;
          PiDevCfgLogDeviceConfigured(v118, v114, (_DWORD)v90, v92, a5, v27, v126);
          memset(v130, 0, sizeof(v130));
          v93 = (void *)v90[2];
          v130[0] = &DEVPKEY_DriverPackage_OriginalInfName;
          LODWORD(v130[1]) = 18;
          v130[2] = &v127;
          v130[5] = DEVPKEY_DriverPackage_ExtensionId;
          v130[7] = &Guid;
          LODWORD(v130[16]) = 18;
          v130[10] = DEVPKEY_DriverPackage_DriverFlightIds;
          HIDWORD(v130[3]) = 6;
          v130[12] = &v112;
          v130[15] = DEVPKEY_DriverPackage_SubmissionId;
          v130[17] = &v128;
          v94 = v90[8];
          LODWORD(v130[6]) = 13;
          LODWORD(v130[8]) = 16;
          LODWORD(v130[11]) = 8210;
          HIDWORD(v130[13]) = 6;
          HIDWORD(v130[18]) = 6;
          if ( (int)PiDevCfgQueryObjectProperties(6LL, v94, 8u, v93, (__int64)v130, 4u) >= 0 )
          {
            if ( SLODWORD(v130[4]) < 0 && !RtlCreateUnicodeString(&v127, (PCWSTR)v90[6]) )
              RtlInitUnicodeString(&v127, 0LL);
            if ( SLODWORD(v130[9]) < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
              RtlInitUnicodeString(&GuidString, 0LL);
            if ( SLODWORD(v130[14]) < 0 )
              RtlInitUnicodeString(&v112, 0LL);
            if ( v112.Buffer && (v95 = v112.Length, v112.Length > 4u) )
            {
              v96 = 0;
              if ( (unsigned __int64)v112.Length >> 1 != 2 )
              {
                v97 = 0LL;
                do
                {
                  if ( !v112.Buffer[v97] )
                  {
                    v112.Buffer[v97] = 59;
                    v95 = v112.Length;
                  }
                  v97 = ++v96;
                }
                while ( v96 < ((unsigned __int64)v95 >> 1) - 2 );
                v27 = a6;
              }
              v112.Length = v95 - 2;
            }
            else
            {
              RtlFreeAnsiString(&v112);
              RtlInitUnicodeString(&v112, 0LL);
            }
            if ( SLODWORD(v130[19]) < 0 )
              RtlInitUnicodeString(&v128, 0LL);
            v98 = &v128;
            if ( !v128.Buffer )
              v98 = (UNICODE_STRING *)&PiDevCfgEmptyString;
            v99 = &v112;
            v100 = L",";
            if ( !v112.Buffer )
              v99 = (UNICODE_STRING *)&PiDevCfgEmptyString;
            if ( v90 == *v28 )
              v100 = &word_1407C1980;
            v101 = RtlUnicodeStringPrintfEx(
                     (PUNICODE_STRING)&TimeFields,
                     (PUNICODE_STRING)&TimeFields,
                     0x800u,
                     L"%ws%wZ:%wZ:%wZ:%wZ",
                     v100,
                     &v127,
                     &GuidString,
                     v99,
                     v98);
            RtlFreeAnsiString(&GuidString);
            RtlFreeAnsiString(&v112);
            RtlFreeAnsiString(&v127);
            RtlFreeAnsiString(&v128);
            if ( v101 < 0 )
              break;
          }
          v90 = (__int64 *)*v90;
        }
        while ( v90 != (__int64 *)v28 );
        v7 = v124;
        v16 = a5;
        v30 = v111.Buffer;
      }
    }
    LODWORD(v31) = 0;
    if ( *(_QWORD *)(v114 + 32) )
      v31 = *(_QWORD *)(v114 + 32);
    if ( *(_QWORD *)(v114 + 48) && *(_WORD *)(v114 + 40) > 2u )
    {
      v32 = *(_QWORD *)(v114 + 48);
      v34 = -1LL;
      do
        ++v34;
      while ( *(_WORD *)(v32 + 2 * v34) );
      while ( *(_WORD *)(v32 + 2 * v34 + 2) )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( *(_WORD *)(v32 + 2 * v35) );
        v36 = v32 + 2 * v35;
        v34 = -1LL;
        v32 = v36 + 2;
        do
          ++v34;
        while ( *(_WORD *)(v32 + 2 * v34) );
      }
    }
    else
    {
      LODWORD(v32) = v125;
    }
    v33 = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      v33 = *(wchar_t **)(v7 + 48);
    PnpTraceDeviceConfig(
      v118 + 40,
      v31,
      v32,
      *(_QWORD *)(v7 + 264),
      (__int64)v33,
      *(_QWORD *)(v7 + 280),
      (__int64)pszDest,
      (__int64)v132,
      (__int64)v120.Buffer,
      (__int64)v30,
      v107,
      (__int64)&UnicodeString,
      PnpSetupInProgress != 0,
      (v109 & 0x70) != 0,
      v27,
      v16,
      v126);
  }
LABEL_38:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v113);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v111);
  RtlFreeAnsiString(&v120);
}
