/*
 * XREFs of PspJobHasChildren @ 0x1405CFD84
 * Callers:
 *     PspCreateSilo @ 0x1405CFC8C (PspCreateSilo.c)
 *     PsInsertPermanentSiloContextEx @ 0x14070FE94 (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x140902C94 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1056) != a1 + 1056 )
    return 1;
  return v1;
}
