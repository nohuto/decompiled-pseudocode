/*
 * XREFs of PopConfigureHeteroPolicies @ 0x1407A5B6C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407A5838 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     KeConfigureHeteroPolicy @ 0x1407A604C (KeConfigureHeteroPolicy.c)
 *     PpmHeteroComputeBias @ 0x1408ECE38 (PpmHeteroComputeBias.c)
 */

char __fastcall PopConfigureHeteroPolicies(int a1, char a2)
{
  __int64 v2; // rbx
  __m128i si128; // xmm0
  __int64 v4; // r14
  __int64 v6; // r15
  int v7; // r10d
  int *v8; // rdi
  int v9; // r9d
  unsigned int i; // r8d
  __int64 *v11; // rcx
  wchar_t **v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // edx
  int v17; // edi
  int v18; // ecx
  int v19; // r8d
  ULONG v20; // esi
  int v21; // ecx
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  _DWORD *v26; // r9
  int *v27; // r10
  __int64 v28; // r11
  char v29; // cl
  char v30; // dl
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // r8
  int v36; // eax
  int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // esi
  char result; // al
  __int32 v42; // ecx
  __int64 v43; // rdx
  unsigned int v44; // edx
  _DWORD *v45; // rcx
  __int64 v46; // rdi
  char v47; // r10
  int v48; // edi
  int v49; // edi
  __m128i *v50; // rsi
  __int64 v51; // r15
  int *v52; // rdi
  unsigned __int8 v53; // r11
  __int64 v54; // rdx
  int v55; // eax
  char v56; // r10
  char v57; // r11
  char v58; // r8
  __m128i *v59; // rdi
  __int64 j; // rcx
  __int64 v61; // [rsp+38h] [rbp-D0h]
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v68[3]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v69[12]; // [rsp+D8h] [rbp-30h]
  __int128 KeyValueInformation; // [rsp+E8h] [rbp-20h] BYREF
  __m128i v71; // [rsp+F8h] [rbp-10h] BYREF
  int v72; // [rsp+108h] [rbp+0h]

  v2 = 0LL;
  ResultLength[1] = a1;
  si128 = 0LL;
  HIDWORD(v61) = 0;
  DestinationString = 0LL;
  ResultLength[0] = 0;
  *(_DWORD *)v69 = 0;
  v4 = 5LL;
  KeyHandle = 0LL;
  *(_QWORD *)&v69[4] = 7LL;
  v6 = 7LL;
  memset(v68, 0, sizeof(v68));
  LODWORD(v68[0]) = 5;
  DestinationString_8 = 0LL;
  memset(&ObjectAttributes_8, 0, sizeof(ObjectAttributes_8));
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  if ( a1 == 4 )
  {
    HIDWORD(v68[2]) = 10;
  }
  else
  {
    HIDWORD(v68[2]) = 8;
    if ( a1 == 3 )
    {
      *(_QWORD *)v69 = 0x3700001450LL;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      *(__m128i *)((char *)v68 + 4) = si128;
      LODWORD(v68[1]) = 2;
      DWORD2(v68[0]) = 2;
      *(_QWORD *)((char *)&v68[2] + 4) = si128.m128i_i64[0];
      goto LABEL_5;
    }
  }
  *(_DWORD *)v69 = 100;
  if ( a1 > 0 && (a1 <= 2 || a1 == 5) )
  {
    v44 = 0;
    v45 = (_DWORD *)v68 + 1;
    do
    {
      v46 = 2LL;
      do
      {
        *v45++ = (0x300000001LL - (unsigned __int64)(v44 - 2)) >> 32;
        --v46;
      }
      while ( v46 );
      ++v44;
    }
    while ( v44 < 5 );
    goto LABEL_6;
  }
  *(_OWORD *)((char *)v68 + 4) = 0LL;
  *(_QWORD *)((char *)&v68[2] + 4) = 0LL;
LABEL_5:
  *(__m128i *)((char *)&v68[1] + 4) = si128;
LABEL_6:
  v7 = 5;
  v8 = (int *)v68 + 2;
  v9 = 5;
  for ( i = 0; i < 5; ++i )
  {
    if ( i == 1 )
    {
      v43 = PpmEntryLevelPerfProfile;
LABEL_76:
      if ( !v43 )
      {
        HIDWORD(v61) = 0;
        v11 = 0LL;
        goto LABEL_11;
      }
      goto LABEL_91;
    }
    if ( i == 2 )
    {
      v43 = PpmBackgroundProfile;
      goto LABEL_76;
    }
    if ( i != 3 )
    {
      v11 = &PpmCurrentProfile[342 * dword_140C23ECC + 5];
      HIDWORD(v61) |= 0x1800u;
      goto LABEL_11;
    }
    v43 = PpmMultimediaQosProfile;
    if ( !PpmMultimediaQosProfile )
    {
      v11 = &PpmCurrentProfile[342 * dword_140C23ECC + 5];
      HIDWORD(v61) |= 0x1800u;
      goto LABEL_11;
    }
LABEL_91:
    v11 = (__int64 *)(v43 + 2736LL * dword_140C23ECC + 40);
    v61 = *v11;
LABEL_11:
    if ( (v61 & 0x100000000000LL) != 0 )
      v7 = *((_DWORD *)v11 + 681);
    if ( (v61 & 0x80000000000LL) != 0 )
      v9 = *((_DWORD *)v11 + 682);
    if ( v7 != 5 )
      *(v8 - 1) = v7;
    if ( v9 != 5 )
      *v8 = v9;
    v8 += 2;
  }
  if ( a2 )
  {
    dword_140C20B74 = -1;
    xmmword_140C20B44 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
    PopHeteroLegacyOverride = 5;
    xmmword_140C20B54 = xmmword_140C20B44;
    qword_140C20B6C = 0LL;
    qword_140C20B64 = xmmword_140C20B44;
    RtlInitUnicodeString(&DestinationString_8, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = &DestinationString_8;
    ObjectAttributes_8.RootDirectory = 0LL;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&DestinationString, 8u, &ObjectAttributes_8) >= 0 )
    {
      v12 = &off_140980C58;
      ObjectAttributes_8.RootDirectory = DestinationString;
      do
      {
        RtlInitUnicodeString(&DestinationString_8, *(v12 - 1));
        if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes_8) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v12);
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 ResultLength) >= 0
            && (_DWORD)KeyValueInformation == 4 )
          {
            *(int *)((char *)&PopHeteroLegacyOverride + *((unsigned int *)v12 + 2)) = DWORD2(KeyValueInformation);
          }
          ZwClose(KeyHandle);
        }
        v12 += 3;
        --v6;
      }
      while ( v6 );
      ZwClose(DestinationString);
    }
  }
  v13 = 0LL;
  v14 = 5LL;
  do
  {
    v15 = 2LL;
    do
    {
      v16 = *(_DWORD *)((char *)&xmmword_140C20B44 + v13);
      if ( v16 != 5 )
        *(_DWORD *)((char *)v68 + v13 + 4) = v16;
      v13 += 4LL;
      --v15;
    }
    while ( v15 );
    --v14;
  }
  while ( v14 );
  v17 = v68[0];
  if ( PopHeteroLegacyOverride != 5 )
    v17 = PopHeteroLegacyOverride;
  v18 = HIDWORD(v68[2]);
  v19 = *(_DWORD *)&v69[4];
  if ( (_DWORD)qword_140C20B6C )
    v18 = qword_140C20B6C;
  v20 = ResultLength[1];
  HIDWORD(v68[2]) = v18;
  v21 = *(_DWORD *)v69;
  if ( HIDWORD(qword_140C20B6C) )
    v21 = HIDWORD(qword_140C20B6C);
  LODWORD(v68[0]) = v17;
  *(_DWORD *)v69 = v21;
  if ( dword_140C20B74 != -1 )
    v19 = dword_140C20B74;
  *(_DWORD *)&v69[4] = v19;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v22 = (_DWORD *)v68 + 1;
    v23 = 5LL;
    do
    {
      v24 = 2LL;
      do
      {
        if ( *v22 == 3 )
          *v22 = 4;
        ++v22;
        --v24;
      }
      while ( v24 );
      --v23;
    }
    while ( v23 );
    v19 = *(_DWORD *)&v69[4];
    v17 = v68[0];
  }
  v25 = 1;
  v26 = (_DWORD *)v68 + 1;
  v27 = (int *)v68 + 2;
  v28 = 5LL;
  do
  {
    v29 = v25;
    v30 = 0;
    v31 = *v27;
    v27 += 2;
    v32 = *v26 == v31;
    v26 += 2;
    if ( v32 )
      v30 = v29;
    v25 = v30;
    --v28;
  }
  while ( v28 );
  if ( v30 )
    *(_DWORD *)&v69[4] = v19 & 0xFFFFFFFB;
  v33 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
  v34 = 0xFFFFFFFFLL;
  v35 = (unsigned int)PpmPerfQosTransitionHysteresis;
  v36 = PpmPerfQosTransitionHysteresisOverride;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v36 = PpmPerfQosTransitionHysteresis;
  if ( v36 )
  {
    v37 = KeMinimumIncrement;
    if ( 10 * PpmPerfQosTransitionHysteresis > (unsigned int)KeMinimumIncrement )
      v37 = 10 * PpmPerfQosTransitionHysteresis;
    *(_DWORD *)&v69[8] = v37;
  }
  v38 = PpmPerfQosTransitionHysteresisOverride;
  v39 = 500LL;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v38 = PpmPerfQosTransitionHysteresis;
  if ( v38 <= 0x1F4 )
  {
    v33 = 500LL;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v33 = (unsigned int)PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v33);
  if ( ((v20 - 1) & 0xFFFFFFFA) != 0 || v20 == 6 )
  {
    v40 = 1;
    v71 = _mm_load_si128((const __m128i *)&_xmm);
    v72 = _mm_cvtsi128_si32(v71);
    goto LABEL_69;
  }
  LOBYTE(v34) = 0;
  v47 = 0;
  LOBYTE(v35) = 0;
  if ( !v17 )
  {
    v47 = 1;
    goto LABEL_113;
  }
  v48 = v17 - 2;
  if ( !v48 )
  {
    v47 = 1;
LABEL_114:
    LOBYTE(v35) = 1;
    goto LABEL_115;
  }
  v49 = v48 - 2;
  if ( !v49 )
  {
LABEL_113:
    LOBYTE(v34) = 1;
    goto LABEL_114;
  }
  if ( v49 == 1 )
  {
    v50 = &v71;
    v51 = 5LL;
    v52 = (int *)v68 + 1;
    do
    {
      LOBYTE(v39) = 0;
      v53 = 0;
      v54 = 2LL;
      do
      {
        v55 = *v52;
        if ( !*v52 )
        {
          v53 = 1;
LABEL_107:
          LOBYTE(v39) = 1;
          goto LABEL_108;
        }
        if ( v55 == 2 )
        {
          v53 = 1;
          goto LABEL_108;
        }
        if ( v55 == 4 )
          goto LABEL_107;
LABEL_108:
        ++v52;
        --v54;
      }
      while ( v54 );
      v50->m128i_i32[0] = PpmHeteroComputeBias(v39, v53, v35, v34);
      LOBYTE(v34) = v39 | v34;
      v50 = (__m128i *)((char *)v50 + 4);
      v47 = v57 | v56;
      --v51;
    }
    while ( v51 );
  }
LABEL_115:
  LOBYTE(v33) = v47;
  LOBYTE(v39) = v34;
  v40 = PpmHeteroComputeBias(v39, v33, v35, v34);
  if ( v58 )
  {
    v59 = &v71;
    for ( j = 5LL; j; --j )
    {
      v59->m128i_i32[0] = v40;
      v59 = (__m128i *)((char *)v59 + 4);
    }
  }
LABEL_69:
  result = KeConfigureHeteroPolicy(v68);
  if ( PpmHeteroParkBias != v40 )
  {
    PpmHeteroParkBias = v40;
    result = 1;
  }
  do
  {
    v42 = v71.m128i_i32[v2];
    if ( PpmHeteroQosBias[v2] != v42 )
    {
      PpmHeteroQosBias[v2] = v42;
      result = 1;
    }
    ++v2;
    --v4;
  }
  while ( v4 );
  return result;
}
