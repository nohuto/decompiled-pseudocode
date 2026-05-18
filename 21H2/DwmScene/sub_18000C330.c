/*
 * XREFs of sub_18000C330 @ 0x18000C330
 * Callers:
 *     sub_18000D088 @ 0x18000D088 (sub_18000D088.c)
 * Callees:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000C8F4 @ 0x18000C8F4 (sub_18000C8F4.c)
 *     sub_18000CD78 @ 0x18000CD78 (sub_18000CD78.c)
 *     sub_18000D5A0 @ 0x18000D5A0 (sub_18000D5A0.c)
 *     sub_18000D91C @ 0x18000D91C (sub_18000D91C.c)
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     sub_18000EB18 @ 0x18000EB18 (sub_18000EB18.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000C330(__int64 a1, _QWORD *a2)
{
  HANDLE Mutex; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  HANDLE v7; // rbx
  unsigned int v8; // edi
  DWORD v9; // eax
  HANDLE v10; // rsi
  int v11; // eax
  _DWORD *v12; // rax
  int v14; // eax
  __int64 v15; // [rsp+28h] [rbp-D8h]
  HANDLE v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  GetCurrentProcessId();
  v15 = a1;
  sub_18000E9D0((char *)Name);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  v16 = Mutex;
  if ( !Mutex )
  {
    v8 = sub_18000CD78(v6, v5);
    goto LABEL_17;
  }
  v9 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v9 != 258 )
  {
    if ( !v9 )
      goto LABEL_8;
    if ( v9 != 128 )
    {
      sub_18000C8F4(retaddr, 2892LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      JUMPOUT(0x18000C4E2LL);
    }
  }
  if ( (v9 & 0xFFFFFF7F) != 0 )
  {
    v10 = 0LL;
    goto LABEL_9;
  }
LABEL_8:
  v10 = v7;
LABEL_9:
  v17[1] = v10;
  v17[0] = 0LL;
  v11 = sub_18000EB18(Name, v17);
  v8 = v11;
  if ( v11 < 0 )
  {
    sub_18000DD78(retaddr, 294LL, &unk_18013FEA4, (unsigned int)v11, 120, v15);
    goto LABEL_15;
  }
  v12 = (_DWORD *)v17[0];
  if ( v17[0] )
  {
    *a2 = v17[0];
    *(_DWORD *)*a2 = *v12 + 1;
  }
  else
  {
    v14 = sub_18000D5A0(Name, &v16, a2);
    v8 = v14;
    if ( v14 < 0 )
    {
      sub_18000DD78(retaddr, 302LL, &unk_18013FEA4, (unsigned int)v14, 120, v15);
      goto LABEL_14;
    }
  }
  v8 = 0;
LABEL_14:
  v7 = v16;
LABEL_15:
  if ( v10 )
    sub_18000D91C(v10);
LABEL_17:
  if ( v7 )
    sub_18000C578(v7);
  return v8;
}
