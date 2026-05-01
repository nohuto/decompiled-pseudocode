/*
 * XREFs of sub_180006954 @ 0x180006954
 * Callers:
 *     sub_180006AA8 @ 0x180006AA8 (sub_180006AA8.c)
 *     sub_180009220 @ 0x180009220 (sub_180009220.c)
 * Callees:
 *     sub_180005164 @ 0x180005164 (sub_180005164.c)
 *     sub_1800062A8 @ 0x1800062A8 (sub_1800062A8.c)
 *     sub_180006368 @ 0x180006368 (sub_180006368.c)
 *     sub_1800069F8 @ 0x1800069F8 (sub_1800069F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180006954(PSRWLOCK SRWLock)
{
  _BYTE v3[64]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v4[64]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v5[72]; // [rsp+A0h] [rbp-48h] BYREF

  sub_1800062A8((__int64)v3);
  AcquireSRWLockExclusive(SRWLock);
  if ( LOBYTE(SRWLock[8].Ptr) )
    sub_180005164((__int64)v3, (__int64)&SRWLock[1]);
  if ( LOBYTE(SRWLock[16].Ptr) )
    sub_180005164((__int64)v4, (__int64)&SRWLock[9]);
  if ( LOBYTE(SRWLock[24].Ptr) )
    sub_180005164((__int64)v5, (__int64)&SRWLock[17]);
  ReleaseSRWLockExclusive(SRWLock);
  sub_180006368(v3);
  return sub_1800069F8(v3);
}
