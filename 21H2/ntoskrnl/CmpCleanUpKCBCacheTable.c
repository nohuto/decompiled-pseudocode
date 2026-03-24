/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x140719A14
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x1407198BC (CmpEnumerateAllOpenSubKeys.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x140875F00 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405EE874 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpFreeKeyControlBlock @ 0x140719B20 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140719BF0 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 *v7; // rdi
  __int64 i; // rax
  ULONG_PTR v10; // rbx
  __int64 *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v13[3]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_DWORD *)(a1 + 1648);
  v5 = *(_QWORD *)(a1 + 1640);
  memset(v13, 0, sizeof(v13));
  v12 = 0LL;
  CmpAttachToRegistryProcess((__int64)v13, a2, a3, a4);
  CmpInitializeDelayDerefContext(&v12);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = (__int64 *)(v5 + 16);
    do
    {
      for ( i = *v7; i; i = *v11 )
      {
        v10 = i - 16;
        if ( *(_QWORD *)(i - 16) )
        {
          v11 = (__int64 *)(v10 + 24);
        }
        else
        {
          CmpRemoveFromDelayedClose(i - 16);
          CmpCleanUpKcbCacheWithLock(v10, (__int64)&v12);
          if ( (*(_DWORD *)(v10 + 8) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v10);
          CmpDrainDelayDerefContext((_QWORD **)&v12);
          v11 = (__int64 *)(v5 + 16 + 24 * v6);
        }
      }
      v6 = (unsigned int)(v6 + 1);
      v7 += 3;
    }
    while ( (unsigned int)v6 < v4 );
  }
  return KiUnstackDetachProcess((__int64)v13, 0);
}
