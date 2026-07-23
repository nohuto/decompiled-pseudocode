/*
 * XREFs of EtwStartAutoLogger @ 0x14079B794
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14079B1B4 (EtwpInitializeAutoLoggers.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14079B414 (PerfDiagpStartPerfDiagLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B524 (EtwpEnumerateAutologgerPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D40B0 (wcscmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpCreateKeyTreeForPath @ 0x1405ABC9C (EtwpCreateKeyTreeForPath.c)
 *     RtlNtStatusToDosError @ 0x1405E9950 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x140613DB0 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpEnableKeyProviders @ 0x14079C2FC (EtwpEnableKeyProviders.c)
 *     EtwpUpdateDisallowList @ 0x1409345B0 (EtwpUpdateDisallowList.c)
 *     EtwpParsePoolTagFilter @ 0x1409401BC (EtwpParsePoolTagFilter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r15d
  _QWORD *v30; // rax
  unsigned int v31; // eax
  const WCHAR *v32; // rdx
  __int64 v33; // rax
  _WORD *v34; // rdx
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // ax
  __int64 v37; // r9
  void *v38; // r9
  unsigned int v39; // esi
  GUID *v40; // r12
  int v41; // r14d
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG v43; // eax
  _WORD v44[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  GUID *PoolWithTag; // [rsp+48h] [rbp-B8h]
  unsigned int v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+54h] [rbp-ACh] BYREF
  ULONG Disposition; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h] BYREF
  int v53; // [rsp+70h] [rbp-90h] BYREF
  ULONG ValueData; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING GuidString; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+94h] [rbp-6Ch] BYREF
  int v59; // [rsp+98h] [rbp-68h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  __int128 v61; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v63; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v64; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v66; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  wchar_t *Str1; // [rsp+148h] [rbp+48h]
  WCHAR *v70; // [rsp+150h] [rbp+50h]
  PCWSTR v71; // [rsp+158h] [rbp+58h]
  GUID Guid; // [rsp+160h] [rbp+60h] BYREF
  int v73; // [rsp+170h] [rbp+70h] BYREF
  int *v74; // [rsp+178h] [rbp+78h]
  int v75; // [rsp+180h] [rbp+80h] BYREF
  int *v76; // [rsp+188h] [rbp+88h]
  int v77; // [rsp+190h] [rbp+90h] BYREF
  __int64 v78; // [rsp+198h] [rbp+98h]
  int v79; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  int v81; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  int v83; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v84; // [rsp+1C8h] [rbp+C8h]
  int v85; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 *v86; // [rsp+1D8h] [rbp+D8h]
  int v87; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 *v88; // [rsp+1E8h] [rbp+E8h]
  int v89; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v90; // [rsp+1F8h] [rbp+F8h]
  int v91; // [rsp+200h] [rbp+100h] BYREF
  __int64 v92; // [rsp+208h] [rbp+108h]
  int v93; // [rsp+210h] [rbp+110h] BYREF
  __int64 v94; // [rsp+218h] [rbp+118h]
  int v95; // [rsp+220h] [rbp+120h] BYREF
  int *v96; // [rsp+228h] [rbp+128h]
  int v97; // [rsp+230h] [rbp+130h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+238h] [rbp+138h]
  int v99; // [rsp+240h] [rbp+140h] BYREF
  __int64 v100; // [rsp+248h] [rbp+148h]
  int v101; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v102; // [rsp+258h] [rbp+158h]
  int v103; // [rsp+260h] [rbp+160h] BYREF
  UNICODE_STRING *v104; // [rsp+268h] [rbp+168h]
  int v105; // [rsp+270h] [rbp+170h] BYREF
  __int128 *v106; // [rsp+278h] [rbp+178h]
  int v107; // [rsp+280h] [rbp+180h] BYREF
  int *v108; // [rsp+288h] [rbp+188h]
  int v109; // [rsp+290h] [rbp+190h] BYREF
  UNICODE_STRING *v110; // [rsp+298h] [rbp+198h]
  int v111; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v112; // [rsp+2A8h] [rbp+1A8h]
  _QWORD v113[148]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v70 = a3;
  v71 = a2;
  Str1 = SourceString;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v57 = 1;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  ValueData = 0;
  v7 = 0LL;
  v52 = 0;
  UnicodeString = 0LL;
  v47 = 0;
  v66 = 0LL;
  v53 = 0;
  v63 = 0LL;
  v48 = 0;
  v64 = 0LL;
  v45 = 0;
  v62 = 0LL;
  v44[0] = 0;
  v61 = 0LL;
  v59 = 0;
  v58 = 100;
  v51 = 0;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = *((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)SourceString, (__int64)a2) + 108);
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
        memset(v113, 0, 0x498uLL);
        v113[0] = &EtwpQueryRegistryCallback;
        v113[3] = &v73;
        v113[7] = &EtwpQueryRegistryCallback;
        v113[2] = L"Start";
        LODWORD(v113[4]) = 4;
        v74 = &v52;
        v73 = 4;
        v113[10] = &v75;
        v113[9] = L"Immutable";
        v76 = &v45;
        LODWORD(v113[11]) = 4;
        v75 = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v113, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_10;
        if ( !a3 )
        {
          v13 = v45;
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
          v13 = v45;
          if ( Disposition == 1 )
            v13 = 1;
          v45 = v13;
LABEL_7:
          if ( !v13 )
          {
            if ( Handle )
            {
              v113[5] = &v52;
              memset(&v113[7], 0, 56);
              RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v113, 0LL);
              if ( RegistryValues < 0 )
                RegistryValues = 0;
            }
          }
          if ( v52 )
          {
            LODWORD(v64) = 40;
            LODWORD(v113[4]) = 4;
            v113[0] = &EtwpQueryRegistryCallback;
            v113[3] = &v73;
            v73 = 4;
            v113[2] = L"FlushThreshold";
            v113[7] = &EtwpQueryRegistryCallback;
            v74 = (int *)(v7 + 76);
            LODWORD(v113[11]) = 4;
            v113[10] = &v75;
            v113[9] = L"BufferSize";
            v113[17] = &v77;
            v113[16] = L"MinimumBuffers";
            v78 = v7 + 52;
            v113[24] = &v79;
            v113[23] = L"FlushTimer";
            v80 = v7 + 68;
            v113[31] = &v81;
            v113[30] = L"MaximumBuffers";
            v82 = v7 + 56;
            v113[38] = &v83;
            v113[37] = L"FileName";
            v113[40] = v44;
            v84 = v7 + 128;
            *((_QWORD *)&v64 + 1) = v7 + 184;
            v113[45] = &v85;
            v113[44] = L"EnableKernelFlags";
            v86 = &v64;
            *((_QWORD *)&v61 + 1) = v7 + 228;
            v113[52] = &v87;
            v113[51] = L"StackWalkingFilter";
            v75 = 4;
            v76 = (int *)(v7 + 48);
            v113[14] = &EtwpQueryRegistryCallback;
            LODWORD(v113[18]) = 4;
            v77 = 4;
            v113[21] = &EtwpQueryRegistryCallback;
            LODWORD(v113[25]) = 4;
            v79 = 4;
            v113[28] = &EtwpQueryRegistryCallback;
            LODWORD(v113[32]) = 4;
            v81 = 4;
            v113[35] = &EtwpQueryRegistryCallback;
            LODWORD(v113[39]) = 1;
            v83 = 1;
            v113[42] = &EtwpQueryRegistryCallback;
            LODWORD(v113[46]) = 3;
            v85 = 3;
            LODWORD(v61) = 1024;
            v113[49] = &EtwpQueryRegistryCallback;
            LODWORD(v113[53]) = 3;
            v87 = 3;
            v88 = &v61;
            v16 = (unsigned int *)(v7 + 96);
            v113[56] = &EtwpQueryRegistryCallback;
            v113[59] = &v89;
            v113[58] = L"ClockType";
            v113[61] = &v57;
            v90 = v7 + 40;
            v113[66] = &v91;
            v113[65] = L"MaxFileSize";
            v113[68] = &v58;
            v92 = v7 + 60;
            v113[73] = &v93;
            v113[72] = L"LogFileMode";
            v113[75] = &v59;
            v94 = v7 + 64;
            v113[80] = &v95;
            v113[79] = L"DisableRealtimePersistence";
            v96 = &v53;
            v113[87] = &v97;
            v113[86] = L"Guid";
            v113[89] = v44;
            p_UnicodeString = &UnicodeString;
            v113[94] = &v99;
            v113[93] = L"FileCounter";
            v113[101] = &v101;
            v113[100] = L"FileMax";
            v102 = &v47;
            v113[108] = &v103;
            LODWORD(v113[60]) = 4;
            LODWORD(v113[62]) = 4;
            v89 = 4;
            v113[63] = &EtwpQueryRegistryCallback;
            LODWORD(v113[67]) = 4;
            LODWORD(v113[69]) = 4;
            v91 = 4;
            v113[70] = &EtwpQueryRegistryCallback;
            LODWORD(v113[74]) = 4;
            LODWORD(v113[76]) = 4;
            v93 = 4;
            v113[77] = &EtwpQueryRegistryCallback;
            LODWORD(v113[81]) = 4;
            v95 = 4;
            v113[84] = &EtwpQueryRegistryCallback;
            LODWORD(v113[88]) = 1;
            v97 = 1;
            v113[91] = &EtwpQueryRegistryCallback;
            LODWORD(v113[95]) = 4;
            v99 = 4;
            v100 = v7 + 96;
            v113[98] = &EtwpQueryRegistryCallback;
            LODWORD(v113[102]) = 4;
            v101 = 4;
            v113[105] = &EtwpQueryRegistryCallback;
            v113[107] = L"PoolTagFilter";
            LODWORD(v113[109]) = 1;
            v113[110] = v44;
            v104 = &v66;
            *((_QWORD *)&v62 + 1) = v7 + 1276;
            v113[115] = &v105;
            v113[114] = L"StackCaching";
            v106 = &v62;
            v113[122] = &v107;
            v113[121] = L"EnableSecurityProvider";
            v108 = &v48;
            v113[129] = &v109;
            v113[128] = L"DisallowList";
            v113[131] = v44;
            v110 = &v63;
            v113[136] = &v111;
            v113[135] = L"V2Options";
            LODWORD(v113[137]) = 11;
            v111 = 11;
            v103 = 1;
            v113[112] = &EtwpQueryRegistryCallback;
            LODWORD(v113[116]) = 3;
            v105 = 3;
            v113[119] = &EtwpQueryRegistryCallback;
            LODWORD(v113[123]) = 4;
            v107 = 4;
            v113[126] = &EtwpQueryRegistryCallback;
            LODWORD(v113[130]) = 1;
            v109 = 1;
            v113[133] = &EtwpQueryRegistryCallback;
            v112 = v7 + 80;
            LODWORD(v62) = 8;
            LODWORD(v113[139]) = 8;
            RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v113, 0LL);
            if ( RegistryValues >= 0 )
            {
              if ( Handle )
              {
                if ( v45 )
                {
                  v113[5] = v7 + 96;
                  v113[3] = &v99;
                  v113[0] = &EtwpQueryRegistryCallback;
                  v113[2] = L"FileCounter";
                  LODWORD(v113[4]) = 4;
                  v73 = 4;
                  v74 = (int *)(v7 + 96);
                  v113[7] = 0LL;
                }
                else
                {
                  v113[12] = v7 + 48;
                  v113[5] = v7 + 76;
                  v113[19] = v7 + 52;
                  v113[26] = v7 + 68;
                  v113[33] = v7 + 56;
                  v113[40] = *(_QWORD *)(v7 + 136);
                  LODWORD(v113[41]) = *(unsigned __int16 *)(v7 + 128);
                  v113[47] = *((_QWORD *)&v64 + 1);
                  LODWORD(v113[48]) = v64;
                  v113[54] = *((_QWORD *)&v61 + 1);
                  LODWORD(v113[55]) = v61;
                  v113[61] = v7 + 40;
                  v113[68] = v7 + 60;
                  v113[75] = v7 + 64;
                  v113[82] = &v53;
                  v113[89] = UnicodeString.Buffer;
                  LODWORD(v113[90]) = UnicodeString.Length;
                  v113[103] = &v47;
                  v113[110] = v66.Buffer;
                  LODWORD(v113[111]) = v66.Length;
                  v113[117] = *((_QWORD *)&v62 + 1);
                  LODWORD(v113[118]) = v62;
                  v113[124] = &v48;
                  v113[131] = v63.Buffer;
                  LODWORD(v113[132]) = v63.Length;
                  v113[96] = v7 + 96;
                }
                RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v113, 0LL);
                RegistryValues = 0;
              }
              v17 = 1LL;
              v18 = *(_DWORD *)(v7 + 112) | 2;
              *(_DWORD *)(v7 + 112) = v18;
              if ( !v53 )
                *(_DWORD *)(v7 + 112) = v18 | 1;
              v19 = (unsigned int)v64 >> 2;
              if ( (unsigned __int16)((unsigned int)v64 >> 2) )
              {
                *(_WORD *)(v7 + 182) = 1;
                *v10 = v19 + 1;
                ++*(_WORD *)(v7 + 178);
                *(_WORD *)(v7 + 176) += *v10;
                v11 = 4 * (unsigned __int16)*v10 + 180;
              }
              if ( (_DWORD)v61 )
              {
                v34 = Src;
                v35 = ((unsigned int)v61 >> 2) + 1;
                if ( (v61 & 3) == 0 )
                  v35 = (unsigned int)v61 >> 2;
                *((_WORD *)Src + 1) = 3;
                *v34 = v35 + 1;
                ++*(_WORD *)(v7 + 178);
                *(_WORD *)(v7 + 176) += *v34;
                v11 += 4 * (unsigned __int16)*v34;
                if ( (_WORD)v19 )
                  v10 += 2 * (unsigned __int16)*v10;
                if ( v10 != v34 )
                  memmove(v10, v34, 4LL * v35 + 4);
              }
              if ( v66.Buffer )
              {
                Src = (void *)(v7 + 4 * (*(unsigned __int16 *)(v7 + 176) + 44LL));
                v36 = EtwpParsePoolTagFilter(&v66, v7 + 1256, 0LL, v17);
                v20 = v36;
                if ( v36 )
                {
                  *v12 = v36 + 1;
                  *(_WORD *)(v7 + 1254) = 4;
                  ++*(_WORD *)(v7 + 178);
                  *(_WORD *)(v7 + 176) += *v12;
                  v11 += 4 * (unsigned __int16)*v12;
                  if ( Src != v12 )
                    memmove(Src, (const void *)(v7 + 1252), 4LL * v36 + 4);
                }
              }
              else
              {
                v20 = v51;
              }
              if ( (_DWORD)v62 == 8 )
              {
                v37 = *(unsigned __int16 *)(v7 + 176);
                *(_DWORD *)(v7 + 1272) = 327683;
                ++*(_WORD *)(v7 + 178);
                *(_WORD *)(v7 + 176) += *(_WORD *)(v7 + 1272);
                v38 = (void *)(v7 + 4 * (v37 + 44));
                v11 += 4 * *(unsigned __int16 *)(v7 + 1272);
                if ( v38 != (void *)(v7 + 1272) )
                  memmove(v38, (const void *)(v7 + 1272), 0xCuLL);
              }
              if ( !(_WORD)v19 && !(_DWORD)v61 && !(_DWORD)v62 && !v20 )
                *(_DWORD *)(v7 + 72) = 0;
              v21 = (_DWORD *)(v7 + 64);
              v22 = *(_DWORD *)(v7 + 64);
              if ( (v22 & 0x500) != 0 && (v22 & 0x200) == 0 || *(_QWORD *)(v7 + 136) )
              {
LABEL_41:
                if ( v48 )
                {
                  if ( (*v21 & 0x80u) == 0 || (*v21 & 0x100) == 0 || *(_QWORD *)(v7 + 136) )
                    RegistryValues = -1073741790;
                  else
                    *(_DWORD *)(v7 + 112) |= 0x8004000u;
                }
                if ( RegistryValues >= 0 )
                {
                  if ( v47 )
                  {
                    v31 = *v16 + 1;
                    *v16 = v31;
                    if ( v31 > v47 || v31 > 0x10 )
                      *v16 = 1;
                    v32 = (const WCHAR *)Handle;
                    if ( !Handle )
                      v32 = (const WCHAR *)KeyHandle;
                    RtlWriteRegistryValue(0x40000000u, v32, L"FileCounter", 4u, (PVOID)(v7 + 96), 4u);
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
                    v29 = *(unsigned __int16 *)(v7 + 8);
                    RegistryValues = started;
                    if ( started >= 0 )
                    {
                      if ( *(_WORD *)(v7 + 8) && v48 )
                      {
                        v33 = 0LL;
                        v28 = v24 + 4048;
                        while ( *(_WORD *)v28 )
                        {
                          v33 = (unsigned int)(v33 + 1);
                          v28 += 2LL;
                          if ( (unsigned int)v33 >= 8 )
                            goto LABEL_51;
                        }
                        *(_WORD *)(v24 + 2 * v33 + 4048) = v29;
                      }
LABEL_51:
                      if ( v63.Length )
                      {
                        LODWORD(v27) = (2938661835u * (unsigned __int64)v63.Length) >> 32;
                        v39 = v63.Length / 0x4Cu;
                        v28 = v63.Length % 0x4Cu;
                        if ( v63.Length == 76 * v39 )
                        {
                          v28 = 76LL;
                          GuidString.Buffer = v63.Buffer;
                          *(&GuidString.MaximumLength + 2) = 0;
                          GuidString.Length = 76;
                          *(_DWORD *)&GuidString.MaximumLength = (unsigned __int16)(v63.MaximumLength - v63.Length + 76);
                          if ( v39 <= 0x200 )
                          {
                            v40 = PoolWithTag;
                            v41 = 0;
                            if ( v39 )
                            {
                              while ( 1 )
                              {
                                RegistryValues = RtlGUIDFromString(&GuidString, &v40[v41]);
                                if ( RegistryValues )
                                  break;
                                GuidString.Buffer += 38;
                                if ( ++v41 >= v39 )
                                  goto LABEL_108;
                              }
                            }
                            else
                            {
LABEL_108:
                              if ( !RegistryValues )
                              {
                                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(v28, v27);
                                EtwpUpdateDisallowList(CurrentServerSiloGlobals[108], v29, v39, v40);
                              }
                            }
                          }
                        }
                      }
                      v30 = PsGetCurrentServerSiloGlobals(v28, v27);
                      EtwpEnableKeyProviders(v30[108], v29, (_DWORD)v71, (_DWORD)v70, v45);
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
      v43 = RtlNtStatusToDosError(RegistryValues);
      v14 = (const WCHAR *)KeyHandle;
      ValueData = v43;
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
  RtlFreeAnsiString(&v66);
  RtlFreeAnsiString(&v63);
  return (unsigned int)RegistryValues;
}
