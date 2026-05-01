/*
 * XREFs of sub_180039EE4 @ 0x180039EE4
 * Callers:
 *     sub_180039B04 @ 0x180039B04 (sub_180039B04.c)
 * Callees:
 *     sub_1800388A0 @ 0x1800388A0 (sub_1800388A0.c)
 *     sub_180039BE0 @ 0x180039BE0 (sub_180039BE0.c)
 *     sub_180065BA8 @ 0x180065BA8 (sub_180065BA8.c)
 */

char __fastcall sub_180039EE4(PSRWLOCK SRWLock, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v9; // eax
  char Ptr; // bl

  if ( a3 == 254 )
  {
    sub_180039BE0(SRWLock);
    return 1;
  }
  else if ( a3 < 0xC8 || (int)a3 >= 256 && a3 < 0x200 )
  {
    AcquireSRWLockExclusive(SRWLock);
    if ( a3 <= 7 && (v9 = 204, _bittest(&v9, a3)) || a3 - 256 <= 0x7F )
    {
      sub_1800388A0((_DWORD)SRWLock + 8, a3, a2);
      Ptr = (char)SRWLock[8].Ptr;
    }
    else
    {
      Ptr = sub_180065BA8(&SRWLock[9], a3, a2, a4);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return Ptr;
  }
  else
  {
    return 0;
  }
}
