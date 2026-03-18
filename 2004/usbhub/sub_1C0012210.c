/*
 * XREFs of sub_1C0012210 @ 0x1C0012210
 * Callers:
 *     CompletionFunction @ 0x1C000CC80 (CompletionFunction.c)
 *     CompletionRoutine @ 0x1C000DFA0 (CompletionRoutine.c)
 *     sub_1C000E210 @ 0x1C000E210 (sub_1C000E210.c)
 *     sub_1C000E620 @ 0x1C000E620 (sub_1C000E620.c)
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C00101B0 @ 0x1C00101B0 (sub_1C00101B0.c)
 * Callees:
 *     sub_1C00125E0 @ 0x1C00125E0 (sub_1C00125E0.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

void __fastcall sub_1C0012210(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  int v7; // eax
  const GUID *v8; // rdx
  __int128 v9; // [rsp+98h] [rbp+1Fh] BYREF

  v9 = 0LL;
  if ( dword_1C006B650 )
  {
    if ( !a1 )
      sub_1C002DC78(0LL, 0LL);
    v6 = *(_DWORD **)(a1 + 64);
    if ( !v6 )
      sub_1C002DC78(a1, 0LL);
    if ( *v6 != 541218120 )
      sub_1C002DC78(a1, v6);
    if ( a3 )
    {
      v7 = 0;
      v9 = *a3;
    }
    else if ( a2 && qword_1C006B3A0 )
    {
      v7 = qword_1C006B3A0(a2, &v9);
    }
    else
    {
      v7 = -1073741823;
    }
    v8 = (const GUID *)&v9;
    if ( v7 < 0 )
      v8 = 0LL;
    sub_1C00125E0(a4, v8);
  }
}
