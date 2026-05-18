/*
 * XREFs of sub_18001C824 @ 0x18001C824
 * Callers:
 *     sub_18001C92C @ 0x18001C92C (sub_18001C92C.c)
 * Callees:
 *     sub_1800191A0 @ 0x1800191A0 (sub_1800191A0.c)
 *     sub_180019C4C @ 0x180019C4C (sub_180019C4C.c)
 *     sub_18001C464 @ 0x18001C464 (sub_18001C464.c)
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001DFF4 @ 0x18001DFF4 (sub_18001DFF4.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18001C824(PSRWLOCK SRWLock, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v9; // eax
  char Ptr; // di
  _QWORD v11[27]; // [rsp+30h] [rbp-D8h] BYREF

  if ( a3 == 254 )
  {
    sub_1800191A0((__int64)v11);
    AcquireSRWLockExclusive(SRWLock);
    sub_18001DFF4(SRWLock, v11);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    sub_18001C464(v11);
    sub_180019C4C(v11);
    return 1;
  }
  else if ( a3 < 0xC8 || (int)a3 >= 256 && a3 < 0x200 )
  {
    AcquireSRWLockExclusive(SRWLock);
    if ( a3 <= 7 && (v9 = 204, _bittest(&v9, a3)) || a3 - 256 <= 0x7F )
    {
      sub_18001CAA0(&SRWLock[1], a3, a2, 1LL, SRWLock);
      Ptr = (char)SRWLock[8].Ptr;
    }
    else
    {
      Ptr = sub_18001CAA0(&SRWLock[9], a3, a2, a4, SRWLock);
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
