/*
 * XREFs of WppInitUm @ 0x180062A94
 * Callers:
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180062220 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 WppInitUm()
{
  CAudioSessionManager *v0; // rbx
  __int64 *v1; // rdi
  __int64 v2; // r8
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF

  v0 = WPP_GLOBAL_Control;
  v1 = &WPP_REGISTRATION_GUIDS;
  while ( v0 )
  {
    v2 = *v1;
    v4[1] = 0LL;
    ++v1;
    v4[0] = v2;
    *((_QWORD *)v0 + 4) = v2;
    result = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), CAudioSessionManager *, __int64, __int64, _QWORD *, _QWORD, _QWORD, char *))EtwRegisterTraceGuidsW)(
               WppControlCallback,
               v0,
               v2,
               1LL,
               v4,
               0LL,
               0LL,
               (char *)v0 + 8);
    v0 = *(CAudioSessionManager **)v0;
  }
  return result;
}
