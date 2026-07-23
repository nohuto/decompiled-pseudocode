/*
 * XREFs of MmGetSessionObjectByProcess @ 0x14053E448
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x140908E88 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionObjectByProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 72);
}
