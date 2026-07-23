/*
 * XREFs of _RtlQueryProcessLockInformation@4 @ 0x4B337290
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlQueryProcessLockInformation@4 @ 0x4B337290 (_RtlQueryProcessLockInformation@4.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 *     _RtlpDeCommitQueryDebugInfo@12 @ 0x4B3379F5 (_RtlpDeCommitQueryDebugInfo@12.c)
 *     _RtlIsAnyDebuggerPresent@0 @ 0x4B3668D0 (_RtlIsAnyDebuggerPresent@0.c)
 */

int __stdcall RtlQueryProcessLockInformation(int a1)
{
  _DWORD *DebugInfo; // eax
  _UNKNOWN **v3; // esi
  _DWORD *v4; // edx
  __int16 v5; // cx
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx
  _DWORD *v8; // [esp+24h] [ebp-30h]
  _UNKNOWN **v9; // [esp+28h] [ebp-2Ch]
  int v10; // [esp+2Ch] [ebp-28h]
  _DWORD *v11; // [esp+30h] [ebp-24h]
  bool v12; // [esp+3Bh] [ebp-19h]

  v10 = 0;
  DebugInfo = (_DWORD *)RtlpCommitQueryDebugInfo(a1, 4);
  v11 = DebugInfo;
  if ( !DebugInfo )
    return -1073741801;
  *DebugInfo = 0;
  v12 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
  v8 = RtlCriticalSectionList;
  v9 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v9 != &RtlCriticalSectionList )
  {
    v3 = v9 - 2;
    v4 = (_DWORD *)RtlpCommitQueryDebugInfo(a1, 36);
    if ( !v4 )
    {
      v10 = -1073741801;
      break;
    }
    memset(v4, 0, 0x24u);
    *v4 = v3[1];
    *((_WORD *)v4 + 2) = *(_WORD *)v3;
    *((_WORD *)v4 + 3) = *((_WORD *)v3 + 1);
    v5 = *((_WORD *)v4 + 2);
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v7 = v3[1];
        v4[4] = *(_DWORD *)(v7[13] + 20);
        v4[2] = v7[11];
        v4[3] = v7[10];
        v4[7] = v7[7];
        v4[8] = v7[9];
      }
      else if ( RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v6 = v3[1];
      v4[2] = v6[3];
      v4[3] = v6[1];
      v4[6] = v6[2];
      v4[4] = v3[5];
      v4[5] = v3[4];
    }
    ++*v11;
    v9 = (_UNKNOWN **)*v9;
    if ( v9 == v8 )
    {
      v10 = -1073741595;
      break;
    }
    if ( v12 )
      v8 = (_DWORD *)*v8;
    v12 = !v12;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v10 < 0 )
    RtlpDeCommitQueryDebugInfo(4);
  else
    *(_DWORD *)(a1 + 60) = v11;
  return v10;
}
