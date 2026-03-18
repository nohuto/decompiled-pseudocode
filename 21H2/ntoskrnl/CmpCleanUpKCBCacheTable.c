/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x14069F904
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x14069F7AC (CmpEnumerateAllOpenSubKeys.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x14091CA90 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpFreeKeyControlBlock @ 0x14069FA30 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x14069FB00 (CmpRemoveFromDelayedClose.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407C09E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
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

  v1 = *(_DWORD *)(a1 + 1656);
  v2 = *(_QWORD *)(a1 + 1648);
  memset(v10, 0, sizeof(v10));
  v9 = 0LL;
  CmpAttachToRegistryProcess(v10);
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
          CmpCleanUpKcbCacheWithLock(v7);
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
  return CmpDetachFromRegistryProcess(v10);
}
