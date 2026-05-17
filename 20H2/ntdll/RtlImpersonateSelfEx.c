/*
 * XREFs of RtlImpersonateSelfEx @ 0x180077400
 * Callers:
 *     RtlAcquirePrivilege @ 0x180077180 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelf @ 0x1800773F0 (RtlImpersonateSelf.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009D250 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x18009D6B0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18009D8F0 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlImpersonateSelfEx(int a1, int a2, HANDLE *a3)
{
  int v5; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-19h] BYREF
  HANDLE v8; // [rsp+38h] [rbp-11h] BYREF
  int v9; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+48h] [rbp-1h]
  __int64 v11; // [rsp+50h] [rbp+7h]
  int v12; // [rsp+58h] [rbp+Fh]
  __int64 v13; // [rsp+60h] [rbp+17h]
  _DWORD *v14; // [rsp+68h] [rbp+1Fh]
  _DWORD v15[2]; // [rsp+70h] [rbp+27h] BYREF
  __int16 v16; // [rsp+78h] [rbp+2Fh]

  if ( !a3 && a2 )
    return 3221225712LL;
  v10 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v15[1] = a1;
  v12 = 512;
  v14 = v15;
  v9 = 48;
  v15[0] = 12;
  v16 = 1;
  v5 = NtOpenProcessTokenEx(-1LL, 2LL, 512LL, &v8);
  if ( v5 >= 0 )
  {
    v5 = NtDuplicateToken(v8, a2 | 4u, &v9);
    if ( v5 >= 0 )
    {
      v5 = NtSetInformationThread(-2LL, 5LL, &Handle, 8LL);
      if ( v5 >= 0 && a3 )
        *a3 = Handle;
      else
        NtClose(Handle);
    }
    NtClose(v8);
  }
  return (unsigned int)v5;
}
