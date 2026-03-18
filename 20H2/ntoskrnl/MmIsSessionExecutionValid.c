/*
 * XREFs of MmIsSessionExecutionValid @ 0x14032D9B0
 * Callers:
 *     RtlpWalkFrameChain @ 0x1402273F0 (RtlpWalkFrameChain.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MmUnlockLoadedModuleListShared @ 0x140297044 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140297178 (MmLockLoadedModuleListShared.c)
 *     MiSessionLookupImage @ 0x14032DA58 (MiSessionLookupImage.c)
 */

__int64 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, __int64 a3)
{
  int SessionId; // ebp
  unsigned int v6; // edi
  __int64 v7; // rbx
  unsigned __int8 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
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
    MmLockLoadedModuleListShared(&v9);
    v7 = MiSessionLookupImage(a3);
    MmUnlockLoadedModuleListShared(v9);
    return v7 != 0;
  }
  return v6;
}
