/*
 * XREFs of sub_18012DAC0 @ 0x18012DAC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012D9B4 @ 0x18012D9B4 (sub_18012D9B4.c)
 */

void __fastcall sub_18012DAC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+7h] BYREF
  __int64 v8; // [rsp+48h] [rbp+Fh] BYREF
  __int64 v9; // [rsp+50h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 *v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+80h] [rbp+47h]
  int v13; // [rsp+84h] [rbp+4Bh]

  v4 = dword_18019C4B8;
  v5 = a4;
  if ( (unsigned int)dword_18019C4B8 > 2
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&dword_18019C4B8,
         0x400000000000uLL) )
  {
    v13 = 0;
    v11 = &v8;
    v8 = 0x1000000LL;
    v12 = 8;
    sub_180109634((__int64)&dword_18019C4B8, (unsigned __int8 *)dword_18016C2B0, 0LL, 0LL, 3u, &v10);
    v4 = dword_18019C4B8;
  }
  if ( v5 )
  {
    if ( v4 > 2 )
    {
      LODWORD(v7) = v5;
      v9 = (__int64)"CAudioDGProcess::OnADGProcessTerminatedHandler";
      LODWORD(v8) = 606;
      sub_180109778((__int64)&dword_18019C4B8, byte_18016C251, a3, a4, (const CHAR **)&v9, (__int64)&v8, (__int64)&v7);
    }
  }
  else
  {
    sub_18012D9B4(a2);
  }
}
