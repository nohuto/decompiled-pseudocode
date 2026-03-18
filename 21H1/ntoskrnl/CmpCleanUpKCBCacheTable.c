/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x140659840
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x1406596E8 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x140871780 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x14061C14C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpFreeKeyControlBlock @ 0x140659940 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140659A10 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbp
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 i; // rax
  ULONG_PTR v12; // rbx
  __int64 *v13; // rax
  __int128 v14; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v15[3]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_DWORD *)(a1 + 1648);
  v5 = *(_QWORD *)(a1 + 1640);
  memset(v15, 0, sizeof(v15));
  v14 = 0LL;
  CmpAttachToRegistryProcess((__int64)v15, a2, a3, a4);
  CmpInitializeDelayDerefContext(&v14);
  v8 = 0LL;
  if ( v4 )
  {
    v9 = (__int64 *)(v5 + 16);
    do
    {
      for ( i = *v9; i; i = *v13 )
      {
        v12 = i - 16;
        if ( *(_QWORD *)(i - 16) )
        {
          v13 = (__int64 *)(v12 + 24);
        }
        else
        {
          CmpRemoveFromDelayedClose(i - 16);
          CmpCleanUpKcbCacheWithLock(v12, (__int64)&v14);
          if ( (*(_DWORD *)(v12 + 8) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v12);
          CmpDrainDelayDerefContext((_QWORD **)&v14);
          v13 = (__int64 *)(v5 + 16 + 24 * v8);
        }
      }
      v8 = (unsigned int)(v8 + 1);
      v9 += 3;
    }
    while ( (unsigned int)v8 < v4 );
  }
  return KiUnstackDetachProcess((__int64)v15, 0LL, v6, v7);
}
