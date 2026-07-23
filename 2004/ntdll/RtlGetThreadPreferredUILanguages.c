/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180035CA0
 * Callers:
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18003EBF0 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC40 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x1800468E0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003681C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpSetProcUserMachineLangList @ 0x180038514 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180038670 (InitializeTEBUserLangList.c)
 *     LdrpCreateLangFallbackList @ 0x180038974 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003BD04 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18003C098 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E724 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006EC10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006EF00 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006EF50 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18006F83C (RtlpSetProcMergedLangList.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F8A8 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x180078400 (RtlpMuiRegDupLanguageList.c)
 */

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // r14d
  __int64 v5; // r13
  __int64 v6; // rsi
  PVOID v7; // rdi
  ULONG v8; // r15d
  NTSTATUS result; // eax
  NTSTATUS PreferredUILanguages; // ebx
  __int64 v11; // r12
  void *MergedPrefLanguages; // rsi
  __int64 v13; // rcx
  PVOID v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int64 *v17; // r14
  char v18; // [rsp+58h] [rbp-39h]
  char v19; // [rsp+59h] [rbp-38h]
  PVOID v20; // [rsp+60h] [rbp-31h] BYREF
  PVOID v21; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-21h]
  __int64 v23; // [rsp+78h] [rbp-19h]
  void *PreferredLanguages; // [rsp+80h] [rbp-11h]
  ULONG v25; // [rsp+88h] [rbp-9h]
  PVOID BaseAddress; // [rsp+90h] [rbp-1h] BYREF
  ULONG v27; // [rsp+98h] [rbp+7h]
  PVOID v28; // [rsp+A0h] [rbp+Fh]
  char v29; // [rsp+F8h] [rbp+67h] BYREF
  PULONG v30; // [rsp+100h] [rbp+6Fh]
  PZZWSTR v31; // [rsp+108h] [rbp+77h]
  PULONG v32; // [rsp+110h] [rbp+7Fh]

  v32 = ReturnLength;
  v31 = Languages;
  v30 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v25 = 0;
  v22 = 0;
  v5 = 0LL;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  BaseAddress = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v28 = 0LL;
  v18 = 0;
  v20 = 0LL;
  v19 = 0;
  v23 = 0LL;
  v27 = v4;
  if ( ReturnLength )
    v25 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_33;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
      goto LABEL_33;
  }
  else
  {
    Flags |= 8u;
  }
  if ( (Flags & 0x10000) != 0 )
  {
    if ( (Flags & 0x40) != 0 || (Flags & 0x30) != 0 )
      goto LABEL_33;
    Flags |= 0x30u;
  }
  if ( (Flags & 0x40) != 0 && (Flags & 0x30) != 0 )
    goto LABEL_33;
  v8 = Flags | 0x20;
  if ( (Flags & 0x70) != 0 )
    v8 = Flags;
  if ( !ReturnLength )
    goto LABEL_33;
  if ( !*ReturnLength || Languages )
  {
    if ( (v8 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v20);
      if ( result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v7 = v20;
        if ( *((_DWORD *)v20 + 3) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
          goto LABEL_17;
        v20 = 0LL;
        PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v20);
        if ( PreferredUILanguages < 0 )
          goto LABEL_99;
      }
      v7 = v20;
LABEL_17:
      if ( (v8 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v7 = v20;
        goto LABEL_21;
      }
      v29 = 0;
      PreferredLanguages = 0LL;
      if ( *((_DWORD *)v7 + 3) == MEMORY[0x7FFE03A4] )
      {
LABEL_21:
        if ( (v8 & 0x40) == 0 )
        {
          PreferredUILanguages = InitializeTEBUserLangList(0LL, v7);
          if ( PreferredUILanguages < 0 )
            goto LABEL_34;
          v5 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v7 = v20;
          v23 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *((_QWORD *)v20 + 6);
          PreferredUILanguages = RtlpSetProcUserMachineLangList(v20, 0LL);
          if ( PreferredUILanguages < 0 )
            goto LABEL_34;
          v6 = *((_QWORD *)v7 + 7);
        }
        if ( NtCurrentTeb()->MergedPrefLanguages )
        {
          v18 = 1;
          if ( v4 == 48 )
          {
            if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
              && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v20 + 4) )
            {
              v7 = v20;
              v11 = v23;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v21 = MergedPrefLanguages;
              goto LABEL_43;
            }
            v18 = 0;
            RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
            NtCurrentTeb()->MergedPrefLanguages = 0LL;
          }
          goto LABEL_60;
        }
        v18 = 0;
        if ( v4 != 48 || PreferredLanguages )
        {
LABEL_60:
          v7 = v20;
          goto LABEL_61;
        }
        v7 = v20;
        v15 = *((_QWORD *)v20 + 12);
        if ( v15 && v5 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && *(char *)(v15 + 40) >= 0 )
        {
          v7 = v20;
          v11 = v23;
          v21 = (PVOID)*((_QWORD *)v20 + 12);
          NtCurrentTeb()->MuiGeneration = *((_DWORD *)v20 + 4);
LABEL_42:
          MergedPrefLanguages = v21;
LABEL_43:
          PreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                   (_DWORD)MergedPrefLanguages,
                                   (_DWORD)v7,
                                   (_DWORD)v31,
                                   (_DWORD)v32,
                                   v8,
                                   0,
                                   (__int64)v30);
          if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789) && v4 == 48 )
          {
            if ( !*((_WORD *)MergedPrefLanguages + 22) )
              RtlpComputeLangListCheckSum((__int64)MergedPrefLanguages);
            if ( !v18 )
            {
              if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
              {
                RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages);
                if ( !PreferredLanguages && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v11 == *((_QWORD *)v7 + 6) )
                  RtlpSetProcMergedLangList(v7, MergedPrefLanguages);
              }
              NtCurrentTeb()->MergedPrefLanguages = v21;
              v7 = v20;
              NtCurrentTeb()->MuiGeneration = v22;
            }
            MergedPrefLanguages = 0LL;
            v21 = 0LL;
          }
          goto LABEL_49;
        }
LABEL_61:
        if ( (v8 & 0x10000) == 0 )
        {
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection(&RegistryInfoCritSect);
          v28 = (PVOID)RtlpMuiRegDupLanguageList(*((_QWORD *)v7 + 9));
          v22 = *((_DWORD *)v7 + 4);
          RtlLeaveCriticalSection(&RegistryInfoCritSect);
        }
        PreferredUILanguages = LdrpCreateLangFallbackList(&v21, v7, 25LL);
        if ( PreferredUILanguages < 0 )
          goto LABEL_107;
        if ( (v8 & 0x40) != 0 )
        {
          v11 = v23;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v8,
                                   (_DWORD)v7,
                                   (unsigned int)&v21,
                                   (_DWORD)PreferredLanguages,
                                   0LL,
                                   v5,
                                   v6,
                                   v23,
                                   0);
        }
        else
        {
          LdrpCreateLangFallbackList(&BaseAddress, v7, 25LL);
          v11 = v23;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v8,
                                   (_DWORD)v7,
                                   (unsigned int)&BaseAddress,
                                   (_DWORD)PreferredLanguages,
                                   (__int64)v28,
                                   v5,
                                   v6,
                                   v23,
                                   0);
          if ( PreferredUILanguages >= 0 )
          {
            LOBYTE(v13) = v4 == 48 || (v8 & 0x10) != 0;
            PreferredUILanguages = RtlpAddNeutralsToMergedList(v13, v7, BaseAddress, &v21);
          }
          RtlpMuiRegFreeLanguageList(BaseAddress);
        }
        if ( PreferredUILanguages < 0 )
        {
LABEL_107:
          MergedPrefLanguages = v21;
LABEL_49:
          if ( MergedPrefLanguages )
          {
            v14 = v21;
            if ( v21 == NtCurrentTeb()->MergedPrefLanguages )
            {
              v14 = v21;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            RtlpMuiRegFreeLanguageList(v14);
            v7 = v20;
          }
LABEL_53:
          if ( PreferredUILanguages >= 0 )
          {
LABEL_54:
            if ( v19 && v7 )
              RtlpMuiFreeLangRegistryInfo(v7);
            if ( v28 )
              RtlpMuiRegFreeLanguageList(v28);
            return PreferredUILanguages;
          }
LABEL_34:
          if ( v31 && v25 )
          {
            if ( v25 == 1 )
              *v31 = 0;
            else
              *(_DWORD *)v31 = 0;
          }
          goto LABEL_54;
        }
        goto LABEL_42;
      }
      v20 = 0LL;
      PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v20);
      if ( PreferredUILanguages >= 0 )
      {
        v7 = v20;
        v19 = 1;
        v17 = (__int64 *)((char *)v20 + 56);
        if ( !*((_QWORD *)v20 + 7) )
        {
          PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                   (_DWORD)v20,
                                   v16,
                                   0,
                                   3,
                                   (__int64)&v29,
                                   (__int64)v20 + 56);
          if ( PreferredUILanguages < 0 && !v29 )
            goto LABEL_53;
        }
        if ( !*((_QWORD *)v7 + 8) )
        {
          v29 = 0;
          PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                   (_DWORD)v7,
                                   v16,
                                   1,
                                   3,
                                   (__int64)&v29,
                                   (__int64)v7 + 64);
          if ( PreferredUILanguages < 0 && !v29 )
            goto LABEL_53;
        }
        v5 = *((_QWORD *)v7 + 8);
        v6 = *v17;
        v4 = v27;
        goto LABEL_61;
      }
LABEL_99:
      v7 = v20;
      goto LABEL_34;
    }
LABEL_33:
    PreferredUILanguages = -1073741811;
    goto LABEL_34;
  }
  return -1073741811;
}
