/*
 * XREFs of MmIsSessionExecutionValid @ 0x1402CF5C0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14021D250 (RtlpWalkFrameChain.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1402CF668 (MiSessionLookupImage.c)
 *     MmUnlockLoadedModuleListShared @ 0x14031C754 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14031C888 (MmLockLoadedModuleListShared.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  int SessionId; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  char v16; // [rsp+48h] [rbp+20h] BYREF

  v16 = 0;
  SessionId = MmGetSessionIdEx(a2);
  if ( SessionId == -1 )
    return 0LL;
  v9 = 1;
  if ( *(_BYTE *)(a1 + 586) == 1 && SessionId != (unsigned int)MmGetSessionIdEx(*(_QWORD *)(a1 + 544)) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800) != 0 || *(_QWORD *)(a1 + 40) != KeGetPcr()->Prcb.RspBase )
    return 0LL;
  if ( a3 )
  {
    MmLockLoadedModuleListShared(&v16, v5, v7, v8);
    v12 = MiSessionLookupImage(a3, v10, v11);
    LOBYTE(v13) = v16;
    v14 = v12;
    MmUnlockLoadedModuleListShared(v13);
    return v14 != 0;
  }
  return v9;
}
