/*
 * XREFs of MsixvcUpdatePolicyString @ 0x180004700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002864 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MsixvcUpdatePolicyInternal @ 0x180004100 (MsixvcUpdatePolicyInternal.c)
 */

__int64 __fastcall MsixvcUpdatePolicyString(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  updated = MsixvcUpdatePolicyInternal(a1, a2, a3, a4, 0LL);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x74,
    (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
