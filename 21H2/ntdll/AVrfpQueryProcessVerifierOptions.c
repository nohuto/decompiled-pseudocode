/*
 * XREFs of AVrfpQueryProcessVerifierOptions @ 0x1800DB224
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D7870 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D89F8 (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D8C4C (RtlpDeCommitQueryDebugInfo.c)
 */

__int64 __fastcall AVrfpQueryProcessVerifierOptions(_QWORD *a1)
{
  int v3; // r10d
  char *DebugInfo; // rax
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v3 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_180166498)(0LL, &v7, 0LL);
  if ( v3 == -1073741820 )
  {
    DebugInfo = RtlpCommitQueryDebugInfo(a1, v7);
    v5 = (__int64)DebugInfo;
    if ( DebugInfo )
    {
      v6 = v7;
      v8 = v7;
      *((_DWORD *)DebugInfo + 1) = 0;
      *(_DWORD *)DebugInfo = v6;
      v3 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, char *))qword_180166498)(0LL, &v8, DebugInfo);
      if ( v3 >= 0 )
        a1[18] = v5;
      else
        RtlpDeCommitQueryDebugInfo((__int64)a1, v5, v7);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
