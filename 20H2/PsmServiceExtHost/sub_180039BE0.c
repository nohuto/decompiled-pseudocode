/*
 * XREFs of sub_180039BE0 @ 0x180039BE0
 * Callers:
 *     sub_180038550 @ 0x180038550 (sub_180038550.c)
 *     sub_180039EE4 @ 0x180039EE4 (sub_180039EE4.c)
 * Callees:
 *     sub_180039C4C @ 0x180039C4C (sub_180039C4C.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 *     sub_180039D3C @ 0x180039D3C (sub_180039D3C.c)
 *     sub_180039D8C @ 0x180039D8C (sub_180039D8C.c)
 */

__int64 __fastcall sub_180039BE0(PSRWLOCK SRWLock)
{
  _BYTE v3[200]; // [rsp+20h] [rbp-C8h] BYREF

  sub_180039D8C(v3);
  AcquireSRWLockExclusive(SRWLock);
  sub_180039D3C(SRWLock, v3);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  sub_180039CAC(v3);
  return sub_180039C4C(v3);
}
