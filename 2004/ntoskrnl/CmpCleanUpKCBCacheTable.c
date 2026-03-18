/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x140652BC8
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x140652A70 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x140872A70 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405E6B2C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpFreeKeyControlBlock @ 0x140652CD0 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140652DA0 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 *v4; // rdi
  __int64 i; // rax
  ULONG_PTR v7; // rbx
  __int64 *v8; // rax
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 1648);
  v2 = *(_QWORD *)(a1 + 1640);
  memset(v10, 0, sizeof(v10));
  v9 = 0LL;
  CmpAttachToRegistryProcess((__int64)v10);
  CmpInitializeDelayDerefContext(&v9);
  v3 = 0LL;
  if ( v1 )
  {
    v4 = (__int64 *)(v2 + 16);
    do
    {
      for ( i = *v4; i; i = *v8 )
      {
        v7 = i - 16;
        if ( *(_QWORD *)(i - 16) )
        {
          v8 = (__int64 *)(v7 + 24);
        }
        else
        {
          CmpRemoveFromDelayedClose(i - 16);
          CmpCleanUpKcbCacheWithLock(v7, (__int64)&v9);
          if ( (*(_DWORD *)(v7 + 8) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v7);
          CmpDrainDelayDerefContext((_QWORD **)&v9);
          v8 = (__int64 *)(v2 + 16 + 24 * v3);
        }
      }
      v3 = (unsigned int)(v3 + 1);
      v4 += 3;
    }
    while ( (unsigned int)v3 < v1 );
  }
  return KiUnstackDetachProcess((__int64)v10, 0LL);
}
