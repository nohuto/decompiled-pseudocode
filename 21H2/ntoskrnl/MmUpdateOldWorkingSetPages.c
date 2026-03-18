/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x14059774C
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x140986D28 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  _DWORD *v6; // r9
  int v7; // r14d
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  bool v12; // zf
  _QWORD v14[28]; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v15[11]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v16[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v17[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v14, 0, 0xD8uLL);
  memset(v15, 0, sizeof(v15));
  memset(v17, 0, 0x108uLL);
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v16, v6);
  }
  v8 = v14[0];
  v9 = 0;
  if ( (a3 & 2) != 0 )
  {
    v8 = LODWORD(v14[0]) | 1;
    LODWORD(v14[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v14[0]) = v8 | 2;
  HIDWORD(v14[4]) = 0;
  HIDWORD(v14[0]) = a2;
  v10 = MiTbFlushType(BugCheckParameter1 + 1664);
  v14[5] = 0LL;
  v14[6] = 0LL;
  v12 = (*(_BYTE *)(BugCheckParameter1 + 1848) & 7) == 0;
  LODWORD(v14[3]) = v10;
  WORD2(v14[3]) = 4;
  LODWORD(v14[4]) = 20;
  if ( v12 && *(_QWORD *)(BugCheckParameter1 + 2288) )
  {
    v17[1] = 32;
    v14[26] = v17;
  }
  v15[2].m128i_i64[1] = -1LL;
  v15[10].m128i_i64[1] = (__int64)v14;
  v15[9].m128i_i64[1] = (__int64)MiUpdateOldPte;
  v15[10].m128i_i64[0] = (__int64)MiUpdateOldWorkingSetPagesTail;
  v15[0].m128i_i32[0] = 6;
  v15[1].m128i_i64[1] = BugCheckParameter1 + 1664;
  v15[0].m128i_i8[5] = 6;
  v15[0].m128i_i8[7] = MiLockWorkingSetShared(v11);
  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x20) != 0 )
  {
    v9 = -1073741558;
  }
  else
  {
    v14[1] = *(_QWORD *)(BugCheckParameter1 + 1752);
    if ( v14[1] )
      MiWalkPageTables(v15);
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1664, v15[0].m128i_u8[7]);
  if ( v7 )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  return v9;
}
