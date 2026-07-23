/*
 * XREFs of MiReturnReservedEnclavePages @ 0x1409B1C90
 * Callers:
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiInitializeEnclave @ 0x1408D30F0 (MiInitializeEnclave.c)
 *     MiDeleteEnclavePages @ 0x1409B1A90 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiGetPfnLink @ 0x1402514D0 (MiGetPfnLink.c)
 *     MiReturnEnclavePage @ 0x14054B660 (MiReturnEnclavePage.c)
 */

void __fastcall MiReturnReservedEnclavePages(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // r9

  if ( a2 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 96);
      if ( !v3 )
        break;
      *(_QWORD *)(a1 + 96) = MiGetPfnLink(v3);
      MiReturnEnclavePage(
        (v4 + 0x58000000000LL) / 48,
        (__int64)((unsigned __int128)((v4 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
        v5,
        v6);
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
}
