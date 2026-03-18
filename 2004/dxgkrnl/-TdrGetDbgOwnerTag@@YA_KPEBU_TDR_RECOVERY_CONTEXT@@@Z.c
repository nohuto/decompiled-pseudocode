/*
 * XREFs of ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0265884
 * Callers:
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0265F50 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C02662B8 (TdrAllowToDebugTimeout.c)
 *     TdrBugcheckOnTimeout @ 0x1C0266440 (TdrBugcheckOnTimeout.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall TdrGetDbgOwnerTag(const struct _TDR_RECOVERY_CONTEXT *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  if ( !a1 )
    return -1LL;
  result = *((_QWORD *)a1 + 12);
  if ( !result )
  {
    v2 = *((_QWORD *)a1 + 4);
    if ( !v2 )
      return -1LL;
    result = *(_QWORD *)(v2 + 504);
    if ( !result )
    {
      result = *(_QWORD *)(v2 + 360);
      if ( !result )
        return -1LL;
    }
  }
  return result;
}
