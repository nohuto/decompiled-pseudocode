/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1407101D4
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14035CA08 (ExpWorkerFactoryCreateThread.c)
 *     RtlCreateUserThread @ 0x140912810 (RtlCreateUserThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1403F99B0 (ZwCreateThreadEx.c)
 */

__int64 __fastcall RtlpCreateUserThreadEx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        HANDLE *a10,
        _OWORD *a11)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+68h] [rbp-98h] BYREF
  int v14; // [rsp+78h] [rbp-88h]
  int v15; // [rsp+7Ch] [rbp-84h]
  __int64 v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+90h] [rbp-70h]
  int v19; // [rsp+94h] [rbp-6Ch]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  __int128 *v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int128 v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-10h]

  v27 = 0LL;
  v29 = 0LL;
  v15 = 0;
  v19 = 0;
  Handle = 0LL;
  v28 = 0LL;
  v13 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return 3221225485LL;
  v14 = 48;
  v18 = 512;
  v20 = a2;
  v23 = 65539LL;
  v24 = 16LL;
  v22 = 40LL;
  v25 = &v13;
  v16 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  result = ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL);
  if ( (int)result >= 0 )
  {
    if ( a10 )
      *a10 = Handle;
    else
      ZwClose(Handle);
    if ( a11 )
      *a11 = v13;
    return 0LL;
  }
  return result;
}
