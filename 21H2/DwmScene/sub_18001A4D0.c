/*
 * XREFs of sub_18001A4D0 @ 0x18001A4D0
 * Callers:
 *     sub_18001B108 @ 0x18001B108 (sub_18001B108.c)
 * Callees:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000C8F4 @ 0x18000C8F4 (sub_18000C8F4.c)
 *     sub_18000CD78 @ 0x18000CD78 (sub_18000CD78.c)
 *     sub_18000D91C @ 0x18000D91C (sub_18000D91C.c)
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     sub_18000EB18 @ 0x18000EB18 (sub_18000EB18.c)
 *     sub_18001BDF0 @ 0x18001BDF0 (sub_18001BDF0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001A4D0(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  void *v6; // rbx
  unsigned int v7; // edi
  DWORD v8; // eax
  void *v9; // rsi
  signed int v10; // eax
  _DWORD *v11; // rax
  signed int v13; // eax
  HANDLE v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_18000E9D0((char *)Name, 260LL, (const char *)L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 304, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v6 = Mutex;
  v14 = Mutex;
  if ( !Mutex )
  {
    v7 = sub_18000CD78();
    goto LABEL_17;
  }
  v8 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v8 != 258 )
  {
    if ( !v8 )
      goto LABEL_8;
    if ( v8 != 128 )
    {
      sub_18000C8F4(retaddr, 2892, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      JUMPOUT(0x18001A682LL);
    }
  }
  if ( (v8 & 0xFFFFFF7F) != 0 )
  {
    v9 = 0LL;
    goto LABEL_9;
  }
LABEL_8:
  v9 = v6;
LABEL_9:
  v15[1] = v9;
  v15[0] = 0LL;
  v10 = sub_18000EB18((__int64)Name, v15);
  v7 = v10;
  if ( v10 < 0 )
  {
    sub_18000DD78(retaddr, 294, (__int64)&unk_18013FEA4, v10);
    goto LABEL_15;
  }
  v11 = (_DWORD *)v15[0];
  if ( v15[0] )
  {
    *a2 = v15[0];
    *(_DWORD *)*a2 = *v11 + 1;
  }
  else
  {
    v13 = sub_18001BDF0(Name, &v14, a2);
    v7 = v13;
    if ( v13 < 0 )
    {
      sub_18000DD78(retaddr, 302, (__int64)&unk_18013FEA4, v13);
      goto LABEL_14;
    }
  }
  v7 = 0;
LABEL_14:
  v6 = v14;
LABEL_15:
  if ( v9 )
    sub_18000D91C(v9);
LABEL_17:
  if ( v6 )
    sub_18000C578(v6);
  return v7;
}
