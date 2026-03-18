/*
 * XREFs of PopInitializeHeteroProcessors @ 0x1407A5838
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1407A5360 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     KeIsEmptyAffinityEx @ 0x140276350 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     PpmHeteroDetectHgsCores @ 0x1403BF2D8 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403BF334 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeIsEqualAffinityEx @ 0x1403BF3F0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x140560EF8 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PsEnumProcesses @ 0x1405EEB64 (PsEnumProcesses.c)
 *     PpmEventHeteroPolicy @ 0x1407A5AE8 (PpmEventHeteroPolicy.c)
 *     PopConfigureHeteroPolicies @ 0x1407A5B6C (PopConfigureHeteroPolicies.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407A6144 (PopDetectSimulatedHeteroProcessors.c)
 *     KeConfigureHeteroProcessors @ 0x1408B5F38 (KeConfigureHeteroProcessors.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1, signed __int64 a2)
{
  unsigned __int8 v3; // bl
  char v4; // di
  unsigned int v5; // r15d
  unsigned __int8 v6; // r14
  char *v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  unsigned int v11; // ebx
  unsigned __int8 v12; // al
  int v13; // eax
  ULONG ActiveProcessorCount; // eax
  _BYTE *v15; // rcx
  __int64 v16; // r8
  char v17; // al
  _WORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  char v25; // bl
  char v26; // cl
  unsigned int v27; // ebx
  __int64 v28; // r10
  unsigned int v29; // r11d
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r9
  unsigned int i; // edx
  __int64 v34; // rax
  int v35; // r8d
  char v36; // r9
  unsigned __int64 v37; // r10
  __int64 *v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 j; // rax
  char v42; // dl
  int v43; // r9d
  unsigned __int64 v44; // r10
  __int64 v45; // rax
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rcx
  __int64 k; // rcx
  __int64 v49; // rdi
  __int64 v50; // r8
  char v51; // al
  __int64 Prcb; // rax
  __int16 v53; // cx
  int v54; // [rsp+38h] [rbp-69h] BYREF
  __int16 v55; // [rsp+3Ch] [rbp-65h] BYREF
  unsigned int v56; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v57; // [rsp+44h] [rbp-5Dh] BYREF
  unsigned __int16 *v58[2]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v59; // [rsp+58h] [rbp-49h]
  int v60; // [rsp+5Ah] [rbp-47h]
  __int16 v61; // [rsp+5Eh] [rbp-43h]
  unsigned __int16 *v62[2]; // [rsp+60h] [rbp-41h] BYREF
  __int16 v63; // [rsp+70h] [rbp-31h]
  int v64; // [rsp+72h] [rbp-2Fh]
  __int16 v65; // [rsp+76h] [rbp-2Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  __int64 v67; // [rsp+88h] [rbp-19h]
  __int64 v68; // [rsp+90h] [rbp-11h]
  __int64 v69; // [rsp+98h] [rbp-9h]
  __int64 v70; // [rsp+A0h] [rbp-1h]
  __int64 v71; // [rsp+A8h] [rbp+7h]
  __int64 v72; // [rsp+B0h] [rbp+Fh]
  __int64 v73; // [rsp+B8h] [rbp+17h]
  __int64 v74; // [rsp+C0h] [rbp+1Fh]

  v3 = 0;
  v4 = 1;
  if ( (PpmBackgroundProfile || PpmEntryLevelPerfProfile || PpmMultimediaQosProfile)
    && PpmPerfSchedulerDirectedPerfStatesSupported
    && KeQueryActiveProcessorCountEx(0) >= 2 )
  {
    v3 = 1;
  }
  v5 = v3;
  if ( PpmPerfVmQosSupported )
    v5 = 1;
  v56 = v5;
  if ( !(_BYTE)v5 || (v6 = 1, PpmPerfQosGroupPolicyDisable) )
    v6 = 0;
  if ( a1 )
  {
    v7 = (char *)PpmHeteroCapabilityTest;
    v8 = 0;
    if ( *(_DWORD *)PpmHeteroCapabilityTest )
    {
      do
      {
        v9 = v8++;
        *(_WORD *)&v7[2 * v9 + 7 + v9] = 0;
      }
      while ( v8 < *(_DWORD *)v7 );
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered) )
    {
      if ( (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered) )
      {
        if ( PpmPerfDomainCount != 1 )
        {
          v22 = (__int64 *)PpmPerfDomainHead;
          v23 = 0LL;
          if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
          {
            do
            {
              v24 = v23;
              v23 = v22[43];
              v22 = (__int64 *)*v22;
              if ( v24 > v23 )
                v23 = v24;
            }
            while ( v22 != &PpmPerfDomainHead );
            if ( v23 )
            {
              v25 = 0;
              v26 = 0;
              if ( v23 >= 0x7FFFFFFFFFFFLL )
              {
                _BitScanReverse(&v27, HIDWORD(v23) + 0xFFFF);
                v25 = v27 - 14;
                v26 = v25;
              }
              v28 = PpmPerfDomainHead;
              v29 = -1;
              v30 = v23 >> v26;
              if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
              {
                do
                {
                  v31 = *(_QWORD *)(v28 + 344) >> v25;
                  *(_BYTE *)(v28 + 352) = 100 * v31 / v30;
                  if ( v31 == v30 )
                  {
                    v32 = 0x10000LL;
                  }
                  else
                  {
                    v32 = ((v31 << 16) + (v30 >> 1)) / v30;
                    if ( v32 <= 1 )
                      v32 = 1LL;
                  }
                  for ( i = 0; i < *(_DWORD *)(v28 + 200); ++i )
                  {
                    v34 = *(_QWORD *)(136LL * i + *(_QWORD *)(v28 + 216));
                    if ( v34 )
                      *(_DWORD *)(v34 + 56) = v32;
                  }
                  v28 = *(_QWORD *)v28;
                  if ( v29 >= v32 )
                    v29 = v32;
                }
                while ( (__int64 *)v28 != &PpmPerfDomainHead );
                LOBYTE(v5) = v56;
              }
              v35 = PpmPerfDomainCount;
              v36 = 0;
              PpmHeteroMinRelativePerformance = v29;
              v37 = 0LL;
              while ( v35 )
              {
                v38 = (__int64 *)PpmPerfDomainHead;
                v39 = -1LL;
                while ( v38 != &PpmPerfDomainHead )
                {
                  v40 = v38[43];
                  if ( v40 > v37 && v39 >= v40 )
                    v39 = v38[43];
                  v38 = (__int64 *)*v38;
                }
                for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
                {
                  if ( *(_QWORD *)(j + 344) == v39 )
                  {
                    *(_BYTE *)(j + 205) = v36;
                    --v35;
                  }
                }
                v37 = v39;
                ++v36;
              }
              PpmHeteroNominalPerformanceClasses = v36;
              v42 = 0;
              v43 = PpmPerfDomainCount;
              v44 = 0LL;
              while ( v43 )
              {
                v45 = PpmPerfDomainHead;
                v46 = 0xFFFFFFFFLL;
                while ( (__int64 *)v45 != &PpmPerfDomainHead )
                {
                  v47 = *(_QWORD *)(v45 + 344) * *(unsigned int *)(v45 + 320);
                  if ( v47 > v44 && v46 >= v47 )
                    v46 = *(_QWORD *)(v45 + 344) * *(unsigned int *)(v45 + 320);
                  v45 = *(_QWORD *)v45;
                }
                for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
                {
                  if ( *(_QWORD *)(k + 344) * *(unsigned int *)(k + 320) == v46 )
                  {
                    if ( *(_BYTE *)(k + 206) != v42 )
                      *(_BYTE *)(k + 206) = v42;
                    --v43;
                  }
                }
                v44 = v46;
                ++v42;
              }
              PpmHeteroHighestPerformanceClasses = v42;
            }
          }
        }
      }
    }
    PpmHeteroUpdateHgsConfiguration();
    v10 = PopDetectSimulatedHeteroProcessors(v7);
    v54 = v10;
    v11 = v10 != 0;
    if ( !v10 )
    {
      v12 = PpmHeteroDetectHgsCores((__int64)v7);
      v54 = v12;
      if ( v12 )
      {
        v11 = 5;
      }
      else
      {
        v60 = 0;
        v61 = 0;
        v57 = 0;
        if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses > 1u
          || (unsigned __int8)PpmHeteroHighestPerformanceClasses > 1u )
        {
          v58[1] = (unsigned __int16 *)qword_140C11528;
          v58[0] = PpmPerfStatesRegistered;
          v59 = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v57, v58) )
          {
            v49 = v57;
            v50 = *(_QWORD *)(KeGetPrcb(v57) + 33128);
            if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses <= 1u )
              v51 = *(_BYTE *)(v50 + 206);
            else
              v51 = *(_BYTE *)(v50 + 205);
            v7[2 * v49 + 8 + v49] = v51;
          }
          v4 = 1;
          v7[5] = 1;
          v13 = 1;
        }
        else
        {
          v13 = 0;
        }
        v54 = v13;
        if ( v13 )
        {
          v11 = 3;
        }
        else if ( v6 )
        {
          v54 = 1;
          v11 = 4;
        }
      }
    }
    if ( v11 == PopHeteroSystem )
    {
      v4 = 0;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v15 = v7 + 7;
        a2 = (_BYTE *)PpmHeteroCapability - v7;
        v16 = ActiveProcessorCount;
        do
        {
          if ( v15[a2] != *v15 || v15[a2 + 1] != v15[1] )
            v4 = 1;
          v15 += 3;
          --v16;
        }
        while ( v16 );
      }
    }
  }
  else
  {
    v11 = PopHeteroSystem;
    v7 = (char *)PpmHeteroCapability;
    v4 = 0;
    v54 = PopHeteroSystem != 0;
  }
  LOBYTE(a2) = a1;
  v17 = PopConfigureHeteroPolicies(v11, a2);
  if ( (v4 || v11 && v17) && (unsigned int)KeConfigureHeteroProcessors(v7, v6, &v54) )
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  if ( v54 )
  {
    PopHeteroSystem = v11;
    if ( v7 != PpmHeteroCapability )
      memmove(PpmHeteroCapability, v7, 3 * (*(_DWORD *)v7 + 2));
    if ( v6 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_116;
  }
  v18 = PpmHeteroCapability;
  v19 = 0LL;
  PopHeteroSystem = 0;
  if ( *(_DWORD *)PpmHeteroCapability )
  {
    do
    {
      v20 = (unsigned int)v19;
      v19 = (unsigned int)(v19 + 1);
      *(_WORD *)((char *)&v18[v20 + 3] + v20 + 1) = 0;
      *((_BYTE *)&v18[v20 + 3] + v20) = 0;
      v18[2] = 0;
    }
    while ( (unsigned int)v19 < *(_DWORD *)v18 );
  }
  if ( (_BYTE)v5 )
LABEL_116:
    PpmPerfQosSupportedAndConfigured = 1;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 || PopHeteroSystem == 6 )
    PpmHeteroPolicy = 0;
  else
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = PopHeteroSystem != 0;
  v64 = 0;
  v65 = 0;
  v55 = 0;
  v56 = 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v62[1] = (unsigned __int16 *)qword_140C11248[0];
    v62[0] = (unsigned __int16 *)PpmCheckRegistered;
    v63 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v56, v62) )
    {
      Prcb = KeGetPrcb(v56);
      v53 = *(unsigned __int8 *)(Prcb + 208);
      UserData.Ptr = (ULONGLONG)&v55;
      v55 = v53;
      v71 = Prcb + 33209;
      v67 = Prcb + 209;
      v73 = Prcb + 33210;
      v69 = Prcb + 33208;
      *(_QWORD *)&UserData.Size = 2LL;
      v68 = 1LL;
      v70 = 1LL;
      v72 = 1LL;
      v74 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 5u, &UserData);
    }
  }
  PpmEventHeteroPolicy(0LL, v18, v19);
  return v4;
}
