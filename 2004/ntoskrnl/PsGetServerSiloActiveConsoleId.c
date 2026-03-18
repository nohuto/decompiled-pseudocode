/*
 * XREFs of PsGetServerSiloActiveConsoleId @ 0x14057BB30
 * Callers:
 *     IopGetThreadActiveConsoleId @ 0x14089120C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloActiveConsoleId(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = &PspHostSiloGlobals;
  if ( a1 )
    v1 = *(_QWORD **)(a1 + 1272);
  return *(unsigned int *)(v1[140] + 4LL);
}
