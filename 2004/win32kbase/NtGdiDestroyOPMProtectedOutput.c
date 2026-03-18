/*
 * XREFs of NtGdiDestroyOPMProtectedOutput @ 0x1C0144050
 * Callers:
 *     <none>
 * Callees:
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0143D88 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 */

__int64 __fastcall NtGdiDestroyOPMProtectedOutput(COPM *a1)
{
  int v1; // ecx
  __int64 result; // rax

  v1 = OPMDestroyProtectedOutput(a1);
  result = 0LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return result;
}
