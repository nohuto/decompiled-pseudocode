/*
 * XREFs of MiPopLargePfnList @ 0x1405C3044
 * Callers:
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1405C0828 (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiDemotePfnListChain @ 0x1405C19F8 (MiDemotePfnListChain.c)
 */

unsigned __int64 __fastcall MiPopLargePfnList(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx

  v4 = (_QWORD *)(a1 + 24LL * a2);
  if ( (_QWORD *)*v4 == v4 )
    MiDemotePfnListChain(a1, a2, 3LL * a2, a4);
  v5 = (_QWORD *)*v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
    __fastfail(3u);
  *v4 = v6;
  *(_QWORD *)(v6 + 8) = v4;
  --v4[2];
  return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x44000000000LL) >> 4);
}
