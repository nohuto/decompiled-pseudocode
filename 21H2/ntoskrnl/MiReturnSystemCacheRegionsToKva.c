/*
 * XREFs of MiReturnSystemCacheRegionsToKva @ 0x1402426F4
 * Callers:
 *     MiObtainSystemCacheView @ 0x140286210 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x1402864A0 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetOptimal @ 0x1402D0490 (MiLockWorkingSetOptimal.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnSystemCacheRegionsToKva(__int64 a1, _QWORD **a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v3 = a1 + 17024;
  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v4[1] != a2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    v5[1] = a2;
    v6 = v4[2];
    v7 = MiLockWorkingSetOptimal(v3, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v9);
    *(_QWORD *)(48 * ((*(_QWORD *)(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
              - 0x21FFFFFFFFF0LL) = 0LL;
    MiUnlockPageTableInternal(v3, v7);
    LOBYTE(v8) = v9;
    MiUnlockWorkingSetShared(v3, v8);
    MiReturnSystemVa(v6, v6 + 0x200000, 8LL);
    ExFreePoolWithTag(v4, 0);
  }
}
