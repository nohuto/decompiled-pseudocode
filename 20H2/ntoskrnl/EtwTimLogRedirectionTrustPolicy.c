/*
 * XREFs of EtwTimLogRedirectionTrustPolicy @ 0x1405CE694
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1403F0650 (IoCheckRedirectionTrustLevel.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlWalkFrameChain @ 0x140228EA0 (RtlWalkFrameChain.c)
 *     RtlStringCbCopyW @ 0x14023FDE8 (RtlStringCbCopyW.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     EtwpTiFillProcessIdentity @ 0x1402EBDD0 (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403F85D0 (ZwQueryVirtualMemory.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpQueryProcessCommandLine @ 0x140632B5C (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B7280 (ExAllocatePool2.c)
 */

void __fastcall EtwTimLogRedirectionTrustPolicy(
        int a1,
        const EVENT_DESCRIPTOR *a2,
        int a3,
        void *a4,
        unsigned __int8 a5)
{
  unsigned int v5; // edi
  PCEVENT_DESCRIPTOR v6; // r13
  signed __int64 Keyword; // r12
  UNICODE_STRING *v8; // rbx
  signed __int32 v9; // r14d
  char v10; // r15
  ULONG v11; // eax
  unsigned __int16 v12; // si
  unsigned __int16 i; // cx
  unsigned int v14; // edx
  void *Pool2; // rax
  bool v16; // cf
  _DWORD *v17; // rcx
  char v18; // al
  __int64 v19; // r15
  void *v20; // rax
  _QWORD *v21; // r12
  PVOID *v22; // rdi
  wchar_t *p_Length; // r14
  unsigned __int16 v24; // cx
  __int64 *v25; // rax
  __int64 *v26; // r14
  __int64 *v27; // rax
  unsigned __int16 Length; // di
  int v29; // eax
  const wchar_t *v30; // rcx
  int v31; // eax
  __int16 v32; // di
  int v33; // eax
  ULONG v34; // r9d
  unsigned __int16 *v35; // r11
  int v36; // edx
  __int64 v37; // rcx
  unsigned int v38; // r10d
  const wchar_t *v39; // r8
  __int16 v40; // ax
  unsigned int v41; // ecx
  PVOID *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  UNICODE_STRING *v45; // r10
  ULONG v46; // r11d
  wchar_t *v47; // r15
  unsigned int MaximumLength; // r13d
  __int64 v49; // rax
  unsigned __int16 v50; // di
  ULONG v51; // r12d
  const wchar_t *v52; // r9
  int v53; // eax
  ULONG v54; // r8d
  ULONG v55; // edx
  __int64 v56; // rax
  ULONG v57; // ecx
  __int64 v58; // rax
  unsigned __int16 v59; // r9
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v61; // rcx
  UNICODE_STRING *v62; // rcx
  UNICODE_STRING *v63; // rcx
  UNICODE_STRING *v64; // rcx
  UNICODE_STRING *v65; // rcx
  char v66; // [rsp+30h] [rbp-D0h]
  _WORD v67[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int8 v68; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int8 v69; // [rsp+39h] [rbp-C7h] BYREF
  _WORD v70[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v71; // [rsp+40h] [rbp-C0h] BYREF
  int v72; // [rsp+44h] [rbp-BCh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v74; // [rsp+58h] [rbp-A8h]
  int v75; // [rsp+5Ch] [rbp-A4h] BYREF
  int v76; // [rsp+60h] [rbp-A0h] BYREF
  int v77; // [rsp+64h] [rbp-9Ch] BYREF
  int v78; // [rsp+68h] [rbp-98h] BYREF
  int v79; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h]
  PVOID v82; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v83; // [rsp+88h] [rbp-78h] BYREF
  __int64 v84; // [rsp+98h] [rbp-68h] BYREF
  PVOID v85; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v86; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v87; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v88; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v89; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v90; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v92; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v93; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD MemoryInformation[3]; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v96; // [rsp+150h] [rbp+50h]
  __int64 v97; // [rsp+158h] [rbp+58h]
  int *v98; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h]
  int *v100; // [rsp+170h] [rbp+70h]
  __int64 v101; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+188h] [rbp+88h]
  _DWORD *v104; // [rsp+190h] [rbp+90h]
  __int64 v105; // [rsp+198h] [rbp+98h]
  wchar_t *v106; // [rsp+1A0h] [rbp+A0h]
  _DWORD v107[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  PVOID *v108; // [rsp+1B0h] [rbp+B0h]
  __int64 v109; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v110; // [rsp+1C0h] [rbp+C0h]
  __int64 v111; // [rsp+1C8h] [rbp+C8h]
  wchar_t *v112; // [rsp+1D0h] [rbp+D0h]
  _DWORD v113[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  PVOID *v114; // [rsp+1E0h] [rbp+E0h]
  __int64 v115; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v116; // [rsp+1F0h] [rbp+F0h]
  __int64 v117; // [rsp+1F8h] [rbp+F8h]
  wchar_t *v118; // [rsp+200h] [rbp+100h]
  _DWORD v119[2]; // [rsp+208h] [rbp+108h] BYREF
  PVOID *v120; // [rsp+210h] [rbp+110h]
  __int64 v121; // [rsp+218h] [rbp+118h]
  _DWORD *v122; // [rsp+220h] [rbp+120h]
  __int64 v123; // [rsp+228h] [rbp+128h]
  wchar_t *v124; // [rsp+230h] [rbp+130h]
  _DWORD v125[2]; // [rsp+238h] [rbp+138h] BYREF
  PVOID *v126; // [rsp+240h] [rbp+140h]
  __int64 v127; // [rsp+248h] [rbp+148h]
  _DWORD *v128; // [rsp+250h] [rbp+150h]
  __int64 v129; // [rsp+258h] [rbp+158h]
  wchar_t *v130; // [rsp+260h] [rbp+160h]
  _DWORD v131[2]; // [rsp+268h] [rbp+168h] BYREF
  PVOID *v132; // [rsp+270h] [rbp+170h]
  __int64 v133; // [rsp+278h] [rbp+178h]
  _DWORD *v134; // [rsp+280h] [rbp+180h]
  __int64 v135; // [rsp+288h] [rbp+188h]
  wchar_t *v136; // [rsp+290h] [rbp+190h]
  _DWORD v137[2]; // [rsp+298h] [rbp+198h] BYREF
  PVOID *v138; // [rsp+2A0h] [rbp+1A0h]
  __int64 v139; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 *v141; // [rsp+2D0h] [rbp+1D0h]
  __int64 v142; // [rsp+2D8h] [rbp+1D8h]
  int *v143; // [rsp+2E0h] [rbp+1E0h]
  __int64 v144; // [rsp+2E8h] [rbp+1E8h]
  int *v145; // [rsp+2F0h] [rbp+1F0h]
  __int64 v146; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int8 *v147; // [rsp+300h] [rbp+200h]
  __int64 v148; // [rsp+308h] [rbp+208h]
  _DWORD *v149; // [rsp+310h] [rbp+210h]
  __int64 v150; // [rsp+318h] [rbp+218h]
  wchar_t *v151; // [rsp+320h] [rbp+220h]
  _DWORD v152[2]; // [rsp+328h] [rbp+228h] BYREF
  PVOID Callers[16]; // [rsp+330h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3B0h] [rbp+2B0h] BYREF
  const wchar_t *v155; // [rsp+3C0h] [rbp+2C0h]
  int v156; // [rsp+3C8h] [rbp+2C8h]
  int v157; // [rsp+3CCh] [rbp+2CCh]
  _WORD *v158; // [rsp+3D0h] [rbp+2D0h]
  __int64 v159; // [rsp+3D8h] [rbp+2D8h]
  wchar_t *Buffer; // [rsp+3E0h] [rbp+2E0h]
  int v161; // [rsp+3E8h] [rbp+2E8h]
  int v162; // [rsp+3ECh] [rbp+2ECh]
  __int64 v163[84]; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v164; // [rsp+6F0h] [rbp+5F0h] BYREF

  v164 = a3;
  EventDescriptor = a2;
  v5 = 0;
  v72 = a1;
  v6 = a2;
  v92 = 0LL;
  v67[0] = 0;
  v70[0] = 0;
  v71 = 0;
  P = a4;
  v93 = 0LL;
  DestinationString = 0LL;
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  memset(Callers, 0, sizeof(Callers));
  Keyword = v6[162].Keyword;
  v75 = a5;
  v8 = 0LL;
  v66 = 0;
  v82 = 0LL;
  v9 = 0;
  v10 = 1;
  v11 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  v12 = v11;
  v74 = v11;
  for ( i = 1; ; ++i )
  {
    v14 = 7;
    if ( (unsigned __int16)v11 <= 7u )
      v14 = (unsigned __int16)v11;
    if ( i >= v14 )
      break;
    v9 += LODWORD(Callers[i]);
  }
  if ( !v9 )
    v9 = 1;
  while ( Keyword )
  {
LABEL_13:
    v16 = v5 < 0xA;
    if ( v5 < 0xA )
    {
      v17 = (_DWORD *)(Keyword + 4LL * v5);
      while ( *v17 )
      {
        if ( *v17 == v9 )
        {
          v10 = 0;
          break;
        }
        ++v5;
        ++v17;
        if ( v5 >= 0xA )
          break;
      }
      v16 = v5 < 0xA;
    }
    v18 = v16 ? v10 : 0;
    v10 = v18;
    if ( !v18 || !_InterlockedCompareExchange((volatile signed __int32 *)(v6[162].Keyword + 4LL * v5), v9, 0) )
    {
      LODWORD(Keyword) = 0;
      goto LABEL_24;
    }
  }
  Pool2 = (void *)ExAllocatePool2(256LL, 40LL, 1853049172LL);
  if ( Pool2 )
  {
    Keyword = _InterlockedCompareExchange64((volatile signed __int64 *)&v6[162].Keyword, (signed __int64)Pool2, 0LL);
    if ( Keyword )
      ExFreePoolWithTag(Pool2, 0);
    else
      Keyword = (signed __int64)Pool2;
    goto LABEL_13;
  }
  v18 = 0;
LABEL_24:
  if ( !v18 )
    return;
  RtlInitUnicodeString(&DestinationString, L"Unknown");
  if ( !v12 )
  {
LABEL_49:
    if ( (unsigned __int16)Keyword < v12 )
      memset(Callers, 0, 8LL * v12);
    goto LABEL_42;
  }
  v19 = v12;
  v8 = (UNICODE_STRING *)ExAllocatePool2(256LL, 80LL * v12, 1853049172LL);
  v20 = (void *)ExAllocatePool2(256LL, 538LL, 1853049172LL);
  v82 = v20;
  v21 = v20;
  if ( !v8 || !v20 )
  {
    LODWORD(Keyword) = 0;
    goto LABEL_49;
  }
  v22 = Callers;
  p_Length = &v8[1].Length;
  do
  {
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v22, MemoryMappedFilenameInformation, v21, 0x218uLL, 0LL) < 0
      || *(_WORD *)v21 <= 1u )
    {
      goto LABEL_39;
    }
    v24 = (*(_WORD *)v21 >> 1) - 1;
    if ( *(_WORD *)v21 >> 1 != 1 )
    {
      while ( *(_WORD *)(v21[1] + 2LL * v24) != 92 )
      {
        if ( !--v24 )
          goto LABEL_37;
      }
      ++v24;
    }
LABEL_37:
    RtlStringCbCopyW(p_Length, 0x40uLL, (NTSTRSAFE_PCWSTR)(v21[1] + 2LL * v24));
    RtlInitUnicodeString((PUNICODE_STRING)p_Length - 1, p_Length);
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           *v22,
           MemoryBasicInformation,
           MemoryInformation,
           0x30uLL,
           0LL) < 0 )
LABEL_39:
      *v22 = 0LL;
    else
      *v22 = (char *)*v22 - *((_QWORD *)&MemoryInformation[0] + 1);
    p_Length += 40;
    ++v22;
    --v19;
  }
  while ( v19 );
  v12 = v74;
  v6 = EventDescriptor;
  LODWORD(Keyword) = 0;
LABEL_42:
  v25 = MITIGATION_AUDIT_REDIRECTION_TRUST_POLICY;
  v26 = &EmptyUnicodeString;
  if ( v72 != 1 )
    v25 = MITIGATION_ENFORCE_REDIRECTION_TRUST_POLICY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)v25;
  v27 = *(__int64 **)&v6[92].Id;
  v83 = 0LL;
  if ( v27 )
    v26 = v27;
  EtwpQueryProcessCommandLine(v6, &v83);
  Length = v83.Length;
  if ( v83.Length )
  {
    v66 = 1;
  }
  else
  {
    RtlInitUnicodeString(&v83, L"Unknown");
    Length = v83.Length;
  }
  if ( !P )
    RtlInitUnicodeString(&v93, L"Unknown");
  if ( v26 && *(_WORD *)v26 )
  {
    v67[0] = *(_WORD *)v26 >> 1;
    UserData.Ptr = (ULONGLONG)v67;
    *(_QWORD *)&UserData.Size = 2LL;
    v29 = *(unsigned __int16 *)v26;
    v30 = (const wchar_t *)v26[1];
  }
  else
  {
    v67[0] = 6;
    UserData.Ptr = (ULONGLONG)v67;
    v30 = L"(null)";
    v29 = 12;
    *(_QWORD *)&UserData.Size = 2LL;
  }
  v156 = v29;
  P = v83.Buffer;
  v155 = v30;
  v157 = Keyword;
  v159 = 2LL;
  if ( Length )
  {
    Buffer = v83.Buffer;
    v31 = Length;
    v158 = v70;
    v32 = Length >> 1;
  }
  else
  {
    Buffer = L"(null)";
    v158 = v70;
    v32 = 6;
    v31 = 12;
  }
  v70[0] = v32;
  v161 = v31;
  v162 = Keyword;
  v33 = EtwpTiFillProcessIdentity(v163, (__int64)v6, &v92);
  v36 = v33 + 4;
  v37 = 2LL * (unsigned int)(v33 + 4);
  v38 = v33 + 5;
  *(&UserData.Ptr + v37) = (ULONGLONG)&v164;
  *((_QWORD *)&UserData.Size + v37) = 4LL;
  if ( v35 && *v35 )
  {
    v39 = (const wchar_t *)*((_QWORD *)v35 + 1);
    v34 = *v35;
    v40 = *v35 >> 1;
  }
  else
  {
    v39 = L"(null)";
    v40 = 6;
  }
  v71 = v40;
  v41 = v36 + 2;
  v42 = Callers;
  v43 = 2LL * v38;
  v44 = 2LL * (unsigned int)(v36 + 2);
  ++v41;
  *(&UserData.Ptr + v43) = (ULONGLONG)&v71;
  v45 = v8;
  *((_QWORD *)&UserData.Size + v43) = 2LL;
  *(&UserData.Ptr + v44) = (ULONGLONG)v39;
  v46 = v41 + 1;
  *(&UserData.Size + 2 * v44) = v34;
  *(&UserData.Reserved + 2 * v44) = Keyword;
  v47 = DestinationString.Buffer;
  MaximumLength = DestinationString.MaximumLength;
  v49 = 2LL * v41;
  *((_QWORD *)&UserData.Size + v49) = 4LL;
  v50 = Keyword;
  v51 = DestinationString.Length;
  *(&UserData.Ptr + v49) = (ULONGLONG)&v75;
  do
  {
    if ( v50 < v12 && v8 )
    {
      if ( v45 && (v52 = v45->Buffer) != 0LL && (v53 = v45->Length, (_WORD)v53) )
      {
        v54 = v53 + 2;
        if ( v45->MaximumLength <= (unsigned int)(v53 + 1) )
          v54 = v45->Length;
      }
      else
      {
        v54 = 14;
        v52 = L"(null)";
      }
      *(&UserData.Ptr + 2 * v46) = (ULONGLONG)v52;
      *(&UserData.Size + 4 * v46) = v54;
      *(&UserData.Reserved + 4 * v46) = 0;
    }
    else if ( v47 && (_WORD)v51 )
    {
      v55 = v51 + 2;
      if ( MaximumLength <= v51 + 1 )
        v55 = v51;
      *(&UserData.Reserved + 4 * v46) = 0;
      *(&UserData.Ptr + 2 * v46) = (ULONGLONG)v47;
      *(&UserData.Size + 4 * v46) = v55;
    }
    else
    {
      v56 = 2LL * v46;
      *(&UserData.Ptr + v56) = (ULONGLONG)L"(null)";
      *((_QWORD *)&UserData.Size + v56) = 14LL;
    }
    v57 = v46 + 1;
    ++v50;
    v46 += 2;
    v58 = 2LL * v57;
    v45 += 5;
    *(&UserData.Ptr + v58) = (ULONGLONG)v42++;
    *((_QWORD *)&UserData.Size + v58) = 8LL;
  }
  while ( v50 < 0x10u );
  EtwWrite(EtwSecurityMitigationsRegHandle, EventDescriptor, 0LL, v46, &UserData);
  if ( v8 )
  {
    if ( (unsigned int)dword_140C02B78 > 5 && tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL) )
    {
      v84 = 0x2000000LL;
      v96 = &v84;
      v76 = v164;
      v98 = &v76;
      v77 = v72;
      v100 = &v77;
      v68 = a5;
      v102 = &v68;
      v97 = 8LL;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 1LL;
      if ( v12 <= 1u || (p_DestinationString = v8 + 5, !v8[5].Buffer) )
        p_DestinationString = &DestinationString;
      v107[1] = 0;
      v104 = v107;
      v106 = p_DestinationString->Buffer;
      v107[0] = p_DestinationString->Length;
      v85 = Callers[1];
      v108 = &v85;
      v105 = 2LL;
      v109 = 8LL;
      if ( v12 <= 2u || (v61 = v8 + 10, !v8[10].Buffer) )
        v61 = &DestinationString;
      v111 = 2LL;
      v110 = v113;
      v112 = v61->Buffer;
      v113[0] = v61->Length;
      v86 = Callers[2];
      v114 = &v86;
      v113[1] = 0;
      v115 = 8LL;
      if ( v12 <= 3u || (v62 = v8 + 15, !v8[15].Buffer) )
        v62 = &DestinationString;
      v117 = 2LL;
      v116 = v119;
      v118 = v62->Buffer;
      v119[0] = v62->Length;
      v87 = Callers[3];
      v120 = &v87;
      v119[1] = 0;
      v121 = 8LL;
      if ( v12 <= 4u || (v63 = v8 + 20, !v8[20].Buffer) )
        v63 = &DestinationString;
      v123 = 2LL;
      v122 = v125;
      v124 = v63->Buffer;
      v125[0] = v63->Length;
      v88 = Callers[4];
      v126 = &v88;
      v125[1] = 0;
      v127 = 8LL;
      if ( v12 <= v59 || (v64 = v8 + 25, !v8[25].Buffer) )
        v64 = &DestinationString;
      v129 = 2LL;
      v128 = v131;
      v130 = v64->Buffer;
      v131[0] = v64->Length;
      v89 = Callers[5];
      v132 = &v89;
      v131[1] = 0;
      v133 = 8LL;
      if ( v12 <= 6u || (v65 = v8 + 30, !v8[30].Buffer) )
        v65 = &DestinationString;
      v135 = 2LL;
      v134 = v137;
      v136 = v65->Buffer;
      v137[0] = v65->Length;
      v90 = Callers[6];
      v138 = &v90;
      v137[1] = 0;
      v139 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02B78,
        (unsigned __int8 *)byte_14002C581,
        0LL,
        0LL,
        0x18u,
        &v95);
    }
  }
  else if ( (unsigned int)dword_140C02B78 > 5 && tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL) )
  {
    v91 = 0x2000000LL;
    v141 = &v91;
    v78 = v164;
    v143 = &v78;
    v79 = v72;
    v145 = &v79;
    v69 = a5;
    v147 = &v69;
    v149 = v152;
    v142 = 8LL;
    v144 = 4LL;
    v146 = 4LL;
    v148 = 1LL;
    v150 = 2LL;
    v151 = v47;
    v152[0] = v51;
    v152[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02B78,
      (unsigned __int8 *)&dword_14002C524,
      0LL,
      0LL,
      8u,
      &v140);
  }
  if ( v66 )
    ExFreePoolWithTag(P, 0);
  if ( v82 )
    ExFreePoolWithTag(v82, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
