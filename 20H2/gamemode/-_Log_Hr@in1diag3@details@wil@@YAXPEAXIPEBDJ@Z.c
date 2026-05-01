/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004DBC
 * Callers:
 *     MsixvcUpdatePolicyInternal @ 0x180004100 (MsixvcUpdatePolicyInternal.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002698 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    0x34u,
    (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    0LL,
    0LL,
    retaddr,
    2,
    (unsigned int)a4);
}
