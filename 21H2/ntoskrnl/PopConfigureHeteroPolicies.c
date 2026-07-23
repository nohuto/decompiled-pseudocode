/*
 * XREFs of PopConfigureHeteroPolicies @ 0x1407BB88C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     KeConfigureHeteroPolicy @ 0x1407BBEA0 (KeConfigureHeteroPolicy.c)
 *     PpmHeteroComputeBias @ 0x1408F1698 (PpmHeteroComputeBias.c)
 */

char __fastcall PopConfigureHeteroPolicies(int a1, char a2)
{
  __int64 v2; // rbx
  __m128i si128; // xmm0
  __int64 v4; // rsi
  __int64 v6; // r15
  int v7; // eax
  int v8; // r10d
  int *v9; // rdi
  int v10; // r9d
  unsigned int i; // r8d
  __int64 *v12; // rcx
  unsigned int v13; // edx
  _DWORD *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  wchar_t **v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // edx
  int v22; // edi
  int v23; // ecx
  int v24; // r8d
  ULONG v25; // r14d
  int v26; // ecx
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // al
  _DWORD *v31; // r9
  int *v32; // r10
  __int64 v33; // r11
  char v34; // cl
  char v35; // dl
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // r8
  int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rcx
  char v45; // r10
  int v46; // edi
  int v47; // edi
  __m128i *v48; // r14
  __int64 v49; // r15
  int *v50; // rdi
  unsigned __int8 v51; // r11
  __int64 v52; // rdx
  int v53; // eax
  char v54; // r10
  char v55; // r11
  int v56; // r14d
  char v57; // r8
  __m128i *v58; // rdi
  __int64 j; // rcx
  char result; // al
  __int32 v61; // ecx
  __int64 v62; // [rsp+38h] [rbp-D0h]
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v69[3]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v70[12]; // [rsp+D8h] [rbp-30h]
  __int128 KeyValueInformation; // [rsp+E8h] [rbp-20h] BYREF
  __m128i v72; // [rsp+F8h] [rbp-10h] BYREF
  int v73; // [rsp+108h] [rbp+0h]

  v2 = 0LL;
  ResultLength[1] = a1;
  si128 = 0LL;
  HIDWORD(v62) = 0;
  DestinationString = 0LL;
  ResultLength[0] = 0;
  *(_DWORD *)v70 = 0;
  v4 = 5LL;
  KeyHandle = 0LL;
  *(_QWORD *)&v70[4] = 7LL;
  v6 = 7LL;
  memset(v69, 0, sizeof(v69));
  LODWORD(v69[0]) = 5;
  DestinationString_8 = 0LL;
  memset(&ObjectAttributes_8, 0, sizeof(ObjectAttributes_8));
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  if ( a1 == 4 )
  {
    HIDWORD(v69[2]) = 10;
  }
  else
  {
    HIDWORD(v69[2]) = 8;
    if ( a1 == 3 )
    {
      *(_QWORD *)v70 = 0x3700001450LL;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      *(__m128i *)((char *)v69 + 4) = si128;
      LODWORD(v69[1]) = 2;
      DWORD2(v69[0]) = 2;
      *(_QWORD *)((char *)&v69[2] + 4) = si128.m128i_i64[0];
      goto LABEL_12;
    }
    v7 = 7;
    if ( a1 == 5 )
      v7 = 23;
    *(_DWORD *)&v70[4] = v7;
  }
  *(_DWORD *)v70 = 100;
  if ( a1 > 0 && (a1 <= 2 || a1 == 5) )
  {
    v13 = 0;
    v14 = (_DWORD *)v69 + 1;
    do
    {
      v15 = 2LL;
      do
      {
        *v14++ = (0x300000001LL - (unsigned __int64)(v13 - 2)) >> 32;
        --v15;
      }
      while ( v15 );
      ++v13;
    }
    while ( v13 < 5 );
    goto LABEL_13;
  }
  *(_QWORD *)((char *)&v69[2] + 4) = 0LL;
  *(_OWORD *)((char *)v69 + 4) = 0LL;
LABEL_12:
  *(__m128i *)((char *)&v69[1] + 4) = si128;
LABEL_13:
  v8 = 5;
  v9 = (int *)v69 + 2;
  v10 = 5;
  for ( i = 0; i < 5; ++i )
  {
    switch ( i )
    {
      case 1u:
        v16 = PpmEntryLevelPerfProfile;
        break;
      case 2u:
        v16 = PpmBackgroundProfile;
        break;
      case 3u:
        v16 = PpmMultimediaQosProfile;
        if ( !PpmMultimediaQosProfile )
        {
          v12 = &PpmCurrentProfile[342 * dword_140C2332C + 5];
          HIDWORD(v62) |= 0x1800u;
          goto LABEL_30;
        }
LABEL_28:
        v12 = (__int64 *)(v16 + 2736LL * dword_140C2332C + 40);
        v62 = *v12;
        goto LABEL_30;
      default:
        v12 = &PpmCurrentProfile[342 * dword_140C2332C + 5];
        HIDWORD(v62) |= 0x1800u;
        goto LABEL_30;
    }
    if ( v16 )
      goto LABEL_28;
    HIDWORD(v62) = 0;
    v12 = 0LL;
LABEL_30:
    if ( (v62 & 0x100000000000LL) != 0 )
      v8 = *((_DWORD *)v12 + 681);
    if ( (v62 & 0x80000000000LL) != 0 )
      v10 = *((_DWORD *)v12 + 682);
    if ( v8 != 5 )
      *(v9 - 1) = v8;
    if ( v10 != 5 )
      *v9 = v10;
    v9 += 2;
  }
  if ( a2 )
  {
    dword_140C20BF4 = -1;
    xmmword_140C20BC4 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
    PopHeteroLegacyOverride = 5;
    xmmword_140C20BD4 = xmmword_140C20BC4;
    qword_140C20BEC = 0LL;
    qword_140C20BE4 = xmmword_140C20BC4;
    RtlInitUnicodeString(&DestinationString_8, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = &DestinationString_8;
    ObjectAttributes_8.RootDirectory = 0LL;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&DestinationString, 8u, &ObjectAttributes_8) >= 0 )
    {
      v17 = &off_1409856C8;
      ObjectAttributes_8.RootDirectory = DestinationString;
      do
      {
        RtlInitUnicodeString(&DestinationString_8, *(v17 - 1));
        if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes_8) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v17);
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 ResultLength) >= 0
            && (_DWORD)KeyValueInformation == 4 )
          {
            *(int *)((char *)&PopHeteroLegacyOverride + *((unsigned int *)v17 + 2)) = DWORD2(KeyValueInformation);
          }
          ZwClose(KeyHandle);
        }
        v17 += 3;
        --v6;
      }
      while ( v6 );
      ZwClose(DestinationString);
    }
  }
  v18 = 0LL;
  v19 = 5LL;
  do
  {
    v20 = 2LL;
    do
    {
      v21 = *(_DWORD *)((char *)&xmmword_140C20BC4 + v18);
      if ( v21 != 5 )
        *(_DWORD *)((char *)v69 + v18 + 4) = v21;
      v18 += 4LL;
      --v20;
    }
    while ( v20 );
    --v19;
  }
  while ( v19 );
  v22 = v69[0];
  if ( PopHeteroLegacyOverride != 5 )
    v22 = PopHeteroLegacyOverride;
  v23 = HIDWORD(v69[2]);
  v24 = *(_DWORD *)&v70[4];
  if ( (_DWORD)qword_140C20BEC )
    v23 = qword_140C20BEC;
  v25 = ResultLength[1];
  HIDWORD(v69[2]) = v23;
  v26 = *(_DWORD *)v70;
  if ( HIDWORD(qword_140C20BEC) )
    v26 = HIDWORD(qword_140C20BEC);
  LODWORD(v69[0]) = v22;
  *(_DWORD *)v70 = v26;
  if ( dword_140C20BF4 != -1 )
    v24 = dword_140C20BF4;
  *(_DWORD *)&v70[4] = v24;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v27 = (_DWORD *)v69 + 1;
    v28 = 5LL;
    do
    {
      v29 = 2LL;
      do
      {
        if ( *v27 == 3 )
          *v27 = 4;
        ++v27;
        --v29;
      }
      while ( v29 );
      --v28;
    }
    while ( v28 );
    v24 = *(_DWORD *)&v70[4];
    v22 = v69[0];
  }
  v30 = 1;
  v31 = (_DWORD *)v69 + 1;
  v32 = (int *)v69 + 2;
  v33 = 5LL;
  do
  {
    v34 = v30;
    v35 = 0;
    v36 = *v32;
    v32 += 2;
    v37 = *v31 == v36;
    v31 += 2;
    if ( v37 )
      v35 = v34;
    v30 = v35;
    --v33;
  }
  while ( v33 );
  if ( v35 )
    *(_DWORD *)&v70[4] = v24 & 0xFFFFFFFB;
  v38 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
  v39 = 0xFFFFFFFFLL;
  v40 = (unsigned int)PpmPerfQosTransitionHysteresis;
  v41 = PpmPerfQosTransitionHysteresisOverride;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v41 = PpmPerfQosTransitionHysteresis;
  if ( v41 )
  {
    v42 = KeMinimumIncrement;
    if ( 10 * PpmPerfQosTransitionHysteresis > (unsigned int)KeMinimumIncrement )
      v42 = 10 * PpmPerfQosTransitionHysteresis;
    *(_DWORD *)&v70[8] = v42;
  }
  v43 = PpmPerfQosTransitionHysteresisOverride;
  v44 = 500LL;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v43 = PpmPerfQosTransitionHysteresis;
  if ( v43 <= 0x1F4 )
  {
    v38 = 500LL;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v38 = (unsigned int)PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v38);
  if ( ((v25 - 1) & 0xFFFFFFFA) != 0 || v25 == 6 )
  {
    v56 = 1;
    v72 = _mm_load_si128((const __m128i *)&_xmm);
    v73 = _mm_cvtsi128_si32(v72);
    goto LABEL_118;
  }
  LOBYTE(v39) = 0;
  v45 = 0;
  LOBYTE(v40) = 0;
  if ( !v22 )
  {
    v45 = 1;
    goto LABEL_110;
  }
  v46 = v22 - 2;
  if ( !v46 )
  {
    v45 = 1;
LABEL_111:
    LOBYTE(v40) = 1;
    goto LABEL_112;
  }
  v47 = v46 - 2;
  if ( !v47 )
  {
LABEL_110:
    LOBYTE(v39) = 1;
    goto LABEL_111;
  }
  if ( v47 == 1 )
  {
    v48 = &v72;
    v49 = 5LL;
    v50 = (int *)v69 + 1;
    do
    {
      LOBYTE(v44) = 0;
      v51 = 0;
      v52 = 2LL;
      do
      {
        v53 = *v50;
        if ( *v50 )
        {
          if ( v53 == 2 )
          {
            v51 = 1;
            goto LABEL_105;
          }
          if ( v53 != 4 )
            goto LABEL_105;
        }
        else
        {
          v51 = 1;
        }
        LOBYTE(v44) = 1;
LABEL_105:
        ++v50;
        --v52;
      }
      while ( v52 );
      v48->m128i_i32[0] = PpmHeteroComputeBias(v44, v51, v40, v39);
      LOBYTE(v39) = v44 | v39;
      v48 = (__m128i *)((char *)v48 + 4);
      v45 = v55 | v54;
      --v49;
    }
    while ( v49 );
  }
LABEL_112:
  LOBYTE(v38) = v45;
  LOBYTE(v44) = v39;
  v56 = PpmHeteroComputeBias(v44, v38, v40, v39);
  if ( v57 )
  {
    v58 = &v72;
    for ( j = 5LL; j; --j )
    {
      v58->m128i_i32[0] = v56;
      v58 = (__m128i *)((char *)v58 + 4);
    }
  }
LABEL_118:
  result = KeConfigureHeteroPolicy(v69);
  if ( PpmHeteroParkBias != v56 )
  {
    PpmHeteroParkBias = v56;
    result = 1;
  }
  do
  {
    v61 = v72.m128i_i32[v2];
    if ( PpmHeteroQosBias[v2] != v61 )
    {
      PpmHeteroQosBias[v2] = v61;
      result = 1;
    }
    ++v2;
    --v4;
  }
  while ( v4 );
  return result;
}
