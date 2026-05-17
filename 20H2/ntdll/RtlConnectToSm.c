/*
 * XREFs of RtlConnectToSm @ 0x1800895E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtAlpcConnectPort @ 0x18009DFC0 (NtAlpcConnectPort.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlConnectToSm(const void **a1, __int64 a2, int a3, __int64 a4)
{
  size_t v9; // rbx
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v12; // [rsp+78h] [rbp-88h] BYREF
  __int64 v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  int v15; // [rsp+90h] [rbp-70h]
  __int128 v16; // [rsp+98h] [rbp-68h]
  __int64 v17[3]; // [rsp+B0h] [rbp-50h] BYREF
  int v18; // [rsp+C8h] [rbp-38h]
  int v19; // [rsp+D8h] [rbp-28h]
  _WORD v20[122]; // [rsp+DCh] [rbp-24h] BYREF
  _QWORD v21[10]; // [rsp+1D0h] [rbp+D0h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\SmApiPort");
  memset(v21, 0, 0x48uLL);
  LODWORD(v21[0]) = 0x10000;
  LODWORD(v21[1]) = 2;
  WORD2(v21[1]) = 257;
  v21[2] = 328LL;
  v21[4] = 10496LL;
  if ( !a1 )
  {
    v20[0] = 0;
    v19 = 0;
LABEL_3:
    v12 = 48;
    v13 = 0LL;
    v15 = 512;
    v14 = 0LL;
    v16 = 0LL;
    v18 = 0;
    v17[0] = 18612468LL;
    v10 = 288LL;
    return NtAlpcConnectPort(a4, &DestinationString, &v12, v21, 0x20000, 0LL, v17, &v10, 0LL, 0LL, 0LL);
  }
  if ( !a2 || !a3 )
    return 3221225520LL;
  if ( *(_WORD *)a1 < 0xF0u )
  {
    v9 = *(unsigned __int16 *)a1;
    memmove(v20, a1[1], v9);
    v20[v9 >> 1] = 0;
    v19 = a3;
    goto LABEL_3;
  }
  return 3221225485LL;
}
