/*
 * XREFs of GetPTPShellListener @ 0x1C0213738
 * Callers:
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F0A94 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     GetPTPShellTarget @ 0x1C0213770 (GetPTPShellTarget.c)
 * Callees:
 *     <none>
 */

__int64 GetPTPShellListener()
{
  __int64 v0; // rax

  if ( grpdeskRitInput && (v0 = *(_QWORD *)(grpdeskRitInput + 8LL)) != 0 )
    return *(_QWORD *)(v0 + 232);
  else
    return 0LL;
}
