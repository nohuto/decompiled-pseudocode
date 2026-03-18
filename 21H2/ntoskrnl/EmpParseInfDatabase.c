/*
 * XREFs of EmpParseInfDatabase @ 0x140B0B9A8
 * Callers:
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x140B0BB6C (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x140B0BE8C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140B0C004 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B0C87C (EmpParseRules.c)
 *     EmpParseStrings @ 0x140B0CB80 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140B0CDAC (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x140B18928 (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  PVOID *v5; // rbx
  int v6; // edi
  char v7; // al
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v11; // edx
  int v13; // r9d
  int v14; // [rsp+50h] [rbp+18h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpParseLock, 0LL);
  v14 = 0;
  v4 = CmpParseInfBuffer(a1, a2, &v14);
  v5 = (PVOID *)v4;
  if ( v4 )
  {
    v6 = EmpParseEntryTypes(v4);
    if ( v6 >= 0 )
    {
      v6 = EmpParseCallbacks(v5);
      if ( v6 >= 0 )
      {
        v6 = EmpParseRules(v5);
        if ( v6 >= 0 )
        {
          v6 = EmpParseStrings(v5);
          if ( v6 >= 0 )
            v6 = EmpParseTargetRules(v5);
        }
      }
    }
    CmpFreeSectionList(*v5);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v6 = -1073741816;
  }
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(&EmpParseLock);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&EmpParseLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v11 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&EmpParseLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v11;
    p_Process += 96LL;
    if ( v11 >= 6 )
      goto LABEL_17;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_17:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&EmpParseLock, SessionId, 0LL);
    _enable();
    return (unsigned int)v6;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v13 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v13 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&EmpParseLock, v13);
  return (unsigned int)v6;
}
