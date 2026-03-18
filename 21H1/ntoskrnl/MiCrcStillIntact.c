/*
 * XREFs of MiCrcStillIntact @ 0x140364F24
 * Callers:
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x14021AA60 (MiVadSupportsPrivateCommit.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiClearPteAccessed @ 0x14029DF40 (MiClearPteAccessed.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiRecheckVaVm @ 0x140366944 (MiRecheckVaVm.c)
 *     MiCombineCandidate @ 0x140366B50 (MiCombineCandidate.c)
 *     MiMakeCombineCandidateClean @ 0x14036713C (MiMakeCombineCandidateClean.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // rcx
  __int64 **Address; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v28[24]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(_QWORD *)(a4 + 8);
  memset(v28, 0, 0xB8uLL);
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiRecheckVaVm(v10, v5) )
    return 0LL;
  v27 = MI_READ_PTE_LOCK_FREE(v9);
  if ( (v27 & 1) == 0 )
    return 0LL;
  v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26, v11, v13, v14);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  if ( !(unsigned int)MiCombineCandidate(a1, a3, v12) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v18 = *(_BYTE *)(v12 + 34);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v18 & 7) != 6 )
    return 0LL;
  if ( v9 != (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) )
    return 0LL;
  if ( (unsigned int)MI_PFN_IS_PROTO(v12, v15, v16) )
    return 0LL;
  v19 = *(_QWORD *)(v12 + 40);
  if ( (v19 & 0x1000000000LL) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v12 + 35) & 8) != 0 )
    return 0LL;
  v20 = v19 & 0xFFFFFFFFFLL;
  if ( v20 == 0xFFFFFFFFDLL )
    return 0LL;
  if ( (MiGetWsleContents(v20, v5) & 0xF) == 8 )
    return 0LL;
  if ( *(_WORD *)(v12 + 32) != 1 )
    return 0LL;
  v22 = 0LL;
  if ( v21 == 1 )
  {
    Address = MiLocateAddress(v5);
    if ( !Address || !MiVadSupportsPrivateCommit((__int64)Address) )
      return 0LL;
  }
  if ( a5 == 2 )
  {
    if ( (v27 & 0x42) == 0 )
      return 0LL;
    MiMakeCombineCandidateClean(v9, v22);
  }
  else if ( a5 == 3 )
  {
    v24 = MiTbFlushType(a2);
    WORD2(v28[0]) = 0;
    v28[2] = 0LL;
    v28[3] = 0LL;
    LODWORD(v28[0]) = v24;
    LODWORD(v28[1]) = 20;
    if ( !(unsigned int)MiClearPteAccessed(v25, v12, v9, (__int64)v28, dword_140C4E768, 0) )
      return 0LL;
  }
  return 1LL;
}
