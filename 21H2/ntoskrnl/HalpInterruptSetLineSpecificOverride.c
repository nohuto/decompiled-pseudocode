/*
 * XREFs of HalpInterruptSetLineSpecificOverride @ 0x1403EFF34
 * Callers:
 *     HalpPiix4Detect @ 0x14099B3E0 (HalpPiix4Detect.c)
 * Callees:
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpReleaseHighLevelLock @ 0x1404D09FC (HalpReleaseHighLevelLock.c)
 */

__int64 __fastcall HalpInterruptSetLineSpecificOverride(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v2 = HalpInterruptGsiToLine(a1, &v10);
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)HalpMmAllocCtxAlloc(v1, 40LL);
    v4 = (__int64)v3;
    if ( !v3 )
      return 3221225626LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v6 = v10;
    *(_QWORD *)(v4 + 16) = v10;
    *(_QWORD *)(v4 + 24) = v6;
    *(_DWORD *)(v4 + 36) = 2;
    *(_DWORD *)(v4 + 32) = 1;
    v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
    v8 = (__int64 *)qword_140C498C8;
    v9 = &HalpInterruptOverrides;
    if ( *(__int64 **)qword_140C498C8 != &HalpInterruptOverrides )
      __fastfail(3u);
    *(_QWORD *)v4 = &HalpInterruptOverrides;
    LOBYTE(v9) = v7;
    *(_QWORD *)(v4 + 8) = v8;
    *v8 = v4;
    qword_140C498C8 = v4;
    HalpReleaseHighLevelLock(&HalpInterruptOverridesLock, v9);
  }
  return (unsigned int)v2;
}
