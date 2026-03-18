/*
 * XREFs of NtUserToUnicodeEx @ 0x1C0058D30
 * Callers:
 *     <none>
 * Callees:
 *     xxxToUnicodeEx @ 0x1C0058F50 (xxxToUnicodeEx.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  _OWORD *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rcx
  int v17; // [rsp+40h] [rbp-1A8h]
  __int128 v18; // [rsp+68h] [rbp-180h] BYREF
  __int64 v19; // [rsp+78h] [rbp-170h]
  __int64 v20; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v21[256]; // [rsp+A0h] [rbp-148h] BYREF

  v20 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a5 <= 0 )
  {
    v14 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v11 = v21;
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
      v13 = &v20;
    }
    else
    {
      v13 = (__int64 *)Win32AllocPoolWithQuotaZInit(2LL * a5);
      if ( !v13 )
        ExRaiseStatus(-1073741801);
      v17 = 1;
      if ( qword_1C0257E80 )
        qword_1C0257E80(v13, &v18, Win32FreePool);
    }
    v14 = xxxToUnicodeEx(a1, a2, (unsigned int)v21, (_DWORD)v13, a5, a6, a7);
    memmove((void *)a4, v13, 2LL * a5);
    if ( v17 && qword_1C0257FA8 )
      qword_1C0257FA8(&v18);
  }
  UserSessionSwitchLeaveCrit(v15);
  return v14;
}
