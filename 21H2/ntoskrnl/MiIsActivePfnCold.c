/*
 * XREFs of MiIsActivePfnCold @ 0x1405509DC
 * Callers:
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsActivePfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 >> 3;
  v3 = v1 & 0x400;
  v4 = v1 >> 11;
  if ( v3 )
    LOBYTE(v2) = v4;
  return v2 & 1;
}
