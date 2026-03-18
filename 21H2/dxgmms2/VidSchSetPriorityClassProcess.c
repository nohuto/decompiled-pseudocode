/*
 * XREFs of VidSchSetPriorityClassProcess @ 0x1C00ABDE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchSetPriorityClassProcess(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx

  v3 = (int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 > 5 )
    {
      a2 = (int)a2;
      v6 = -1073741811LL;
    }
    else
    {
      if ( (int)a2 < 5 || a3 || SeSinglePrivilegeCheck((LUID)14LL, 1) )
      {
        *(_DWORD *)(a1 + 24) = v3;
        return 0LL;
      }
      a2 = v3;
      v6 = -1073741790LL;
    }
    WdLogSingleEntry2(3LL, a2, v6);
  }
  else
  {
    LODWORD(v6) = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
  }
  return (unsigned int)v6;
}
