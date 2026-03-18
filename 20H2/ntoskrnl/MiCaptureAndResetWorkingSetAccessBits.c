/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x1403A007C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiDrainSystemAccessLog @ 0x1402330C0 (MiDrainSystemAccessLog.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v10; // [rsp+30h] [rbp-D0h]
  _QWORD v11[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v12[24]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v13[68]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(v12, 0, 0xB8uLL);
  v10 = 0LL;
  v9 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, 0x108uLL);
  v11[5] = -1LL;
  LOWORD(v11[0]) = 6;
  v6 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v11[19] = MiResetAccessBitPte;
  v11[20] = MiResetAccessBitsTail;
  v11[3] = a1;
  BYTE6(v11[0]) = a2;
  if ( v6 && *(_QWORD *)(a1 + 624) )
  {
    v13[1] = 32;
    v10 = v13;
  }
  if ( (a3 & 0x10) != 0 )
  {
    *((_QWORD *)&v9 + 1) = v12;
    LODWORD(v12[0]) = MiTbFlushType(a1);
    WORD2(v12[0]) = v7;
    v12[2] = v7;
    LODWORD(v12[1]) = 20;
    v12[3] = v7;
  }
  LODWORD(v9) = dword_140C4E6A8;
  v11[21] = &v9;
  MiWalkPageTables((__int64)v11);
  return MiDrainSystemAccessLog(a1);
}
