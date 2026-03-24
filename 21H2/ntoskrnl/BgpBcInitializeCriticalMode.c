/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140A96A10
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x1403BCA3C (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x1403BCBBC (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F3FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F4A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x140A96D5C (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140A96E2C (BcpFindMessage.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  int ProgressMessages; // eax
  int v23; // eax
  _DWORD *v24; // rdi
  __int64 v25; // r14
  _DWORD *v26; // rsi
  __int64 v27; // rdi
  __int64 Memory; // rax
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-38h] BYREF
  int v32; // [rsp+40h] [rbp-30h]
  __int128 v33; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v34[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v35; // [rsp+60h] [rbp-10h] BYREF
  PCWSTR v36; // [rsp+A0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+40h] BYREF
  PCWSTR v38; // [rsp+B8h] [rbp+48h] BYREF

  v30 = 0LL;
  v36 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v3 = *(_DWORD *)(a1 + 120);
  v33 = 0LL;
  v35 = 0LL;
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
    v38 = 0LL;
    if ( a2 != -1 )
    {
      Message = (const WCHAR *)BcpFindMessage(3238035457LL);
      RtlInitUnicodeString(&stru_140C53DD0, Message);
      v6 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_140C53DF0, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_140C53E00, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_140C53E10, v8);
      v9 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_140C53E20, v9);
      v10 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_140C53DE0, v10);
      v11 = (const WCHAR *)BcpFindMessage(1090551828LL);
      RtlInitUnicodeString(&stru_140C53E70, v11);
      v12 = (const WCHAR *)BcpFindMessage(1090551829LL);
      RtlInitUnicodeString(&stru_140C53E80, v12);
      v13 = (const WCHAR *)BcpFindMessage(1090551830LL);
      RtlInitUnicodeString(&stru_140C53E90, v13);
      v14 = (const WCHAR *)BcpFindMessage(1090551832LL);
      RtlInitUnicodeString(&stru_140C53EA0, v14);
      v15 = (const WCHAR *)BcpFindMessage(1090551831LL);
      RtlInitUnicodeString(&stru_140C53EB0, v15);
      v16 = (const WCHAR *)BcpFindMessage(1090551833LL);
      RtlInitUnicodeString(&stru_140C53EC0, v16);
      v17 = (const WCHAR *)BcpFindMessage(1090551840LL);
      RtlInitUnicodeString(&stru_140C53ED0, v17);
      v18 = (const WCHAR *)BcpFindMessage(1090551841LL);
      RtlInitUnicodeString(&stru_140C53EE0, v18);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v36) >= 0 )
      {
        RtlInitUnicodeString(&stru_140C53E30, SourceString);
        RtlInitUnicodeString(&stru_140C53E40, v36);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v38, &v36);
        v4 = v38;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_140C53E50, v38);
          RtlInitUnicodeString(&stru_140C53E60, v36);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_140C134F0 |= 0x20000u;
          v23 = *(_DWORD *)(a1 + 120);
          v24 = dword_140C10F10;
          v34[1] = -1;
          v34[0] = (v23 & 0x10000000) != 0 ? -14389468 : -16746538;
LABEL_10:
          v25 = 0LL;
          v26 = v24;
          while ( (int)BgpFoDetermineFontInformation(
                         *v26,
                         v19,
                         v20,
                         (unsigned int)&v30,
                         (__int64)&v35 + 8,
                         (__int64)&v35) >= 0 )
          {
            ++v25;
            *v26++ = DWORD2(v35);
            if ( v25 >= 4 )
            {
              v24 += 18;
              if ( (__int64)v24 < (__int64)&qword_140C11078 )
                goto LABEL_10;
              HIDWORD(v35) = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v34, &v33) >= 0 )
              {
                v27 = v33;
                Memory = BgpFwAllocateMemory(v33);
                if ( Memory )
                {
                  qword_140C13410 = 0LL;
                  BcpWorkspace = Memory;
                  v31 = __PAIR64__(HIDWORD(v30), DWORD2(v33));
                  qword_140C13408 = v27;
                  qword_140C53EF0 = BgpDisplayCharacterGetContext((__int64)v34, &v31, 3);
                  if ( qword_140C53EF0 )
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
        BgpFwFreeMemory((__int64)SourceString, v19, v20, v21);
      if ( v4 )
        BgpFwFreeMemory((__int64)v4, v19, v20, v21);
      if ( qword_140C53EF0 )
        BgpDisplayCharacterDestroyContext(qword_140C53EF0);
    }
  }
  return 0LL;
}
