/*
 * XREFs of NtUserToUnicodeEx @ 0x1C00898B0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     xxxToUnicodeEx @ 0x1C0089AD0 (xxxToUnicodeEx.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  __int64 v11; // rdx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+40h] [rbp-1A8h]
  __int128 v22; // [rsp+68h] [rbp-180h] BYREF
  __int64 v23; // [rsp+78h] [rbp-170h]
  __int64 v24; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v25[256]; // [rsp+A0h] [rbp-148h] BYREF

  v24 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0, 1);
  if ( a5 <= 0 )
  {
    v15 = 0;
    UserSetLastError(87LL, v11);
  }
  else
  {
    v12 = v25;
    v13 = 2LL;
    do
    {
      *v12 = *a3;
      v12[1] = a3[1];
      v12[2] = a3[2];
      v12[3] = a3[3];
      v12[4] = a3[4];
      v12[5] = a3[5];
      v12[6] = a3[6];
      v12 += 8;
      *(v12 - 1) = a3[7];
      a3 += 8;
      --v13;
    }
    while ( v13 );
    ProbeForWrite(a4, 2LL * a5, 2u);
    if ( a5 < 4 )
    {
      v14 = &v24;
    }
    else
    {
      v14 = (__int64 *)Win32AllocPoolWithQuotaZInit(2LL * a5, 0x62757355u);
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      v21 = 1;
      if ( qword_1C024FEC0 )
        qword_1C024FEC0(v14, &v22, Win32FreePool);
    }
    v15 = xxxToUnicodeEx(a1, a2, (unsigned int)v25, (_DWORD)v14, a5, a6, a7);
    memmove((void *)a4, v14, 2LL * a5);
    if ( v21 && qword_1C024FFE8 )
      qword_1C024FFE8(&v22);
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v15;
}
