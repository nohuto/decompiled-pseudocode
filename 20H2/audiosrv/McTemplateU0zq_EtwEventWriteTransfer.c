/*
 * XREFs of McTemplateU0zq_EtwEventWriteTransfer @ 0x1800BB2FC
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180062A80 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800639E0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18000F700 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0zq_EtwEventWriteTransfer(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  int *v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = (unsigned int)(2 * v4 + 2);
  }
  else
  {
    v5 = 10LL;
  }
  v10 = 0;
  v9 = v5;
  if ( !a3 )
    a3 = L"NULL";
  v12 = 4LL;
  v8 = a3;
  v11 = &v13;
  return McGenEventWrite_EtwEventWriteTransfer(
           v5,
           (__int64)&EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP,
           (__int64)a3,
           3LL,
           (__int64)v7);
}
