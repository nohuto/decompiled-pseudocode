/*
 * XREFs of MiCrcStillIntact @ 0x140367D24
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 * Callees:
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiVadSupportsPrivateCommit @ 0x1402BFB40 (MiVadSupportsPrivateCommit.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     MiClearPteAccessed @ 0x140344B50 (MiClearPteAccessed.c)
 *     MiRecheckVaVm @ 0x140369744 (MiRecheckVaVm.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 *     MiMakeCombineCandidateClean @ 0x140369F3C (MiMakeCombineCandidateClean.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // rcx
  __int64 **Address; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v26[24]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(_QWORD *)(a4 + 8);
  memset(v26, 0, 0xB8uLL);
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiRecheckVaVm(v10, v5) )
    return 0LL;
  v25 = MI_READ_PTE_LOCK_FREE(v9);
  if ( (v25 & 1) == 0 )
    return 0LL;
  v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v24, v11, v13, v14);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  if ( !(unsigned int)MiCombineCandidate(a1, a3, v12) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v16 = *(_BYTE *)(v12 + 34);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v16 & 7) != 6 )
    return 0LL;
  if ( v9 != (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) )
    return 0LL;
  if ( (unsigned int)MI_PFN_IS_PROTO(v12) )
    return 0LL;
  v17 = *(_QWORD *)(v12 + 40);
  if ( (v17 & 0x1000000000LL) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v12 + 35) & 8) != 0 )
    return 0LL;
  v18 = v17 & 0xFFFFFFFFFLL;
  if ( v18 == 0xFFFFFFFFDLL )
    return 0LL;
  if ( (MiGetWsleContents(v18, v5) & 0xF) == 8 )
    return 0LL;
  if ( *(_WORD *)(v12 + 32) != 1 )
    return 0LL;
  v20 = 0LL;
  if ( v19 == 1 )
  {
    Address = MiLocateAddress(v5);
    if ( !Address || !MiVadSupportsPrivateCommit((__int64)Address) )
      return 0LL;
  }
  if ( a5 == 2 )
  {
    if ( (v25 & 0x42) == 0 )
      return 0LL;
    MiMakeCombineCandidateClean(v9, v20);
  }
  else if ( a5 == 3 )
  {
    v22 = MiTbFlushType(a2);
    WORD2(v26[0]) = 0;
    v26[2] = 0LL;
    v26[3] = 0LL;
    LODWORD(v26[0]) = v22;
    LODWORD(v26[1]) = 20;
    if ( !(unsigned int)MiClearPteAccessed(v23, v12, v9, (__int64)v26, dword_140C4E868, 0) )
      return 0LL;
  }
  return 1LL;
}
