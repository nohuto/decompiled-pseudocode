/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140A93F20
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x1403997F4 (BgpFwAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x1403B959C (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x1403B971C (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F0FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F1A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x140A9426C (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140A9433C (BcpFindMessage.c)
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
  int v22; // eax
  _DWORD *v23; // rdi
  __int64 v24; // r14
  _DWORD *v25; // rsi
  __int64 v26; // rdi
  __int64 Memory; // rax
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  int v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v33[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v34; // [rsp+60h] [rbp-10h] BYREF
  PCWSTR v35; // [rsp+A0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+40h] BYREF
  PCWSTR v37; // [rsp+B8h] [rbp+48h] BYREF

  v29 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v3 = *(_DWORD *)(a1 + 120);
  v32 = 0LL;
  v34 = 0LL;
  if ( (v3 & 0x400000) != 0 )
  {
    dword_140C13310 |= 0x400000u;
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
      RtlInitUnicodeString(&stru_140C53BD0, Message);
      v6 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_140C53BF0, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_140C53C00, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_140C53C10, v8);
      v9 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_140C53C20, v9);
      v10 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_140C53BE0, v10);
      v11 = (const WCHAR *)BcpFindMessage(1090551828LL);
      RtlInitUnicodeString(&stru_140C53C70, v11);
      v12 = (const WCHAR *)BcpFindMessage(1090551829LL);
      RtlInitUnicodeString(&stru_140C53C80, v12);
      v13 = (const WCHAR *)BcpFindMessage(1090551830LL);
      RtlInitUnicodeString(&stru_140C53C90, v13);
      v14 = (const WCHAR *)BcpFindMessage(1090551832LL);
      RtlInitUnicodeString(&stru_140C53CA0, v14);
      v15 = (const WCHAR *)BcpFindMessage(1090551831LL);
      RtlInitUnicodeString(&stru_140C53CB0, v15);
      v16 = (const WCHAR *)BcpFindMessage(1090551833LL);
      RtlInitUnicodeString(&stru_140C53CC0, v16);
      v17 = (const WCHAR *)BcpFindMessage(1090551840LL);
      RtlInitUnicodeString(&stru_140C53CD0, v17);
      v18 = (const WCHAR *)BcpFindMessage(1090551841LL);
      RtlInitUnicodeString(&stru_140C53CE0, v18);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v35) >= 0 )
      {
        RtlInitUnicodeString(&stru_140C53C30, SourceString);
        RtlInitUnicodeString(&stru_140C53C40, v35);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v37, &v35);
        v4 = v37;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_140C53C50, v37);
          RtlInitUnicodeString(&stru_140C53C60, v35);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_140C13310 |= 0x20000u;
          v22 = *(_DWORD *)(a1 + 120);
          v23 = dword_140C10E70;
          v33[1] = -1;
          v33[0] = (v22 & 0x10000000) != 0 ? -14389468 : -16746538;
LABEL_10:
          v24 = 0LL;
          v25 = v23;
          while ( (int)BgpFoDetermineFontInformation(
                         *v25,
                         v20,
                         v21,
                         (unsigned int)&v29,
                         (__int64)&v34 + 8,
                         (__int64)&v34) >= 0 )
          {
            ++v24;
            *v25++ = DWORD2(v34);
            if ( v24 >= 4 )
            {
              v23 += 18;
              if ( (__int64)v23 < (__int64)&qword_140C10FD8 )
                goto LABEL_10;
              HIDWORD(v34) = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v33, &v32) >= 0 )
              {
                v26 = v32;
                Memory = BgpFwAllocateMemory(v32);
                if ( Memory )
                {
                  qword_140C13270 = 0LL;
                  BcpWorkspace = Memory;
                  v30 = __PAIR64__(HIDWORD(v29), DWORD2(v32));
                  qword_140C13268 = v26;
                  qword_140C53CF0 = BgpDisplayCharacterGetContext((__int64)v33, &v30, 3);
                  if ( qword_140C53CF0 )
                  {
                    dword_140C13310 |= 0x10u;
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
      if ( qword_140C53CF0 )
        BgpDisplayCharacterDestroyContext(qword_140C53CF0);
    }
  }
  return 0LL;
}
