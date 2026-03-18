/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140A143A0
 * Callers:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140A142A0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1405A2BE0 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140A14560 (__guard_retpoline_exit.c)
 */

__int64 _guard_retpoline_exit_indirect_rax()
{
  __int64 (__fastcall *v0)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp-8h]

  v0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))_guard_retpoline_exit();
  _mm_lfence();
  if ( (BYTE4(xmmword_140CFC490) & 2) != 0 )
  {
    v6 = v0;
    v7 = v2;
    v8 = v1;
    v9 = v3;
    v10 = v4;
    EtwTraceRetpolineExit((__int64)v0);
    v0 = v6;
    v2 = v7;
    v1 = v8;
    v3 = v9;
    v4 = v10;
  }
  return v0(v2, v1, v3, v4);
}
