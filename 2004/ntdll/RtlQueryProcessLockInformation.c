/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D8020
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D7760 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D88E8 (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D8B3C (RtlpDeCommitQueryDebugInfo.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800FF000 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(__int64 a1)
{
  _DWORD *DebugInfo; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  _DWORD *v6; // r14
  _QWORD *v8; // rdi
  _UNKNOWN **v9; // rsi
  _UNKNOWN **v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  _UNKNOWN **v14; // [rsp+20h] [rbp-78h]
  _QWORD *v15; // [rsp+28h] [rbp-70h]
  bool v16; // [rsp+A8h] [rbp+10h]
  int v17; // [rsp+B0h] [rbp+18h]

  v17 = 0;
  DebugInfo = (_DWORD *)RtlpCommitQueryDebugInfo(a1, 8LL);
  v6 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *DebugInfo = 0;
  v16 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v3, v4, v5);
  v8 = RtlCriticalSectionList;
  v15 = RtlCriticalSectionList;
  v9 = (_UNKNOWN **)RtlCriticalSectionList;
  v14 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v9 != &RtlCriticalSectionList )
  {
    v10 = v9 - 2;
    v11 = RtlpCommitQueryDebugInfo(a1, 48LL);
    if ( !v11 )
    {
      v17 = -1073741801;
      break;
    }
    *(_OWORD *)v11 = 0LL;
    *(_OWORD *)(v11 + 16) = 0LL;
    *(_OWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)v11 = v10[1];
    *(_WORD *)(v11 + 8) = *(_WORD *)v10;
    *(_WORD *)(v11 + 10) = *((_WORD *)v10 + 1);
    if ( *(_WORD *)(v11 + 8) )
    {
      if ( *(_WORD *)(v11 + 8) == 1 )
      {
        v13 = v10[1];
        *(_DWORD *)(v11 + 28) = *(_DWORD *)(v13[11] + 36LL);
        *(_QWORD *)(v11 + 16) = v13[9];
        *(_DWORD *)(v11 + 24) = *((_DWORD *)v13 + 17);
        *(_DWORD *)(v11 + 40) = *((_DWORD *)v13 + 12);
        *(_DWORD *)(v11 + 44) = *((_DWORD *)v13 + 16);
        v9 = v14;
        v8 = v15;
      }
      else if ( (unsigned __int8)RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v12 = v10[1];
      *(_QWORD *)(v11 + 16) = v12[2];
      *(_DWORD *)(v11 + 24) = *((_DWORD *)v12 + 2);
      *(_DWORD *)(v11 + 36) = *((_DWORD *)v12 + 3);
      *(_DWORD *)(v11 + 28) = *((_DWORD *)v10 + 9);
      *(_DWORD *)(v11 + 32) = *((_DWORD *)v10 + 8);
    }
    ++*v6;
    v9 = (_UNKNOWN **)*v9;
    v14 = v9;
    if ( v9 == v8 )
    {
      v17 = -1073741595;
      break;
    }
    if ( v16 )
    {
      v8 = (_QWORD *)*v8;
      v15 = v8;
    }
    v16 = !v16;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v17 < 0 )
    RtlpDeCommitQueryDebugInfo(a1, v6, 8LL);
  else
    *(_QWORD *)(a1 + 120) = v6;
  return (unsigned int)v17;
}
