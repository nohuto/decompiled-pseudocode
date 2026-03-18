/*
 * XREFs of MiGetTopLevelPfn @ 0x140341C10
 * Callers:
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MiReferenceOwningSession @ 0x140340E64 (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiStoreCheckCandidatePage @ 0x1403425E4 (MiStoreCheckCandidatePage.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiRecheckCombineVm @ 0x140367820 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x140367E50 (MiCapturePfnVm.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetTopLevelPfn(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // edi
  int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter2 + 40);
  v5 = 0;
  v6 = 0;
  memset(v16, 0, sizeof(v16));
  v7 = v4 & 0xFFFFFFFFFLL;
  v8 = BugCheckParameter2;
  v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( v7 != v10 )
  {
    do
    {
      v11 = v7;
      v8 = 48 * v7 - 0x58000000000LL;
      if ( (unsigned int)++v6 > 4 )
        KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
      v15 = 0;
      *((_QWORD *)v16 + (unsigned int)(v6 - 1)) = v8;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v15, v10, v7, a4);
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      v7 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
    }
    while ( v7 != v11 );
  }
  v12 = (__int64 *)v16;
  do
  {
    v13 = *v12;
    if ( !*v12 )
      break;
    if ( v13 != v8 )
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v5;
    ++v12;
  }
  while ( v5 < 4 );
  return v8;
}
