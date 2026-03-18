/*
 * XREFs of MiGetTopLevelPfn @ 0x14026B1C0
 * Callers:
 *     MiRecheckCombineVm @ 0x140227DF0 (MiRecheckCombineVm.c)
 *     MiReferenceOwningSession @ 0x1402313B4 (MiReferenceOwningSession.c)
 *     MiCapturePfnVm @ 0x14026AEB0 (MiCapturePfnVm.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiStoreCheckCandidatePage @ 0x14037D5E8 (MiStoreCheckCandidatePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetTopLevelPfn(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdx
  unsigned int v2; // edi
  int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v12[2]; // [rsp+38h] [rbp-50h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 40);
  v2 = 0;
  v3 = 0;
  memset(v12, 0, sizeof(v12));
  v4 = v1 & 0xFFFFFFFFFFLL;
  v5 = BugCheckParameter2;
  if ( v4 != 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
  {
    do
    {
      v7 = v4;
      v5 = 48 * v4 - 0x220000000000LL;
      if ( (unsigned int)++v3 > 4 )
        KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
      v11 = 0;
      *((_QWORD *)v12 + (unsigned int)(v3 - 1)) = v5;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      v4 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL;
    }
    while ( v4 != v7 );
  }
  v8 = (__int64 *)v12;
  do
  {
    v9 = *v8;
    if ( !*v8 )
      break;
    if ( v9 != v5 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v2;
    ++v8;
  }
  while ( v2 < 4 );
  return v5;
}
