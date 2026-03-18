/*
 * XREFs of NtUserToUnicodeEx @ 0x1C00190B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxToUnicodeEx @ 0x1C00192D0 (xxxToUnicodeEx.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  _OWORD *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 v16; // rcx
  int v18; // [rsp+40h] [rbp-1A8h]
  __int128 v19; // [rsp+68h] [rbp-180h] BYREF
  __int64 v20; // [rsp+78h] [rbp-170h]
  __int64 v21; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v22[256]; // [rsp+A0h] [rbp-148h] BYREF

  v21 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a5 <= 0 )
  {
    v15 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v11 = v22;
    v12 = 2LL;
    do
    {
      *v11 = *a3;
      v11[1] = a3[1];
      v11[2] = a3[2];
      v11[3] = a3[3];
      v11[4] = a3[4];
      v11[5] = a3[5];
      v11[6] = a3[6];
      v11 += 8;
      *(v11 - 1) = a3[7];
      a3 += 8;
      --v12;
    }
    while ( v12 );
    ProbeForWrite(a4, 2LL * a5, 2u);
    if ( a5 < 4 )
    {
      v13 = &v21;
    }
    else
    {
      v13 = (__int64 *)Win32AllocPoolWithQuotaZInit(2LL * a5);
      if ( !v13 )
        ExRaiseStatus(-1073741801);
      v18 = 1;
      if ( qword_1C0251EC0 )
        qword_1C0251EC0(v13, &v19, Win32FreePool, v14);
    }
    v15 = xxxToUnicodeEx(a1, a2, (unsigned int)v22, (_DWORD)v13, a5, a6, a7);
    memmove((void *)a4, v13, 2LL * a5);
    if ( v18 && qword_1C0251FE8 )
      qword_1C0251FE8(&v19);
  }
  UserSessionSwitchLeaveCrit(v16);
  return v15;
}
