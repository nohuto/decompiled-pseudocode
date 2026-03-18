/*
 * XREFs of MiCombineWorkingSet @ 0x140557784
 * Callers:
 *     MiCombineIdenticalPages @ 0x140714C54 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiIsStoreProcess @ 0x1402D55C0 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiFreeCombineMdls @ 0x14071500C (MiFreeCombineMdls.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  int v4; // r13d
  void *v5; // rsi
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rax
  SIZE_T v9; // rdi
  PVOID Pool; // rax
  __int128 v12; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-D0h]
  PVOID v14; // [rsp+48h] [rbp-C0h]
  _QWORD v15[22]; // [rsp+58h] [rbp-B0h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 60);
  v5 = 0LL;
  v6 = v2 - 1664;
  v7 = 3;
  if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
    v6 = 0LL;
  BYTE6(v15[0]) = MiLockWorkingSetShared(v2);
  if ( !v6
    || (*(_DWORD *)(v6 + 1124) & 0xC00u) >= 0xC00 && !*(_QWORD *)(v2 + 104) && !(unsigned int)MiIsStoreProcess(v6) )
  {
    v8 = *(_QWORD *)(v2 + 144);
    if ( v8 )
    {
      v9 = (40 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        Pool = MiAllocatePool(64, v9, 0x6D75534Du);
        v5 = Pool;
        if ( Pool )
          break;
        v9 >>= 1;
        if ( v9 < 0x10000 )
          goto LABEL_13;
      }
      v15[5] = -1LL;
      *((_QWORD *)&v13 + 1) = a1;
      v14 = Pool;
      v15[21] = &v12;
      v15[19] = MiCombinePte;
      v15[20] = MiCombineWorkingSetTail;
      *(_QWORD *)&v13 = v9 / 0x28;
      LODWORD(v12) = v4;
      v15[3] = v2;
      LOWORD(v15[0]) = 6;
      BYTE5(v15[0]) = 7;
      v7 = MiWalkPageTables((__int16 *)v15);
    }
  }
LABEL_13:
  MiUnlockWorkingSetShared(v2, BYTE6(v15[0]));
  MiFreeCombineMdls(a1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v7 == 4 )
    return (unsigned int)-1073741248;
  return v3;
}
