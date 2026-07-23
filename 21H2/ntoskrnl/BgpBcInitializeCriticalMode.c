/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140A97A10
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x1403BCBAC (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x1403BCD2C (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F4FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F5A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x140A97D5C (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140A97E2C (BcpFindMessage.c)
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
    dword_140C134F0 |= 0x400000u;
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
      RtlInitUnicodeString(&stru_140C53E10, Message);
      v6 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_140C53E30, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_140C53E40, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_140C53E50, v8);
      v9 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_140C53E60, v9);
      v10 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_140C53E20, v10);
      v11 = (const WCHAR *)BcpFindMessage(1090551828LL);
      RtlInitUnicodeString(&stru_140C53EB0, v11);
      v12 = (const WCHAR *)BcpFindMessage(1090551829LL);
      RtlInitUnicodeString(&stru_140C53EC0, v12);
      v13 = (const WCHAR *)BcpFindMessage(1090551830LL);
      RtlInitUnicodeString(&stru_140C53ED0, v13);
      v14 = (const WCHAR *)BcpFindMessage(1090551832LL);
      RtlInitUnicodeString(&stru_140C53EE0, v14);
      v15 = (const WCHAR *)BcpFindMessage(1090551831LL);
      RtlInitUnicodeString(&stru_140C53EF0, v15);
      v16 = (const WCHAR *)BcpFindMessage(1090551833LL);
      RtlInitUnicodeString(&stru_140C53F00, v16);
      v17 = (const WCHAR *)BcpFindMessage(1090551840LL);
      RtlInitUnicodeString(&stru_140C53F10, v17);
      v18 = (const WCHAR *)BcpFindMessage(1090551841LL);
      RtlInitUnicodeString(&stru_140C53F20, v18);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v35) >= 0 )
      {
        RtlInitUnicodeString(&stru_140C53E70, SourceString);
        RtlInitUnicodeString(&stru_140C53E80, v35);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v37, &v35);
        v4 = v37;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_140C53E90, v37);
          RtlInitUnicodeString(&stru_140C53EA0, v35);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_140C134F0 |= 0x20000u;
          v22 = *(_DWORD *)(a1 + 120);
          v23 = dword_140C10EF0;
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
              if ( (__int64)v23 < (__int64)&qword_140C11058 )
                goto LABEL_10;
              HIDWORD(v34) = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v33, &v32) >= 0 )
              {
                v26 = v32;
                Memory = BgpFwAllocateMemory(v32);
                if ( Memory )
                {
                  qword_140C13430 = 0LL;
                  BcpWorkspace = Memory;
                  v30 = __PAIR64__(HIDWORD(v29), DWORD2(v32));
                  qword_140C13428 = v26;
                  qword_140C53F30 = BgpDisplayCharacterGetContext((__int64)v33, &v30, 3);
                  if ( qword_140C53F30 )
                  {
                    dword_140C134F0 |= 0x10u;
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
      if ( qword_140C53F30 )
        BgpDisplayCharacterDestroyContext(qword_140C53F30);
    }
  }
  return 0LL;
}
