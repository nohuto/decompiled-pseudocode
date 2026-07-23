/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x1403A0A98
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiDrainSystemAccessLog @ 0x14027D0F0 (MiDrainSystemAccessLog.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int128 v12; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v13; // [rsp+30h] [rbp-D0h]
  _QWORD v14[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[24]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v16[68]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(v15, 0, 0xB8uLL);
  v13 = 0LL;
  v12 = 0LL;
  memset(v14, 0, sizeof(v14));
  memset(v16, 0, 0x108uLL);
  v14[5] = -1LL;
  LOWORD(v14[0]) = 6;
  v6 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v14[19] = MiResetAccessBitPte;
  v14[20] = MiResetAccessBitsTail;
  v14[3] = a1;
  BYTE6(v14[0]) = a2;
  if ( v6 && *(_QWORD *)(a1 + 624) )
  {
    v16[1] = 32;
    v13 = v16;
  }
  if ( (a3 & 0x10) != 0 )
  {
    *((_QWORD *)&v12 + 1) = v15;
    LODWORD(v15[0]) = MiTbFlushType(a1);
    WORD2(v15[0]) = v7;
    v15[2] = v7;
    LODWORD(v15[1]) = 20;
    v15[3] = v7;
  }
  LODWORD(v12) = dword_140C4E868;
  v14[21] = &v12;
  MiWalkPageTables((__int64)v14);
  return MiDrainSystemAccessLog(a1, v8, v9, v10);
}
