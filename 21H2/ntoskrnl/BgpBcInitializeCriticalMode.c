/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140B55C50
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x1403CABF8 (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x1403CAE54 (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterGetContext @ 0x140AAE79C (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AAE9C8 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFoDetermineFontInformation @ 0x140B55FC4 (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140B56094 (BcpFindMessage.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  int v3; // eax
  PCWSTR v4; // rbx
  const WCHAR *Message; // rax
  const WCHAR *v6; // rax
  const WCHAR *v7; // rax
  const WCHAR *v8; // rax
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  const WCHAR *v11; // rax
  const WCHAR *v12; // rax
  const WCHAR *v13; // rax
  const WCHAR *v14; // rax
  const WCHAR *v15; // rax
  const WCHAR *v16; // rax
  const WCHAR *v17; // rax
  const WCHAR *v18; // rax
  int ProgressMessages; // eax
  int v20; // edx
  int v21; // r8d
  _DWORD *v22; // rdi
  __int64 v23; // r14
  _DWORD *v24; // rsi
  __int64 v25; // rdi
  __int64 Memory; // rax
  int v28; // [rsp+30h] [rbp-50h]
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  int v31; // [rsp+50h] [rbp-30h]
  __int128 v32; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v33[2]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v34; // [rsp+70h] [rbp-10h] BYREF
  PCWSTR v35; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+C0h] [rbp+40h] BYREF
  PCWSTR v37; // [rsp+C8h] [rbp+48h] BYREF

  v29 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v3 = *(_DWORD *)(a1 + 120);
  v32 = 0LL;
  v34 = 0LL;
  if ( (v3 & 0x400000) != 0 )
  {
    dword_140C0DF90 |= 0x400000u;
  }
  else
  {
    if ( (v3 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v4 = 0LL;
    SourceString = 0LL;
    v37 = 0LL;
    if ( a2 != -1 )
    {
      Message = (const WCHAR *)BcpFindMessage(3238035457LL);
      RtlInitUnicodeString(&stru_140C5A710, Message);
      v6 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_140C5A730, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_140C5A740, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_140C5A750, v8);
      v9 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_140C5A760, v9);
      v10 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_140C5A720, v10);
      v11 = (const WCHAR *)BcpFindMessage(1090551828LL);
      RtlInitUnicodeString(&stru_140C5A7B0, v11);
      v12 = (const WCHAR *)BcpFindMessage(1090551829LL);
      RtlInitUnicodeString(&stru_140C5A7C0, v12);
      v13 = (const WCHAR *)BcpFindMessage(1090551830LL);
      RtlInitUnicodeString(&stru_140C5A7D0, v13);
      v14 = (const WCHAR *)BcpFindMessage(1090551832LL);
      RtlInitUnicodeString(&stru_140C5A7E0, v14);
      v15 = (const WCHAR *)BcpFindMessage(1090551831LL);
      RtlInitUnicodeString(&stru_140C5A7F0, v15);
      v16 = (const WCHAR *)BcpFindMessage(1090551833LL);
      RtlInitUnicodeString(&stru_140C5A800, v16);
      v17 = (const WCHAR *)BcpFindMessage(1090551840LL);
      RtlInitUnicodeString(&stru_140C5A810, v17);
      v18 = (const WCHAR *)BcpFindMessage(1090551841LL);
      RtlInitUnicodeString(&stru_140C5A820, v18);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v35) >= 0 )
      {
        RtlInitUnicodeString(&stru_140C5A770, SourceString);
        RtlInitUnicodeString(&stru_140C5A780, v35);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v37, &v35);
        v4 = v37;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_140C5A790, v37);
          RtlInitUnicodeString(&stru_140C5A7A0, v35);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_140C0DF90 |= 0x20000u;
          if ( (*(_DWORD *)(a1 + 120) & 0x10000000) != 0 )
          {
            v33[0] = -14389468;
          }
          else
          {
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_BSBTest__private_reporting,
              0x1EAADCBu,
              0,
              0,
              (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
              1u,
              v28);
            v33[0] = -16761454;
          }
          v33[1] = -1;
          v22 = dword_140C0B2E0;
LABEL_12:
          v23 = 0LL;
          v24 = v22;
          while ( (int)BgpFoDetermineFontInformation(
                         *v24,
                         v20,
                         v21,
                         (unsigned int)&v29,
                         (__int64)&v34 + 8,
                         (__int64)&v34) >= 0 )
          {
            ++v23;
            *v24++ = DWORD2(v34);
            if ( v23 >= 4 )
            {
              v22 += 18;
              if ( (__int64)v22 < (__int64)&qword_140C0B448 )
                goto LABEL_12;
              HIDWORD(v34) = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v33, &v32) >= 0 )
              {
                v25 = v32;
                Memory = BgpFwAllocateMemory(v32);
                if ( Memory )
                {
                  qword_140C0DED0 = 0LL;
                  BcpWorkspace = Memory;
                  v30 = __PAIR64__(HIDWORD(v29), DWORD2(v32));
                  qword_140C0DEC8 = v25;
                  qword_140C5A830 = BgpDisplayCharacterGetContext((__int64)v33, (int *)&v30, 3);
                  if ( qword_140C5A830 )
                  {
                    dword_140C0DF90 |= 0x10u;
                    return 0LL;
                  }
                }
              }
              break;
            }
          }
        }
      }
      if ( SourceString )
        BgpFwFreeMemory((__int64)SourceString);
      if ( v4 )
        BgpFwFreeMemory((__int64)v4);
      if ( qword_140C5A830 )
        BgpDisplayCharacterDestroyContext(qword_140C5A830);
    }
  }
  return 0LL;
}
