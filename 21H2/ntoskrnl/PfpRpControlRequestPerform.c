/*
 * XREFs of PfpRpControlRequestPerform @ 0x1406B3D9C
 * Callers:
 *     PfpRpControlRequest @ 0x1406B3CD0 (PfpRpControlRequest.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     PfpRpControlRequestUpdate @ 0x1406B403C (PfpRpControlRequestUpdate.c)
 *     PfpRpControlRequestReset @ 0x1407C5FB0 (PfpRpControlRequestReset.c)
 */

__int64 __fastcall PfpRpControlRequestPerform(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v2 = a1 + 17;
  if ( !ExAcquireRundownProtection(a1 + 17) )
    return (unsigned int)-1073741696;
  if ( *(_WORD *)(a2 + 2) )
  {
    if ( *(_WORD *)(a2 + 2) != 1 )
    {
      v6 = -1073741811;
      goto LABEL_5;
    }
    v5 = PfpRpControlRequestReset(a1);
  }
  else
  {
    v5 = PfpRpControlRequestUpdate(a1, a2);
  }
  v6 = v5;
LABEL_5:
  ExReleaseRundownProtection(v2);
  return v6;
}
