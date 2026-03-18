/*
 * XREFs of EtwStartAutoLogger @ 0x1407ABE40
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x1407AB860 (EtwpInitializeAutoLoggers.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407ABAC0 (PerfDiagpStartPerfDiagLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407ABBD0 (EtwpEnumerateAutologgerPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D35D0 (wcscmp.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F8510 (ZwCreateKey.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpCreateKeyTreeForPath @ 0x1405AA05C (EtwpCreateKeyTreeForPath.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlGUIDFromString @ 0x1406409E0 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x14066AD7C (RtlpQueryRegistryValues.c)
 *     RtlNtStatusToDosError @ 0x1406B2FF0 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406D6A00 (RtlWriteRegistryValue.c)
 *     RtlCreateUnicodeString @ 0x1406FDE90 (RtlCreateUnicodeString.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwpEnableKeyProviders @ 0x1407AC9A8 (EtwpEnableKeyProviders.c)
 *     EtwpUpdateDisallowList @ 0x140936C10 (EtwpUpdateDisallowList.c)
 *     EtwpParsePoolTagFilter @ 0x14094281C (EtwpParsePoolTagFilter.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwStartAutoLogger(wchar_t *SourceString, PCWSTR a2, WCHAR *a3)
{
  GUID *v6; // rsi
  __int64 v7; // rbx
  NTSTATUS RegistryValues; // edi
  PVOID v9; // rax
  _WORD *v10; // rsi
  int v11; // r13d
  _WORD *v12; // r15
  int v13; // eax
  const WCHAR *v14; // rdx
  unsigned int *v16; // r14
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // r12d
  unsigned __int16 v20; // si
  _DWORD *v21; // rcx
  int v22; // eax
  GUID v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // rcx
  int started; // eax
  unsigned int v27; // r15d
  _QWORD *v28; // rax
  unsigned int v29; // eax
  const WCHAR *v30; // rdx
  __int64 v31; // rax
  _WORD *v32; // rcx
  _WORD *v33; // rdx
  unsigned __int16 v34; // cx
  unsigned __int16 v35; // ax
  __int64 v36; // r9
  void *v37; // r9
  unsigned int v38; // esi
  GUID *v39; // r12
  int v40; // r14d
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG v42; // eax
  _WORD v43[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  GUID *PoolWithTag; // [rsp+48h] [rbp-B8h]
  unsigned int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  ULONG Disposition; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h] BYREF
  int v52; // [rsp+70h] [rbp-90h] BYREF
  ULONG ValueData; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING GuidString; // [rsp+80h] [rbp-80h] BYREF
  int v56; // [rsp+90h] [rbp-70h] BYREF
  int v57; // [rsp+94h] [rbp-6Ch] BYREF
  int v58; // [rsp+98h] [rbp-68h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  __int128 v60; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v61; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v62; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v65; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  wchar_t *Str1; // [rsp+148h] [rbp+48h]
  WCHAR *v69; // [rsp+150h] [rbp+50h]
  PCWSTR v70; // [rsp+158h] [rbp+58h]
  GUID Guid; // [rsp+160h] [rbp+60h] BYREF
  int v72; // [rsp+170h] [rbp+70h] BYREF
  int *v73; // [rsp+178h] [rbp+78h]
  int v74; // [rsp+180h] [rbp+80h] BYREF
  int *v75; // [rsp+188h] [rbp+88h]
  int v76; // [rsp+190h] [rbp+90h] BYREF
  __int64 v77; // [rsp+198h] [rbp+98h]
  int v78; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  int v80; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  int v82; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  int v84; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 *v85; // [rsp+1D8h] [rbp+D8h]
  int v86; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 *v87; // [rsp+1E8h] [rbp+E8h]
  int v88; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  int v90; // [rsp+200h] [rbp+100h] BYREF
  __int64 v91; // [rsp+208h] [rbp+108h]
  int v92; // [rsp+210h] [rbp+110h] BYREF
  __int64 v93; // [rsp+218h] [rbp+118h]
  int v94; // [rsp+220h] [rbp+120h] BYREF
  int *v95; // [rsp+228h] [rbp+128h]
  int v96; // [rsp+230h] [rbp+130h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+238h] [rbp+138h]
  int v98; // [rsp+240h] [rbp+140h] BYREF
  __int64 v99; // [rsp+248h] [rbp+148h]
  int v100; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v101; // [rsp+258h] [rbp+158h]
  int v102; // [rsp+260h] [rbp+160h] BYREF
  UNICODE_STRING *v103; // [rsp+268h] [rbp+168h]
  int v104; // [rsp+270h] [rbp+170h] BYREF
  __int128 *v105; // [rsp+278h] [rbp+178h]
  int v106; // [rsp+280h] [rbp+180h] BYREF
  int *v107; // [rsp+288h] [rbp+188h]
  int v108; // [rsp+290h] [rbp+190h] BYREF
  UNICODE_STRING *v109; // [rsp+298h] [rbp+198h]
  int v110; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  _QWORD v112[148]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v69 = a3;
  v70 = a2;
  Str1 = SourceString;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v56 = 1;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  ValueData = 0;
  v7 = 0LL;
  v51 = 0;
  UnicodeString = 0LL;
  v46 = 0;
  v65 = 0LL;
  v52 = 0;
  v62 = 0LL;
  v47 = 0;
  v63 = 0LL;
  v44 = 0;
  v61 = 0LL;
  v43[0] = 0;
  v60 = 0LL;
  v58 = 0;
  v57 = 100;
  v50 = 0;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x50777445u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = ExAllocatePoolWithTag(PagedPool, 0x504uLL, 0x50777445u);
      v7 = (__int64)v9;
      if ( v9 )
      {
        memset(v9, 0, 0x504uLL);
        *(_DWORD *)(v7 + 44) = 0x20000;
        *(_DWORD *)(v7 + 48) = 4;
        RtlInitUnicodeString((PUNICODE_STRING)(v7 + 144), SourceString);
        *(_DWORD *)(v7 + 72) = 0x80000000;
        *(_WORD *)(v7 + 72) = 176;
        v10 = (_WORD *)(v7 + 180);
        *(_BYTE *)(v7 + 74) = -1;
        *(_DWORD *)(v7 + 176) = 1;
        Src = (void *)(v7 + 224);
        v11 = 180;
        v12 = (_WORD *)(v7 + 1252);
        memset(v112, 0, 0x498uLL);
        v112[0] = &EtwpQueryRegistryCallback;
        v112[3] = &v72;
        v112[7] = &EtwpQueryRegistryCallback;
        v112[2] = L"Start";
        LODWORD(v112[4]) = 4;
        v73 = &v51;
        v72 = 4;
        v112[10] = &v74;
        v112[9] = L"Immutable";
        v75 = &v44;
        LODWORD(v112[11]) = 4;
        v74 = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v112, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_10;
        if ( !a3 )
        {
          v13 = v44;
          goto LABEL_7;
        }
        Disposition = 0;
        RtlInitUnicodeString(&DestinationString, a3);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( RegistryValues == -1073741772 )
        {
          if ( (unsigned int)EtwpCreateKeyTreeForPath(a3) )
            goto LABEL_76;
          RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        }
        if ( !RegistryValues )
        {
LABEL_77:
          v13 = v44;
          if ( Disposition == 1 )
            v13 = 1;
          v44 = v13;
LABEL_7:
          if ( !v13 )
          {
            if ( Handle )
            {
              v112[5] = &v51;
              memset(&v112[7], 0, 56);
              RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v112, 0LL);
              if ( RegistryValues < 0 )
                RegistryValues = 0;
            }
          }
          if ( v51 )
          {
            LODWORD(v63) = 40;
            LODWORD(v112[4]) = 4;
            v112[0] = &EtwpQueryRegistryCallback;
            v112[3] = &v72;
            v72 = 4;
            v112[2] = L"FlushThreshold";
            v112[7] = &EtwpQueryRegistryCallback;
            v73 = (int *)(v7 + 76);
            LODWORD(v112[11]) = 4;
            v112[10] = &v74;
            v112[9] = L"BufferSize";
            v112[17] = &v76;
            v112[16] = L"MinimumBuffers";
            v77 = v7 + 52;
            v112[24] = &v78;
            v112[23] = L"FlushTimer";
            v79 = v7 + 68;
            v112[31] = &v80;
            v112[30] = L"MaximumBuffers";
            v81 = v7 + 56;
            v112[38] = &v82;
            v112[37] = L"FileName";
            v112[40] = v43;
            v83 = v7 + 128;
            *((_QWORD *)&v63 + 1) = v7 + 184;
            v112[45] = &v84;
            v112[44] = L"EnableKernelFlags";
            v85 = &v63;
            *((_QWORD *)&v60 + 1) = v7 + 228;
            v112[52] = &v86;
            v112[51] = L"StackWalkingFilter";
            v74 = 4;
            v75 = (int *)(v7 + 48);
            v112[14] = &EtwpQueryRegistryCallback;
            LODWORD(v112[18]) = 4;
            v76 = 4;
            v112[21] = &EtwpQueryRegistryCallback;
            LODWORD(v112[25]) = 4;
            v78 = 4;
            v112[28] = &EtwpQueryRegistryCallback;
            LODWORD(v112[32]) = 4;
            v80 = 4;
            v112[35] = &EtwpQueryRegistryCallback;
            LODWORD(v112[39]) = 1;
            v82 = 1;
            v112[42] = &EtwpQueryRegistryCallback;
            LODWORD(v112[46]) = 3;
            v84 = 3;
            LODWORD(v60) = 1024;
            v112[49] = &EtwpQueryRegistryCallback;
            LODWORD(v112[53]) = 3;
            v86 = 3;
            v87 = &v60;
            v16 = (unsigned int *)(v7 + 96);
            v112[56] = &EtwpQueryRegistryCallback;
            v112[59] = &v88;
            v112[58] = L"ClockType";
            v112[61] = &v56;
            v89 = v7 + 40;
            v112[66] = &v90;
            v112[65] = L"MaxFileSize";
            v112[68] = &v57;
            v91 = v7 + 60;
            v112[73] = &v92;
            v112[72] = L"LogFileMode";
            v112[75] = &v58;
            v93 = v7 + 64;
            v112[80] = &v94;
            v112[79] = L"DisableRealtimePersistence";
            v95 = &v52;
            v112[87] = &v96;
            v112[86] = L"Guid";
            v112[89] = v43;
            p_UnicodeString = &UnicodeString;
            v112[94] = &v98;
            v112[93] = L"FileCounter";
            v112[101] = &v100;
            v112[100] = L"FileMax";
            v101 = &v46;
            v112[108] = &v102;
            LODWORD(v112[60]) = 4;
            LODWORD(v112[62]) = 4;
            v88 = 4;
            v112[63] = &EtwpQueryRegistryCallback;
            LODWORD(v112[67]) = 4;
            LODWORD(v112[69]) = 4;
            v90 = 4;
            v112[70] = &EtwpQueryRegistryCallback;
            LODWORD(v112[74]) = 4;
            LODWORD(v112[76]) = 4;
            v92 = 4;
            v112[77] = &EtwpQueryRegistryCallback;
            LODWORD(v112[81]) = 4;
            v94 = 4;
            v112[84] = &EtwpQueryRegistryCallback;
            LODWORD(v112[88]) = 1;
            v96 = 1;
            v112[91] = &EtwpQueryRegistryCallback;
            LODWORD(v112[95]) = 4;
            v98 = 4;
            v99 = v7 + 96;
            v112[98] = &EtwpQueryRegistryCallback;
            LODWORD(v112[102]) = 4;
            v100 = 4;
            v112[105] = &EtwpQueryRegistryCallback;
            v112[107] = L"PoolTagFilter";
            LODWORD(v112[109]) = 1;
            v112[110] = v43;
            v103 = &v65;
            *((_QWORD *)&v61 + 1) = v7 + 1276;
            v112[115] = &v104;
            v112[114] = L"StackCaching";
            v105 = &v61;
            v112[122] = &v106;
            v112[121] = L"EnableSecurityProvider";
            v107 = &v47;
            v112[129] = &v108;
            v112[128] = L"DisallowList";
            v112[131] = v43;
            v109 = &v62;
            v112[136] = &v110;
            v112[135] = L"V2Options";
            LODWORD(v112[137]) = 11;
            v110 = 11;
            v102 = 1;
            v112[112] = &EtwpQueryRegistryCallback;
            LODWORD(v112[116]) = 3;
            v104 = 3;
            v112[119] = &EtwpQueryRegistryCallback;
            LODWORD(v112[123]) = 4;
            v106 = 4;
            v112[126] = &EtwpQueryRegistryCallback;
            LODWORD(v112[130]) = 1;
            v108 = 1;
            v112[133] = &EtwpQueryRegistryCallback;
            v111 = v7 + 80;
            LODWORD(v61) = 8;
            LODWORD(v112[139]) = 8;
            RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v112, 0LL);
            if ( RegistryValues >= 0 )
            {
              if ( Handle )
              {
                if ( v44 )
                {
                  v112[5] = v7 + 96;
                  v112[3] = &v98;
                  v112[0] = &EtwpQueryRegistryCallback;
                  v112[2] = L"FileCounter";
                  LODWORD(v112[4]) = 4;
                  v72 = 4;
                  v73 = (int *)(v7 + 96);
                  v112[7] = 0LL;
                }
                else
                {
                  v112[12] = v7 + 48;
                  v112[5] = v7 + 76;
                  v112[19] = v7 + 52;
                  v112[26] = v7 + 68;
                  v112[33] = v7 + 56;
                  v112[40] = *(_QWORD *)(v7 + 136);
                  LODWORD(v112[41]) = *(unsigned __int16 *)(v7 + 128);
                  v112[47] = *((_QWORD *)&v63 + 1);
                  LODWORD(v112[48]) = v63;
                  v112[54] = *((_QWORD *)&v60 + 1);
                  LODWORD(v112[55]) = v60;
                  v112[61] = v7 + 40;
                  v112[68] = v7 + 60;
                  v112[75] = v7 + 64;
                  v112[82] = &v52;
                  v112[89] = UnicodeString.Buffer;
                  LODWORD(v112[90]) = UnicodeString.Length;
                  v112[103] = &v46;
                  v112[110] = v65.Buffer;
                  LODWORD(v112[111]) = v65.Length;
                  v112[117] = *((_QWORD *)&v61 + 1);
                  LODWORD(v112[118]) = v61;
                  v112[124] = &v47;
                  v112[131] = v62.Buffer;
                  LODWORD(v112[132]) = v62.Length;
                  v112[96] = v7 + 96;
                }
                RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v112, 0LL);
                RegistryValues = 0;
              }
              v17 = 1LL;
              v18 = *(_DWORD *)(v7 + 112) | 2;
              *(_DWORD *)(v7 + 112) = v18;
              if ( !v52 )
                *(_DWORD *)(v7 + 112) = v18 | 1;
              v19 = (unsigned int)v63 >> 2;
              if ( (unsigned __int16)((unsigned int)v63 >> 2) )
              {
                *(_WORD *)(v7 + 182) = 1;
                *v10 = v19 + 1;
                ++*(_WORD *)(v7 + 178);
                *(_WORD *)(v7 + 176) += *v10;
                v11 = 4 * (unsigned __int16)*v10 + 180;
              }
              if ( (_DWORD)v60 )
              {
                v33 = Src;
                v34 = ((unsigned int)v60 >> 2) + 1;
                if ( (v60 & 3) == 0 )
                  v34 = (unsigned int)v60 >> 2;
                *((_WORD *)Src + 1) = 3;
                *v33 = v34 + 1;
                ++*(_WORD *)(v7 + 178);
                *(_WORD *)(v7 + 176) += *v33;
                v11 += 4 * (unsigned __int16)*v33;
                if ( (_WORD)v19 )
                  v10 += 2 * (unsigned __int16)*v10;
                if ( v10 != v33 )
                  memmove(v10, v33, 4LL * v34 + 4);
              }
              if ( v65.Buffer )
              {
                Src = (void *)(v7 + 4 * (*(unsigned __int16 *)(v7 + 176) + 44LL));
                v35 = EtwpParsePoolTagFilter(&v65, v7 + 1256, 0LL, v17);
                v20 = v35;
                if ( v35 )
                {
                  *v12 = v35 + 1;
                  *(_WORD *)(v7 + 1254) = 4;
                  ++*(_WORD *)(v7 + 178);
                  *(_WORD *)(v7 + 176) += *v12;
                  v11 += 4 * (unsigned __int16)*v12;
                  if ( Src != v12 )
                    memmove(Src, (const void *)(v7 + 1252), 4LL * v35 + 4);
                }
              }
              else
              {
                v20 = v50;
              }
              if ( (_DWORD)v61 == 8 )
              {
                v36 = *(unsigned __int16 *)(v7 + 176);
                *(_DWORD *)(v7 + 1272) = 327683;
                ++*(_WORD *)(v7 + 178);
                *(_WORD *)(v7 + 176) += *(_WORD *)(v7 + 1272);
                v37 = (void *)(v7 + 4 * (v36 + 44));
                v11 += 4 * *(unsigned __int16 *)(v7 + 1272);
                if ( v37 != (void *)(v7 + 1272) )
                  memmove(v37, (const void *)(v7 + 1272), 0xCuLL);
              }
              if ( !(_WORD)v19 && !(_DWORD)v60 && !(_DWORD)v61 && !v20 )
                *(_DWORD *)(v7 + 72) = 0;
              v21 = (_DWORD *)(v7 + 64);
              v22 = *(_DWORD *)(v7 + 64);
              if ( (v22 & 0x500) != 0 && (v22 & 0x200) == 0 || *(_QWORD *)(v7 + 136) )
              {
LABEL_41:
                if ( v47 )
                {
                  if ( (*v21 & 0x80u) == 0 || (*v21 & 0x100) == 0 || *(_QWORD *)(v7 + 136) )
                    RegistryValues = -1073741790;
                  else
                    *(_DWORD *)(v7 + 112) |= 0x8004000u;
                }
                if ( RegistryValues >= 0 )
                {
                  if ( v46 )
                  {
                    v29 = *v16 + 1;
                    *v16 = v29;
                    if ( v29 > v46 || v29 > 0x10 )
                      *v16 = 1;
                    v30 = (const WCHAR *)Handle;
                    if ( !Handle )
                      v30 = (const WCHAR *)KeyHandle;
                    RtlWriteRegistryValue(0x40000000u, v30, L"FileCounter", 4u, (PVOID)(v7 + 96), 4u);
                  }
                  if ( !wcscmp(Str1, L"GlobalLogger") )
                    Guid = GlobalLoggerGuid;
                  else
                    RegistryValues = UnicodeString.Buffer ? RtlGUIDFromString(&UnicodeString, &Guid) : -1073741811;
                  if ( RegistryValues >= 0 )
                  {
                    v23 = Guid;
                    v24 = *(_QWORD *)&GuidString.Length;
                    v25 = *(_QWORD *)&GuidString.Length;
                    *(_DWORD *)v7 = v11;
                    *(GUID *)(v7 + 24) = v23;
                    started = EtwpStartLogger(v25, v7);
                    v27 = *(unsigned __int16 *)(v7 + 8);
                    RegistryValues = started;
                    if ( started >= 0 )
                    {
                      if ( *(_WORD *)(v7 + 8) && v47 )
                      {
                        v31 = 0LL;
                        v32 = (_WORD *)(v24 + 4048);
                        while ( *v32 )
                        {
                          v31 = (unsigned int)(v31 + 1);
                          ++v32;
                          if ( (unsigned int)v31 >= 8 )
                            goto LABEL_51;
                        }
                        *(_WORD *)(v24 + 2 * v31 + 4048) = v27;
                      }
LABEL_51:
                      if ( v62.Length )
                      {
                        v38 = v62.Length / 0x4Cu;
                        if ( v62.Length == 76 * v38 )
                        {
                          GuidString.Buffer = v62.Buffer;
                          *(&GuidString.MaximumLength + 2) = 0;
                          GuidString.Length = 76;
                          *(_DWORD *)&GuidString.MaximumLength = (unsigned __int16)(v62.MaximumLength - v62.Length + 76);
                          if ( v38 <= 0x200 )
                          {
                            v39 = PoolWithTag;
                            v40 = 0;
                            if ( v38 )
                            {
                              while ( 1 )
                              {
                                RegistryValues = RtlGUIDFromString(&GuidString, &v39[v40]);
                                if ( RegistryValues )
                                  break;
                                GuidString.Buffer += 38;
                                if ( ++v40 >= v38 )
                                  goto LABEL_108;
                              }
                            }
                            else
                            {
LABEL_108:
                              if ( !RegistryValues )
                              {
                                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                                EtwpUpdateDisallowList(CurrentServerSiloGlobals[108], v27, v38, v39);
                              }
                            }
                          }
                        }
                      }
                      v28 = PsGetCurrentServerSiloGlobals();
                      EtwpEnableKeyProviders(v28[108], v27, (_DWORD)v70, (_DWORD)v69, v44);
                    }
                  }
                }
                goto LABEL_10;
              }
              if ( RtlCreateUnicodeString((PUNICODE_STRING)(v7 + 128), L"%SystemRoot%") )
              {
                RegistryValues = 0;
                v21 = (_DWORD *)(v7 + 64);
                goto LABEL_41;
              }
              RegistryValues = -1073741801;
            }
          }
LABEL_10:
          v6 = PoolWithTag;
          goto LABEL_11;
        }
LABEL_76:
        RegistryValues = 0;
        Handle = 0LL;
        goto LABEL_77;
      }
    }
    RegistryValues = -1073741801;
  }
LABEL_11:
  v14 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v42 = RtlNtStatusToDosError(RegistryValues);
      v14 = (const WCHAR *)KeyHandle;
      ValueData = v42;
    }
    if ( Handle )
      RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"Status", 4u, &ValueData, 4u);
    else
      RtlWriteRegistryValue(0x40000000u, v14, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v7 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(v7 + 128));
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v65);
  RtlFreeAnsiString(&v62);
  return (unsigned int)RegistryValues;
}
