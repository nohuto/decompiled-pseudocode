/*
 * XREFs of MmIsSessionExecutionValid @ 0x14035CEF0
 * Callers:
 *     RtlpWalkFrameChain @ 0x1402E7990 (RtlpWalkFrameChain.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     MmUnlockLoadedModuleListShared @ 0x140224598 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1402247F4 (MmLockLoadedModuleListShared.c)
 *     MiSessionLookupImage @ 0x14035CF98 (MiSessionLookupImage.c)
 */

__int64 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, __int64 a3)
{
  int SessionId; // ebp
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned __int8 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0;
  SessionId = MmGetSessionIdEx(a2);
  if ( SessionId == -1 )
    return 0LL;
  v6 = 1;
  if ( *(_BYTE *)(a1 + 586) == 1 && SessionId != (unsigned int)MmGetSessionIdEx(*(_QWORD *)(a1 + 544)) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800) != 0 || *(_QWORD *)(a1 + 40) != KeGetPcr()->Prcb.RspBase )
    return 0LL;
  if ( a3 )
  {
    MmLockLoadedModuleListShared(&v11);
    v9 = MiSessionLookupImage(a3, v7, v8);
    MmUnlockLoadedModuleListShared(v11);
    return v9 != 0;
  }
  return v6;
}
